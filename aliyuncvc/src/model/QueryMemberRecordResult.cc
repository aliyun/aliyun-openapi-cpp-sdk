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

#include <alibabacloud/aliyuncvc/model/QueryMemberRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

QueryMemberRecordResult::QueryMemberRecordResult() :
	ServiceResult()
{}

QueryMemberRecordResult::QueryMemberRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMemberRecordResult::~QueryMemberRecordResult()
{}

void QueryMemberRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto meetingInfoNode = value["MeetingInfo"];
	if(!meetingInfoNode["MeetingName"].isNull())
		meetingInfo_.meetingName = meetingInfoNode["MeetingName"].asString();
	if(!meetingInfoNode["MeetingCode"].isNull())
		meetingInfo_.meetingCode = meetingInfoNode["MeetingCode"].asString();
	if(!meetingInfoNode["Memo"].isNull())
		meetingInfo_.memo = meetingInfoNode["Memo"].asString();
	if(!meetingInfoNode["UserName"].isNull())
		meetingInfo_.userName = meetingInfoNode["UserName"].asString();
	if(!meetingInfoNode["CreateDate"].isNull())
		meetingInfo_.createDate = std::stol(meetingInfoNode["CreateDate"].asString());
	if(!meetingInfoNode["UserId"].isNull())
		meetingInfo_.userId = meetingInfoNode["UserId"].asString();
	if(!meetingInfoNode["MeetingUUID"].isNull())
		meetingInfo_.meetingUUID = meetingInfoNode["MeetingUUID"].asString();
	auto allMemberRecordsListNode = meetingInfoNode["MemberRecordsList"]["MemberRecord"];
	for (auto meetingInfoNodeMemberRecordsListMemberRecord : allMemberRecordsListNode)
	{
		MeetingInfo::MemberRecord memberRecordObject;
		if(!meetingInfoNodeMemberRecordsListMemberRecord["MemberUUID"].isNull())
			memberRecordObject.memberUUID = meetingInfoNodeMemberRecordsListMemberRecord["MemberUUID"].asString();
		if(!meetingInfoNodeMemberRecordsListMemberRecord["UserId"].isNull())
			memberRecordObject.userId = meetingInfoNodeMemberRecordsListMemberRecord["UserId"].asString();
		if(!meetingInfoNodeMemberRecordsListMemberRecord["Status"].isNull())
			memberRecordObject.status = meetingInfoNodeMemberRecordsListMemberRecord["Status"].asString();
		meetingInfo_.memberRecordsList.push_back(memberRecordObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryMemberRecordResult::MeetingInfo QueryMemberRecordResult::getMeetingInfo()const
{
	return meetingInfo_;
}

std::string QueryMemberRecordResult::getMessage()const
{
	return message_;
}

int QueryMemberRecordResult::getErrorCode()const
{
	return errorCode_;
}

bool QueryMemberRecordResult::getSuccess()const
{
	return success_;
}

