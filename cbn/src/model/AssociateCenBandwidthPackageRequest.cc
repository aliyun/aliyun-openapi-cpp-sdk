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

#include <alibabacloud/cbn/model/AssociateCenBandwidthPackageRequest.h>

using AlibabaCloud::Cbn::Model::AssociateCenBandwidthPackageRequest;

AssociateCenBandwidthPackageRequest::AssociateCenBandwidthPackageRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "AssociateCenBandwidthPackage")
{}

AssociateCenBandwidthPackageRequest::~AssociateCenBandwidthPackageRequest()
{}

long AssociateCenBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateCenBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AssociateCenBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateCenBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateCenBandwidthPackageRequest::getCenId()const
{
	return cenId_;
}

void AssociateCenBandwidthPackageRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string AssociateCenBandwidthPackageRequest::getCenBandwidthPackageId()const
{
	return cenBandwidthPackageId_;
}

void AssociateCenBandwidthPackageRequest::setCenBandwidthPackageId(const std::string& cenBandwidthPackageId)
{
	cenBandwidthPackageId_ = cenBandwidthPackageId;
	setCoreParameter("CenBandwidthPackageId", cenBandwidthPackageId);
}

std::string AssociateCenBandwidthPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociateCenBandwidthPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AssociateCenBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateCenBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

