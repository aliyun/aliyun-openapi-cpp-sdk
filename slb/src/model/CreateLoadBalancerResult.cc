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

#include <alibabacloud/slb/model/CreateLoadBalancerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateLoadBalancerResult::CreateLoadBalancerResult() :
	ServiceResult()
{}

CreateLoadBalancerResult::CreateLoadBalancerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateLoadBalancerResult::~CreateLoadBalancerResult()
{}

void CreateLoadBalancerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	loadBalancerId_ = value["LoadBalancerId"].asString();
	resourceGroupId_ = value["ResourceGroupId"].asString();
	address_ = value["Address"].asString();
	loadBalancerName_ = value["LoadBalancerName"].asString();
	vpcId_ = value["VpcId"].asString();
	vSwitchId_ = value["VSwitchId"].asString();
	networkType_ = value["NetworkType"].asString();
	orderId_ = std::stol(value["OrderId"].asString());

}

std::string CreateLoadBalancerResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

void CreateLoadBalancerResult::setLoadBalancerName(const std::string& loadBalancerName)
{
	loadBalancerName_ = loadBalancerName;
}

std::string CreateLoadBalancerResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateLoadBalancerResult::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
}

std::string CreateLoadBalancerResult::getAddress()const
{
	return address_;
}

void CreateLoadBalancerResult::setAddress(const std::string& address)
{
	address_ = address;
}

std::string CreateLoadBalancerResult::getVpcId()const
{
	return vpcId_;
}

void CreateLoadBalancerResult::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
}

std::string CreateLoadBalancerResult::getNetworkType()const
{
	return networkType_;
}

void CreateLoadBalancerResult::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
}

std::string CreateLoadBalancerResult::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateLoadBalancerResult::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
}

std::string CreateLoadBalancerResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateLoadBalancerResult::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
}

long CreateLoadBalancerResult::getOrderId()const
{
	return orderId_;
}

void CreateLoadBalancerResult::setOrderId(long orderId)
{
	orderId_ = orderId;
}

