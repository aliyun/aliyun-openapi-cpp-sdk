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

#include <alibabacloud/cbn/model/UnassociateCenBandwidthPackageRequest.h>

using AlibabaCloud::Cbn::Model::UnassociateCenBandwidthPackageRequest;

UnassociateCenBandwidthPackageRequest::UnassociateCenBandwidthPackageRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "UnassociateCenBandwidthPackage")
{
	setMethod(HttpRequest::Method::Post);
}

UnassociateCenBandwidthPackageRequest::~UnassociateCenBandwidthPackageRequest()
{}

long UnassociateCenBandwidthPackageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassociateCenBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnassociateCenBandwidthPackageRequest::getCenId()const
{
	return cenId_;
}

void UnassociateCenBandwidthPackageRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string UnassociateCenBandwidthPackageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassociateCenBandwidthPackageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassociateCenBandwidthPackageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassociateCenBandwidthPackageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UnassociateCenBandwidthPackageRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassociateCenBandwidthPackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UnassociateCenBandwidthPackageRequest::getCenBandwidthPackageId()const
{
	return cenBandwidthPackageId_;
}

void UnassociateCenBandwidthPackageRequest::setCenBandwidthPackageId(const std::string& cenBandwidthPackageId)
{
	cenBandwidthPackageId_ = cenBandwidthPackageId;
	setParameter("CenBandwidthPackageId", cenBandwidthPackageId);
}

