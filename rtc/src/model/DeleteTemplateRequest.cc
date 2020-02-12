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

#include <alibabacloud/rtc/model/DeleteTemplateRequest.h>

using AlibabaCloud::Rtc::Model::DeleteTemplateRequest;

DeleteTemplateRequest::DeleteTemplateRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DeleteTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteTemplateRequest::~DeleteTemplateRequest()
{}

long DeleteTemplateRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTemplateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long DeleteTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void DeleteTemplateRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", std::to_string(templateId));
}

std::string DeleteTemplateRequest::getAppId()const
{
	return appId_;
}

void DeleteTemplateRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

