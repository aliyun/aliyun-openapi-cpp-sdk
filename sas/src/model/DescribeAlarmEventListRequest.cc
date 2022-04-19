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

#include <alibabacloud/sas/model/DescribeAlarmEventListRequest.h>

using AlibabaCloud::Sas::Model::DescribeAlarmEventListRequest;

DescribeAlarmEventListRequest::DescribeAlarmEventListRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeAlarmEventList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAlarmEventListRequest::~DescribeAlarmEventListRequest()
{}

std::string DescribeAlarmEventListRequest::getTargetType()const
{
	return targetType_;
}

void DescribeAlarmEventListRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setParameter("TargetType", targetType);
}

std::string DescribeAlarmEventListRequest::getAlarmEventType()const
{
	return alarmEventType_;
}

void DescribeAlarmEventListRequest::setAlarmEventType(const std::string& alarmEventType)
{
	alarmEventType_ = alarmEventType;
	setParameter("AlarmEventType", alarmEventType);
}

std::string DescribeAlarmEventListRequest::getRemark()const
{
	return remark_;
}

void DescribeAlarmEventListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DescribeAlarmEventListRequest::getContainerFieldName()const
{
	return containerFieldName_;
}

void DescribeAlarmEventListRequest::setContainerFieldName(const std::string& containerFieldName)
{
	containerFieldName_ = containerFieldName;
	setParameter("ContainerFieldName", containerFieldName);
}

std::string DescribeAlarmEventListRequest::getAlarmEventName()const
{
	return alarmEventName_;
}

void DescribeAlarmEventListRequest::setAlarmEventName(const std::string& alarmEventName)
{
	alarmEventName_ = alarmEventName;
	setParameter("AlarmEventName", alarmEventName);
}

std::string DescribeAlarmEventListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAlarmEventListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeAlarmEventListRequest::getContainerFieldValue()const
{
	return containerFieldValue_;
}

void DescribeAlarmEventListRequest::setContainerFieldValue(const std::string& containerFieldValue)
{
	containerFieldValue_ = containerFieldValue;
	setParameter("ContainerFieldValue", containerFieldValue);
}

std::string DescribeAlarmEventListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAlarmEventListRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeAlarmEventListRequest::getFrom()const
{
	return from_;
}

void DescribeAlarmEventListRequest::setFrom(const std::string& from)
{
	from_ = from;
	setParameter("From", from);
}

std::string DescribeAlarmEventListRequest::getTacticId()const
{
	return tacticId_;
}

void DescribeAlarmEventListRequest::setTacticId(const std::string& tacticId)
{
	tacticId_ = tacticId;
	setParameter("TacticId", tacticId);
}

std::string DescribeAlarmEventListRequest::getLang()const
{
	return lang_;
}

void DescribeAlarmEventListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeAlarmEventListRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAlarmEventListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string DescribeAlarmEventListRequest::getDealed()const
{
	return dealed_;
}

void DescribeAlarmEventListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

int DescribeAlarmEventListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAlarmEventListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAlarmEventListRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeAlarmEventListRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::vector<std::string> DescribeAlarmEventListRequest::getOperateErrorCodeList()const
{
	return operateErrorCodeList_;
}

void DescribeAlarmEventListRequest::setOperateErrorCodeList(const std::vector<std::string>& operateErrorCodeList)
{
	operateErrorCodeList_ = operateErrorCodeList;
	for(int dep1 = 0; dep1!= operateErrorCodeList.size(); dep1++) {
		setParameter("OperateErrorCodeList."+ std::to_string(dep1), operateErrorCodeList.at(dep1));
	}
}

std::string DescribeAlarmEventListRequest::getLevels()const
{
	return levels_;
}

void DescribeAlarmEventListRequest::setLevels(const std::string& levels)
{
	levels_ = levels;
	setParameter("Levels", levels);
}

