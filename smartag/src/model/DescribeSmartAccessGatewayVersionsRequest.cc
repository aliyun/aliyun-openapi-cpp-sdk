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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayVersionsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSmartAccessGatewayVersionsRequest;

DescribeSmartAccessGatewayVersionsRequest::DescribeSmartAccessGatewayVersionsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSmartAccessGatewayVersions")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSmartAccessGatewayVersionsRequest::~DescribeSmartAccessGatewayVersionsRequest()
{}

long DescribeSmartAccessGatewayVersionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSmartAccessGatewayVersionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSmartAccessGatewayVersionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSmartAccessGatewayVersionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeSmartAccessGatewayVersionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSmartAccessGatewayVersionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSmartAccessGatewayVersionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSmartAccessGatewayVersionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeSmartAccessGatewayVersionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSmartAccessGatewayVersionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSmartAccessGatewayVersionsRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSmartAccessGatewayVersionsRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

