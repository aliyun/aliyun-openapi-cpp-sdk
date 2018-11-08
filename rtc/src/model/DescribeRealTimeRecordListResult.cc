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

#include <alibabacloud/rtc/model/DescribeRealTimeRecordListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRealTimeRecordListResult::DescribeRealTimeRecordListResult() :
	ServiceResult()
{}

DescribeRealTimeRecordListResult::DescribeRealTimeRecordListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRealTimeRecordListResult::~DescribeRealTimeRecordListResult()
{}

void DescribeRealTimeRecordListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCommunicationRecordInfos = value["CommunicationRecordInfos"]["CommunicationRecordInfo"];
	for (auto value : allCommunicationRecordInfos)
	{
		CommunicationRecordInfo communicationRecordInfosObject;
		if(!value["ChannelId"].isNull())
			communicationRecordInfosObject.channelId = value["ChannelId"].asString();
		if(!value["StartTime"].isNull())
			communicationRecordInfosObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			communicationRecordInfosObject.endTime = value["EndTime"].asString();
		if(!value["OnlineUserCnt"].isNull())
			communicationRecordInfosObject.onlineUserCnt = std::stol(value["OnlineUserCnt"].asString());
		if(!value["Status"].isNull())
			communicationRecordInfosObject.status = value["Status"].asString() == "true";
		if(!value["RecordId"].isNull())
			communicationRecordInfosObject.recordId = value["RecordId"].asString();
		auto allCallAreas = value["CallAreas"]["CallArea"];
		for (auto value : allCallAreas)
			communicationRecordInfosObject.callAreas.push_back(value.asString());
		communicationRecordInfos_.push_back(communicationRecordInfosObject);
	}

}

std::vector<DescribeRealTimeRecordListResult::CommunicationRecordInfo> DescribeRealTimeRecordListResult::getCommunicationRecordInfos()const
{
	return communicationRecordInfos_;
}

