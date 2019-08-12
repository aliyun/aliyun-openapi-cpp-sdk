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

#include <alibabacloud/rds/model/ModifyReadWriteSplittingConnectionRequest.h>

using AlibabaCloud::Rds::Model::ModifyReadWriteSplittingConnectionRequest;

ModifyReadWriteSplittingConnectionRequest::ModifyReadWriteSplittingConnectionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyReadWriteSplittingConnection")
{}

ModifyReadWriteSplittingConnectionRequest::~ModifyReadWriteSplittingConnectionRequest()
{}

long ModifyReadWriteSplittingConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReadWriteSplittingConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyReadWriteSplittingConnectionRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void ModifyReadWriteSplittingConnectionRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setCoreParameter("ConnectionStringPrefix", std::to_string(connectionStringPrefix));
}

std::string ModifyReadWriteSplittingConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReadWriteSplittingConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyReadWriteSplittingConnectionRequest::getPort()const
{
	return port_;
}

void ModifyReadWriteSplittingConnectionRequest::setPort(const std::string& port)
{
	port_ = port;
	setCoreParameter("Port", std::to_string(port));
}

std::string ModifyReadWriteSplittingConnectionRequest::getDistributionType()const
{
	return distributionType_;
}

void ModifyReadWriteSplittingConnectionRequest::setDistributionType(const std::string& distributionType)
{
	distributionType_ = distributionType;
	setCoreParameter("DistributionType", std::to_string(distributionType));
}

std::string ModifyReadWriteSplittingConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReadWriteSplittingConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyReadWriteSplittingConnectionRequest::getWeight()const
{
	return weight_;
}

void ModifyReadWriteSplittingConnectionRequest::setWeight(const std::string& weight)
{
	weight_ = weight;
	setCoreParameter("Weight", std::to_string(weight));
}

std::string ModifyReadWriteSplittingConnectionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyReadWriteSplittingConnectionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long ModifyReadWriteSplittingConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReadWriteSplittingConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyReadWriteSplittingConnectionRequest::getMaxDelayTime()const
{
	return maxDelayTime_;
}

void ModifyReadWriteSplittingConnectionRequest::setMaxDelayTime(const std::string& maxDelayTime)
{
	maxDelayTime_ = maxDelayTime;
	setCoreParameter("MaxDelayTime", std::to_string(maxDelayTime));
}

std::string ModifyReadWriteSplittingConnectionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReadWriteSplittingConnectionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

