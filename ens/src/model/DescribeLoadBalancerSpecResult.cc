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

#include <alibabacloud/ens/model/DescribeLoadBalancerSpecResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeLoadBalancerSpecResult::DescribeLoadBalancerSpecResult() :
	ServiceResult()
{}

DescribeLoadBalancerSpecResult::DescribeLoadBalancerSpecResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerSpecResult::~DescribeLoadBalancerSpecResult()
{}

void DescribeLoadBalancerSpecResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLoadBalancerSpecsNode = value["LoadBalancerSpecs"]["LoadBalancerSpecsItem"];
	for (auto valueLoadBalancerSpecsLoadBalancerSpecsItem : allLoadBalancerSpecsNode)
	{
		LoadBalancerSpecsItem loadBalancerSpecsObject;
		if(!valueLoadBalancerSpecsLoadBalancerSpecsItem["DisplayName"].isNull())
			loadBalancerSpecsObject.displayName = valueLoadBalancerSpecsLoadBalancerSpecsItem["DisplayName"].asString();
		if(!valueLoadBalancerSpecsLoadBalancerSpecsItem["LoadBalancerSpec"].isNull())
			loadBalancerSpecsObject.loadBalancerSpec = valueLoadBalancerSpecsLoadBalancerSpecsItem["LoadBalancerSpec"].asString();
		loadBalancerSpecs_.push_back(loadBalancerSpecsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLoadBalancerSpecResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLoadBalancerSpecResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeLoadBalancerSpecResult::LoadBalancerSpecsItem> DescribeLoadBalancerSpecResult::getLoadBalancerSpecs()const
{
	return loadBalancerSpecs_;
}

int DescribeLoadBalancerSpecResult::getPageNumber()const
{
	return pageNumber_;
}

