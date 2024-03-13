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

#include <alibabacloud/swas-open/model/DescribeCloudAssistantAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeCloudAssistantAttributesResult::DescribeCloudAssistantAttributesResult() :
	ServiceResult()
{}

DescribeCloudAssistantAttributesResult::DescribeCloudAssistantAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudAssistantAttributesResult::~DescribeCloudAssistantAttributesResult()
{}

void DescribeCloudAssistantAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCloudAssistantNode = value["CloudAssistant"]["status"];
	for (auto valueCloudAssistantstatus : allCloudAssistantNode)
	{
		Status cloudAssistantObject;
		if(!valueCloudAssistantstatus["InstanceId"].isNull())
			cloudAssistantObject.instanceId = valueCloudAssistantstatus["InstanceId"].asString();
		if(!valueCloudAssistantstatus["CloudAssistantStatus"].isNull())
			cloudAssistantObject.cloudAssistantStatus = valueCloudAssistantstatus["CloudAssistantStatus"].asString();
		if(!valueCloudAssistantstatus["LastInvokedTime"].isNull())
			cloudAssistantObject.lastInvokedTime = valueCloudAssistantstatus["LastInvokedTime"].asString();
		if(!valueCloudAssistantstatus["CloudAssistantVersion"].isNull())
			cloudAssistantObject.cloudAssistantVersion = valueCloudAssistantstatus["CloudAssistantVersion"].asString();
		if(!valueCloudAssistantstatus["ActiveTaskCount"].isNull())
			cloudAssistantObject.activeTaskCount = std::stol(valueCloudAssistantstatus["ActiveTaskCount"].asString());
		if(!valueCloudAssistantstatus["InvocationCount"].isNull())
			cloudAssistantObject.invocationCount = std::stol(valueCloudAssistantstatus["InvocationCount"].asString());
		if(!valueCloudAssistantstatus["LastHeartbeatTime"].isNull())
			cloudAssistantObject.lastHeartbeatTime = valueCloudAssistantstatus["LastHeartbeatTime"].asString();
		if(!valueCloudAssistantstatus["OSType"].isNull())
			cloudAssistantObject.oSType = valueCloudAssistantstatus["OSType"].asString();
		if(!valueCloudAssistantstatus["SupportSessionManager"].isNull())
			cloudAssistantObject.supportSessionManager = valueCloudAssistantstatus["SupportSessionManager"].asString() == "true";
		cloudAssistant_.push_back(cloudAssistantObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeCloudAssistantAttributesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeCloudAssistantAttributesResult::Status> DescribeCloudAssistantAttributesResult::getCloudAssistant()const
{
	return cloudAssistant_;
}

int DescribeCloudAssistantAttributesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCloudAssistantAttributesResult::getPageNumber()const
{
	return pageNumber_;
}

