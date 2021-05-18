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

#include <alibabacloud/iot/model/RefreshStudioAppTokenOpenRequest.h>

using AlibabaCloud::Iot::Model::RefreshStudioAppTokenOpenRequest;

RefreshStudioAppTokenOpenRequest::RefreshStudioAppTokenOpenRequest() :
	RpcServiceRequest("iot", "2018-01-20", "RefreshStudioAppTokenOpen")
{
	setMethod(HttpRequest::Method::Post);
}

RefreshStudioAppTokenOpenRequest::~RefreshStudioAppTokenOpenRequest()
{}

std::string RefreshStudioAppTokenOpenRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void RefreshStudioAppTokenOpenRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string RefreshStudioAppTokenOpenRequest::getProjectId()const
{
	return projectId_;
}

void RefreshStudioAppTokenOpenRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string RefreshStudioAppTokenOpenRequest::getAppId()const
{
	return appId_;
}

void RefreshStudioAppTokenOpenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string RefreshStudioAppTokenOpenRequest::getApiProduct()const
{
	return apiProduct_;
}

void RefreshStudioAppTokenOpenRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string RefreshStudioAppTokenOpenRequest::getApiRevision()const
{
	return apiRevision_;
}

void RefreshStudioAppTokenOpenRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

