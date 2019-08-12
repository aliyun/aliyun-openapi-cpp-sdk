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

#include <alibabacloud/ecs/model/DescribeInstancesFullStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstancesFullStatusResult::DescribeInstancesFullStatusResult() :
	ServiceResult()
{}

DescribeInstancesFullStatusResult::DescribeInstancesFullStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesFullStatusResult::~DescribeInstancesFullStatusResult()
{}

void DescribeInstancesFullStatusResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInstanceFullStatusSet = value["InstanceFullStatusSet"]["InstanceFullStatusType"];
	for (auto value : allInstanceFullStatusSet)
	{
		InstanceFullStatusType instanceFullStatusSetObject;
		if(!value["InstanceId"].isNull())
			instanceFullStatusSetObject.instanceId = value["InstanceId"].asString();
		auto allScheduledSystemEventSet = value["ScheduledSystemEventSet"]["ScheduledSystemEventType"];
		for (auto value : allScheduledSystemEventSet)
		{
			InstanceFullStatusType::ScheduledSystemEventType scheduledSystemEventSetObject;
			if(!value["EventId"].isNull())
				scheduledSystemEventSetObject.eventId = value["EventId"].asString();
			if(!value["EventPublishTime"].isNull())
				scheduledSystemEventSetObject.eventPublishTime = value["EventPublishTime"].asString();
			if(!value["NotBefore"].isNull())
				scheduledSystemEventSetObject.notBefore = value["NotBefore"].asString();
			auto eventCycleStatusNode = value["EventCycleStatus"];
			if(!eventCycleStatusNode["Code"].isNull())
				scheduledSystemEventSetObject.eventCycleStatus.code = std::stoi(eventCycleStatusNode["Code"].asString());
			if(!eventCycleStatusNode["Name"].isNull())
				scheduledSystemEventSetObject.eventCycleStatus.name = eventCycleStatusNode["Name"].asString();
			auto eventTypeNode = value["EventType"];
			if(!eventTypeNode["Code"].isNull())
				scheduledSystemEventSetObject.eventType.code = std::stoi(eventTypeNode["Code"].asString());
			if(!eventTypeNode["Name"].isNull())
				scheduledSystemEventSetObject.eventType.name = eventTypeNode["Name"].asString();
			auto extendedAttributeNode = value["ExtendedAttribute"];
			if(!extendedAttributeNode["DiskId"].isNull())
				scheduledSystemEventSetObject.extendedAttribute.diskId = extendedAttributeNode["DiskId"].asString();
			if(!extendedAttributeNode["Device"].isNull())
				scheduledSystemEventSetObject.extendedAttribute.device = extendedAttributeNode["Device"].asString();
			instanceFullStatusSetObject.scheduledSystemEventSet.push_back(scheduledSystemEventSetObject);
		}
		auto statusNode = value["Status"];
		if(!statusNode["Code"].isNull())
			instanceFullStatusSetObject.status.code = std::stoi(statusNode["Code"].asString());
		if(!statusNode["Name"].isNull())
			instanceFullStatusSetObject.status.name = statusNode["Name"].asString();
		auto healthStatusNode = value["HealthStatus"];
		if(!healthStatusNode["Code"].isNull())
			instanceFullStatusSetObject.healthStatus.code = std::stoi(healthStatusNode["Code"].asString());
		if(!healthStatusNode["Name"].isNull())
			instanceFullStatusSetObject.healthStatus.name = healthStatusNode["Name"].asString();
		instanceFullStatusSet_.push_back(instanceFullStatusSetObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeInstancesFullStatusResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstancesFullStatusResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesFullStatusResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstancesFullStatusResult::InstanceFullStatusType> DescribeInstancesFullStatusResult::getInstanceFullStatusSet()const
{
	return instanceFullStatusSet_;
}

