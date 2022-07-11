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

#include <alibabacloud/iot/model/DetachDestinationRequest.h>

using AlibabaCloud::Iot::Model::DetachDestinationRequest;

DetachDestinationRequest::DetachDestinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DetachDestination")
{
	setMethod(HttpRequest::Method::Post);
}

DetachDestinationRequest::~DetachDestinationRequest()
{}

std::string DetachDestinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DetachDestinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long DetachDestinationRequest::getDestinationId()const
{
	return destinationId_;
}

void DetachDestinationRequest::setDestinationId(long destinationId)
{
	destinationId_ = destinationId;
	setParameter("DestinationId", std::to_string(destinationId));
}

long DetachDestinationRequest::getParserId()const
{
	return parserId_;
}

void DetachDestinationRequest::setParserId(long parserId)
{
	parserId_ = parserId;
	setParameter("ParserId", std::to_string(parserId));
}

std::string DetachDestinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void DetachDestinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DetachDestinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void DetachDestinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

