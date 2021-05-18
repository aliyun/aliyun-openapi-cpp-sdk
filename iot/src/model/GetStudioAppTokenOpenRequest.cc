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

#include <alibabacloud/iot/model/GetStudioAppTokenOpenRequest.h>

using AlibabaCloud::Iot::Model::GetStudioAppTokenOpenRequest;

GetStudioAppTokenOpenRequest::GetStudioAppTokenOpenRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetStudioAppTokenOpen")
{
	setMethod(HttpRequest::Method::Post);
}

GetStudioAppTokenOpenRequest::~GetStudioAppTokenOpenRequest()
{}

std::string GetStudioAppTokenOpenRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetStudioAppTokenOpenRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string GetStudioAppTokenOpenRequest::getProjectId()const
{
	return projectId_;
}

void GetStudioAppTokenOpenRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string GetStudioAppTokenOpenRequest::getAppId()const
{
	return appId_;
}

void GetStudioAppTokenOpenRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string GetStudioAppTokenOpenRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetStudioAppTokenOpenRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetStudioAppTokenOpenRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetStudioAppTokenOpenRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

