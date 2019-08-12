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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayRoutesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSmartAccessGatewayRoutesRequest;

DescribeSmartAccessGatewayRoutesRequest::DescribeSmartAccessGatewayRoutesRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSmartAccessGatewayRoutes")
{}

DescribeSmartAccessGatewayRoutesRequest::~DescribeSmartAccessGatewayRoutesRequest()
{}

long DescribeSmartAccessGatewayRoutesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSmartAccessGatewayRoutesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSmartAccessGatewayRoutesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSmartAccessGatewayRoutesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSmartAccessGatewayRoutesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSmartAccessGatewayRoutesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeSmartAccessGatewayRoutesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSmartAccessGatewayRoutesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSmartAccessGatewayRoutesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSmartAccessGatewayRoutesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSmartAccessGatewayRoutesRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSmartAccessGatewayRoutesRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long DescribeSmartAccessGatewayRoutesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSmartAccessGatewayRoutesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSmartAccessGatewayRoutesRequest::getPageNubmer()const
{
	return pageNubmer_;
}

void DescribeSmartAccessGatewayRoutesRequest::setPageNubmer(const std::string& pageNubmer)
{
	pageNubmer_ = pageNubmer;
	setCoreParameter("PageNubmer", pageNubmer);
}

