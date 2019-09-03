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

#include <alibabacloud/rds/model/PreCheckDBInstanceOperationRequest.h>

using AlibabaCloud::Rds::Model::PreCheckDBInstanceOperationRequest;

PreCheckDBInstanceOperationRequest::PreCheckDBInstanceOperationRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckDBInstanceOperation")
{}

PreCheckDBInstanceOperationRequest::~PreCheckDBInstanceOperationRequest()
{}

long PreCheckDBInstanceOperationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckDBInstanceOperationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PreCheckDBInstanceOperationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckDBInstanceOperationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long PreCheckDBInstanceOperationRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckDBInstanceOperationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckDBInstanceOperationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckDBInstanceOperationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PreCheckDBInstanceOperationRequest::getRegionId()const
{
	return regionId_;
}

void PreCheckDBInstanceOperationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PreCheckDBInstanceOperationRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckDBInstanceOperationRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string PreCheckDBInstanceOperationRequest::getOperation()const
{
	return operation_;
}

void PreCheckDBInstanceOperationRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setCoreParameter("Operation", operation);
}

