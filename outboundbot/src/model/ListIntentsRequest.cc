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

#include <alibabacloud/outboundbot/model/ListIntentsRequest.h>

using AlibabaCloud::OutboundBot::Model::ListIntentsRequest;

ListIntentsRequest::ListIntentsRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ListIntents")
{
	setMethod(HttpRequest::Method::Post);
}

ListIntentsRequest::~ListIntentsRequest()
{}

int ListIntentsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListIntentsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListIntentsRequest::getScriptId()const
{
	return scriptId_;
}

void ListIntentsRequest::setScriptId(const std::string& scriptId)
{
	scriptId_ = scriptId;
	setParameter("ScriptId", scriptId);
}

std::string ListIntentsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListIntentsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListIntentsRequest::getPageSize()const
{
	return pageSize_;
}

void ListIntentsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListIntentsRequest::getKeyword()const
{
	return keyword_;
}

void ListIntentsRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}
