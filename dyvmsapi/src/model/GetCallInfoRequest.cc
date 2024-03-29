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

#include <alibabacloud/dyvmsapi/model/GetCallInfoRequest.h>

using AlibabaCloud::Dyvmsapi::Model::GetCallInfoRequest;

GetCallInfoRequest::GetCallInfoRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "GetCallInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetCallInfoRequest::~GetCallInfoRequest()
{}

std::string GetCallInfoRequest::getRtcId()const
{
	return rtcId_;
}

void GetCallInfoRequest::setRtcId(const std::string& rtcId)
{
	rtcId_ = rtcId;
	setParameter("RtcId", rtcId);
}

long GetCallInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetCallInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetCallInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetCallInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetCallInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetCallInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetCallInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void GetCallInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

