// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: t -*-
//
// This is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the
// Free Software Foundation; either version 2.1 of the License, or (at
// your option) any later version.
//

/// @file	AP_MetaClass.cpp
///			Abstract meta-class from which other AP classes may inherit.
///			Provides type introspection and some basic protocols that can
///			be implemented by subclasses.

#include "AP_MetaClass.h"

// Default ctor, currently does nothing
AP_MetaClass::AP_MetaClass(void)
{
}

// Default dtor, currently does nothing but must be defined in order to ensure that
// subclasses not overloading the default virtual dtor still have something in their
// vtable.
AP_MetaClass::~AP_MetaClass()
{
}

size_t
AP_MetaClass::serialize(void *buf, size_t bufSize) const
{
	return 0;
}

size_t
AP_MetaClass::unserialize(void *buf, size_t bufSize)
{
	return 0;
}