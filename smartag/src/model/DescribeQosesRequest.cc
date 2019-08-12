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

#include <alibabacloud/smartag/model/DescribeQosesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeQosesRequest;

DescribeQosesRequest::DescribeQosesRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeQoses")
{}

DescribeQosesRequest::~DescribeQosesRequest()
{}

long DescribeQosesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeQosesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeQosesRequest::getQosName()const
{
	return qosName_;
}

void DescribeQosesRequest::setQosName(const std::string& qosName)
{
	qosName_ = qosName;
	setCoreParameter("QosName", std::to_string(qosName));
}

std::string DescribeQosesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeQosesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeQosesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeQosesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeQosesRequest::getQosIds()const
{
	return qosIds_;
}

void DescribeQosesRequest::setQosIds(const std::string& qosIds)
{
	qosIds_ = qosIds;
	setCoreParameter("QosIds", std::to_string(qosIds));
}

std::string DescribeQosesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeQosesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeQosesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeQosesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeQosesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeQosesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeQosesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeQosesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

