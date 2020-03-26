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

#include <alibabacloud/aliyuncvc/model/GetMeetingMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

GetMeetingMemberResult::GetMeetingMemberResult() :
	ServiceResult()
{}

GetMeetingMemberResult::GetMeetingMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMeetingMemberResult::~GetMeetingMemberResult()
{}

void GetMeetingMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMembers = value["Members"]["Data"];
	for (const auto &item : allMembers)
		members_.push_back(item.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());

}

std::string GetMeetingMemberResult::getMessage()const
{
	return message_;
}

int GetMeetingMemberResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<std::string> GetMeetingMemberResult::getMembers()const
{
	return members_;
}

bool GetMeetingMemberResult::getSuccess()const
{
	return success_;
}

