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

#include <alibabacloud/reid/model/PullTryOnShoesEventRequest.h>

using AlibabaCloud::Reid::Model::PullTryOnShoesEventRequest;

PullTryOnShoesEventRequest::PullTryOnShoesEventRequest() :
	RpcServiceRequest("reid", "2019-09-28", "PullTryOnShoesEvent")
{
	setMethod(HttpRequest::Method::Post);
}

PullTryOnShoesEventRequest::~PullTryOnShoesEventRequest()
{}

std::string PullTryOnShoesEventRequest::getDate()const
{
	return date_;
}

void PullTryOnShoesEventRequest::setDate(const std::string& date)
{
	date_ = date;
	setBodyParameter("Date", date);
}

long PullTryOnShoesEventRequest::getStoreId()const
{
	return storeId_;
}

void PullTryOnShoesEventRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

int PullTryOnShoesEventRequest::getPageNumber()const
{
	return pageNumber_;
}

void PullTryOnShoesEventRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int PullTryOnShoesEventRequest::getPageSize()const
{
	return pageSize_;
}

void PullTryOnShoesEventRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string PullTryOnShoesEventRequest::getName()const
{
	return name_;
}

void PullTryOnShoesEventRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string PullTryOnShoesEventRequest::getSkuId()const
{
	return skuId_;
}

void PullTryOnShoesEventRequest::setSkuId(const std::string& skuId)
{
	skuId_ = skuId;
	setBodyParameter("SkuId", skuId);
}

