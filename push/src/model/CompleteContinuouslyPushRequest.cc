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

#include <alibabacloud/push/model/CompleteContinuouslyPushRequest.h>

using AlibabaCloud::Push::Model::CompleteContinuouslyPushRequest;

CompleteContinuouslyPushRequest::CompleteContinuouslyPushRequest() :
	RpcServiceRequest("push", "2016-08-01", "CompleteContinuouslyPush")
{
	setMethod(HttpRequest::Method::Post);
}

CompleteContinuouslyPushRequest::~CompleteContinuouslyPushRequest()
{}

std::string CompleteContinuouslyPushRequest::getMessageId()const
{
	return messageId_;
}

void CompleteContinuouslyPushRequest::setMessageId(const std::string& messageId)
{
	messageId_ = messageId;
	setParameter("MessageId", messageId);
}

std::string CompleteContinuouslyPushRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CompleteContinuouslyPushRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long CompleteContinuouslyPushRequest::getAppKey()const
{
	return appKey_;
}

void CompleteContinuouslyPushRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", std::to_string(appKey));
}

