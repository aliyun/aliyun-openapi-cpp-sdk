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

#include <alibabacloud/trademark/model/QueryTradeIntentionUserListRequest.h>

using AlibabaCloud::Trademark::Model::QueryTradeIntentionUserListRequest;

QueryTradeIntentionUserListRequest::QueryTradeIntentionUserListRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryTradeIntentionUserList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTradeIntentionUserListRequest::~QueryTradeIntentionUserListRequest()
{}

int QueryTradeIntentionUserListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTradeIntentionUserListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

int QueryTradeIntentionUserListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTradeIntentionUserListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryTradeIntentionUserListRequest::getBizId()const
{
	return bizId_;
}

void QueryTradeIntentionUserListRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

long QueryTradeIntentionUserListRequest::getEnd()const
{
	return end_;
}

void QueryTradeIntentionUserListRequest::setEnd(long end)
{
	end_ = end;
	setParameter("End", std::to_string(end));
}

long QueryTradeIntentionUserListRequest::getBegin()const
{
	return begin_;
}

void QueryTradeIntentionUserListRequest::setBegin(long begin)
{
	begin_ = begin;
	setParameter("Begin", std::to_string(begin));
}

int QueryTradeIntentionUserListRequest::getStatus()const
{
	return status_;
}

void QueryTradeIntentionUserListRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

