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

#include <alibabacloud/smartag/model/DescribeNetworkOptimizationSagsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeNetworkOptimizationSagsRequest;

DescribeNetworkOptimizationSagsRequest::DescribeNetworkOptimizationSagsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeNetworkOptimizationSags")
{}

DescribeNetworkOptimizationSagsRequest::~DescribeNetworkOptimizationSagsRequest()
{}

long DescribeNetworkOptimizationSagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkOptimizationSagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeNetworkOptimizationSagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkOptimizationSagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNetworkOptimizationSagsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkOptimizationSagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeNetworkOptimizationSagsRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void DescribeNetworkOptimizationSagsRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setCoreParameter("NetworkOptId", networkOptId);
}

int DescribeNetworkOptimizationSagsRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeNetworkOptimizationSagsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

std::string DescribeNetworkOptimizationSagsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNetworkOptimizationSagsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeNetworkOptimizationSagsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkOptimizationSagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeNetworkOptimizationSagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkOptimizationSagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

