#ifndef __INTARRAY_H_INCLUDED__
#define __INTARRAY_H_INCLUDED__

class CIntArray
{
    private:
        int *m_pnum;
        int m_nNumOf;

    public:
        CIntArray(const int nNumOf);
        ~CIntArray();
    
    public:
        bool Success()
        {
            return m_pnum != NULL;
        }
        
        int NumOf()
        {
            return m_nNumOf;
        }

        int SizeOf()
        {
            return m_nNumOf * sizeof *m_pnum;
        }
        
        int Get(const int index);
        void Set(const int index, const int value);
    
    private:
        void CheckIndex(const int index);
};

#endif