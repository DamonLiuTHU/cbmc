/*******************************************************************\

Module: Jsil Language

Author: Michael Tautschnig, tautschn@amazon.com

\*******************************************************************/

#include <ansi-c/expr2c_class.h>

#include "expr2jsil.h"
#include "expr2jsil_class.h"

/*******************************************************************\

Function: expr2jsil

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

std::string expr2jsil(const exprt &expr, const namespacet &ns)
{
  expr2jsilt expr2jsil(ns);
  expr2jsil.get_shorthands(expr);
  norep_pretty_printert norep;
  expr2jsil.set_next_pretty_printer(&norep);
  return expr2jsil.convert(expr);
}

/*******************************************************************\

Function: type2jsil

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

std::string type2jsil(const typet &type, const namespacet &ns)
{
  expr2jsilt expr2jsil(ns);
  norep_pretty_printert norep;
  expr2jsil.set_next_pretty_printer(&norep);
  return expr2jsil.convert(type);
}
