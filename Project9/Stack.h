#pragma once
template <class T>
class Stack
{
public:
	T * data;
	size_t size;
	Stack(int size)
	{
		data = new T[size];
	}
	~Stack()
	{
		delete[] data;
	}
	Stack(std::initializer_list<T> & elements)
	{
		for (auto & element : elements) {
			this->push(element);
		}
	}
	void push(const T & element)
	{
		if (nullptr == data)
		{
			data = new T[++size];
			data[0] = element;
		}
		else
		{
			data = (T*)realloc(data, ++size * sizeof(T));
			data[size-1 ] = element;
		}
	}
	void pop()
	{
		if (nullptr != data)
		{
			int new_size = size;
			std::cout << data[--new_size]<<std::endl;
			data =  (T*)realloc(data, --size * sizeof(T));
		}
	}

	void peek()
	{
		if (nullptr != data)
		{
			std::cout << data[--size] << std::endl;		
			
		}
	}
	size_t count() const
	{
		return size;
	}
	void clear()
	{
		delete[] data;
	}
};

