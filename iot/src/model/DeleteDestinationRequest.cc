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

#include <alibabacloud/iot/model/DeleteDestinationRequest.h>

using AlibabaCloud::Iot::Model::DeleteDestinationRequest;

DeleteDestinationRequest::DeleteDestinationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteDestination")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDestinationRequest::~DeleteDestinationRequest()
{}

std::string DeleteDestinationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteDestinationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long DeleteDestinationRequest::getDestinationId()const
{
	return destinationId_;
}

void DeleteDestinationRequest::setDestinationId(long destinationId)
{
	destinationId_ = destinationId;
	setParameter("DestinationId", std::to_string(destinationId));
}

std::string DeleteDestinationRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteDestinationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteDestinationRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteDestinationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

