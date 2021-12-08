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

#include <alibabacloud/dyplsapi/model/GetTotalPublicUrlRequest.h>

using AlibabaCloud::Dyplsapi::Model::GetTotalPublicUrlRequest;

GetTotalPublicUrlRequest::GetTotalPublicUrlRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "GetTotalPublicUrl")
{
	setMethod(HttpRequest::Method::Post);
}

GetTotalPublicUrlRequest::~GetTotalPublicUrlRequest()
{}

std::string GetTotalPublicUrlRequest::getCallId()const
{
	return callId_;
}

void GetTotalPublicUrlRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setParameter("CallId", callId);
}

long GetTotalPublicUrlRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetTotalPublicUrlRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetTotalPublicUrlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetTotalPublicUrlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetTotalPublicUrlRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetTotalPublicUrlRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool GetTotalPublicUrlRequest::getCheckSubs()const
{
	return checkSubs_;
}

void GetTotalPublicUrlRequest::setCheckSubs(bool checkSubs)
{
	checkSubs_ = checkSubs;
	setParameter("CheckSubs", checkSubs ? "true" : "false");
}

long GetTotalPublicUrlRequest::getOwnerId()const
{
	return ownerId_;
}

void GetTotalPublicUrlRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetTotalPublicUrlRequest::getCallTime()const
{
	return callTime_;
}

void GetTotalPublicUrlRequest::setCallTime(const std::string& callTime)
{
	callTime_ = callTime;
	setParameter("CallTime", callTime);
}

std::string GetTotalPublicUrlRequest::getPartnerKey()const
{
	return partnerKey_;
}

void GetTotalPublicUrlRequest::setPartnerKey(const std::string& partnerKey)
{
	partnerKey_ = partnerKey;
	setParameter("PartnerKey", partnerKey);
}

