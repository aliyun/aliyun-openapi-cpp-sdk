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

#include <alibabacloud/ecs/model/DescribeActivationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeActivationsResult::DescribeActivationsResult() :
	ServiceResult()
{}

DescribeActivationsResult::DescribeActivationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActivationsResult::~DescribeActivationsResult()
{}

void DescribeActivationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActivationListNode = value["ActivationList"]["Activation"];
	for (auto valueActivationListActivation : allActivationListNode)
	{
		Activation activationListObject;
		if(!valueActivationListActivation["CreationTime"].isNull())
			activationListObject.creationTime = valueActivationListActivation["CreationTime"].asString();
		if(!valueActivationListActivation["DeregisteredCount"].isNull())
			activationListObject.deregisteredCount = std::stoi(valueActivationListActivation["DeregisteredCount"].asString());
		if(!valueActivationListActivation["InstanceCount"].isNull())
			activationListObject.instanceCount = std::stoi(valueActivationListActivation["InstanceCount"].asString());
		if(!valueActivationListActivation["Description"].isNull())
			activationListObject.description = valueActivationListActivation["Description"].asString();
		if(!valueActivationListActivation["RegisteredCount"].isNull())
			activationListObject.registeredCount = std::stoi(valueActivationListActivation["RegisteredCount"].asString());
		if(!valueActivationListActivation["InstanceName"].isNull())
			activationListObject.instanceName = valueActivationListActivation["InstanceName"].asString();
		if(!valueActivationListActivation["Disabled"].isNull())
			activationListObject.disabled = valueActivationListActivation["Disabled"].asString() == "true";
		if(!valueActivationListActivation["IpAddressRange"].isNull())
			activationListObject.ipAddressRange = valueActivationListActivation["IpAddressRange"].asString();
		if(!valueActivationListActivation["TimeToLiveInHours"].isNull())
			activationListObject.timeToLiveInHours = std::stol(valueActivationListActivation["TimeToLiveInHours"].asString());
		if(!valueActivationListActivation["ActivationId"].isNull())
			activationListObject.activationId = valueActivationListActivation["ActivationId"].asString();
		if(!valueActivationListActivation["ResourceGroupId"].isNull())
			activationListObject.resourceGroupId = valueActivationListActivation["ResourceGroupId"].asString();
		auto allTagsNode = valueActivationListActivation["Tags"]["Tag"];
		for (auto valueActivationListActivationTagsTag : allTagsNode)
		{
			Activation::Tag tagsObject;
			if(!valueActivationListActivationTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueActivationListActivationTagsTag["TagKey"].asString();
			if(!valueActivationListActivationTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueActivationListActivationTagsTag["TagValue"].asString();
			activationListObject.tags.push_back(tagsObject);
		}
		activationList_.push_back(activationListObject);
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

long DescribeActivationsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeActivationsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeActivationsResult::getNextToken()const
{
	return nextToken_;
}

long DescribeActivationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeActivationsResult::Activation> DescribeActivationsResult::getActivationList()const
{
	return activationList_;
}

