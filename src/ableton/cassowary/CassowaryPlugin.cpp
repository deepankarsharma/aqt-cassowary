// Copyright: 2014, Ableton AG, Berlin, all rights reserved

#include <ableton/cassowary/CassowaryPlugin.hpp>
#include <ableton/cassowary/Solver.hpp>
#include <ableton/build_system/Warnings.hpp>

ABL_DISABLE_WARNINGS
#include <QtQml/QQmlEngine>
#include <QtQml/qqml.h>
ABL_RESTORE_WARNINGS

namespace ableton {
namespace cassowary {

void CassowaryPlugin::registerTypes(const char* uri)
{
  qmlRegisterType<Solver>(uri, 1, 0, "Solver");
}

} // namespace cassowary
} // namespace ableton