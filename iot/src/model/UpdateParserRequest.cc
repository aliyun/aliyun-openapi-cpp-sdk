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

#include <alibabacloud/iot/model/UpdateParserRequest.h>

using AlibabaCloud::Iot::Model::UpdateParserRequest;

UpdateParserRequest::UpdateParserRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateParser")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateParserRequest::~UpdateParserRequest()
{}

std::string UpdateParserRequest::getDescription()const
{
	return description_;
}

void UpdateParserRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateParserRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateParserRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long UpdateParserRequest::getParserId()const
{
	return parserId_;
}

void UpdateParserRequest::setParserId(long parserId)
{
	parserId_ = parserId;
	setParameter("ParserId", std::to_string(parserId));
}

std::string UpdateParserRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateParserRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateParserRequest::getName()const
{
	return name_;
}

void UpdateParserRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateParserRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateParserRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

