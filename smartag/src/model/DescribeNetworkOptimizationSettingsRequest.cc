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

#include <alibabacloud/smartag/model/DescribeNetworkOptimizationSettingsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeNetworkOptimizationSettingsRequest;

DescribeNetworkOptimizationSettingsRequest::DescribeNetworkOptimizationSettingsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeNetworkOptimizationSettings")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeNetworkOptimizationSettingsRequest::~DescribeNetworkOptimizationSettingsRequest()
{}

long DescribeNetworkOptimizationSettingsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkOptimizationSettingsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeNetworkOptimizationSettingsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNetworkOptimizationSettingsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeNetworkOptimizationSettingsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkOptimizationSettingsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeNetworkOptimizationSettingsRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void DescribeNetworkOptimizationSettingsRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setParameter("NetworkOptId", networkOptId);
}

int DescribeNetworkOptimizationSettingsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkOptimizationSettingsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeNetworkOptimizationSettingsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkOptimizationSettingsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNetworkOptimizationSettingsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNetworkOptimizationSettingsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeNetworkOptimizationSettingsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkOptimizationSettingsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

