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

#include <alibabacloud/snsuapi/model/BandPrecheckRequest.h>

using AlibabaCloud::Snsuapi::Model::BandPrecheckRequest;

BandPrecheckRequest::BandPrecheckRequest() :
	RpcServiceRequest("snsuapi", "2018-07-09", "BandPrecheck")
{
	setMethod(HttpRequest::Method::Post);
}

BandPrecheckRequest::~BandPrecheckRequest()
{}

std::string BandPrecheckRequest::getIpAddress()const
{
	return ipAddress_;
}

void BandPrecheckRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setParameter("IpAddress", ipAddress);
}

long BandPrecheckRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BandPrecheckRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BandPrecheckRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BandPrecheckRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long BandPrecheckRequest::getOwnerId()const
{
	return ownerId_;
}

void BandPrecheckRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BandPrecheckRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BandPrecheckRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int BandPrecheckRequest::getPort()const
{
	return port_;
}

void BandPrecheckRequest::setPort(int port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

