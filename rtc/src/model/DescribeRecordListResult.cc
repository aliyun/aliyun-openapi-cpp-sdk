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

#include <alibabacloud/rtc/model/DescribeRecordListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRecordListResult::DescribeRecordListResult() :
	ServiceResult()
{}

DescribeRecordListResult::DescribeRecordListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecordListResult::~DescribeRecordListResult()
{}

void DescribeRecordListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommunicationRecordInfosNode = value["CommunicationRecordInfos"]["CommunicationRecordInfo"];
	for (auto valueCommunicationRecordInfosCommunicationRecordInfo : allCommunicationRecordInfosNode)
	{
		CommunicationRecordInfo communicationRecordInfosObject;
		if(!valueCommunicationRecordInfosCommunicationRecordInfo["ChannelId"].isNull())
			communicationRecordInfosObject.channelId = valueCommunicationRecordInfosCommunicationRecordInfo["ChannelId"].asString();
		if(!valueCommunicationRecordInfosCommunicationRecordInfo["StartTime"].isNull())
			communicationRecordInfosObject.startTime = valueCommunicationRecordInfosCommunicationRecordInfo["StartTime"].asString();
		if(!valueCommunicationRecordInfosCommunicationRecordInfo["EndTime"].isNull())
			communicationRecordInfosObject.endTime = valueCommunicationRecordInfosCommunicationRecordInfo["EndTime"].asString();
		if(!valueCommunicationRecordInfosCommunicationRecordInfo["TotalUserCnt"].isNull())
			communicationRecordInfosObject.totalUserCnt = std::stol(valueCommunicationRecordInfosCommunicationRecordInfo["TotalUserCnt"].asString());
		if(!valueCommunicationRecordInfosCommunicationRecordInfo["Status"].isNull())
			communicationRecordInfosObject.status = valueCommunicationRecordInfosCommunicationRecordInfo["Status"].asString() == "true";
		if(!valueCommunicationRecordInfosCommunicationRecordInfo["RecordId"].isNull())
			communicationRecordInfosObject.recordId = valueCommunicationRecordInfosCommunicationRecordInfo["RecordId"].asString();
		auto allCallAreas = value["CallAreas"]["CallArea"];
		for (auto value : allCallAreas)
			communicationRecordInfosObject.callAreas.push_back(value.asString());
		communicationRecordInfos_.push_back(communicationRecordInfosObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["TotalCnt"].isNull())
		totalCnt_ = std::stol(value["TotalCnt"].asString());

}

long DescribeRecordListResult::getPageSize()const
{
	return pageSize_;
}

long DescribeRecordListResult::getTotalCnt()const
{
	return totalCnt_;
}

long DescribeRecordListResult::getPageNo()const
{
	return pageNo_;
}

std::vector<DescribeRecordListResult::CommunicationRecordInfo> DescribeRecordListResult::getCommunicationRecordInfos()const
{
	return communicationRecordInfos_;
}

