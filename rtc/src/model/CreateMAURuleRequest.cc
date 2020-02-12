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

#include <alibabacloud/rtc/model/CreateMAURuleRequest.h>

using AlibabaCloud::Rtc::Model::CreateMAURuleRequest;

CreateMAURuleRequest::CreateMAURuleRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "CreateMAURule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMAURuleRequest::~CreateMAURuleRequest()
{}

std::string CreateMAURuleRequest::getUseridPrefix()const
{
	return useridPrefix_;
}

void CreateMAURuleRequest::setUseridPrefix(const std::string& useridPrefix)
{
	useridPrefix_ = useridPrefix;
	setParameter("UseridPrefix", useridPrefix);
}

std::string CreateMAURuleRequest::getChannelPrefix()const
{
	return channelPrefix_;
}

void CreateMAURuleRequest::setChannelPrefix(const std::string& channelPrefix)
{
	channelPrefix_ = channelPrefix;
	setParameter("ChannelPrefix", channelPrefix);
}

long CreateMAURuleRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateMAURuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long CreateMAURuleRequest::getMauTemplateId()const
{
	return mauTemplateId_;
}

void CreateMAURuleRequest::setMauTemplateId(long mauTemplateId)
{
	mauTemplateId_ = mauTemplateId;
	setParameter("MauTemplateId", std::to_string(mauTemplateId));
}

std::string CreateMAURuleRequest::getAppId()const
{
	return appId_;
}

void CreateMAURuleRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string CreateMAURuleRequest::getCallBack()const
{
	return callBack_;
}

void CreateMAURuleRequest::setCallBack(const std::string& callBack)
{
	callBack_ = callBack;
	setParameter("CallBack", callBack);
}

