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

#include <alibabacloud/dg/model/GetUserGatewaysRequest.h>

using AlibabaCloud::Dg::Model::GetUserGatewaysRequest;

GetUserGatewaysRequest::GetUserGatewaysRequest() :
	RpcServiceRequest("dg", "2019-03-27", "GetUserGateways")
{
	setMethod(HttpRequest::Method::Post);
}

GetUserGatewaysRequest::~GetUserGatewaysRequest()
{}

std::string GetUserGatewaysRequest::getSearchKey()const
{
	return searchKey_;
}

void GetUserGatewaysRequest::setSearchKey(const std::string& searchKey)
{
	searchKey_ = searchKey;
	setBodyParameter("SearchKey", searchKey);
}

int GetUserGatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetUserGatewaysRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetUserGatewaysRequest::getRegionId()const
{
	return regionId_;
}

void GetUserGatewaysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

int GetUserGatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void GetUserGatewaysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

