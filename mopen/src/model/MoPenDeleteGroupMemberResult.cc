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

#include <alibabacloud/mopen/model/MoPenDeleteGroupMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::MoPen;
using namespace AlibabaCloud::MoPen::Model;

MoPenDeleteGroupMemberResult::MoPenDeleteGroupMemberResult() :
	ServiceResult()
{}

MoPenDeleteGroupMemberResult::MoPenDeleteGroupMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MoPenDeleteGroupMemberResult::~MoPenDeleteGroupMemberResult()
{}

void MoPenDeleteGroupMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string MoPenDeleteGroupMemberResult::getDescription()const
{
	return description_;
}

std::string MoPenDeleteGroupMemberResult::getMessage()const
{
	return message_;
}

std::string MoPenDeleteGroupMemberResult::getCode()const
{
	return code_;
}

bool MoPenDeleteGroupMemberResult::getSuccess()const
{
	return success_;
}

