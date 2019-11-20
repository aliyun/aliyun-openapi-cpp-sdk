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

#include <alibabacloud/smartag/model/DescribePolicyBasedRoutingsRequest.h>

using AlibabaCloud::Smartag::Model::DescribePolicyBasedRoutingsRequest;

DescribePolicyBasedRoutingsRequest::DescribePolicyBasedRoutingsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribePolicyBasedRoutings")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePolicyBasedRoutingsRequest::~DescribePolicyBasedRoutingsRequest()
{}

long DescribePolicyBasedRoutingsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePolicyBasedRoutingsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribePolicyBasedRoutingsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribePolicyBasedRoutingsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribePolicyBasedRoutingsRequest::getRegionId()const
{
	return regionId_;
}

void DescribePolicyBasedRoutingsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribePolicyBasedRoutingsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePolicyBasedRoutingsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePolicyBasedRoutingsRequest::getPbrInstanceId()const
{
	return pbrInstanceId_;
}

void DescribePolicyBasedRoutingsRequest::setPbrInstanceId(const std::string& pbrInstanceId)
{
	pbrInstanceId_ = pbrInstanceId;
	setCoreParameter("PbrInstanceId", pbrInstanceId);
}

std::string DescribePolicyBasedRoutingsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePolicyBasedRoutingsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribePolicyBasedRoutingsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribePolicyBasedRoutingsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribePolicyBasedRoutingsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePolicyBasedRoutingsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePolicyBasedRoutingsRequest::getName()const
{
	return name_;
}

void DescribePolicyBasedRoutingsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string DescribePolicyBasedRoutingsRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribePolicyBasedRoutingsRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

