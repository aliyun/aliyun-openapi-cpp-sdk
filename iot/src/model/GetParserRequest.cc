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

#include <alibabacloud/iot/model/GetParserRequest.h>

using AlibabaCloud::Iot::Model::GetParserRequest;

GetParserRequest::GetParserRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetParser")
{
	setMethod(HttpRequest::Method::Post);
}

GetParserRequest::~GetParserRequest()
{}

std::string GetParserRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetParserRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long GetParserRequest::getParserId()const
{
	return parserId_;
}

void GetParserRequest::setParserId(long parserId)
{
	parserId_ = parserId;
	setParameter("ParserId", std::to_string(parserId));
}

std::string GetParserRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetParserRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetParserRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetParserRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

