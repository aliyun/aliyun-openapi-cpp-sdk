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

#include <alibabacloud/vod/model/SetMessageCallbackRequest.h>

using AlibabaCloud::Vod::Model::SetMessageCallbackRequest;

SetMessageCallbackRequest::SetMessageCallbackRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SetMessageCallback")
{}

SetMessageCallbackRequest::~SetMessageCallbackRequest()
{}

std::string SetMessageCallbackRequest::getAuthKey()const
{
	return authKey_;
}

void SetMessageCallbackRequest::setAuthKey(const std::string& authKey)
{
	authKey_ = authKey;
	setCoreParameter("AuthKey", authKey);
}

std::string SetMessageCallbackRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetMessageCallbackRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SetMessageCallbackRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetMessageCallbackRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetMessageCallbackRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetMessageCallbackRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string SetMessageCallbackRequest::getEventTypeList()const
{
	return eventTypeList_;
}

void SetMessageCallbackRequest::setEventTypeList(const std::string& eventTypeList)
{
	eventTypeList_ = eventTypeList;
	setCoreParameter("EventTypeList", eventTypeList);
}

std::string SetMessageCallbackRequest::getMnsQueueName()const
{
	return mnsQueueName_;
}

void SetMessageCallbackRequest::setMnsQueueName(const std::string& mnsQueueName)
{
	mnsQueueName_ = mnsQueueName;
	setCoreParameter("MnsQueueName", mnsQueueName);
}

long SetMessageCallbackRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void SetMessageCallbackRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", resourceRealOwnerId);
}

std::string SetMessageCallbackRequest::getOwnerId()const
{
	return ownerId_;
}

void SetMessageCallbackRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetMessageCallbackRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetMessageCallbackRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetMessageCallbackRequest::getCallbackType()const
{
	return callbackType_;
}

void SetMessageCallbackRequest::setCallbackType(const std::string& callbackType)
{
	callbackType_ = callbackType;
	setCoreParameter("CallbackType", callbackType);
}

std::string SetMessageCallbackRequest::getCallbackSwitch()const
{
	return callbackSwitch_;
}

void SetMessageCallbackRequest::setCallbackSwitch(const std::string& callbackSwitch)
{
	callbackSwitch_ = callbackSwitch;
	setCoreParameter("CallbackSwitch", callbackSwitch);
}

std::string SetMessageCallbackRequest::getMnsEndpoint()const
{
	return mnsEndpoint_;
}

void SetMessageCallbackRequest::setMnsEndpoint(const std::string& mnsEndpoint)
{
	mnsEndpoint_ = mnsEndpoint;
	setCoreParameter("MnsEndpoint", mnsEndpoint);
}

std::string SetMessageCallbackRequest::getAppId()const
{
	return appId_;
}

void SetMessageCallbackRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string SetMessageCallbackRequest::getAuthSwitch()const
{
	return authSwitch_;
}

void SetMessageCallbackRequest::setAuthSwitch(const std::string& authSwitch)
{
	authSwitch_ = authSwitch;
	setCoreParameter("AuthSwitch", authSwitch);
}

std::string SetMessageCallbackRequest::getCallbackURL()const
{
	return callbackURL_;
}

void SetMessageCallbackRequest::setCallbackURL(const std::string& callbackURL)
{
	callbackURL_ = callbackURL;
	setCoreParameter("CallbackURL", callbackURL);
}

