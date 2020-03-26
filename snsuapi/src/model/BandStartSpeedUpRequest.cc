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

#include <alibabacloud/snsuapi/model/BandStartSpeedUpRequest.h>

using AlibabaCloud::Snsuapi::Model::BandStartSpeedUpRequest;

BandStartSpeedUpRequest::BandStartSpeedUpRequest() :
	RpcServiceRequest("snsuapi", "2018-07-09", "BandStartSpeedUp")
{
	setMethod(HttpRequest::Method::Post);
}

BandStartSpeedUpRequest::~BandStartSpeedUpRequest()
{}

std::string BandStartSpeedUpRequest::getIpAddress()const
{
	return ipAddress_;
}

void BandStartSpeedUpRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setParameter("IpAddress", ipAddress);
}

long BandStartSpeedUpRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BandStartSpeedUpRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BandStartSpeedUpRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BandStartSpeedUpRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long BandStartSpeedUpRequest::getBandId()const
{
	return bandId_;
}

void BandStartSpeedUpRequest::setBandId(long bandId)
{
	bandId_ = bandId;
	setParameter("BandId", std::to_string(bandId));
}

long BandStartSpeedUpRequest::getTargetBandwidth()const
{
	return targetBandwidth_;
}

void BandStartSpeedUpRequest::setTargetBandwidth(long targetBandwidth)
{
	targetBandwidth_ = targetBandwidth;
	setParameter("TargetBandwidth", std::to_string(targetBandwidth));
}

std::string BandStartSpeedUpRequest::getDirection()const
{
	return direction_;
}

void BandStartSpeedUpRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

std::string BandStartSpeedUpRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BandStartSpeedUpRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long BandStartSpeedUpRequest::getOwnerId()const
{
	return ownerId_;
}

void BandStartSpeedUpRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BandStartSpeedUpRequest::getBandScene()const
{
	return bandScene_;
}

void BandStartSpeedUpRequest::setBandScene(const std::string& bandScene)
{
	bandScene_ = bandScene;
	setParameter("BandScene", bandScene);
}

int BandStartSpeedUpRequest::getPort()const
{
	return port_;
}

void BandStartSpeedUpRequest::setPort(int port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

