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

#include <alibabacloud/linkwan/model/UpdateNodeEnablingStateRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateNodeEnablingStateRequest;

UpdateNodeEnablingStateRequest::UpdateNodeEnablingStateRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateNodeEnablingState")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateNodeEnablingStateRequest::~UpdateNodeEnablingStateRequest()
{}

std::string UpdateNodeEnablingStateRequest::getDevEui()const
{
	return devEui_;
}

void UpdateNodeEnablingStateRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

bool UpdateNodeEnablingStateRequest::getIsEnable()const
{
	return isEnable_;
}

void UpdateNodeEnablingStateRequest::setIsEnable(bool isEnable)
{
	isEnable_ = isEnable;
	setParameter("IsEnable", isEnable ? "true" : "false");
}

std::string UpdateNodeEnablingStateRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateNodeEnablingStateRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateNodeEnablingStateRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateNodeEnablingStateRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

