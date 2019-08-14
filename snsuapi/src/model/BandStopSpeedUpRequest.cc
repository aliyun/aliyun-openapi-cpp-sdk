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

#include <alibabacloud/snsuapi/model/BandStopSpeedUpRequest.h>

using AlibabaCloud::Snsuapi::Model::BandStopSpeedUpRequest;

BandStopSpeedUpRequest::BandStopSpeedUpRequest() :
	RpcServiceRequest("snsuapi", "2018-07-09", "BandStopSpeedUp")
{}

BandStopSpeedUpRequest::~BandStopSpeedUpRequest()
{}

std::string BandStopSpeedUpRequest::getIpAddress()const
{
	return ipAddress_;
}

void BandStopSpeedUpRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setCoreParameter("IpAddress", ipAddress);
}

long BandStopSpeedUpRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BandStopSpeedUpRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BandStopSpeedUpRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BandStopSpeedUpRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int BandStopSpeedUpRequest::getPort()const
{
	return port_;
}

void BandStopSpeedUpRequest::setPort(int port)
{
	port_ = port;
	setCoreParameter("Port", std::to_string(port));
}

long BandStopSpeedUpRequest::getBandId()const
{
	return bandId_;
}

void BandStopSpeedUpRequest::setBandId(long bandId)
{
	bandId_ = bandId;
	setCoreParameter("BandId", std::to_string(bandId));
}

long BandStopSpeedUpRequest::getOwnerId()const
{
	return ownerId_;
}

void BandStopSpeedUpRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string BandStopSpeedUpRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BandStopSpeedUpRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BandStopSpeedUpRequest::getDirection()const
{
	return direction_;
}

void BandStopSpeedUpRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", direction);
}

