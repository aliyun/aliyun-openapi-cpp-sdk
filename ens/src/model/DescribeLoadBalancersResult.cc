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

#include <alibabacloud/ens/model/DescribeLoadBalancersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeLoadBalancersResult::DescribeLoadBalancersResult() :
	ServiceResult()
{}

DescribeLoadBalancersResult::DescribeLoadBalancersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancersResult::~DescribeLoadBalancersResult()
{}

void DescribeLoadBalancersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLoadBalancersNode = value["LoadBalancers"]["LoadBalancer"];
	for (auto valueLoadBalancersLoadBalancer : allLoadBalancersNode)
	{
		LoadBalancer loadBalancersObject;
		if(!valueLoadBalancersLoadBalancer["LoadBalancerId"].isNull())
			loadBalancersObject.loadBalancerId = valueLoadBalancersLoadBalancer["LoadBalancerId"].asString();
		if(!valueLoadBalancersLoadBalancer["LoadBalancerName"].isNull())
			loadBalancersObject.loadBalancerName = valueLoadBalancersLoadBalancer["LoadBalancerName"].asString();
		if(!valueLoadBalancersLoadBalancer["LoadBalancerStatus"].isNull())
			loadBalancersObject.loadBalancerStatus = valueLoadBalancersLoadBalancer["LoadBalancerStatus"].asString();
		if(!valueLoadBalancersLoadBalancer["Address"].isNull())
			loadBalancersObject.address = valueLoadBalancersLoadBalancer["Address"].asString();
		if(!valueLoadBalancersLoadBalancer["EnsRegionId"].isNull())
			loadBalancersObject.ensRegionId = valueLoadBalancersLoadBalancer["EnsRegionId"].asString();
		if(!valueLoadBalancersLoadBalancer["NetworkId"].isNull())
			loadBalancersObject.networkId = valueLoadBalancersLoadBalancer["NetworkId"].asString();
		if(!valueLoadBalancersLoadBalancer["VSwitchId"].isNull())
			loadBalancersObject.vSwitchId = valueLoadBalancersLoadBalancer["VSwitchId"].asString();
		if(!valueLoadBalancersLoadBalancer["CreateTime"].isNull())
			loadBalancersObject.createTime = valueLoadBalancersLoadBalancer["CreateTime"].asString();
		if(!valueLoadBalancersLoadBalancer["AddressIPVersion"].isNull())
			loadBalancersObject.addressIPVersion = valueLoadBalancersLoadBalancer["AddressIPVersion"].asString();
		if(!valueLoadBalancersLoadBalancer["PayType"].isNull())
			loadBalancersObject.payType = valueLoadBalancersLoadBalancer["PayType"].asString();
		loadBalancers_.push_back(loadBalancersObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLoadBalancersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLoadBalancersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLoadBalancersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLoadBalancersResult::LoadBalancer> DescribeLoadBalancersResult::getLoadBalancers()const
{
	return loadBalancers_;
}

