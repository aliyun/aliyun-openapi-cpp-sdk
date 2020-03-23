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

#include <alibabacloud/rds/model/ModifyDBInstanceProxyConfigurationRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceProxyConfigurationRequest;

ModifyDBInstanceProxyConfigurationRequest::ModifyDBInstanceProxyConfigurationRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceProxyConfiguration")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceProxyConfigurationRequest::~ModifyDBInstanceProxyConfigurationRequest()
{}

long ModifyDBInstanceProxyConfigurationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceProxyConfigurationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceProxyConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceProxyConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceProxyConfigurationRequest::getProxyConfigurationValue()const
{
	return proxyConfigurationValue_;
}

void ModifyDBInstanceProxyConfigurationRequest::setProxyConfigurationValue(const std::string& proxyConfigurationValue)
{
	proxyConfigurationValue_ = proxyConfigurationValue;
	setParameter("ProxyConfigurationValue", proxyConfigurationValue);
}

long ModifyDBInstanceProxyConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceProxyConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceProxyConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceProxyConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceProxyConfigurationRequest::getProxyConfigurationKey()const
{
	return proxyConfigurationKey_;
}

void ModifyDBInstanceProxyConfigurationRequest::setProxyConfigurationKey(const std::string& proxyConfigurationKey)
{
	proxyConfigurationKey_ = proxyConfigurationKey;
	setParameter("ProxyConfigurationKey", proxyConfigurationKey);
}

std::string ModifyDBInstanceProxyConfigurationRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceProxyConfigurationRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

