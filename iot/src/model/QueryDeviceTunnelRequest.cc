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

#include <alibabacloud/iot/model/QueryDeviceTunnelRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceTunnelRequest;

QueryDeviceTunnelRequest::QueryDeviceTunnelRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceTunnel")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceTunnelRequest::~QueryDeviceTunnelRequest()
{}

std::string QueryDeviceTunnelRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceTunnelRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryDeviceTunnelRequest::getTunnelId()const
{
	return tunnelId_;
}

void QueryDeviceTunnelRequest::setTunnelId(const std::string& tunnelId)
{
	tunnelId_ = tunnelId;
	setParameter("TunnelId", tunnelId);
}

std::string QueryDeviceTunnelRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceTunnelRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceTunnelRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceTunnelRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

