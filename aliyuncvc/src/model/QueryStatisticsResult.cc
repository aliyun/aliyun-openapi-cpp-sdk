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

#include <alibabacloud/aliyuncvc/model/QueryStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

QueryStatisticsResult::QueryStatisticsResult() :
	ServiceResult()
{}

QueryStatisticsResult::QueryStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryStatisticsResult::~QueryStatisticsResult()
{}

void QueryStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDayInfoNode = dataNode["DayInfo"]["DayInfoItem"];
	for (auto dataNodeDayInfoDayInfoItem : allDayInfoNode)
	{
		Data::DayInfoItem dayInfoItemObject;
		if(!dataNodeDayInfoDayInfoItem["MeetingNum"].isNull())
			dayInfoItemObject.meetingNum = dataNodeDayInfoDayInfoItem["MeetingNum"].asString();
		if(!dataNodeDayInfoDayInfoItem["MeetingLength"].isNull())
			dayInfoItemObject.meetingLength = dataNodeDayInfoDayInfoItem["MeetingLength"].asString();
		if(!dataNodeDayInfoDayInfoItem["MemberNum"].isNull())
			dayInfoItemObject.memberNum = dataNodeDayInfoDayInfoItem["MemberNum"].asString();
		if(!dataNodeDayInfoDayInfoItem["Day"].isNull())
			dayInfoItemObject.day = dataNodeDayInfoDayInfoItem["Day"].asString();
		data_.dayInfo.push_back(dayInfoItemObject);
	}
	auto totalNode = dataNode["Total"];
	if(!totalNode["MeetingNum"].isNull())
		data_.total.meetingNum = std::stoi(totalNode["MeetingNum"].asString());
	if(!totalNode["MeetingLength"].isNull())
		data_.total.meetingLength = std::stoi(totalNode["MeetingLength"].asString());
	if(!totalNode["MemberNum"].isNull())
		data_.total.memberNum = std::stoi(totalNode["MemberNum"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryStatisticsResult::getMessage()const
{
	return message_;
}

QueryStatisticsResult::Data QueryStatisticsResult::getData()const
{
	return data_;
}

int QueryStatisticsResult::getErrorCode()const
{
	return errorCode_;
}

bool QueryStatisticsResult::getSuccess()const
{
	return success_;
}

