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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayHaRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSmartAccessGatewayHaRequest;

DescribeSmartAccessGatewayHaRequest::DescribeSmartAccessGatewayHaRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSmartAccessGatewayHa")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSmartAccessGatewayHaRequest::~DescribeSmartAccessGatewayHaRequest()
{}

long DescribeSmartAccessGatewayHaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSmartAccessGatewayHaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSmartAccessGatewayHaRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSmartAccessGatewayHaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSmartAccessGatewayHaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSmartAccessGatewayHaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSmartAccessGatewayHaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSmartAccessGatewayHaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSmartAccessGatewayHaRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSmartAccessGatewayHaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSmartAccessGatewayHaRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSmartAccessGatewayHaRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

