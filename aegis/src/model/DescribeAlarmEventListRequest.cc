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

#include <alibabacloud/aegis/model/DescribeAlarmEventListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeAlarmEventListRequest;

DescribeAlarmEventListRequest::DescribeAlarmEventListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeAlarmEventList")
{}

DescribeAlarmEventListRequest::~DescribeAlarmEventListRequest()
{}

std::string DescribeAlarmEventListRequest::getAlarmEventType()const
{
	return alarmEventType_;
}

void DescribeAlarmEventListRequest::setAlarmEventType(const std::string& alarmEventType)
{
	alarmEventType_ = alarmEventType;
	setCoreParameter("AlarmEventType", alarmEventType);
}

std::string DescribeAlarmEventListRequest::getRemark()const
{
	return remark_;
}

void DescribeAlarmEventListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeAlarmEventListRequest::getAlarmEventName()const
{
	return alarmEventName_;
}

void DescribeAlarmEventListRequest::setAlarmEventName(const std::string& alarmEventName)
{
	alarmEventName_ = alarmEventName;
	setCoreParameter("AlarmEventName", alarmEventName);
}

std::string DescribeAlarmEventListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAlarmEventListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeAlarmEventListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAlarmEventListRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeAlarmEventListRequest::getFrom()const
{
	return from_;
}

void DescribeAlarmEventListRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeAlarmEventListRequest::getLang()const
{
	return lang_;
}

void DescribeAlarmEventListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeAlarmEventListRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAlarmEventListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeAlarmEventListRequest::getDealed()const
{
	return dealed_;
}

void DescribeAlarmEventListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

int DescribeAlarmEventListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAlarmEventListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::vector<std::string> DescribeAlarmEventListRequest::getOperateErrorCodeList()const
{
	return operateErrorCodeList_;
}

void DescribeAlarmEventListRequest::setOperateErrorCodeList(const std::vector<std::string>& operateErrorCodeList)
{
	operateErrorCodeList_ = operateErrorCodeList;
	for(int i = 0; i!= operateErrorCodeList.size(); i++)
		setCoreParameter("OperateErrorCodeList."+ std::to_string(i), operateErrorCodeList.at(i));
}

std::string DescribeAlarmEventListRequest::getLevels()const
{
	return levels_;
}

void DescribeAlarmEventListRequest::setLevels(const std::string& levels)
{
	levels_ = levels;
	setCoreParameter("Levels", levels);
}

