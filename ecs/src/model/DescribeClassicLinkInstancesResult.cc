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

#include <alibabacloud/ecs/model/DescribeClassicLinkInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeClassicLinkInstancesResult::DescribeClassicLinkInstancesResult() :
	ServiceResult()
{}

DescribeClassicLinkInstancesResult::DescribeClassicLinkInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClassicLinkInstancesResult::~DescribeClassicLinkInstancesResult()
{}

void DescribeClassicLinkInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLinks = value["Links"]["Link"];
	for (auto value : allLinks)
	{
		Link linkObject;
		linkObject.instanceId = value["InstanceId"].asString();
		linkObject.vpcId = value["VpcId"].asString();
		links_.push_back(linkObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeClassicLinkInstancesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeClassicLinkInstancesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeClassicLinkInstancesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeClassicLinkInstancesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeClassicLinkInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeClassicLinkInstancesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

