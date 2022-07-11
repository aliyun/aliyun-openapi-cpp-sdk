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

#include <alibabacloud/iot/model/AttachDestinationRequest.h>

using AlibabaCloud::Iot::Model::AttachDestinationRequest;

AttachDestinationRequest::AttachDestinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "AttachDestination")
{
	setMethod(HttpRequest::Method::Post);
}

AttachDestinationRequest::~AttachDestinationRequest()
{}

std::string AttachDestinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void AttachDestinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long AttachDestinationRequest::getDestinationId()const
{
	return destinationId_;
}

void AttachDestinationRequest::setDestinationId(long destinationId)
{
	destinationId_ = destinationId;
	setParameter("DestinationId", std::to_string(destinationId));
}

long AttachDestinationRequest::getParserId()const
{
	return parserId_;
}

void AttachDestinationRequest::setParserId(long parserId)
{
	parserId_ = parserId;
	setParameter("ParserId", std::to_string(parserId));
}

std::string AttachDestinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void AttachDestinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

bool AttachDestinationRequest::getIsFailover()const
{
	return isFailover_;
}

void AttachDestinationRequest::setIsFailover(bool isFailover)
{
	isFailover_ = isFailover;
	setParameter("IsFailover", isFailover ? "true" : "false");
}

std::string AttachDestinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void AttachDestinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

