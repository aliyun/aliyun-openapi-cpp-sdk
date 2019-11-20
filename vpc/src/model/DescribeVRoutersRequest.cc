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

#include <alibabacloud/vpc/model/DescribeVRoutersRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVRoutersRequest;

DescribeVRoutersRequest::DescribeVRoutersRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVRouters")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVRoutersRequest::~DescribeVRoutersRequest()
{}

long DescribeVRoutersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVRoutersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVRoutersRequest::getVRouterId()const
{
	return vRouterId_;
}

void DescribeVRoutersRequest::setVRouterId(const std::string& vRouterId)
{
	vRouterId_ = vRouterId;
	setCoreParameter("VRouterId", vRouterId);
}

int DescribeVRoutersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVRoutersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVRoutersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVRoutersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeVRoutersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVRoutersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVRoutersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVRoutersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVRoutersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVRoutersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeVRoutersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVRoutersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

