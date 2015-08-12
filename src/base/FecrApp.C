#include "FecrApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"

template<>
InputParameters validParams<FecrApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

FecrApp::FecrApp(InputParameters parameters) :
    MooseApp(parameters)
{

  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  FecrApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  FecrApp::associateSyntax(_syntax, _action_factory);
}

FecrApp::~FecrApp()
{
}

void
FecrApp::registerApps()
{
  registerApp(FecrApp);
}

void
FecrApp::registerObjects(Factory & factory)
{
}

void
FecrApp::associateSyntax(Syntax & syntax, ActionFactory & action_factory)
{
}
