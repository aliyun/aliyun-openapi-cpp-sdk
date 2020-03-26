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

#include <alibabacloud/snsuapi/model/BandStatusQueryRequest.h>

using AlibabaCloud::Snsuapi::Model::BandStatusQueryRequest;

BandStatusQueryRequest::BandStatusQueryRequest() :
	RpcServiceRequest("snsuapi", "2018-07-09", "BandStatusQuery")
{
	setMethod(HttpRequest::Method::Post);
}

BandStatusQueryRequest::~BandStatusQueryRequest()
{}

long BandStatusQueryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void BandStatusQueryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string BandStatusQueryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void BandStatusQueryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long BandStatusQueryRequest::getOwnerId()const
{
	return ownerId_;
}

void BandStatusQueryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BandStatusQueryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BandStatusQueryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long BandStatusQueryRequest::getBandId()const
{
	return bandId_;
}

void BandStatusQueryRequest::setBandId(long bandId)
{
	bandId_ = bandId;
	setParameter("BandId", std::to_string(bandId));
}

