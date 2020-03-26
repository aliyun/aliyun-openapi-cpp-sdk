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

#include <alibabacloud/dyvmsapi/model/QueryRtcNumberAuthStatusRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryRtcNumberAuthStatusRequest;

QueryRtcNumberAuthStatusRequest::QueryRtcNumberAuthStatusRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryRtcNumberAuthStatus")
{
	setMethod(HttpRequest::Method::Post);
}

QueryRtcNumberAuthStatusRequest::~QueryRtcNumberAuthStatusRequest()
{}

long QueryRtcNumberAuthStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryRtcNumberAuthStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryRtcNumberAuthStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryRtcNumberAuthStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryRtcNumberAuthStatusRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void QueryRtcNumberAuthStatusRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

long QueryRtcNumberAuthStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryRtcNumberAuthStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryRtcNumberAuthStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRtcNumberAuthStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

