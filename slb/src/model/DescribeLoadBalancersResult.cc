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

#include <alibabacloud/slb/model/DescribeLoadBalancersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

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
	auto allLoadBalancers = value["LoadBalancers"]["LoadBalancer"];
	for (auto value : allLoadBalancers)
	{
		LoadBalancer loadBalancersObject;
		if(!value["LoadBalancerId"].isNull())
			loadBalancersObject.loadBalancerId = value["LoadBalancerId"].asString();
		if(!value["LoadBalancerName"].isNull())
			loadBalancersObject.loadBalancerName = value["LoadBalancerName"].asString();
		if(!value["LoadBalancerStatus"].isNull())
			loadBalancersObject.loadBalancerStatus = value["LoadBalancerStatus"].asString();
		if(!value["Address"].isNull())
			loadBalancersObject.address = value["Address"].asString();
		if(!value["AddressType"].isNull())
			loadBalancersObject.addressType = value["AddressType"].asString();
		if(!value["RegionId"].isNull())
			loadBalancersObject.regionId = value["RegionId"].asString();
		if(!value["RegionIdAlias"].isNull())
			loadBalancersObject.regionIdAlias = value["RegionIdAlias"].asString();
		if(!value["VSwitchId"].isNull())
			loadBalancersObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["VpcId"].isNull())
			loadBalancersObject.vpcId = value["VpcId"].asString();
		if(!value["NetworkType"].isNull())
			loadBalancersObject.networkType = value["NetworkType"].asString();
		if(!value["MasterZoneId"].isNull())
			loadBalancersObject.masterZoneId = value["MasterZoneId"].asString();
		if(!value["SlaveZoneId"].isNull())
			loadBalancersObject.slaveZoneId = value["SlaveZoneId"].asString();
		if(!value["InternetChargeType"].isNull())
			loadBalancersObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["CreateTime"].isNull())
			loadBalancersObject.createTime = value["CreateTime"].asString();
		if(!value["CreateTimeStamp"].isNull())
			loadBalancersObject.createTimeStamp = std::stol(value["CreateTimeStamp"].asString());
		if(!value["PayType"].isNull())
			loadBalancersObject.payType = value["PayType"].asString();
		if(!value["ResourceGroupId"].isNull())
			loadBalancersObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["AddressIPVersion"].isNull())
			loadBalancersObject.addressIPVersion = value["AddressIPVersion"].asString();
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

