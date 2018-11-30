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

#include <alibabacloud/vod/model/SearchMediaRequest.h>

using AlibabaCloud::Vod::Model::SearchMediaRequest;

SearchMediaRequest::SearchMediaRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SearchMedia")
{}

SearchMediaRequest::~SearchMediaRequest()
{}

long SearchMediaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SearchMediaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SearchMediaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SearchMediaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int SearchMediaRequest::getPageNo()const
{
	return pageNo_;
}

void SearchMediaRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string SearchMediaRequest::getSearchType()const
{
	return searchType_;
}

void SearchMediaRequest::setSearchType(const std::string& searchType)
{
	searchType_ = searchType;
	setParameter("SearchType", searchType);
}

std::string SearchMediaRequest::getMatch()const
{
	return match_;
}

void SearchMediaRequest::setMatch(const std::string& match)
{
	match_ = match;
	setParameter("Match", match);
}

int SearchMediaRequest::getPageSize()const
{
	return pageSize_;
}

void SearchMediaRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string SearchMediaRequest::getSortBy()const
{
	return sortBy_;
}

void SearchMediaRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

long SearchMediaRequest::getOwnerId()const
{
	return ownerId_;
}

void SearchMediaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SearchMediaRequest::getFields()const
{
	return fields_;
}

void SearchMediaRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setParameter("Fields", fields);
}

std::string SearchMediaRequest::getScrollToken()const
{
	return scrollToken_;
}

void SearchMediaRequest::setScrollToken(const std::string& scrollToken)
{
	scrollToken_ = scrollToken;
	setParameter("ScrollToken", scrollToken);
}

