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

#include <alibabacloud/iot/model/StartParserRequest.h>

using AlibabaCloud::Iot::Model::StartParserRequest;

StartParserRequest::StartParserRequest() :
	RpcServiceRequest("iot", "2018-01-20", "StartParser")
{
	setMethod(HttpRequest::Method::Post);
}

StartParserRequest::~StartParserRequest()
{}

std::string StartParserRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void StartParserRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long StartParserRequest::getParserId()const
{
	return parserId_;
}

void StartParserRequest::setParserId(long parserId)
{
	parserId_ = parserId;
	setParameter("ParserId", std::to_string(parserId));
}

std::string StartParserRequest::getApiProduct()const
{
	return apiProduct_;
}

void StartParserRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string StartParserRequest::getApiRevision()const
{
	return apiRevision_;
}

void StartParserRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

