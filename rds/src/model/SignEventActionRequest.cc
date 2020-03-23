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

#include <alibabacloud/rds/model/SignEventActionRequest.h>

using AlibabaCloud::Rds::Model::SignEventActionRequest;

SignEventActionRequest::SignEventActionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "SignEventAction")
{
	setMethod(HttpRequest::Method::Post);
}

SignEventActionRequest::~SignEventActionRequest()
{}

int SignEventActionRequest::getEventId()const
{
	return eventId_;
}

void SignEventActionRequest::setEventId(int eventId)
{
	eventId_ = eventId;
	setParameter("EventId", std::to_string(eventId));
}

long SignEventActionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SignEventActionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SignEventActionRequest::getEventSig()const
{
	return eventSig_;
}

void SignEventActionRequest::setEventSig(const std::string& eventSig)
{
	eventSig_ = eventSig;
	setParameter("EventSig", eventSig);
}

std::string SignEventActionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SignEventActionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SignEventActionRequest::getOwnerId()const
{
	return ownerId_;
}

void SignEventActionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SignEventActionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SignEventActionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SignEventActionRequest::getRegionId()const
{
	return regionId_;
}

void SignEventActionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

