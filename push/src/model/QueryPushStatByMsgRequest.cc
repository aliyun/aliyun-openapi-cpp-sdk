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

#include <alibabacloud/push/model/QueryPushStatByMsgRequest.h>

using AlibabaCloud::Push::Model::QueryPushStatByMsgRequest;

QueryPushStatByMsgRequest::QueryPushStatByMsgRequest() :
	RpcServiceRequest("push", "2016-08-01", "QueryPushStatByMsg")
{}

QueryPushStatByMsgRequest::~QueryPushStatByMsgRequest()
{}

long QueryPushStatByMsgRequest::getMessageId()const
{
	return messageId_;
}

void QueryPushStatByMsgRequest::setMessageId(long messageId)
{
	messageId_ = messageId;
	setCoreParameter("MessageId", messageId);
}

long QueryPushStatByMsgRequest::getAppKey()const
{
	return appKey_;
}

void QueryPushStatByMsgRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", appKey);
}

std::string QueryPushStatByMsgRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryPushStatByMsgRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

