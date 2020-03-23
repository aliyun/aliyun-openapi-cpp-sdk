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

#include <alibabacloud/rds/model/DescribeSignedEventActionsRequest.h>

using AlibabaCloud::Rds::Model::DescribeSignedEventActionsRequest;

DescribeSignedEventActionsRequest::DescribeSignedEventActionsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeSignedEventActions")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSignedEventActionsRequest::~DescribeSignedEventActionsRequest()
{}

long DescribeSignedEventActionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSignedEventActionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeSignedEventActionsRequest::getBeginEventId()const
{
	return beginEventId_;
}

void DescribeSignedEventActionsRequest::setBeginEventId(int beginEventId)
{
	beginEventId_ = beginEventId;
	setParameter("BeginEventId", std::to_string(beginEventId));
}

std::string DescribeSignedEventActionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSignedEventActionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeSignedEventActionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSignedEventActionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSignedEventActionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSignedEventActionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSignedEventActionsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSignedEventActionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeSignedEventActionsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSignedEventActionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

