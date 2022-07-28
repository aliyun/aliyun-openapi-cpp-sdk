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

#include <alibabacloud/dbs/model/InitializeDbsServiceLinkedRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

InitializeDbsServiceLinkedRoleResult::InitializeDbsServiceLinkedRoleResult() :
	ServiceResult()
{}

InitializeDbsServiceLinkedRoleResult::InitializeDbsServiceLinkedRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InitializeDbsServiceLinkedRoleResult::~InitializeDbsServiceLinkedRoleResult()
{}

void InitializeDbsServiceLinkedRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

std::string InitializeDbsServiceLinkedRoleResult::getData()const
{
	return data_;
}

std::string InitializeDbsServiceLinkedRoleResult::getErrorCode()const
{
	return errorCode_;
}

std::string InitializeDbsServiceLinkedRoleResult::getErrMessage()const
{
	return errMessage_;
}

std::string InitializeDbsServiceLinkedRoleResult::getSuccess()const
{
	return success_;
}

