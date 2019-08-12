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

#include <alibabacloud/vpc/model/DescribeCustomerGatewayRequest.h>

using AlibabaCloud::Vpc::Model::DescribeCustomerGatewayRequest;

DescribeCustomerGatewayRequest::DescribeCustomerGatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeCustomerGateway")
{}

DescribeCustomerGatewayRequest::~DescribeCustomerGatewayRequest()
{}

long DescribeCustomerGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCustomerGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCustomerGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCustomerGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCustomerGatewayRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCustomerGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeCustomerGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCustomerGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeCustomerGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCustomerGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCustomerGatewayRequest::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

void DescribeCustomerGatewayRequest::setCustomerGatewayId(const std::string& customerGatewayId)
{
	customerGatewayId_ = customerGatewayId;
	setCoreParameter("CustomerGatewayId", customerGatewayId);
}

