#ifndef STACK_HPP
#define STACK_HPP

template <class T>
my::Stack<T>::Stack() :
	m_size{0},
	m_cap{0},
	m_ptr{nullptr}
{}

template <class T>
my::Stack<T>::~Stack()
{
	if(m_ptr != nullptr){
		delete[] m_ptr;
		m_ptr = nullptr;
	}

	m_size = 0;
	m_cap = 0;
}

template <class T>
my::Stack<T>::Stack(const std::initializer_list<T>& init_list) : 
	m_size{0}, 
	m_cap{init_list.size()}, 
	m_ptr{new T[m_cap]} 
{
    for (const auto& elem : init_list) {
    	this->push(elem);
	}
}

template <class T>
my::Stack<T>::Stack(const Stack& other) :
	m_size{other.m_size},
	m_cap{other.m_cap},
	m_ptr{new T[m_cap]} 
{
	for(int i = 0; i < m_size; ++i){
		this->m_ptr[i] = other.m_ptr[i]; 
	}
}

template <class T>
my::Stack<T>::Stack(Stack&& other) noexcept :
	m_size{other.m_size},
	m_cap{other.m_cap}, 
	m_ptr{other.m_ptr} 
{
	other.m_size = 0;
	other.m_cap = 0;
	other.m_ptr = nullptr;
}

template <class T>
bool my::Stack<T>::empty() const
{
	return m_size == 0;
}

template <class T>
size_t my::Stack<T>::size() const
{
	return m_size;
}

template <class T>
T my::Stack<T>::top() const
{
	if(m_ptr != nullptr){
		return m_ptr[m_size - 1];		
	} else {
		std::cout << "for my::Stack<T>::top()\nnullptr" << std::endl;
		exit(0);
	}
}

template <class T>
void my::Stack<T>::push(T val)
{
	if(m_size == m_cap){
		realloc();
	}

	m_ptr[m_size++] = val;
}

template <class T>
void my::Stack<T>::pop()
{
	if(m_ptr != nullptr){
		if(m_size != 0){
			--m_size;
		} else {
			std::cout << "in my::Stack<T>::pop()\nthere is no elements to pop" << std::endl;
		}
	} else {
		 std::cout << "in my::Stack<T>::pop()\nnullptr" << std::endl;
	}
}

template <class T>
void my::Stack<T>::realloc()
{
	m_cap = (m_cap) ? 2 * m_cap : 1;

	T* tmp_ptr = new T[m_cap];

		for(size_t i = 0; i < m_size; ++i){
			tmp_ptr[i] = m_ptr[i]; 
		}

	delete[] m_ptr;
	m_ptr = tmp_ptr;
}


#endif //STACK_HPP
