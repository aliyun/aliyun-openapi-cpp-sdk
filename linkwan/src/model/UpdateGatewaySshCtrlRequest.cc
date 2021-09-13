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

#include <alibabacloud/linkwan/model/UpdateGatewaySshCtrlRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateGatewaySshCtrlRequest;

UpdateGatewaySshCtrlRequest::UpdateGatewaySshCtrlRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateGatewaySshCtrl")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateGatewaySshCtrlRequest::~UpdateGatewaySshCtrlRequest()
{}

bool UpdateGatewaySshCtrlRequest::getEnabled()const
{
	return enabled_;
}

void UpdateGatewaySshCtrlRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string UpdateGatewaySshCtrlRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateGatewaySshCtrlRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateGatewaySshCtrlRequest::getGwEui()const
{
	return gwEui_;
}

void UpdateGatewaySshCtrlRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

std::string UpdateGatewaySshCtrlRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateGatewaySshCtrlRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateGatewaySshCtrlRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateGatewaySshCtrlRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

