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

#include <alibabacloud/snsuapi/model/MobileStartSpeedUpRequest.h>

using AlibabaCloud::Snsuapi::Model::MobileStartSpeedUpRequest;

MobileStartSpeedUpRequest::MobileStartSpeedUpRequest() :
	RpcServiceRequest("snsuapi", "2018-07-09", "MobileStartSpeedUp")
{
	setMethod(HttpRequest::Method::Post);
}

MobileStartSpeedUpRequest::~MobileStartSpeedUpRequest()
{}

long MobileStartSpeedUpRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MobileStartSpeedUpRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MobileStartSpeedUpRequest::getPublicIp()const
{
	return publicIp_;
}

void MobileStartSpeedUpRequest::setPublicIp(const std::string& publicIp)
{
	publicIp_ = publicIp;
	setParameter("PublicIp", publicIp);
}

std::string MobileStartSpeedUpRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MobileStartSpeedUpRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string MobileStartSpeedUpRequest::getDuration()const
{
	return duration_;
}

void MobileStartSpeedUpRequest::setDuration(const std::string& duration)
{
	duration_ = duration;
	setParameter("Duration", duration);
}

std::string MobileStartSpeedUpRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MobileStartSpeedUpRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string MobileStartSpeedUpRequest::getIp()const
{
	return ip_;
}

void MobileStartSpeedUpRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string MobileStartSpeedUpRequest::getDestinationIpAddress()const
{
	return destinationIpAddress_;
}

void MobileStartSpeedUpRequest::setDestinationIpAddress(const std::string& destinationIpAddress)
{
	destinationIpAddress_ = destinationIpAddress;
	setParameter("DestinationIpAddress", destinationIpAddress);
}

long MobileStartSpeedUpRequest::getOwnerId()const
{
	return ownerId_;
}

void MobileStartSpeedUpRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string MobileStartSpeedUpRequest::getToken()const
{
	return token_;
}

void MobileStartSpeedUpRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string MobileStartSpeedUpRequest::getPublicPort()const
{
	return publicPort_;
}

void MobileStartSpeedUpRequest::setPublicPort(const std::string& publicPort)
{
	publicPort_ = publicPort;
	setParameter("PublicPort", publicPort);
}

