/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/datalake/model/ListFunctionNamesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListFunctionNamesResult::ListFunctionNamesResult() :
	ServiceResult()
{}

ListFunctionNamesResult::ListFunctionNamesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFunctionNamesResult::~ListFunctionNamesResult()
{}

void ListFunctionNamesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFunctionNames = value["FunctionNames"]["FunctionName"];
	for (const auto &item : allFunctionNames)
		functionNames_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListFunctionNamesResult::getMessage()const
{
	return message_;
}

std::string ListFunctionNamesResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::string ListFunctionNamesResult::getCode()const
{
	return code_;
}

bool ListFunctionNamesResult::getSuccess()const
{
	return success_;
}

std::vector<std::string> ListFunctionNamesResult::getFunctionNames()const
{
	return functionNames_;
}

