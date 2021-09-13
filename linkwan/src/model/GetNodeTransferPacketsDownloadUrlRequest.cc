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

#include <alibabacloud/linkwan/model/GetNodeTransferPacketsDownloadUrlRequest.h>

using AlibabaCloud::LinkWAN::Model::GetNodeTransferPacketsDownloadUrlRequest;

GetNodeTransferPacketsDownloadUrlRequest::GetNodeTransferPacketsDownloadUrlRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetNodeTransferPacketsDownloadUrl")
{
	setMethod(HttpRequest::Method::Post);
}

GetNodeTransferPacketsDownloadUrlRequest::~GetNodeTransferPacketsDownloadUrlRequest()
{}

long GetNodeTransferPacketsDownloadUrlRequest::getEndMillis()const
{
	return endMillis_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

std::string GetNodeTransferPacketsDownloadUrlRequest::getGwEui()const
{
	return gwEui_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

bool GetNodeTransferPacketsDownloadUrlRequest::getAscending()const
{
	return ascending_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

std::string GetNodeTransferPacketsDownloadUrlRequest::getDevEui()const
{
	return devEui_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string GetNodeTransferPacketsDownloadUrlRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetNodeTransferPacketsDownloadUrlRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GetNodeTransferPacketsDownloadUrlRequest::getCategory()const
{
	return category_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

long GetNodeTransferPacketsDownloadUrlRequest::getBeginMillis()const
{
	return beginMillis_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

std::string GetNodeTransferPacketsDownloadUrlRequest::getSortingField()const
{
	return sortingField_;
}

void GetNodeTransferPacketsDownloadUrlRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

