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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSmartAccessGatewaysRequest::~DescribeSmartAccessGatewaysRequest()
{}

long DescribeSmartAccessGatewaysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSmartAccessGatewaysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSmartAccessGatewaysRequest::getAclIds()const
{
	return aclIds_;
}

void DescribeSmartAccessGatewaysRequest::setAclIds(const std::string& aclIds)
{
	aclIds_ = aclIds;
	setParameter("AclIds", aclIds);
}

bool DescribeSmartAccessGatewaysRequest::getCanAssociateQos()const
{
	return canAssociateQos_;
}

void DescribeSmartAccessGatewaysRequest::setCanAssociateQos(bool canAssociateQos)
{
	canAssociateQos_ = canAssociateQos;
	setParameter("CanAssociateQos", canAssociateQos ? "true" : "false");
}

std::string DescribeSmartAccessGatewaysRequest::getSoftwareVersion()const
{
	return softwareVersion_;
}

void DescribeSmartAccessGatewaysRequest::setSoftwareVersion(const std::string& softwareVersion)
{
	softwareVersion_ = softwareVersion;
	setParameter("SoftwareVersion", softwareVersion);
}

std::string DescribeSmartAccessGatewaysRequest::getUnboundAclIds()const
{
	return unboundAclIds_;
}

void DescribeSmartAccessGatewaysRequest::setUnboundAclIds(const std::string& unboundAclIds)
{
	unboundAclIds_ = unboundAclIds;
	setParameter("UnboundAclIds", unboundAclIds);
}

int DescribeSmartAccessGatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSmartAccessGatewaysRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSmartAccessGatewaysRequest::getVersionComparator()const
{
	return versionComparator_;
}

void DescribeSmartAccessGatewaysRequest::setVersionComparator(const std::string& versionComparator)
{
	versionComparator_ = versionComparator;
	setParameter("VersionComparator", versionComparator);
}

std::string DescribeSmartAccessGatewaysRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeSmartAccessGatewaysRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeSmartAccessGatewaysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSmartAccessGatewaysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeSmartAccessGatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSmartAccessGatewaysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSmartAccessGatewaysRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeSmartAccessGatewaysRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribeSmartAccessGatewaysRequest::getHardwareType()const
{
	return hardwareType_;
}

void DescribeSmartAccessGatewaysRequest::setHardwareType(const std::string& hardwareType)
{
	hardwareType_ = hardwareType;
	setParameter("HardwareType", hardwareType);
}

std::vector<std::string> DescribeSmartAccessGatewaysRequest::getSmartAGIds()const
{
	return smartAGIds_;
}

void DescribeSmartAccessGatewaysRequest::setSmartAGIds(const std::vector<std::string>& smartAGIds)
{
	smartAGIds_ = smartAGIds;
	for(int dep1 = 0; dep1!= smartAGIds.size(); dep1++) {
		setParameter("SmartAGIds."+ std::to_string(dep1), smartAGIds.at(dep1));
	}
}

std::string DescribeSmartAccessGatewaysRequest::getSerialNumber()const
{
	return serialNumber_;
}

void DescribeSmartAccessGatewaysRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setParameter("SerialNumber", serialNumber);
}

std::string DescribeSmartAccessGatewaysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSmartAccessGatewaysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSmartAccessGatewaysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSmartAccessGatewaysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSmartAccessGatewaysRequest::getAssociatedCcnId()const
{
	return associatedCcnId_;
}

void DescribeSmartAccessGatewaysRequest::setAssociatedCcnId(const std::string& associatedCcnId)
{
	associatedCcnId_ = associatedCcnId;
	setParameter("AssociatedCcnId", associatedCcnId);
}

long DescribeSmartAccessGatewaysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSmartAccessGatewaysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSmartAccessGatewaysRequest::getBusinessState()const
{
	return businessState_;
}

void DescribeSmartAccessGatewaysRequest::setBusinessState(const std::string& businessState)
{
	businessState_ = businessState;
	setParameter("BusinessState", businessState);
}

std::string DescribeSmartAccessGatewaysRequest::getName()const
{
	return name_;
}

void DescribeSmartAccessGatewaysRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribeSmartAccessGatewaysRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSmartAccessGatewaysRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string DescribeSmartAccessGatewaysRequest::getStatus()const
{
	return status_;
}

void DescribeSmartAccessGatewaysRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

