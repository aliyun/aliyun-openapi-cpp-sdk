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

#include <alibabacloud/dg/model/AddDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dg;
using namespace AlibabaCloud::Dg::Model;

AddDatabaseResult::AddDatabaseResult() :
	ServiceResult()
{}

AddDatabaseResult::AddDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddDatabaseResult::~AddDatabaseResult()
{}

void AddDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

std::string AddDatabaseResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string AddDatabaseResult::getData()const
{
	return data_;
}

std::string AddDatabaseResult::getCode()const
{
	return code_;
}

bool AddDatabaseResult::getSuccess()const
{
	return success_;
}

