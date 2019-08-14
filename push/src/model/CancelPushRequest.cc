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

#include <alibabacloud/push/model/CancelPushRequest.h>

using AlibabaCloud::Push::Model::CancelPushRequest;

CancelPushRequest::CancelPushRequest() :
	RpcServiceRequest("push", "2016-08-01", "CancelPush")
{}

CancelPushRequest::~CancelPushRequest()
{}

long CancelPushRequest::getMessageId()const
{
	return messageId_;
}

void CancelPushRequest::setMessageId(long messageId)
{
	messageId_ = messageId;
	setCoreParameter("MessageId", std::to_string(messageId));
}

long CancelPushRequest::getAppKey()const
{
	return appKey_;
}

void CancelPushRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", std::to_string(appKey));
}

std::string CancelPushRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancelPushRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

