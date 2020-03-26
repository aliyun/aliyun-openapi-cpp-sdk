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

#include <alibabacloud/arms/model/SearchAlertRulesRequest.h>

using AlibabaCloud::ARMS::Model::SearchAlertRulesRequest;

SearchAlertRulesRequest::SearchAlertRulesRequest() :
	RpcServiceRequest("arms", "2019-08-08", "SearchAlertRules")
{
	setMethod(HttpRequest::Method::Post);
}

SearchAlertRulesRequest::~SearchAlertRulesRequest()
{}

std::string SearchAlertRulesRequest::getAppType()const
{
	return appType_;
}

void SearchAlertRulesRequest::setAppType(const std::string& appType)
{
	appType_ = appType;
	setParameter("AppType", appType);
}

int SearchAlertRulesRequest::getCurrentPage()const
{
	return currentPage_;
}

void SearchAlertRulesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string SearchAlertRulesRequest::getPid()const
{
	return pid_;
}

void SearchAlertRulesRequest::setPid(const std::string& pid)
{
	pid_ = pid;
	setParameter("Pid", pid);
}

std::string SearchAlertRulesRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void SearchAlertRulesRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string SearchAlertRulesRequest::getTitle()const
{
	return title_;
}

void SearchAlertRulesRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string SearchAlertRulesRequest::getType()const
{
	return type_;
}

void SearchAlertRulesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string SearchAlertRulesRequest::getRegionId()const
{
	return regionId_;
}

void SearchAlertRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int SearchAlertRulesRequest::getPageSize()const
{
	return pageSize_;
}

void SearchAlertRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

