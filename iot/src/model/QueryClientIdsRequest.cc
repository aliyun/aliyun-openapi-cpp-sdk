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

#include <alibabacloud/iot/model/QueryClientIdsRequest.h>

using AlibabaCloud::Iot::Model::QueryClientIdsRequest;

QueryClientIdsRequest::QueryClientIdsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryClientIds")
{
	setMethod(HttpRequest::Method::Post);
}

QueryClientIdsRequest::~QueryClientIdsRequest()
{}

std::string QueryClientIdsRequest::getAuthConfig()const
{
	return authConfig_;
}

void QueryClientIdsRequest::setAuthConfig(const std::string& authConfig)
{
	authConfig_ = authConfig;
	setParameter("AuthConfig", authConfig);
}

std::string QueryClientIdsRequest::getIotId()const
{
	return iotId_;
}

void QueryClientIdsRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryClientIdsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryClientIdsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryClientIdsRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryClientIdsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryClientIdsRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryClientIdsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

