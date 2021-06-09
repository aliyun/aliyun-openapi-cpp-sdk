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

#include <alibabacloud/aliyuncvc/model/QueryMeetingMemberActionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

QueryMeetingMemberActionResult::QueryMeetingMemberActionResult() :
	ServiceResult()
{}

QueryMeetingMemberActionResult::QueryMeetingMemberActionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMeetingMemberActionResult::~QueryMeetingMemberActionResult()
{}

void QueryMeetingMemberActionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allErrorCodeListNode = value["ErrorCodeList"]["ErrorCodeListItem"];
	for (auto valueErrorCodeListErrorCodeListItem : allErrorCodeListNode)
	{
		ErrorCodeListItem errorCodeListObject;
		if(!valueErrorCodeListErrorCodeListItem["ErrorCodeCount"].isNull())
			errorCodeListObject.errorCodeCount = std::stol(valueErrorCodeListErrorCodeListItem["ErrorCodeCount"].asString());
		if(!valueErrorCodeListErrorCodeListItem["Time"].isNull())
			errorCodeListObject.time = std::stol(valueErrorCodeListErrorCodeListItem["Time"].asString());
		errorCodeList_.push_back(errorCodeListObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["MeetingStatus"].isNull())
		meetingStatus_ = std::stoi(value["MeetingStatus"].asString());
	if(!value["VideoStatus"].isNull())
		videoStatus_ = std::stoi(value["VideoStatus"].asString());
	if(!value["AudioStatus"].isNull())
		audioStatus_ = std::stoi(value["AudioStatus"].asString());
	if(!value["ErrorCodeCount"].isNull())
		errorCodeCount_ = std::stol(value["ErrorCodeCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryMeetingMemberActionResult::getMessage()const
{
	return message_;
}

int QueryMeetingMemberActionResult::getMeetingStatus()const
{
	return meetingStatus_;
}

int QueryMeetingMemberActionResult::getVideoStatus()const
{
	return videoStatus_;
}

int QueryMeetingMemberActionResult::getAudioStatus()const
{
	return audioStatus_;
}

long QueryMeetingMemberActionResult::getErrorCodeCount()const
{
	return errorCodeCount_;
}

int QueryMeetingMemberActionResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<QueryMeetingMemberActionResult::ErrorCodeListItem> QueryMeetingMemberActionResult::getErrorCodeList()const
{
	return errorCodeList_;
}

bool QueryMeetingMemberActionResult::getSuccess()const
{
	return success_;
}

