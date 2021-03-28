class A
{
    int m_v;

public:
    int& value()
    {
        return m_v;
    }

    const int& value() const
    {
        return m_v;
    }
}