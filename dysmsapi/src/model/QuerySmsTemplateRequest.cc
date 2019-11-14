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

#include <alibabacloud/dysmsapi/model/QuerySmsTemplateRequest.h>

using AlibabaCloud::Dysmsapi::Model::QuerySmsTemplateRequest;

QuerySmsTemplateRequest::QuerySmsTemplateRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "QuerySmsTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySmsTemplateRequest::~QuerySmsTemplateRequest()
{}

long QuerySmsTemplateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySmsTemplateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QuerySmsTemplateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySmsTemplateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QuerySmsTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySmsTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QuerySmsTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySmsTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QuerySmsTemplateRequest::getTemplateCode()const
{
	return templateCode_;
}

void QuerySmsTemplateRequest::setTemplateCode(const std::string& templateCode)
{
	templateCode_ = templateCode;
	setCoreParameter("TemplateCode", templateCode);
}

