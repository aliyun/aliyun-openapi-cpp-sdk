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

#include <alibabacloud/vpc/model/DescribeNetworkAclsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNetworkAclsRequest;

DescribeNetworkAclsRequest::DescribeNetworkAclsRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeNetworkAcls")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeNetworkAclsRequest::~DescribeNetworkAclsRequest()
{}

long DescribeNetworkAclsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkAclsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeNetworkAclsRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeNetworkAclsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int DescribeNetworkAclsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNetworkAclsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeNetworkAclsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkAclsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeNetworkAclsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkAclsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeNetworkAclsRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void DescribeNetworkAclsRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setParameter("NetworkAclId", networkAclId);
}

std::string DescribeNetworkAclsRequest::getResourceId()const
{
	return resourceId_;
}

void DescribeNetworkAclsRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string DescribeNetworkAclsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkAclsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNetworkAclsRequest::getNetworkAclName()const
{
	return networkAclName_;
}

void DescribeNetworkAclsRequest::setNetworkAclName(const std::string& networkAclName)
{
	networkAclName_ = networkAclName;
	setParameter("NetworkAclName", networkAclName);
}

long DescribeNetworkAclsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkAclsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeNetworkAclsRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeNetworkAclsRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribeNetworkAclsRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeNetworkAclsRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

