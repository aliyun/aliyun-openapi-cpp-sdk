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

#include <alibabacloud/iot/model/DeleteDeviceTunnelRequest.h>

using AlibabaCloud::Iot::Model::DeleteDeviceTunnelRequest;

DeleteDeviceTunnelRequest::DeleteDeviceTunnelRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteDeviceTunnel")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDeviceTunnelRequest::~DeleteDeviceTunnelRequest()
{}

std::string DeleteDeviceTunnelRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteDeviceTunnelRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteDeviceTunnelRequest::getTunnelId()const
{
	return tunnelId_;
}

void DeleteDeviceTunnelRequest::setTunnelId(const std::string& tunnelId)
{
	tunnelId_ = tunnelId;
	setParameter("TunnelId", tunnelId);
}

std::string DeleteDeviceTunnelRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteDeviceTunnelRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteDeviceTunnelRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteDeviceTunnelRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

