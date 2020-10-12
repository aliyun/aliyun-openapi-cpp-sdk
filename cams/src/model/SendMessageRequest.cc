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

#include <alibabacloud/cams/model/SendMessageRequest.h>

using AlibabaCloud::Cams::Model::SendMessageRequest;

SendMessageRequest::SendMessageRequest() :
	RpcServiceRequest("cams", "2020-06-06", "SendMessage")
{
	setMethod(HttpRequest::Method::Post);
}

SendMessageRequest::~SendMessageRequest()
{}

long SendMessageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SendMessageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SendMessageRequest::getMessageType()const
{
	return messageType_;
}

void SendMessageRequest::setMessageType(const std::string& messageType)
{
	messageType_ = messageType;
	setBodyParameter("MessageType", messageType);
}

std::string SendMessageRequest::getTemplateBodyParams()const
{
	return templateBodyParams_;
}

void SendMessageRequest::setTemplateBodyParams(const std::string& templateBodyParams)
{
	templateBodyParams_ = templateBodyParams;
	setBodyParameter("TemplateBodyParams", templateBodyParams);
}

std::string SendMessageRequest::getLink()const
{
	return link_;
}

void SendMessageRequest::setLink(const std::string& link)
{
	link_ = link;
	setBodyParameter("Link", link);
}

std::string SendMessageRequest::getCaption()const
{
	return caption_;
}

void SendMessageRequest::setCaption(const std::string& caption)
{
	caption_ = caption;
	setBodyParameter("Caption", caption);
}

std::string SendMessageRequest::getType()const
{
	return type_;
}

void SendMessageRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string SendMessageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SendMessageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SendMessageRequest::getChannelType()const
{
	return channelType_;
}

void SendMessageRequest::setChannelType(const std::string& channelType)
{
	channelType_ = channelType;
	setBodyParameter("ChannelType", channelType);
}

std::string SendMessageRequest::getFrom()const
{
	return from_;
}

void SendMessageRequest::setFrom(const std::string& from)
{
	from_ = from;
	setBodyParameter("From", from);
}

std::string SendMessageRequest::getText()const
{
	return text_;
}

void SendMessageRequest::setText(const std::string& text)
{
	text_ = text;
	setBodyParameter("Text", text);
}

std::string SendMessageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SendMessageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SendMessageRequest::getOwnerId()const
{
	return ownerId_;
}

void SendMessageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SendMessageRequest::getTo()const
{
	return to_;
}

void SendMessageRequest::setTo(const std::string& to)
{
	to_ = to;
	setBodyParameter("To", to);
}

std::string SendMessageRequest::getTemplateCode()const
{
	return templateCode_;
}

void SendMessageRequest::setTemplateCode(const std::string& templateCode)
{
	templateCode_ = templateCode;
	setBodyParameter("TemplateCode", templateCode);
}

