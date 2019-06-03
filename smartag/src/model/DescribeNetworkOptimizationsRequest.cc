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

#include <alibabacloud/smartag/model/DescribeNetworkOptimizationsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeNetworkOptimizationsRequest;

DescribeNetworkOptimizationsRequest::DescribeNetworkOptimizationsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeNetworkOptimizations")
{}

DescribeNetworkOptimizationsRequest::~DescribeNetworkOptimizationsRequest()
{}

long DescribeNetworkOptimizationsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkOptimizationsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeNetworkOptimizationsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkOptimizationsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNetworkOptimizationsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkOptimizationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeNetworkOptimizationsRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void DescribeNetworkOptimizationsRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setCoreParameter("NetworkOptId", networkOptId);
}

int DescribeNetworkOptimizationsRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeNetworkOptimizationsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

std::string DescribeNetworkOptimizationsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNetworkOptimizationsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeNetworkOptimizationsRequest::getCcnId()const
{
	return ccnId_;
}

void DescribeNetworkOptimizationsRequest::setCcnId(const std::string& ccnId)
{
	ccnId_ = ccnId;
	setCoreParameter("CcnId", ccnId);
}

std::string DescribeNetworkOptimizationsRequest::getName()const
{
	return name_;
}

void DescribeNetworkOptimizationsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int DescribeNetworkOptimizationsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkOptimizationsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeNetworkOptimizationsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkOptimizationsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

