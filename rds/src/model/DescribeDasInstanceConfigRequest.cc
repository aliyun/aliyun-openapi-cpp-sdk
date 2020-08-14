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

#include <alibabacloud/rds/model/DescribeDasInstanceConfigRequest.h>

using AlibabaCloud::Rds::Model::DescribeDasInstanceConfigRequest;

DescribeDasInstanceConfigRequest::DescribeDasInstanceConfigRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDasInstanceConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDasInstanceConfigRequest::~DescribeDasInstanceConfigRequest()
{}

long DescribeDasInstanceConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDasInstanceConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDasInstanceConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDasInstanceConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDasInstanceConfigRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeDasInstanceConfigRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long DescribeDasInstanceConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDasInstanceConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDasInstanceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDasInstanceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDasInstanceConfigRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDasInstanceConfigRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

