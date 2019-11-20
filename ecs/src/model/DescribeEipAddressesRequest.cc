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

#include <alibabacloud/ecs/model/DescribeEipAddressesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeEipAddressesRequest;

DescribeEipAddressesRequest::DescribeEipAddressesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeEipAddresses")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEipAddressesRequest::~DescribeEipAddressesRequest()
{}

long DescribeEipAddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeEipAddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeEipAddressesRequest::getFilter2Value()const
{
	return filter2Value_;
}

void DescribeEipAddressesRequest::setFilter2Value(const std::string& filter2Value)
{
	filter2Value_ = filter2Value;
	setCoreParameter("Filter2Value", filter2Value);
}

std::string DescribeEipAddressesRequest::getISP()const
{
	return iSP_;
}

void DescribeEipAddressesRequest::setISP(const std::string& iSP)
{
	iSP_ = iSP;
	setCoreParameter("ISP", iSP);
}

std::string DescribeEipAddressesRequest::getAllocationId()const
{
	return allocationId_;
}

void DescribeEipAddressesRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setCoreParameter("AllocationId", allocationId);
}

std::string DescribeEipAddressesRequest::getEipAddress()const
{
	return eipAddress_;
}

void DescribeEipAddressesRequest::setEipAddress(const std::string& eipAddress)
{
	eipAddress_ = eipAddress;
	setCoreParameter("EipAddress", eipAddress);
}

int DescribeEipAddressesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeEipAddressesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeEipAddressesRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeEipAddressesRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setCoreParameter("LockReason", lockReason);
}

std::string DescribeEipAddressesRequest::getFilter1Key()const
{
	return filter1Key_;
}

void DescribeEipAddressesRequest::setFilter1Key(const std::string& filter1Key)
{
	filter1Key_ = filter1Key;
	setCoreParameter("Filter1Key", filter1Key);
}

std::string DescribeEipAddressesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEipAddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeEipAddressesRequest::getAssociatedInstanceType()const
{
	return associatedInstanceType_;
}

void DescribeEipAddressesRequest::setAssociatedInstanceType(const std::string& associatedInstanceType)
{
	associatedInstanceType_ = associatedInstanceType;
	setCoreParameter("AssociatedInstanceType", associatedInstanceType);
}

int DescribeEipAddressesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEipAddressesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEipAddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeEipAddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeEipAddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeEipAddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeEipAddressesRequest::getFilter1Value()const
{
	return filter1Value_;
}

void DescribeEipAddressesRequest::setFilter1Value(const std::string& filter1Value)
{
	filter1Value_ = filter1Value;
	setCoreParameter("Filter1Value", filter1Value);
}

std::string DescribeEipAddressesRequest::getFilter2Key()const
{
	return filter2Key_;
}

void DescribeEipAddressesRequest::setFilter2Key(const std::string& filter2Key)
{
	filter2Key_ = filter2Key;
	setCoreParameter("Filter2Key", filter2Key);
}

long DescribeEipAddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeEipAddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeEipAddressesRequest::getChargeType()const
{
	return chargeType_;
}

void DescribeEipAddressesRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

std::string DescribeEipAddressesRequest::getAssociatedInstanceId()const
{
	return associatedInstanceId_;
}

void DescribeEipAddressesRequest::setAssociatedInstanceId(const std::string& associatedInstanceId)
{
	associatedInstanceId_ = associatedInstanceId;
	setCoreParameter("AssociatedInstanceId", associatedInstanceId);
}

std::string DescribeEipAddressesRequest::getStatus()const
{
	return status_;
}

void DescribeEipAddressesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

