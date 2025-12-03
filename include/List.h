#ifndef LIST_H
#define LIST_H

#include "Log.h"

#include <memory>
#include <stdexcept>
#include <utility>
#include <iterator>

template <typename T>
class List {
private:
    struct Node {
        T data;
        std::unique_ptr<Node> next;

        Node(T data) : data(std::move(data)), next(nullptr) {}
    };

    std::unique_ptr<Node> root;
    int count;

public:
    class Iterator {
    private:
        Node* current;
    public:
        using iterator_category = std::forward_iterator_tag;
        using difference_type   = std::ptrdiff_t;
        using value_type        = T;
        using reference         = T&;
        
        Iterator(Node* ptr) : current(ptr) {}

        reference operator*() const {
            if (!current) logError("Invalid iterator.");
            return current->data;
        }

        Iterator& operator++() {
            if (current) current = current->next.get();
            return *this;
        }

        Iterator operator++(int) {
            Iterator tmp = *this;
            ++(*this);
            return tmp;
        }

        friend bool operator== (const Iterator& a, const Iterator& b) { return a.current == b.current; };
        friend bool operator!= (const Iterator& a, const Iterator& b) { return a.current != b.current; };
    };

    class ConstIterator {
    private:
        const Node* current;
    public:
        using iterator_category = std::forward_iterator_tag;
        using difference_type   = std::ptrdiff_t;
        using value_type        = T;
        using reference         = const T&;
        
        ConstIterator(const Node* ptr) : current(ptr) {}

        reference operator*() const {
            return current->data;
        }

        ConstIterator& operator++() {
            if (current) current = current->next.get();
            return *this;
        }

        ConstIterator operator++(int) {
            ConstIterator tmp = *this;
            ++(*this);
            return tmp;
        }

        friend bool operator== (const ConstIterator& a, const ConstIterator& b) { return a.current == b.current; };
        friend bool operator!= (const ConstIterator& a, const ConstIterator& b) { return a.current != b.current; };
    };

    List() : root(nullptr), count(0) {}
    ~List() = default;

    List(const List&) = delete;
    List& operator=(const List&) = delete;
    
    List(List&& other) noexcept 
        : root(std::move(other.root)), 
          count(other.count) 
    {
        other.count = 0;
    }

    List& operator=(List&& other) noexcept {
        if (this != &other) {
            root = std::move(other.root);
            count = other.count;
            
            other.count = 0;
        }
        return *this;
    }

    void add(T data) {
        auto newNode = std::make_unique<Node>(std::move(data));
        if (!root) {
            root = std::move(newNode);
        } else {
            Node* current = root.get();
            while (current->next) {
                current = current->next.get();
            }
            current->next = std::move(newNode);
        }
        count++;
    }

    T& get(int index) {
        if (index < 0 || index >= count) {
            logError("Index out of range.");
        }
        Node* current = root.get();
        for (int i = 0; i < index; ++i) {
            current = current->next.get();
        }
        return current->data;
    }

    void clear() {
        root.reset();
        count = 0;
    }

    int size() const {
        return count;
    }

    Iterator begin() {
        return Iterator(root.get());
    }
    Iterator end() {
        return Iterator(nullptr);
    }
    
    ConstIterator begin() const {
        return ConstIterator(root.get());
    }
    ConstIterator end() const {
        return ConstIterator(nullptr);
    }
};

#endif // LIST_H