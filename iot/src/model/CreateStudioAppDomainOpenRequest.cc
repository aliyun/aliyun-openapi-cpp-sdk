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

#include <alibabacloud/iot/model/CreateStudioAppDomainOpenRequest.h>

using AlibabaCloud::Iot::Model::CreateStudioAppDomainOpenRequest;

CreateStudioAppDomainOpenRequest::CreateStudioAppDomainOpenRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateStudioAppDomainOpen")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStudioAppDomainOpenRequest::~CreateStudioAppDomainOpenRequest()
{}

std::string CreateStudioAppDomainOpenRequest::getProtocol()const
{
	return protocol_;
}

void CreateStudioAppDomainOpenRequest::setProtocol(const std::string& protocol)
{
	protocol_ = protocol;
	setBodyParameter("Protocol", protocol);
}

std::string CreateStudioAppDomainOpenRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateStudioAppDomainOpenRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string CreateStudioAppDomainOpenRequest::getHost()const
{
	return host_;
}

void CreateStudioAppDomainOpenRequest::setHost(const std::string& host)
{
	host_ = host;
	setBodyParameter("Host", host);
}

std::string CreateStudioAppDomainOpenRequest::getProjectId()const
{
	return projectId_;
}

void CreateStudioAppDomainOpenRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string CreateStudioAppDomainOpenRequest::getAppId()const
{
	return appId_;
}

void CreateStudioAppDomainOpenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string CreateStudioAppDomainOpenRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateStudioAppDomainOpenRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateStudioAppDomainOpenRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateStudioAppDomainOpenRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

