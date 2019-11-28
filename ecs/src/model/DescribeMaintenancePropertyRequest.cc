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

#include <alibabacloud/ecs/model/DescribeMaintenancePropertyRequest.h>

using AlibabaCloud::Ecs::Model::DescribeMaintenancePropertyRequest;

DescribeMaintenancePropertyRequest::DescribeMaintenancePropertyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeMaintenanceProperty")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMaintenancePropertyRequest::~DescribeMaintenancePropertyRequest()
{}

long DescribeMaintenancePropertyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMaintenancePropertyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeMaintenancePropertyRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeMaintenancePropertyRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeMaintenancePropertyRequest::getRegionId()const
{
	return regionId_;
}

void DescribeMaintenancePropertyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long DescribeMaintenancePropertyRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMaintenancePropertyRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeMaintenancePropertyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMaintenancePropertyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeMaintenancePropertyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeMaintenancePropertyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeMaintenancePropertyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMaintenancePropertyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DescribeMaintenancePropertyRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeMaintenancePropertyRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setCoreParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

