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

#include <alibabacloud/trademark/model/ListNotaryInfosRequest.h>

using AlibabaCloud::Trademark::Model::ListNotaryInfosRequest;

ListNotaryInfosRequest::ListNotaryInfosRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "ListNotaryInfos")
{}

ListNotaryInfosRequest::~ListNotaryInfosRequest()
{}

std::string ListNotaryInfosRequest::getBizOrderNo()const
{
	return bizOrderNo_;
}

void ListNotaryInfosRequest::setBizOrderNo(const std::string& bizOrderNo)
{
	bizOrderNo_ = bizOrderNo;
	setCoreParameter("BizOrderNo", std::to_string(bizOrderNo));
}

int ListNotaryInfosRequest::getNotaryType()const
{
	return notaryType_;
}

void ListNotaryInfosRequest::setNotaryType(int notaryType)
{
	notaryType_ = notaryType;
	setCoreParameter("NotaryType", notaryType);
}

int ListNotaryInfosRequest::getPageSize()const
{
	return pageSize_;
}

void ListNotaryInfosRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int ListNotaryInfosRequest::getPageNum()const
{
	return pageNum_;
}

void ListNotaryInfosRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string ListNotaryInfosRequest::getToken()const
{
	return token_;
}

void ListNotaryInfosRequest::setToken(const std::string& token)
{
	token_ = token;
	setCoreParameter("Token", std::to_string(token));
}

