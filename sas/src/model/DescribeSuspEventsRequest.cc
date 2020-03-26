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

#include <alibabacloud/sas/model/DescribeSuspEventsRequest.h>

using AlibabaCloud::Sas::Model::DescribeSuspEventsRequest;

DescribeSuspEventsRequest::DescribeSuspEventsRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeSuspEvents")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSuspEventsRequest::~DescribeSuspEventsRequest()
{}

std::string DescribeSuspEventsRequest::getRemark()const
{
	return remark_;
}

void DescribeSuspEventsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DescribeSuspEventsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSuspEventsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeSuspEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSuspEventsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeSuspEventsRequest::getFrom()const
{
	return from_;
}

void DescribeSuspEventsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setParameter("From", from);
}

std::string DescribeSuspEventsRequest::getLang()const
{
	return lang_;
}

void DescribeSuspEventsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeSuspEventsRequest::getAlarmUniqueInfo()const
{
	return alarmUniqueInfo_;
}

void DescribeSuspEventsRequest::setAlarmUniqueInfo(const std::string& alarmUniqueInfo)
{
	alarmUniqueInfo_ = alarmUniqueInfo;
	setParameter("AlarmUniqueInfo", alarmUniqueInfo);
}

std::string DescribeSuspEventsRequest::getDealed()const
{
	return dealed_;
}

void DescribeSuspEventsRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

std::string DescribeSuspEventsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeSuspEventsRequest::setCurrentPage(const std::string& currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", currentPage);
}

std::string DescribeSuspEventsRequest::getName()const
{
	return name_;
}

void DescribeSuspEventsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribeSuspEventsRequest::getLevels()const
{
	return levels_;
}

void DescribeSuspEventsRequest::setLevels(const std::string& levels)
{
	levels_ = levels;
	setParameter("Levels", levels);
}

std::string DescribeSuspEventsRequest::getParentEventTypes()const
{
	return parentEventTypes_;
}

void DescribeSuspEventsRequest::setParentEventTypes(const std::string& parentEventTypes)
{
	parentEventTypes_ = parentEventTypes;
	setParameter("ParentEventTypes", parentEventTypes);
}

