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

#include <alibabacloud/linkwan/model/GetGatewayRequest.h>

using AlibabaCloud::LinkWAN::Model::GetGatewayRequest;

GetGatewayRequest::GetGatewayRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetGateway")
{
	setMethod(HttpRequest::Method::Post);
}

GetGatewayRequest::~GetGatewayRequest()
{}

std::string GetGatewayRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetGatewayRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetGatewayRequest::getGwEui()const
{
	return gwEui_;
}

void GetGatewayRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

std::string GetGatewayRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetGatewayRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetGatewayRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetGatewayRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

