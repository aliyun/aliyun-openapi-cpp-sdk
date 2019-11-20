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
{
	setMethod(HttpRequest::Method::Post);
}

SearchMediaRequest::~SearchMediaRequest()
{}

long SearchMediaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SearchMediaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SearchMediaRequest::getSessionId()const
{
	return sessionId_;
}

void SearchMediaRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setCoreParameter("SessionId", sessionId);
}

std::string SearchMediaRequest::getScrollToken()const
{
	return scrollToken_;
}

void SearchMediaRequest::setScrollToken(const std::string& scrollToken)
{
	scrollToken_ = scrollToken;
	setCoreParameter("ScrollToken", scrollToken);
}

std::string SearchMediaRequest::getSearchType()const
{
	return searchType_;
}

void SearchMediaRequest::setSearchType(const std::string& searchType)
{
	searchType_ = searchType;
	setCoreParameter("SearchType", searchType);
}

int SearchMediaRequest::getPageSize()const
{
	return pageSize_;
}

void SearchMediaRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string SearchMediaRequest::getResultTypes()const
{
	return resultTypes_;
}

void SearchMediaRequest::setResultTypes(const std::string& resultTypes)
{
	resultTypes_ = resultTypes;
	setCoreParameter("ResultTypes", resultTypes);
}

std::string SearchMediaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SearchMediaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SearchMediaRequest::getMatch()const
{
	return match_;
}

void SearchMediaRequest::setMatch(const std::string& match)
{
	match_ = match;
	setCoreParameter("Match", match);
}

long SearchMediaRequest::getOwnerId()const
{
	return ownerId_;
}

void SearchMediaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int SearchMediaRequest::getPageNo()const
{
	return pageNo_;
}

void SearchMediaRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

std::string SearchMediaRequest::getSortBy()const
{
	return sortBy_;
}

void SearchMediaRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

std::string SearchMediaRequest::getFields()const
{
	return fields_;
}

void SearchMediaRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

