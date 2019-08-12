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

#include <alibabacloud/smartag/model/DescribeSnatEntriesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSnatEntriesRequest;

DescribeSnatEntriesRequest::DescribeSnatEntriesRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSnatEntries")
{}

DescribeSnatEntriesRequest::~DescribeSnatEntriesRequest()
{}

long DescribeSnatEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSnatEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSnatEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSnatEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSnatEntriesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSnatEntriesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeSnatEntriesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSnatEntriesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeSnatEntriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSnatEntriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSnatEntriesRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSnatEntriesRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long DescribeSnatEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSnatEntriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeSnatEntriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnatEntriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

