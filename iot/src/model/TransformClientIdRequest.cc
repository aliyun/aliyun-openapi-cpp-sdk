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

#include <alibabacloud/iot/model/TransformClientIdRequest.h>

using AlibabaCloud::Iot::Model::TransformClientIdRequest;

TransformClientIdRequest::TransformClientIdRequest() :
	RpcServiceRequest("iot", "2018-01-20", "TransformClientId")
{
	setMethod(HttpRequest::Method::Post);
}

TransformClientIdRequest::~TransformClientIdRequest()
{}

std::string TransformClientIdRequest::getAuthConfig()const
{
	return authConfig_;
}

void TransformClientIdRequest::setAuthConfig(const std::string& authConfig)
{
	authConfig_ = authConfig;
	setParameter("AuthConfig", authConfig);
}

std::string TransformClientIdRequest::getClientId()const
{
	return clientId_;
}

void TransformClientIdRequest::setClientId(const std::string& clientId)
{
	clientId_ = clientId;
	setParameter("ClientId", clientId);
}

std::string TransformClientIdRequest::getIotId()const
{
	return iotId_;
}

void TransformClientIdRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string TransformClientIdRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void TransformClientIdRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string TransformClientIdRequest::getApiProduct()const
{
	return apiProduct_;
}

void TransformClientIdRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string TransformClientIdRequest::getApiRevision()const
{
	return apiRevision_;
}

void TransformClientIdRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

