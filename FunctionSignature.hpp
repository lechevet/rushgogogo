#ifndef FUNCTION_SIGN_
# define FUNCTION_SIGN_

template<typename T>
struct FunctionSignature;

template<typename Ret>
struct FunctionSignature<Ret ()>
{
    typedef Ret (*type)(void);
};
template <typename Ret, typename Arg1>
struct FunctionSignature<Ret (Arg1)>
{
    typedef Ret (*type)(Arg1);
};

template <typename Ret, typename Arg1, typename Arg2>
struct FunctionSignature<Ret (Arg1, Arg2)>
{
    typedef Ret (*type)(Arg1, Arg2);
};

template <typename Ret, typename Arg1, typename Arg2, typename Arg3>
struct FunctionSignature<Ret (Arg1, Arg2, Arg3)>
{
    typedef Ret (*type)(Arg1, Arg2, Arg3);
};

template <typename Ret, typename Arg1, typename Arg2, typename Arg3, typename Arg4>
struct FunctionSignature<Ret (Arg1, Arg2, Arg3, Arg4)>
{
    typedef Ret (*type)(Arg1, Arg2, Arg3, Arg4);
};

#endif // CHARON_HPP_
