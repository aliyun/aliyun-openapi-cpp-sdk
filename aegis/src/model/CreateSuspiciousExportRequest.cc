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

#include <alibabacloud/aegis/model/CreateSuspiciousExportRequest.h>

using AlibabaCloud::Aegis::Model::CreateSuspiciousExportRequest;

CreateSuspiciousExportRequest::CreateSuspiciousExportRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateSuspiciousExport")
{}

CreateSuspiciousExportRequest::~CreateSuspiciousExportRequest()
{}

std::string CreateSuspiciousExportRequest::getStatusList()const
{
	return statusList_;
}

void CreateSuspiciousExportRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", statusList);
}

std::string CreateSuspiciousExportRequest::getRemark()const
{
	return remark_;
}

void CreateSuspiciousExportRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string CreateSuspiciousExportRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateSuspiciousExportRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateSuspiciousExportRequest::getEventNameRemark()const
{
	return eventNameRemark_;
}

void CreateSuspiciousExportRequest::setEventNameRemark(const std::string& eventNameRemark)
{
	eventNameRemark_ = eventNameRemark;
	setCoreParameter("EventNameRemark", eventNameRemark);
}

std::string CreateSuspiciousExportRequest::getTag()const
{
	return tag_;
}

void CreateSuspiciousExportRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

std::string CreateSuspiciousExportRequest::getLevel()const
{
	return level_;
}

void CreateSuspiciousExportRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", level);
}

std::string CreateSuspiciousExportRequest::getGroupId()const
{
	return groupId_;
}

void CreateSuspiciousExportRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string CreateSuspiciousExportRequest::getDealed()const
{
	return dealed_;
}

void CreateSuspiciousExportRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

std::string CreateSuspiciousExportRequest::getEventType()const
{
	return eventType_;
}

void CreateSuspiciousExportRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setCoreParameter("EventType", eventType);
}

