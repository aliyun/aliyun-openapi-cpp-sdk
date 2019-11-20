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

#include <alibabacloud/vpc/model/ModifyIPv6TranslatorBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIPv6TranslatorBandwidthRequest;

ModifyIPv6TranslatorBandwidthRequest::ModifyIPv6TranslatorBandwidthRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIPv6TranslatorBandwidth")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyIPv6TranslatorBandwidthRequest::~ModifyIPv6TranslatorBandwidthRequest()
{}

long ModifyIPv6TranslatorBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIPv6TranslatorBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyIPv6TranslatorBandwidthRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyIPv6TranslatorBandwidthRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyIPv6TranslatorBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIPv6TranslatorBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyIPv6TranslatorBandwidthRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyIPv6TranslatorBandwidthRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyIPv6TranslatorBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIPv6TranslatorBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifyIPv6TranslatorBandwidthRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyIPv6TranslatorBandwidthRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", std::to_string(bandwidth));
}

std::string ModifyIPv6TranslatorBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIPv6TranslatorBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyIPv6TranslatorBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIPv6TranslatorBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyIPv6TranslatorBandwidthRequest::getIpv6TranslatorId()const
{
	return ipv6TranslatorId_;
}

void ModifyIPv6TranslatorBandwidthRequest::setIpv6TranslatorId(const std::string& ipv6TranslatorId)
{
	ipv6TranslatorId_ = ipv6TranslatorId;
	setCoreParameter("Ipv6TranslatorId", ipv6TranslatorId);
}

