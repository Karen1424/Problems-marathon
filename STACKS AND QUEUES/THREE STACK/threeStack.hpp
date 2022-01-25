template <typename T>
threeStack<T>::threeStack()
{
	m_max_size = 120;
	m_vec.reserve(m_max_size);
	m_size1 = (m_max_size / 3);
	m_size2 = (m_max_size * 2 / 3);
    m_size3 = (m_max_size);
	m_top1 = -1;
	m_top2 = m_max_size / 3 - 1;
	m_top3 = m_max_size * 2 / 3 - 1;
}

template <typename T>
threeStack<T>::~threeStack()
{
    m_max_size = 0;
	m_size1 = 0;
	m_size2 = 0;
    m_size3 = 0;
	m_top1 = 0;
	m_top2 = 0;
	m_top3 = 0;
}

template <typename T>
void threeStack<T>::push1(T value)
{
	if (m_size1 > 0)
	{
		m_vec[++m_top1] = value;
		m_size1--;
	}
	else
	{
		std::cout << "Stack overflow" << std::endl;
        std::exit(0);
	}
}

template <typename T>
void threeStack<T>::push2(T value)
{
	if(m_size2 > m_max_size / 3)
	{
		m_vec[++m_top2] = value;
		m_size2--;
	}
	else
	{
		std::cout << "Stack overflow" << std::endl;
        std::exit(0);
	}
}

template <typename T>
void threeStack<T>::push3(T value)
{
	if(m_max_size > m_max_size * 2 / 3)
	{
		m_vec[++m_top3] = value;
		m_max_size--;
	}
	else
	{
		std::cout << "Stack overflow" << std::endl;
        std::exit(0);
	}
}

template <typename T>
T threeStack<T>::pop1()
{
	if (m_top1 >= 0)
	{
		return m_vec[m_top1--];
	}
	else
	{
		std::cout << "Stack UnderFlow" << std::endl;
        std::exit(0);
	}
}

template <typename T>
T threeStack<T>::pop2()
{
	if (m_top2 >= m_max_size / 3)
	{
		return m_vec[m_top2--];
	}
	else
	{
		std::cout << "Stack UnderFlow" << std::endl;
        std::exit(0);
	}
}

template <typename T>
T threeStack<T>::pop3()
{
	if(m_top3 >= m_max_size * 2 / 3)
	{
		return m_vec[m_top3--];
	}
	else
	{
		std::cout << "Stack UnderFlow" << std::endl;
        std::exit(0);
	}
}

template <typename T>
bool threeStack<T>::isEmpty1()
{
	return m_top1 < 0;
}

template <typename T>
bool threeStack<T>::isEmpty2()
{
	return m_top2 < m_max_size / 3;
}

template <typename T>
bool threeStack<T>::isEmpty3()
{
	return m_top3 < m_max_size * 2 / 3;
}