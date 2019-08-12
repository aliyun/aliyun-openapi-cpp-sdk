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

#include <alibabacloud/smartag/model/ModifySmartAccessGatewayUpBandwidthRequest.h>

using AlibabaCloud::Smartag::Model::ModifySmartAccessGatewayUpBandwidthRequest;

ModifySmartAccessGatewayUpBandwidthRequest::ModifySmartAccessGatewayUpBandwidthRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifySmartAccessGatewayUpBandwidth")
{}

ModifySmartAccessGatewayUpBandwidthRequest::~ModifySmartAccessGatewayUpBandwidthRequest()
{}

long ModifySmartAccessGatewayUpBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifySmartAccessGatewayUpBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifySmartAccessGatewayUpBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifySmartAccessGatewayUpBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int ModifySmartAccessGatewayUpBandwidthRequest::getUpBandwidth4G()const
{
	return upBandwidth4G_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setUpBandwidth4G(int upBandwidth4G)
{
	upBandwidth4G_ = upBandwidth4G;
	setCoreParameter("UpBandwidth4G", upBandwidth4G);
}

std::string ModifySmartAccessGatewayUpBandwidthRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

int ModifySmartAccessGatewayUpBandwidthRequest::getUpBandwidthWan()const
{
	return upBandwidthWan_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setUpBandwidthWan(int upBandwidthWan)
{
	upBandwidthWan_ = upBandwidthWan;
	setCoreParameter("UpBandwidthWan", upBandwidthWan);
}

long ModifySmartAccessGatewayUpBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySmartAccessGatewayUpBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

