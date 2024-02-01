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

#include <alibabacloud/ecs/model/DescribeCloudAssistantStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeCloudAssistantStatusResult::DescribeCloudAssistantStatusResult() :
	ServiceResult()
{}

DescribeCloudAssistantStatusResult::DescribeCloudAssistantStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudAssistantStatusResult::~DescribeCloudAssistantStatusResult()
{}

void DescribeCloudAssistantStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceCloudAssistantStatusSetNode = value["InstanceCloudAssistantStatusSet"]["InstanceCloudAssistantStatus"];
	for (auto valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus : allInstanceCloudAssistantStatusSetNode)
	{
		InstanceCloudAssistantStatus instanceCloudAssistantStatusSetObject;
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["CloudAssistantStatus"].isNull())
			instanceCloudAssistantStatusSetObject.cloudAssistantStatus = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["CloudAssistantStatus"].asString();
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["LastInvokedTime"].isNull())
			instanceCloudAssistantStatusSetObject.lastInvokedTime = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["LastInvokedTime"].asString();
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["CloudAssistantVersion"].isNull())
			instanceCloudAssistantStatusSetObject.cloudAssistantVersion = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["CloudAssistantVersion"].asString();
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["ActiveTaskCount"].isNull())
			instanceCloudAssistantStatusSetObject.activeTaskCount = std::stol(valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["ActiveTaskCount"].asString());
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["InvocationCount"].isNull())
			instanceCloudAssistantStatusSetObject.invocationCount = std::stol(valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["InvocationCount"].asString());
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["InstanceId"].isNull())
			instanceCloudAssistantStatusSetObject.instanceId = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["InstanceId"].asString();
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["LastHeartbeatTime"].isNull())
			instanceCloudAssistantStatusSetObject.lastHeartbeatTime = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["LastHeartbeatTime"].asString();
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["OSType"].isNull())
			instanceCloudAssistantStatusSetObject.oSType = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["OSType"].asString();
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["SupportSessionManager"].isNull())
			instanceCloudAssistantStatusSetObject.supportSessionManager = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["SupportSessionManager"].asString() == "true";
		instanceCloudAssistantStatusSet_.push_back(instanceCloudAssistantStatusSetObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

long DescribeCloudAssistantStatusResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeCloudAssistantStatusResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeCloudAssistantStatusResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeCloudAssistantStatusResult::InstanceCloudAssistantStatus> DescribeCloudAssistantStatusResult::getInstanceCloudAssistantStatusSet()const
{
	return instanceCloudAssistantStatusSet_;
}

long DescribeCloudAssistantStatusResult::getPageNumber()const
{
	return pageNumber_;
}

