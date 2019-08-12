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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewaysRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSmartAccessGatewaysRequest;

DescribeSmartAccessGatewaysRequest::DescribeSmartAccessGatewaysRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSmartAccessGateways")
{}

DescribeSmartAccessGatewaysRequest::~DescribeSmartAccessGatewaysRequest()
{}

long DescribeSmartAccessGatewaysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSmartAccessGatewaysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSmartAccessGatewaysRequest::getSerialNumber()const
{
	return serialNumber_;
}

void DescribeSmartAccessGatewaysRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setCoreParameter("SerialNumber", std::to_string(serialNumber));
}

std::string DescribeSmartAccessGatewaysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSmartAccessGatewaysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeSmartAccessGatewaysRequest::getAclIds()const
{
	return aclIds_;
}

void DescribeSmartAccessGatewaysRequest::setAclIds(const std::string& aclIds)
{
	aclIds_ = aclIds;
	setCoreParameter("AclIds", std::to_string(aclIds));
}

std::string DescribeSmartAccessGatewaysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSmartAccessGatewaysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeSmartAccessGatewaysRequest::getAssociatedCcnId()const
{
	return associatedCcnId_;
}

void DescribeSmartAccessGatewaysRequest::setAssociatedCcnId(const std::string& associatedCcnId)
{
	associatedCcnId_ = associatedCcnId;
	setCoreParameter("AssociatedCcnId", std::to_string(associatedCcnId));
}

long DescribeSmartAccessGatewaysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSmartAccessGatewaysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeSmartAccessGatewaysRequest::getUnboundAclIds()const
{
	return unboundAclIds_;
}

void DescribeSmartAccessGatewaysRequest::setUnboundAclIds(const std::string& unboundAclIds)
{
	unboundAclIds_ = unboundAclIds;
	setCoreParameter("UnboundAclIds", std::to_string(unboundAclIds));
}

std::string DescribeSmartAccessGatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSmartAccessGatewaysRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSmartAccessGatewaysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSmartAccessGatewaysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeSmartAccessGatewaysRequest::getName()const
{
	return name_;
}

void DescribeSmartAccessGatewaysRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string DescribeSmartAccessGatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSmartAccessGatewaysRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSmartAccessGatewaysRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSmartAccessGatewaysRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

std::string DescribeSmartAccessGatewaysRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeSmartAccessGatewaysRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
}

std::string DescribeSmartAccessGatewaysRequest::getStatus()const
{
	return status_;
}

void DescribeSmartAccessGatewaysRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

