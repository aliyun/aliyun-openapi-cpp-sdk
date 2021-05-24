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

#include <alibabacloud/dts/model/ModifySubscriptionObjectRequest.h>

using AlibabaCloud::Dts::Model::ModifySubscriptionObjectRequest;

ModifySubscriptionObjectRequest::ModifySubscriptionObjectRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ModifySubscriptionObject")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySubscriptionObjectRequest::~ModifySubscriptionObjectRequest()
{}

std::string ModifySubscriptionObjectRequest::getSubscriptionInstanceId()const
{
	return subscriptionInstanceId_;
}

void ModifySubscriptionObjectRequest::setSubscriptionInstanceId(const std::string& subscriptionInstanceId)
{
	subscriptionInstanceId_ = subscriptionInstanceId;
	setParameter("SubscriptionInstanceId", subscriptionInstanceId);
}

std::string ModifySubscriptionObjectRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySubscriptionObjectRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ModifySubscriptionObjectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySubscriptionObjectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifySubscriptionObjectRequest::getAccountId()const
{
	return accountId_;
}

void ModifySubscriptionObjectRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string ModifySubscriptionObjectRequest::getRegionId()const
{
	return regionId_;
}

void ModifySubscriptionObjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifySubscriptionObjectRequest::getSubscriptionObject()const
{
	return subscriptionObject_;
}

void ModifySubscriptionObjectRequest::setSubscriptionObject(const std::string& subscriptionObject)
{
	subscriptionObject_ = subscriptionObject;
	setParameter("SubscriptionObject", subscriptionObject);
}

