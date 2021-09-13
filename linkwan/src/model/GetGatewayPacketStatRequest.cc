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

#include <alibabacloud/linkwan/model/GetGatewayPacketStatRequest.h>

using AlibabaCloud::LinkWAN::Model::GetGatewayPacketStatRequest;

GetGatewayPacketStatRequest::GetGatewayPacketStatRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetGatewayPacketStat")
{
	setMethod(HttpRequest::Method::Post);
}

GetGatewayPacketStatRequest::~GetGatewayPacketStatRequest()
{}

long GetGatewayPacketStatRequest::getEndMillis()const
{
	return endMillis_;
}

void GetGatewayPacketStatRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

std::string GetGatewayPacketStatRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetGatewayPacketStatRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetGatewayPacketStatRequest::getGwEui()const
{
	return gwEui_;
}

void GetGatewayPacketStatRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

std::string GetGatewayPacketStatRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetGatewayPacketStatRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetGatewayPacketStatRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetGatewayPacketStatRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long GetGatewayPacketStatRequest::getBeginMillis()const
{
	return beginMillis_;
}

void GetGatewayPacketStatRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

