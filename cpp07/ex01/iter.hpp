#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename U, typename FuncP>
void iter(T *adr, U len, FuncP func)
{
    for (U i = 0; i < len; ++i)
    {
        func(adr[i]);
    }
}

#endif
