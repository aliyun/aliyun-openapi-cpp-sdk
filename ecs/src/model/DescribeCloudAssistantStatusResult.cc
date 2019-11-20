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
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["InstanceId"].isNull())
			instanceCloudAssistantStatusSetObject.instanceId = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["InstanceId"].asString();
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["CloudAssistantStatus"].isNull())
			instanceCloudAssistantStatusSetObject.cloudAssistantStatus = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["CloudAssistantStatus"].asString();
		if(!valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["CloudAssistantVersion"].isNull())
			instanceCloudAssistantStatusSetObject.cloudAssistantVersion = valueInstanceCloudAssistantStatusSetInstanceCloudAssistantStatus["CloudAssistantVersion"].asString();
		instanceCloudAssistantStatusSet_.push_back(instanceCloudAssistantStatusSetObject);
	}

}

std::vector<DescribeCloudAssistantStatusResult::InstanceCloudAssistantStatus> DescribeCloudAssistantStatusResult::getInstanceCloudAssistantStatusSet()const
{
	return instanceCloudAssistantStatusSet_;
}

