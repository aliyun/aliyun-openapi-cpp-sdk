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

#include <alibabacloud/sas/model/QueryGroupedSecurityEventMarkMissListRequest.h>

using AlibabaCloud::Sas::Model::QueryGroupedSecurityEventMarkMissListRequest;

QueryGroupedSecurityEventMarkMissListRequest::QueryGroupedSecurityEventMarkMissListRequest() :
	RpcServiceRequest("sas", "2018-12-03", "QueryGroupedSecurityEventMarkMissList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryGroupedSecurityEventMarkMissListRequest::~QueryGroupedSecurityEventMarkMissListRequest()
{}

std::string QueryGroupedSecurityEventMarkMissListRequest::getRemark()const
{
	return remark_;
}

void QueryGroupedSecurityEventMarkMissListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setBodyParameter("Remark", remark);
}

std::string QueryGroupedSecurityEventMarkMissListRequest::getEventName()const
{
	return eventName_;
}

void QueryGroupedSecurityEventMarkMissListRequest::setEventName(const std::string& eventName)
{
	eventName_ = eventName;
	setBodyParameter("EventName", eventName);
}

long QueryGroupedSecurityEventMarkMissListRequest::getMaxId()const
{
	return maxId_;
}

void QueryGroupedSecurityEventMarkMissListRequest::setMaxId(long maxId)
{
	maxId_ = maxId;
	setBodyParameter("MaxId", std::to_string(maxId));
}

std::string QueryGroupedSecurityEventMarkMissListRequest::getSourceIp()const
{
	return sourceIp_;
}

void QueryGroupedSecurityEventMarkMissListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int QueryGroupedSecurityEventMarkMissListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryGroupedSecurityEventMarkMissListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryGroupedSecurityEventMarkMissListRequest::getFrom()const
{
	return from_;
}

void QueryGroupedSecurityEventMarkMissListRequest::setFrom(const std::string& from)
{
	from_ = from;
	setBodyParameter("From", from);
}

std::string QueryGroupedSecurityEventMarkMissListRequest::getLang()const
{
	return lang_;
}

void QueryGroupedSecurityEventMarkMissListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setBodyParameter("Lang", lang);
}

int QueryGroupedSecurityEventMarkMissListRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryGroupedSecurityEventMarkMissListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setBodyParameter("CurrentPage", std::to_string(currentPage));
}

