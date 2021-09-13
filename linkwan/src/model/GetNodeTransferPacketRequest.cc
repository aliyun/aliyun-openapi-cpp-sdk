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

#include <alibabacloud/linkwan/model/GetNodeTransferPacketRequest.h>

using AlibabaCloud::LinkWAN::Model::GetNodeTransferPacketRequest;

GetNodeTransferPacketRequest::GetNodeTransferPacketRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetNodeTransferPacket")
{
	setMethod(HttpRequest::Method::Post);
}

GetNodeTransferPacketRequest::~GetNodeTransferPacketRequest()
{}

std::string GetNodeTransferPacketRequest::getBase64EncodedMacPayload()const
{
	return base64EncodedMacPayload_;
}

void GetNodeTransferPacketRequest::setBase64EncodedMacPayload(const std::string& base64EncodedMacPayload)
{
	base64EncodedMacPayload_ = base64EncodedMacPayload;
	setParameter("Base64EncodedMacPayload", base64EncodedMacPayload);
}

std::string GetNodeTransferPacketRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetNodeTransferPacketRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long GetNodeTransferPacketRequest::getLogMillis()const
{
	return logMillis_;
}

void GetNodeTransferPacketRequest::setLogMillis(long logMillis)
{
	logMillis_ = logMillis;
	setParameter("LogMillis", std::to_string(logMillis));
}

std::string GetNodeTransferPacketRequest::getDevEui()const
{
	return devEui_;
}

void GetNodeTransferPacketRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string GetNodeTransferPacketRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetNodeTransferPacketRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetNodeTransferPacketRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetNodeTransferPacketRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

