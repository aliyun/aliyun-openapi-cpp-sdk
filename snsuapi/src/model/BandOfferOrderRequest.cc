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

#include <alibabacloud/snsuapi/model/BandOfferOrderRequest.h>

using AlibabaCloud::Snsuapi::Model::BandOfferOrderRequest;

BandOfferOrderRequest::BandOfferOrderRequest() :
	RpcServiceRequest("snsuapi", "2018-07-09", "BandOfferOrder")
{
	setMethod(HttpRequest::Method::Post);
}

BandOfferOrderRequest::~BandOfferOrderRequest()
{}

long BandOfferOrderRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BandOfferOrderRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BandOfferOrderRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BandOfferOrderRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long BandOfferOrderRequest::getOwnerId()const
{
	return ownerId_;
}

void BandOfferOrderRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BandOfferOrderRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BandOfferOrderRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string BandOfferOrderRequest::getBandId()const
{
	return bandId_;
}

void BandOfferOrderRequest::setBandId(const std::string& bandId)
{
	bandId_ = bandId;
	setParameter("BandId", bandId);
}

std::string BandOfferOrderRequest::getOfferId()const
{
	return offerId_;
}

void BandOfferOrderRequest::setOfferId(const std::string& offerId)
{
	offerId_ = offerId;
	setParameter("OfferId", offerId);
}

