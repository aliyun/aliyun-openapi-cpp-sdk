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

#include <alibabacloud/iot/model/CreateDestinationRequest.h>

using AlibabaCloud::Iot::Model::CreateDestinationRequest;

CreateDestinationRequest::CreateDestinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateDestination")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDestinationRequest::~CreateDestinationRequest()
{}

std::string CreateDestinationRequest::getConfiguration()const
{
	return configuration_;
}

void CreateDestinationRequest::setConfiguration(const std::string& configuration)
{
	configuration_ = configuration;
	setParameter("Configuration", configuration);
}

std::string CreateDestinationRequest::getDescription()const
{
	return description_;
}

void CreateDestinationRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateDestinationRequest::getType()const
{
	return type_;
}

void CreateDestinationRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateDestinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateDestinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateDestinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateDestinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateDestinationRequest::getName()const
{
	return name_;
}

void CreateDestinationRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateDestinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateDestinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

