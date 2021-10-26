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

#include <alibabacloud/quickbi-public/model/QueryUserListRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryUserListRequest;

QueryUserListRequest::QueryUserListRequest() :
	RpcServiceRequest("quickbi-public", "2020-08-01", "QueryUserList")
{
	setMethod(HttpRequest::Method::Get);
}

QueryUserListRequest::~QueryUserListRequest()
{}

int QueryUserListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryUserListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int QueryUserListRequest::getAccountType()const
{
	return accountType_;
}

void QueryUserListRequest::setAccountType(int accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", std::to_string(accountType));
}

std::string QueryUserListRequest::getAccessPoint()const
{
	return accessPoint_;
}

void QueryUserListRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

std::string QueryUserListRequest::getSignType()const
{
	return signType_;
}

void QueryUserListRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

std::string QueryUserListRequest::getKeyword()const
{
	return keyword_;
}

void QueryUserListRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

int QueryUserListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryUserListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

