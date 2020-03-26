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

#include <alibabacloud/cloudwf/model/ListConfigByActionRequest.h>

using AlibabaCloud::Cloudwf::Model::ListConfigByActionRequest;

ListConfigByActionRequest::ListConfigByActionRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListConfigByAction")
{
	setMethod(HttpRequest::Method::Post);
}

ListConfigByActionRequest::~ListConfigByActionRequest()
{}

std::string ListConfigByActionRequest::getSearchName()const
{
	return searchName_;
}

void ListConfigByActionRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

std::string ListConfigByActionRequest::getActionName()const
{
	return actionName_;
}

void ListConfigByActionRequest::setActionName(const std::string& actionName)
{
	actionName_ = actionName;
	setParameter("ActionName", actionName);
}

std::string ListConfigByActionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListConfigByActionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListConfigByActionRequest::getLimit()const
{
	return limit_;
}

void ListConfigByActionRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

