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

#include <alibabacloud/linkwan/model/UpdateGatewayEnablingStateRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateGatewayEnablingStateRequest;

UpdateGatewayEnablingStateRequest::UpdateGatewayEnablingStateRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateGatewayEnablingState")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateGatewayEnablingStateRequest::~UpdateGatewayEnablingStateRequest()
{}

bool UpdateGatewayEnablingStateRequest::getEnabled()const
{
	return enabled_;
}

void UpdateGatewayEnablingStateRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string UpdateGatewayEnablingStateRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateGatewayEnablingStateRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateGatewayEnablingStateRequest::getGwEui()const
{
	return gwEui_;
}

void UpdateGatewayEnablingStateRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

std::string UpdateGatewayEnablingStateRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateGatewayEnablingStateRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateGatewayEnablingStateRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateGatewayEnablingStateRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

