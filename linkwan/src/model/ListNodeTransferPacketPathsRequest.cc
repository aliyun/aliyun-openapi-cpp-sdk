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

#include <alibabacloud/linkwan/model/ListNodeTransferPacketPathsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodeTransferPacketPathsRequest;

ListNodeTransferPacketPathsRequest::ListNodeTransferPacketPathsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodeTransferPacketPaths")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeTransferPacketPathsRequest::~ListNodeTransferPacketPathsRequest()
{}

std::string ListNodeTransferPacketPathsRequest::getBase64EncodedMacPayload()const
{
	return base64EncodedMacPayload_;
}

void ListNodeTransferPacketPathsRequest::setBase64EncodedMacPayload(const std::string& base64EncodedMacPayload)
{
	base64EncodedMacPayload_ = base64EncodedMacPayload;
	setParameter("Base64EncodedMacPayload", base64EncodedMacPayload);
}

int ListNodeTransferPacketPathsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListNodeTransferPacketPathsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListNodeTransferPacketPathsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListNodeTransferPacketPathsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long ListNodeTransferPacketPathsRequest::getLogMillis()const
{
	return logMillis_;
}

void ListNodeTransferPacketPathsRequest::setLogMillis(long logMillis)
{
	logMillis_ = logMillis;
	setParameter("LogMillis", std::to_string(logMillis));
}

int ListNodeTransferPacketPathsRequest::getPageSize()const
{
	return pageSize_;
}

void ListNodeTransferPacketPathsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListNodeTransferPacketPathsRequest::getDevEui()const
{
	return devEui_;
}

void ListNodeTransferPacketPathsRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string ListNodeTransferPacketPathsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodeTransferPacketPathsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodeTransferPacketPathsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodeTransferPacketPathsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

