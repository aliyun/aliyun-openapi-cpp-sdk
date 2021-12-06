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

#include <alibabacloud/ecs/model/DescribeInstanceAttachmentAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceAttachmentAttributesResult::DescribeInstanceAttachmentAttributesResult() :
	ServiceResult()
{}

DescribeInstanceAttachmentAttributesResult::DescribeInstanceAttachmentAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAttachmentAttributesResult::~DescribeInstanceAttachmentAttributesResult()
{}

void DescribeInstanceAttachmentAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["PrivatePoolOptionsMatchCriteria"].isNull())
			instancesObject.privatePoolOptionsMatchCriteria = valueInstancesInstance["PrivatePoolOptionsMatchCriteria"].asString();
		if(!valueInstancesInstance["PrivatePoolOptionsId"].isNull())
			instancesObject.privatePoolOptionsId = valueInstancesInstance["PrivatePoolOptionsId"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeInstanceAttachmentAttributesResult::Instance> DescribeInstanceAttachmentAttributesResult::getInstances()const
{
	return instances_;
}

int DescribeInstanceAttachmentAttributesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstanceAttachmentAttributesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstanceAttachmentAttributesResult::getPageNumber()const
{
	return pageNumber_;
}

