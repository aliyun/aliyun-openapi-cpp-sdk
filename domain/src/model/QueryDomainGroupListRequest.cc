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

#include <alibabacloud/domain/model/QueryDomainGroupListRequest.h>

using AlibabaCloud::Domain::Model::QueryDomainGroupListRequest;

QueryDomainGroupListRequest::QueryDomainGroupListRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryDomainGroupList")
{}

QueryDomainGroupListRequest::~QueryDomainGroupListRequest()
{}

std::string QueryDomainGroupListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryDomainGroupListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string QueryDomainGroupListRequest::getDomainGroupName()const
{
	return domainGroupName_;
}

void QueryDomainGroupListRequest::setDomainGroupName(const std::string& domainGroupName)
{
	domainGroupName_ = domainGroupName;
	setParameter("DomainGroupName", domainGroupName);
}

std::string QueryDomainGroupListRequest::getLang()const
{
	return lang_;
}

void QueryDomainGroupListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

bool QueryDomainGroupListRequest::getShowDeletingGroup()const
{
	return showDeletingGroup_;
}

void QueryDomainGroupListRequest::setShowDeletingGroup(bool showDeletingGroup)
{
	showDeletingGroup_ = showDeletingGroup;
	setParameter("ShowDeletingGroup", std::to_string(showDeletingGroup));
}

