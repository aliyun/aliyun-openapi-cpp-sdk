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

#include <alibabacloud/trademark/model/QueryTrademarkMonitorRulesRequest.h>

using AlibabaCloud::Trademark::Model::QueryTrademarkMonitorRulesRequest;

QueryTrademarkMonitorRulesRequest::QueryTrademarkMonitorRulesRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryTrademarkMonitorRules")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTrademarkMonitorRulesRequest::~QueryTrademarkMonitorRulesRequest()
{}

std::string QueryTrademarkMonitorRulesRequest::getRuleName()const
{
	return ruleName_;
}

void QueryTrademarkMonitorRulesRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

int QueryTrademarkMonitorRulesRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTrademarkMonitorRulesRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

int QueryTrademarkMonitorRulesRequest::getNotifyUpdate()const
{
	return notifyUpdate_;
}

void QueryTrademarkMonitorRulesRequest::setNotifyUpdate(int notifyUpdate)
{
	notifyUpdate_ = notifyUpdate;
	setParameter("NotifyUpdate", std::to_string(notifyUpdate));
}

int QueryTrademarkMonitorRulesRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTrademarkMonitorRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryTrademarkMonitorRulesRequest::getId()const
{
	return id_;
}

void QueryTrademarkMonitorRulesRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

