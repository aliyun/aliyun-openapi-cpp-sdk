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

#include <alibabacloud/iot/model/PubBroadcastRequest.h>

using AlibabaCloud::Iot::Model::PubBroadcastRequest;

PubBroadcastRequest::PubBroadcastRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PubBroadcast")
{}

PubBroadcastRequest::~PubBroadcastRequest()
{}

std::string PubBroadcastRequest::getTopicFullName()const
{
	return topicFullName_;
}

void PubBroadcastRequest::setTopicFullName(const std::string& topicFullName)
{
	topicFullName_ = topicFullName;
	setCoreParameter("TopicFullName", std::to_string(topicFullName));
}

std::string PubBroadcastRequest::getMessageContent()const
{
	return messageContent_;
}

void PubBroadcastRequest::setMessageContent(const std::string& messageContent)
{
	messageContent_ = messageContent;
	setCoreParameter("MessageContent", std::to_string(messageContent));
}

std::string PubBroadcastRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PubBroadcastRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", std::to_string(iotInstanceId));
}

std::string PubBroadcastRequest::getProductKey()const
{
	return productKey_;
}

void PubBroadcastRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", std::to_string(productKey));
}

std::string PubBroadcastRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PubBroadcastRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

