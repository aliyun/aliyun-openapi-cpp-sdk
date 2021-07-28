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

#include <alibabacloud/retailcloud/model/DescribeEventMonitorListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeEventMonitorListResult::DescribeEventMonitorListResult() :
	ServiceResult()
{}

DescribeEventMonitorListResult::DescribeEventMonitorListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventMonitorListResult::~DescribeEventMonitorListResult()
{}

void DescribeEventMonitorListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["EventInfo"];
	for (auto valueDataEventInfo : allDataNode)
	{
		EventInfo dataObject;
		if(!valueDataEventInfo["Count"].isNull())
			dataObject.count = std::stoi(valueDataEventInfo["Count"].asString());
		if(!valueDataEventInfo["EventTime"].isNull())
			dataObject.eventTime = valueDataEventInfo["EventTime"].asString();
		if(!valueDataEventInfo["HostName"].isNull())
			dataObject.hostName = valueDataEventInfo["HostName"].asString();
		if(!valueDataEventInfo["Kind"].isNull())
			dataObject.kind = valueDataEventInfo["Kind"].asString();
		if(!valueDataEventInfo["Level"].isNull())
			dataObject.level = valueDataEventInfo["Level"].asString();
		if(!valueDataEventInfo["Message"].isNull())
			dataObject.message = valueDataEventInfo["Message"].asString();
		if(!valueDataEventInfo["NameSpace"].isNull())
			dataObject._nameSpace = valueDataEventInfo["NameSpace"].asString();
		if(!valueDataEventInfo["PodName"].isNull())
			dataObject.podName = valueDataEventInfo["PodName"].asString();
		if(!valueDataEventInfo["Reason"].isNull())
			dataObject.reason = valueDataEventInfo["Reason"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeEventMonitorListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEventMonitorListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEventMonitorListResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeEventMonitorListResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<DescribeEventMonitorListResult::EventInfo> DescribeEventMonitorListResult::getData()const
{
	return data_;
}

int DescribeEventMonitorListResult::getCode()const
{
	return code_;
}

