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

#include <alibabacloud/aegis/model/DescribeScreenAlarmEventListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeScreenAlarmEventListRequest;

DescribeScreenAlarmEventListRequest::DescribeScreenAlarmEventListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeScreenAlarmEventList")
{}

DescribeScreenAlarmEventListRequest::~DescribeScreenAlarmEventListRequest()
{}

std::string DescribeScreenAlarmEventListRequest::getAlarmEventType()const
{
	return alarmEventType_;
}

void DescribeScreenAlarmEventListRequest::setAlarmEventType(const std::string& alarmEventType)
{
	alarmEventType_ = alarmEventType;
	setCoreParameter("AlarmEventType", alarmEventType);
}

std::string DescribeScreenAlarmEventListRequest::getRemark()const
{
	return remark_;
}

void DescribeScreenAlarmEventListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeScreenAlarmEventListRequest::getAlarmEventName()const
{
	return alarmEventName_;
}

void DescribeScreenAlarmEventListRequest::setAlarmEventName(const std::string& alarmEventName)
{
	alarmEventName_ = alarmEventName;
	setCoreParameter("AlarmEventName", alarmEventName);
}

std::string DescribeScreenAlarmEventListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeScreenAlarmEventListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeScreenAlarmEventListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScreenAlarmEventListRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeScreenAlarmEventListRequest::getFrom()const
{
	return from_;
}

void DescribeScreenAlarmEventListRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeScreenAlarmEventListRequest::getLang()const
{
	return lang_;
}

void DescribeScreenAlarmEventListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeScreenAlarmEventListRequest::getDealed()const
{
	return dealed_;
}

void DescribeScreenAlarmEventListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

int DescribeScreenAlarmEventListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeScreenAlarmEventListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeScreenAlarmEventListRequest::getLevels()const
{
	return levels_;
}

void DescribeScreenAlarmEventListRequest::setLevels(const std::string& levels)
{
	levels_ = levels;
	setCoreParameter("Levels", levels);
}

