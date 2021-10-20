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

#include <alibabacloud/iot/model/AddDataForApiSourceRequest.h>

using AlibabaCloud::Iot::Model::AddDataForApiSourceRequest;

AddDataForApiSourceRequest::AddDataForApiSourceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "AddDataForApiSource")
{
	setMethod(HttpRequest::Method::Post);
}

AddDataForApiSourceRequest::~AddDataForApiSourceRequest()
{}

std::string AddDataForApiSourceRequest::getContent()const
{
	return content_;
}

void AddDataForApiSourceRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string AddDataForApiSourceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void AddDataForApiSourceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string AddDataForApiSourceRequest::getApiProduct()const
{
	return apiProduct_;
}

void AddDataForApiSourceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string AddDataForApiSourceRequest::getApiRevision()const
{
	return apiRevision_;
}

void AddDataForApiSourceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string AddDataForApiSourceRequest::getApiId()const
{
	return apiId_;
}

void AddDataForApiSourceRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setParameter("ApiId", apiId);
}

