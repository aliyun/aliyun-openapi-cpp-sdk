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

#include <alibabacloud/cloudgame/model/ListGamesRequest.h>

using AlibabaCloud::Cloudgame::Model::ListGamesRequest;

ListGamesRequest::ListGamesRequest() :
	RpcServiceRequest("cloudgame", "2020-04-29", "ListGames")
{
	setMethod(HttpRequest::Method::Post);
}

ListGamesRequest::~ListGamesRequest()
{}

std::string ListGamesRequest::getOrderKey()const
{
	return orderKey_;
}

void ListGamesRequest::setOrderKey(const std::string& orderKey)
{
	orderKey_ = orderKey;
	setParameter("OrderKey", orderKey);
}

std::string ListGamesRequest::getSortType()const
{
	return sortType_;
}

void ListGamesRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setParameter("SortType", sortType);
}

int ListGamesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListGamesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListGamesRequest::getPageSize()const
{
	return pageSize_;
}

void ListGamesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

