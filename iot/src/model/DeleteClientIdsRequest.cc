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

#include <alibabacloud/iot/model/DeleteClientIdsRequest.h>

using AlibabaCloud::Iot::Model::DeleteClientIdsRequest;

DeleteClientIdsRequest::DeleteClientIdsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteClientIds")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteClientIdsRequest::~DeleteClientIdsRequest()
{}

std::string DeleteClientIdsRequest::getAuthConfig()const
{
	return authConfig_;
}

void DeleteClientIdsRequest::setAuthConfig(const std::string& authConfig)
{
	authConfig_ = authConfig;
	setParameter("AuthConfig", authConfig);
}

std::string DeleteClientIdsRequest::getIotId()const
{
	return iotId_;
}

void DeleteClientIdsRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string DeleteClientIdsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteClientIdsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteClientIdsRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteClientIdsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteClientIdsRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteClientIdsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

