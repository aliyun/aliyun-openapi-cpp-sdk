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

#include <alibabacloud/linkwan/model/GetGatewayTransferPacketsDownloadUrlRequest.h>

using AlibabaCloud::LinkWAN::Model::GetGatewayTransferPacketsDownloadUrlRequest;

GetGatewayTransferPacketsDownloadUrlRequest::GetGatewayTransferPacketsDownloadUrlRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetGatewayTransferPacketsDownloadUrl")
{
	setMethod(HttpRequest::Method::Post);
}

GetGatewayTransferPacketsDownloadUrlRequest::~GetGatewayTransferPacketsDownloadUrlRequest()
{}

long GetGatewayTransferPacketsDownloadUrlRequest::getEndMillis()const
{
	return endMillis_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

std::string GetGatewayTransferPacketsDownloadUrlRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetGatewayTransferPacketsDownloadUrlRequest::getGwEui()const
{
	return gwEui_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

bool GetGatewayTransferPacketsDownloadUrlRequest::getAscending()const
{
	return ascending_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string GetGatewayTransferPacketsDownloadUrlRequest::getDevEui()const
{
	return devEui_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string GetGatewayTransferPacketsDownloadUrlRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetGatewayTransferPacketsDownloadUrlRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetGatewayTransferPacketsDownloadUrlRequest::getCategory()const
{
	return category_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

long GetGatewayTransferPacketsDownloadUrlRequest::getBeginMillis()const
{
	return beginMillis_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

std::string GetGatewayTransferPacketsDownloadUrlRequest::getSortingField()const
{
	return sortingField_;
}

void GetGatewayTransferPacketsDownloadUrlRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

