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

#include <alibabacloud/rds/model/DescribeCollationTimeZonesRequest.h>

using AlibabaCloud::Rds::Model::DescribeCollationTimeZonesRequest;

DescribeCollationTimeZonesRequest::DescribeCollationTimeZonesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeCollationTimeZones")
{}

DescribeCollationTimeZonesRequest::~DescribeCollationTimeZonesRequest()
{}

long DescribeCollationTimeZonesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCollationTimeZonesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeCollationTimeZonesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCollationTimeZonesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

long DescribeCollationTimeZonesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCollationTimeZonesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeCollationTimeZonesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCollationTimeZonesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

