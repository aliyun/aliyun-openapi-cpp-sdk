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
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["AddressIPVersion"].isNull())
		addressIPVersion_ = value["AddressIPVersion"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["LoadBalancerName"].isNull())
		loadBalancerName_ = value["LoadBalancerName"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());

}

std::string CreateLoadBalancerResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

std::string CreateLoadBalancerResult::getVpcId()const
{
	return vpcId_;
}

std::string CreateLoadBalancerResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string CreateLoadBalancerResult::getAddress()const
{
	return address_;
}

std::string CreateLoadBalancerResult::getNetworkType()const
{
	return networkType_;
}

std::string CreateLoadBalancerResult::getAddressIPVersion()const
{
	return addressIPVersion_;
}

std::string CreateLoadBalancerResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string CreateLoadBalancerResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

long CreateLoadBalancerResult::getOrderId()const
{
	return orderId_;
}

