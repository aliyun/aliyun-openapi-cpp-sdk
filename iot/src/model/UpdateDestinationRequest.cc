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

#include <alibabacloud/iot/model/UpdateDestinationRequest.h>

using AlibabaCloud::Iot::Model::UpdateDestinationRequest;

UpdateDestinationRequest::UpdateDestinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateDestination")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDestinationRequest::~UpdateDestinationRequest()
{}

std::string UpdateDestinationRequest::getConfiguration()const
{
	return configuration_;
}

void UpdateDestinationRequest::setConfiguration(const std::string& configuration)
{
	configuration_ = configuration;
	setParameter("Configuration", configuration);
}

std::string UpdateDestinationRequest::getDescription()const
{
	return description_;
}

void UpdateDestinationRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateDestinationRequest::getType()const
{
	return type_;
}

void UpdateDestinationRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string UpdateDestinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateDestinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long UpdateDestinationRequest::getDestinationId()const
{
	return destinationId_;
}

void UpdateDestinationRequest::setDestinationId(long destinationId)
{
	destinationId_ = destinationId;
	setParameter("DestinationId", std::to_string(destinationId));
}

std::string UpdateDestinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateDestinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateDestinationRequest::getName()const
{
	return name_;
}

void UpdateDestinationRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateDestinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateDestinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

