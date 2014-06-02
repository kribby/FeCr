#ifndef FECRAPP_H
#define FECRAPP_H

#include "MooseApp.h"

class FecrApp;

template<>
InputParameters validParams<FecrApp>();

class FecrApp : public MooseApp
{
public:
  FecrApp(const std::string & name, InputParameters parameters);
  virtual ~FecrApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* FECRAPP_H */
