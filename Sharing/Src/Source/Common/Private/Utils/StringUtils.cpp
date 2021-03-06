// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

//////////////////////////////////////////////////////////////////////////
// StringUtils.cpp
//////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <Public/Utils/StringUtils.h>

XTOOLS_NAMESPACE_BEGIN
NAMESPACE_BEGIN(StringUtils)

std::vector<std::string> Tokenize(const char *str, char c)
{
	std::vector<std::string> result;

	do
	{
		const char *begin = str;

		while (*str != c && *str)
			str++;

		std::string tokenString(begin, str);
		if (!tokenString.empty())
		{
			result.push_back(tokenString);
		}
	} while (0 != *str++);

	return result;
}

NAMESPACE_END(StringUtils)
XTOOLS_NAMESPACE_END
