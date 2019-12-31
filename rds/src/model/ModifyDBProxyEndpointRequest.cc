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

#include <alibabacloud/rds/model/ModifyDBProxyEndpointRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBProxyEndpointRequest;

ModifyDBProxyEndpointRequest::ModifyDBProxyEndpointRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBProxyEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBProxyEndpointRequest::~ModifyDBProxyEndpointRequest()
{}

long ModifyDBProxyEndpointRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBProxyEndpointRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBProxyEndpointRequest::getConfigDBProxyFeatures()const
{
	return configDBProxyFeatures_;
}

void ModifyDBProxyEndpointRequest::setConfigDBProxyFeatures(const std::string& configDBProxyFeatures)
{
	configDBProxyFeatures_ = configDBProxyFeatures;
	setCoreParameter("ConfigDBProxyFeatures", configDBProxyFeatures);
}

std::string ModifyDBProxyEndpointRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBProxyEndpointRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBProxyEndpointRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBProxyEndpointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDBProxyEndpointRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBProxyEndpointRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBProxyEndpointRequest::getReadOnlyInstanceWeight()const
{
	return readOnlyInstanceWeight_;
}

void ModifyDBProxyEndpointRequest::setReadOnlyInstanceWeight(const std::string& readOnlyInstanceWeight)
{
	readOnlyInstanceWeight_ = readOnlyInstanceWeight;
	setCoreParameter("ReadOnlyInstanceWeight", readOnlyInstanceWeight);
}

std::string ModifyDBProxyEndpointRequest::getReadOnlyInstanceMaxDelayTime()const
{
	return readOnlyInstanceMaxDelayTime_;
}

void ModifyDBProxyEndpointRequest::setReadOnlyInstanceMaxDelayTime(const std::string& readOnlyInstanceMaxDelayTime)
{
	readOnlyInstanceMaxDelayTime_ = readOnlyInstanceMaxDelayTime;
	setCoreParameter("ReadOnlyInstanceMaxDelayTime", readOnlyInstanceMaxDelayTime);
}

std::string ModifyDBProxyEndpointRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBProxyEndpointRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifyDBProxyEndpointRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBProxyEndpointRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBProxyEndpointRequest::getDBProxyEndpointId()const
{
	return dBProxyEndpointId_;
}

void ModifyDBProxyEndpointRequest::setDBProxyEndpointId(const std::string& dBProxyEndpointId)
{
	dBProxyEndpointId_ = dBProxyEndpointId;
	setCoreParameter("DBProxyEndpointId", dBProxyEndpointId);
}

std::string ModifyDBProxyEndpointRequest::getReadOnlyInstanceDistributionType()const
{
	return readOnlyInstanceDistributionType_;
}

void ModifyDBProxyEndpointRequest::setReadOnlyInstanceDistributionType(const std::string& readOnlyInstanceDistributionType)
{
	readOnlyInstanceDistributionType_ = readOnlyInstanceDistributionType;
	setCoreParameter("ReadOnlyInstanceDistributionType", readOnlyInstanceDistributionType);
}

