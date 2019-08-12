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

#include <alibabacloud/smartag/model/DescribeGrantSagRulesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeGrantSagRulesRequest;

DescribeGrantSagRulesRequest::DescribeGrantSagRulesRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeGrantSagRules")
{}

DescribeGrantSagRulesRequest::~DescribeGrantSagRulesRequest()
{}

long DescribeGrantSagRulesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeGrantSagRulesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeGrantSagRulesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeGrantSagRulesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeGrantSagRulesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeGrantSagRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeGrantSagRulesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeGrantSagRulesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeGrantSagRulesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGrantSagRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeGrantSagRulesRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeGrantSagRulesRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long DescribeGrantSagRulesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeGrantSagRulesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeGrantSagRulesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeGrantSagRulesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

