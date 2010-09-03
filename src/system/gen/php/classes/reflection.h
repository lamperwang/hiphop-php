/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_php_classes_reflection_h__
#define __GENERATED_php_classes_reflection_h__

#include <runtime/base/hphp_system.h>
#include <php/classes/reflection.fw.h>

// Declarations
#include <cls/ReflectionFunctionAbstract.h>
#include <cls/ReflectionObject.h>
#include <cls/Reflector.h>
#include <cls/ReflectionException.h>
#include <cls/ReflectionClass.h>
#include <cls/ReflectionExtension.h>
#include <cls/ReflectionMethod.h>
#include <cls/ReflectionProperty.h>
#include <cls/ReflectionFunction.h>
#include <cls/ReflectionParameter.h>
#include <php/classes/exception.h>
#include <php/classes/stdclass.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant pm_php$classes$reflection_php(bool incOnce = false, LVariableTable* variables = NULL, Globals *globals = get_globals());
Object co_ReflectionFunctionAbstract(CArrRef params, bool init = true);
Object co_ReflectionObject(CArrRef params, bool init = true);
Object co_ReflectionException(CArrRef params, bool init = true);
Object co_ReflectionClass(CArrRef params, bool init = true);
Object co_ReflectionExtension(CArrRef params, bool init = true);
Object co_ReflectionMethod(CArrRef params, bool init = true);
Object co_ReflectionProperty(CArrRef params, bool init = true);
Object co_ReflectionFunction(CArrRef params, bool init = true);
Object co_ReflectionParameter(CArrRef params, bool init = true);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_php_classes_reflection_h__
