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

#include <alibabacloud/iot/model/PublishStudioAppRequest.h>

using AlibabaCloud::Iot::Model::PublishStudioAppRequest;

PublishStudioAppRequest::PublishStudioAppRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PublishStudioApp")
{
	setMethod(HttpRequest::Method::Post);
}

PublishStudioAppRequest::~PublishStudioAppRequest()
{}

std::string PublishStudioAppRequest::getDescription()const
{
	return description_;
}

void PublishStudioAppRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string PublishStudioAppRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PublishStudioAppRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string PublishStudioAppRequest::getProjectId()const
{
	return projectId_;
}

void PublishStudioAppRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string PublishStudioAppRequest::getAppId()const
{
	return appId_;
}

void PublishStudioAppRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string PublishStudioAppRequest::getApiProduct()const
{
	return apiProduct_;
}

void PublishStudioAppRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string PublishStudioAppRequest::getApiRevision()const
{
	return apiRevision_;
}

void PublishStudioAppRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

