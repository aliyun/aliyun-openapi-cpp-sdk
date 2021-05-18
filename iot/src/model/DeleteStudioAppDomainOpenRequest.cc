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

#include <alibabacloud/iot/model/DeleteStudioAppDomainOpenRequest.h>

using AlibabaCloud::Iot::Model::DeleteStudioAppDomainOpenRequest;

DeleteStudioAppDomainOpenRequest::DeleteStudioAppDomainOpenRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteStudioAppDomainOpen")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteStudioAppDomainOpenRequest::~DeleteStudioAppDomainOpenRequest()
{}

int DeleteStudioAppDomainOpenRequest::getDomainId()const
{
	return domainId_;
}

void DeleteStudioAppDomainOpenRequest::setDomainId(int domainId)
{
	domainId_ = domainId;
	setBodyParameter("DomainId", std::to_string(domainId));
}

std::string DeleteStudioAppDomainOpenRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteStudioAppDomainOpenRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteStudioAppDomainOpenRequest::getProjectId()const
{
	return projectId_;
}

void DeleteStudioAppDomainOpenRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string DeleteStudioAppDomainOpenRequest::getAppId()const
{
	return appId_;
}

void DeleteStudioAppDomainOpenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string DeleteStudioAppDomainOpenRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteStudioAppDomainOpenRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteStudioAppDomainOpenRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteStudioAppDomainOpenRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

