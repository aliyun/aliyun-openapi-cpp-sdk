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

#include <alibabacloud/ecs/model/DescribeManagedInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeManagedInstancesResult::DescribeManagedInstancesResult() :
	ServiceResult()
{}

DescribeManagedInstancesResult::DescribeManagedInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeManagedInstancesResult::~DescribeManagedInstancesResult()
{}

void DescribeManagedInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["LastInvokedTime"].isNull())
			instancesObject.lastInvokedTime = valueInstancesInstance["LastInvokedTime"].asString();
		if(!valueInstancesInstance["Connected"].isNull())
			instancesObject.connected = valueInstancesInstance["Connected"].asString() == "true";
		if(!valueInstancesInstance["InternetIp"].isNull())
			instancesObject.internetIp = valueInstancesInstance["InternetIp"].asString();
		if(!valueInstancesInstance["Hostname"].isNull())
			instancesObject.hostname = valueInstancesInstance["Hostname"].asString();
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["ActivationId"].isNull())
			instancesObject.activationId = valueInstancesInstance["ActivationId"].asString();
		if(!valueInstancesInstance["IntranetIp"].isNull())
			instancesObject.intranetIp = valueInstancesInstance["IntranetIp"].asString();
		if(!valueInstancesInstance["AgentVersion"].isNull())
			instancesObject.agentVersion = valueInstancesInstance["AgentVersion"].asString();
		if(!valueInstancesInstance["RegistrationTime"].isNull())
			instancesObject.registrationTime = valueInstancesInstance["RegistrationTime"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["OsType"].isNull())
			instancesObject.osType = valueInstancesInstance["OsType"].asString();
		if(!valueInstancesInstance["OsVersion"].isNull())
			instancesObject.osVersion = valueInstancesInstance["OsVersion"].asString();
		if(!valueInstancesInstance["InvocationCount"].isNull())
			instancesObject.invocationCount = std::stol(valueInstancesInstance["InvocationCount"].asString());
		if(!valueInstancesInstance["MachineId"].isNull())
			instancesObject.machineId = valueInstancesInstance["MachineId"].asString();
		if(!valueInstancesInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesInstance["ResourceGroupId"].asString();
		auto allTagsNode = valueInstancesInstance["Tags"]["Tag"];
		for (auto valueInstancesInstanceTagsTag : allTagsNode)
		{
			Instance::Tag tagsObject;
			if(!valueInstancesInstanceTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueInstancesInstanceTagsTag["TagKey"].asString();
			if(!valueInstancesInstanceTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueInstancesInstanceTagsTag["TagValue"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		instances_.push_back(instancesObject);
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

std::vector<DescribeManagedInstancesResult::Instance> DescribeManagedInstancesResult::getInstances()const
{
	return instances_;
}

long DescribeManagedInstancesResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeManagedInstancesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeManagedInstancesResult::getNextToken()const
{
	return nextToken_;
}

long DescribeManagedInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

