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

#include <alibabacloud/aliyuncvc/model/ActiveMeetingCodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

ActiveMeetingCodeResult::ActiveMeetingCodeResult() :
	ServiceResult()
{}

ActiveMeetingCodeResult::ActiveMeetingCodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ActiveMeetingCodeResult::~ActiveMeetingCodeResult()
{}

void ActiveMeetingCodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto meetingInfoNode = value["MeetingInfo"];
	if(!meetingInfoNode["ValidDate"].isNull())
		meetingInfo_.validDate = std::stol(meetingInfoNode["ValidDate"].asString());
	if(!meetingInfoNode["MeetingCode"].isNull())
		meetingInfo_.meetingCode = meetingInfoNode["MeetingCode"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ActiveMeetingCodeResult::MeetingInfo ActiveMeetingCodeResult::getMeetingInfo()const
{
	return meetingInfo_;
}

std::string ActiveMeetingCodeResult::getMessage()const
{
	return message_;
}

int ActiveMeetingCodeResult::getErrorCode()const
{
	return errorCode_;
}

bool ActiveMeetingCodeResult::getSuccess()const
{
	return success_;
}

