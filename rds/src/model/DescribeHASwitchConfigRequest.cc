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

#include <alibabacloud/rds/model/DescribeHASwitchConfigRequest.h>

using AlibabaCloud::Rds::Model::DescribeHASwitchConfigRequest;

DescribeHASwitchConfigRequest::DescribeHASwitchConfigRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeHASwitchConfig")
{}

DescribeHASwitchConfigRequest::~DescribeHASwitchConfigRequest()
{}

long DescribeHASwitchConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeHASwitchConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeHASwitchConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeHASwitchConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeHASwitchConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeHASwitchConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeHASwitchConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeHASwitchConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeHASwitchConfigRequest::getRegionId()const
{
	return regionId_;
}

void DescribeHASwitchConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeHASwitchConfigRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeHASwitchConfigRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

