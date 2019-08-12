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

#include <alibabacloud/ecs/model/DescribeForwardTableEntriesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeForwardTableEntriesRequest;

DescribeForwardTableEntriesRequest::DescribeForwardTableEntriesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeForwardTableEntries")
{}

DescribeForwardTableEntriesRequest::~DescribeForwardTableEntriesRequest()
{}

bool DescribeForwardTableEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeForwardTableEntriesRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string DescribeForwardTableEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeForwardTableEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeForwardTableEntriesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeForwardTableEntriesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeForwardTableEntriesRequest::getForwardEntryId()const
{
	return forwardEntryId_;
}

void DescribeForwardTableEntriesRequest::setForwardEntryId(const std::string& forwardEntryId)
{
	forwardEntryId_ = forwardEntryId;
	setCoreParameter("ForwardEntryId", forwardEntryId);
}

std::string DescribeForwardTableEntriesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeForwardTableEntriesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeForwardTableEntriesRequest::getForwardTableId()const
{
	return forwardTableId_;
}

void DescribeForwardTableEntriesRequest::setForwardTableId(const std::string& forwardTableId)
{
	forwardTableId_ = forwardTableId;
	setCoreParameter("ForwardTableId", forwardTableId);
}

int DescribeForwardTableEntriesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeForwardTableEntriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

bool DescribeForwardTableEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeForwardTableEntriesRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

int DescribeForwardTableEntriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeForwardTableEntriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

