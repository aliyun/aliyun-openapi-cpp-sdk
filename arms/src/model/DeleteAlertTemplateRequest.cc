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

#include <alibabacloud/arms/model/DeleteAlertTemplateRequest.h>

using AlibabaCloud::ARMS::Model::DeleteAlertTemplateRequest;

DeleteAlertTemplateRequest::DeleteAlertTemplateRequest() :
	RpcServiceRequest("arms", "2019-08-08", "DeleteAlertTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAlertTemplateRequest::~DeleteAlertTemplateRequest()
{}

std::string DeleteAlertTemplateRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAlertTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long DeleteAlertTemplateRequest::getId()const
{
	return id_;
}

void DeleteAlertTemplateRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string DeleteAlertTemplateRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void DeleteAlertTemplateRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

