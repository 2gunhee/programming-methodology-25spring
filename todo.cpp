#include "todo.h"
#include <stdexcept>

void TodoList::init() {
    // TODO: set size to 0 and all task pointers to nullptr
    for (int i = 0; i < MAX_TASKS; i++)
    {
        tasks[i] = nullptr;
    }
    size = 0;
}

void TodoList::destroy() {
    // TODO: delete all tasks and reset pointers
    for (int i = 0; i < size; i++)
    {
        delete [] tasks[i];
        tasks[i] = nullptr;
    }
}

int TodoList::string_length(const char* str) const {
    // TODO: return the number of characters before '\0'
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

void TodoList::string_copy(char* dest, const char* src) const {
    // TODO: copy characters from src to dest
    int len = string_length(src);
    for (int i = 0; i < len; i++)
    {
        dest[i] = src[i];
    }
    dest[len] = '\0';
}

void TodoList::add_task(const char* task) {
    // TODO: if full, throw. otherwise allocate and copy new task
    if (size >= MAX_TASKS)
    {
        throw std::length_error("tasks is already full");
    }
    else
    {
        int len = string_length(task);
        tasks[size] = new char[len + 1];
        string_copy(tasks[size], task);
        size++;
    }
}

void TodoList::remove_task(int index) {
    // TODO: check bounds, delete task, shift left
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("index is out of range");
    }
    else
    {
        delete [] tasks[index];
        tasks[index] = nullptr;
        size -= 1;
        for (int i = index; i < size; i++)
        {
            tasks[i] = tasks[i + 1];
        }
    }
}

const char** TodoList::get_pending_tasks(int& count) const {
    // TODO: set count and return task array
    count = size;
    return const_cast<const char**>(tasks);
}