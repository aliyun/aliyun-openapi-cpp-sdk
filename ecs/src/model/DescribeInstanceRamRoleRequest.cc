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

#include <alibabacloud/ecs/model/DescribeInstanceRamRoleRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceRamRoleRequest;

DescribeInstanceRamRoleRequest::DescribeInstanceRamRoleRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceRamRole")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceRamRoleRequest::~DescribeInstanceRamRoleRequest()
{}

long DescribeInstanceRamRoleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceRamRoleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeInstanceRamRoleRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceRamRoleRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstanceRamRoleRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceRamRoleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeInstanceRamRoleRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceRamRoleRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstanceRamRoleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceRamRoleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceRamRoleRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void DescribeInstanceRamRoleRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setCoreParameter("RamRoleName", ramRoleName);
}

long DescribeInstanceRamRoleRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceRamRoleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstanceRamRoleRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeInstanceRamRoleRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

