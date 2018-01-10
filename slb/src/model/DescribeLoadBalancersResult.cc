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
		LoadBalancer loadBalancerObject;
		loadBalancerObject.loadBalancerId = value["LoadBalancerId"].asString();
		loadBalancerObject.loadBalancerName = value["LoadBalancerName"].asString();
		loadBalancerObject.loadBalancerStatus = value["LoadBalancerStatus"].asString();
		loadBalancerObject.address = value["Address"].asString();
		loadBalancerObject.addressType = value["AddressType"].asString();
		loadBalancerObject.regionId = value["RegionId"].asString();
		loadBalancerObject.regionIdAlias = value["RegionIdAlias"].asString();
		loadBalancerObject.vSwitchId = value["VSwitchId"].asString();
		loadBalancerObject.vpcId = value["VpcId"].asString();
		loadBalancerObject.networkType = value["NetworkType"].asString();
		loadBalancerObject.masterZoneId = value["MasterZoneId"].asString();
		loadBalancerObject.slaveZoneId = value["SlaveZoneId"].asString();
		loadBalancerObject.internetChargeType = value["InternetChargeType"].asString();
		loadBalancerObject.createTime = value["CreateTime"].asString();
		loadBalancerObject.createTimeStamp = std::stol(value["CreateTimeStamp"].asString());
		loadBalancerObject.payType = value["PayType"].asString();
		loadBalancerObject.resourceGroupId = value["ResourceGroupId"].asString();
		loadBalancers_.push_back(loadBalancerObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLoadBalancersResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeLoadBalancersResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeLoadBalancersResult::getPageSize()const
{
	return pageSize_;
}

void DescribeLoadBalancersResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeLoadBalancersResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLoadBalancersResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

