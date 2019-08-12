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

#include <alibabacloud/cbn/model/SetCenInterRegionBandwidthLimitRequest.h>

using AlibabaCloud::Cbn::Model::SetCenInterRegionBandwidthLimitRequest;

SetCenInterRegionBandwidthLimitRequest::SetCenInterRegionBandwidthLimitRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "SetCenInterRegionBandwidthLimit")
{}

SetCenInterRegionBandwidthLimitRequest::~SetCenInterRegionBandwidthLimitRequest()
{}

std::string SetCenInterRegionBandwidthLimitRequest::getLocalRegionId()const
{
	return localRegionId_;
}

void SetCenInterRegionBandwidthLimitRequest::setLocalRegionId(const std::string& localRegionId)
{
	localRegionId_ = localRegionId;
	setCoreParameter("LocalRegionId", std::to_string(localRegionId));
}

long SetCenInterRegionBandwidthLimitRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetCenInterRegionBandwidthLimitRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SetCenInterRegionBandwidthLimitRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetCenInterRegionBandwidthLimitRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SetCenInterRegionBandwidthLimitRequest::getCenId()const
{
	return cenId_;
}

void SetCenInterRegionBandwidthLimitRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", std::to_string(cenId));
}

std::string SetCenInterRegionBandwidthLimitRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetCenInterRegionBandwidthLimitRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string SetCenInterRegionBandwidthLimitRequest::getOppositeRegionId()const
{
	return oppositeRegionId_;
}

void SetCenInterRegionBandwidthLimitRequest::setOppositeRegionId(const std::string& oppositeRegionId)
{
	oppositeRegionId_ = oppositeRegionId;
	setCoreParameter("OppositeRegionId", std::to_string(oppositeRegionId));
}

long SetCenInterRegionBandwidthLimitRequest::getBandwidthLimit()const
{
	return bandwidthLimit_;
}

void SetCenInterRegionBandwidthLimitRequest::setBandwidthLimit(long bandwidthLimit)
{
	bandwidthLimit_ = bandwidthLimit;
	setCoreParameter("BandwidthLimit", bandwidthLimit);
}

long SetCenInterRegionBandwidthLimitRequest::getOwnerId()const
{
	return ownerId_;
}

void SetCenInterRegionBandwidthLimitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

