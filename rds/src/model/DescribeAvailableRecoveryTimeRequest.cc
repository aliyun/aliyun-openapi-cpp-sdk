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

#include <alibabacloud/rds/model/DescribeAvailableRecoveryTimeRequest.h>

using AlibabaCloud::Rds::Model::DescribeAvailableRecoveryTimeRequest;

DescribeAvailableRecoveryTimeRequest::DescribeAvailableRecoveryTimeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeAvailableRecoveryTime")
{}

DescribeAvailableRecoveryTimeRequest::~DescribeAvailableRecoveryTimeRequest()
{}

long DescribeAvailableRecoveryTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableRecoveryTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAvailableRecoveryTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableRecoveryTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAvailableRecoveryTimeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableRecoveryTimeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeAvailableRecoveryTimeRequest::getCrossBackupId()const
{
	return crossBackupId_;
}

void DescribeAvailableRecoveryTimeRequest::setCrossBackupId(int crossBackupId)
{
	crossBackupId_ = crossBackupId;
	setCoreParameter("CrossBackupId", std::to_string(crossBackupId));
}

long DescribeAvailableRecoveryTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableRecoveryTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAvailableRecoveryTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableRecoveryTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

