#ifndef __FUNCTION_HPP__
# define __FUNCTION_HPP__

template < typename T >
class Function;


template <typename T, typename U>
class Function < T(U) >
{
private:
  typedef T  (*type)(U);
  type _func;

public:
  Function(type f)
  {
    _func = f;
  }
  ~Function() { }

  Function operator=(type t)
  {
    _func = t;
    return (this);
  }

  T operator()(U t)
  {
    return (_func(t));
  }
  

};

#endif
