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

#include <alibabacloud/iot/model/SetStudioProjectCooperationRequest.h>

using AlibabaCloud::Iot::Model::SetStudioProjectCooperationRequest;

SetStudioProjectCooperationRequest::SetStudioProjectCooperationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SetStudioProjectCooperation")
{
	setMethod(HttpRequest::Method::Post);
}

SetStudioProjectCooperationRequest::~SetStudioProjectCooperationRequest()
{}

std::string SetStudioProjectCooperationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SetStudioProjectCooperationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string SetStudioProjectCooperationRequest::getApiProduct()const
{
	return apiProduct_;
}

void SetStudioProjectCooperationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SetStudioProjectCooperationRequest::getApiRevision()const
{
	return apiRevision_;
}

void SetStudioProjectCooperationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string SetStudioProjectCooperationRequest::getStatus()const
{
	return status_;
}

void SetStudioProjectCooperationRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

