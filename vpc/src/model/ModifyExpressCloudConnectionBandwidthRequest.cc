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

#include <alibabacloud/vpc/model/ModifyExpressCloudConnectionBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::ModifyExpressCloudConnectionBandwidthRequest;

ModifyExpressCloudConnectionBandwidthRequest::ModifyExpressCloudConnectionBandwidthRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyExpressCloudConnectionBandwidth")
{}

ModifyExpressCloudConnectionBandwidthRequest::~ModifyExpressCloudConnectionBandwidthRequest()
{}

long ModifyExpressCloudConnectionBandwidthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyExpressCloudConnectionBandwidthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyExpressCloudConnectionBandwidthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyExpressCloudConnectionBandwidthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyExpressCloudConnectionBandwidthRequest::getRegionId()const
{
	return regionId_;
}

void ModifyExpressCloudConnectionBandwidthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyExpressCloudConnectionBandwidthRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyExpressCloudConnectionBandwidthRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string ModifyExpressCloudConnectionBandwidthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyExpressCloudConnectionBandwidthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyExpressCloudConnectionBandwidthRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyExpressCloudConnectionBandwidthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyExpressCloudConnectionBandwidthRequest::getEccId()const
{
	return eccId_;
}

void ModifyExpressCloudConnectionBandwidthRequest::setEccId(const std::string& eccId)
{
	eccId_ = eccId;
	setCoreParameter("EccId", eccId);
}

