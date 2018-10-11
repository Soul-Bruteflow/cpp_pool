//
// Created by bruteflow on 10/11/18.
//

#ifndef D07_EX02_ARRAY_TPP
#define D07_EX02_ARRAY_TPP

template <typename T>
class Array
{
public:
	Array<T>()
	:_array(), _size(0)
	{};

	Array<T>(unsigned int n)
	:_size(n)
	{
		if (_size == 0)
			_array = NULL;
		else
			_array = new T[n];
	};

	Array<T>(Array<T> const & src)
	:_array(src._array), _size(src._size)
	{};

	~Array<T>()
	{};

	Array<T> &operator=( Array<T> const &rhs)
	{
		if (this != &rhs)
		{
			delete [] _array;
			_size = rhs._size;
			_array = new T[rhs._size];

			for (unsigned int i = 0; i < rhs._size; ++i)
				_array[i] = rhs._array[i];
		}
		return *this;
	};

	T &operator[]( unsigned int num )
	{
		if (num < _size)
			return _array[num];
		else
			throw std::range_error("Range Error: Out of bounds!");
	};

	unsigned int size() const
	{
		return (_size);
	};

private:
	T*				_array;
	unsigned int	_size;
};

#endif //D07_EX02_ARRAY_TPP
