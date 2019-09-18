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

#include <alibabacloud/push/model/BindTagRequest.h>

using AlibabaCloud::Push::Model::BindTagRequest;

BindTagRequest::BindTagRequest() :
	RpcServiceRequest("push", "2016-08-01", "BindTag")
{}

BindTagRequest::~BindTagRequest()
{}

std::string BindTagRequest::getKeyType()const
{
	return keyType_;
}

void BindTagRequest::setKeyType(const std::string& keyType)
{
	keyType_ = keyType;
	setCoreParameter("KeyType", keyType);
}

std::string BindTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BindTagRequest::getTagName()const
{
	return tagName_;
}

void BindTagRequest::setTagName(const std::string& tagName)
{
	tagName_ = tagName;
	setCoreParameter("TagName", tagName);
}

std::string BindTagRequest::getClientKey()const
{
	return clientKey_;
}

void BindTagRequest::setClientKey(const std::string& clientKey)
{
	clientKey_ = clientKey;
	setCoreParameter("ClientKey", clientKey);
}

long BindTagRequest::getAppKey()const
{
	return appKey_;
}

void BindTagRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", std::to_string(appKey));
}

