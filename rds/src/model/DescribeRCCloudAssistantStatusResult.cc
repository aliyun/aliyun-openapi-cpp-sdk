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

#include <alibabacloud/rds/model/DescribeRCCloudAssistantStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCCloudAssistantStatusResult::DescribeRCCloudAssistantStatusResult() :
	ServiceResult()
{}

DescribeRCCloudAssistantStatusResult::DescribeRCCloudAssistantStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCCloudAssistantStatusResult::~DescribeRCCloudAssistantStatusResult()
{}

void DescribeRCCloudAssistantStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceCloudAssistantStatusSetNode = value["InstanceCloudAssistantStatusSet"]["instanceCloudAssistantStatusSetItem"];
	for (auto valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem : allInstanceCloudAssistantStatusSetNode)
	{
		InstanceCloudAssistantStatusSetItem instanceCloudAssistantStatusSetObject;
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["CloudAssistantVersion"].isNull())
			instanceCloudAssistantStatusSetObject.cloudAssistantVersion = valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["CloudAssistantVersion"].asString();
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["SupportSessionManager"].isNull())
			instanceCloudAssistantStatusSetObject.supportSessionManager = valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["SupportSessionManager"].asString() == "true";
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["InstanceId"].isNull())
			instanceCloudAssistantStatusSetObject.instanceId = valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["InstanceId"].asString();
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["InvocationCount"].isNull())
			instanceCloudAssistantStatusSetObject.invocationCount = std::stoi(valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["InvocationCount"].asString());
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["OSType"].isNull())
			instanceCloudAssistantStatusSetObject.oSType = valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["OSType"].asString();
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["CloudAssistantStatus"].isNull())
			instanceCloudAssistantStatusSetObject.cloudAssistantStatus = valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["CloudAssistantStatus"].asString();
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["LastHeartbeatTime"].isNull())
			instanceCloudAssistantStatusSetObject.lastHeartbeatTime = valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["LastHeartbeatTime"].asString();
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["LastInvokedTime"].isNull())
			instanceCloudAssistantStatusSetObject.lastInvokedTime = valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["LastInvokedTime"].asString();
		if(!valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["ActiveTaskCount"].isNull())
			instanceCloudAssistantStatusSetObject.activeTaskCount = std::stoi(valueInstanceCloudAssistantStatusSetinstanceCloudAssistantStatusSetItem["ActiveTaskCount"].asString());
		instanceCloudAssistantStatusSet_.push_back(instanceCloudAssistantStatusSetObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();

}

int DescribeRCCloudAssistantStatusResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeRCCloudAssistantStatusResult::getNextToken()const
{
	return nextToken_;
}

std::string DescribeRCCloudAssistantStatusResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeRCCloudAssistantStatusResult::InstanceCloudAssistantStatusSetItem> DescribeRCCloudAssistantStatusResult::getInstanceCloudAssistantStatusSet()const
{
	return instanceCloudAssistantStatusSet_;
}

std::string DescribeRCCloudAssistantStatusResult::getPageNumber()const
{
	return pageNumber_;
}

