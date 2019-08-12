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

#include <alibabacloud/aegis/model/ExportSuspEventsRequest.h>

using AlibabaCloud::Aegis::Model::ExportSuspEventsRequest;

ExportSuspEventsRequest::ExportSuspEventsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ExportSuspEvents")
{}

ExportSuspEventsRequest::~ExportSuspEventsRequest()
{}

std::string ExportSuspEventsRequest::getTimeEnd()const
{
	return timeEnd_;
}

void ExportSuspEventsRequest::setTimeEnd(const std::string& timeEnd)
{
	timeEnd_ = timeEnd;
	setCoreParameter("TimeEnd", std::to_string(timeEnd));
}

std::string ExportSuspEventsRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExportSuspEventsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string ExportSuspEventsRequest::getName()const
{
	return name_;
}

void ExportSuspEventsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string ExportSuspEventsRequest::getDealed()const
{
	return dealed_;
}

void ExportSuspEventsRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", std::to_string(dealed));
}

std::string ExportSuspEventsRequest::getRemark()const
{
	return remark_;
}

void ExportSuspEventsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", std::to_string(remark));
}

std::string ExportSuspEventsRequest::getFrom()const
{
	return from_;
}

void ExportSuspEventsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", std::to_string(from));
}

std::string ExportSuspEventsRequest::getTimeStart()const
{
	return timeStart_;
}

void ExportSuspEventsRequest::setTimeStart(const std::string& timeStart)
{
	timeStart_ = timeStart;
	setCoreParameter("TimeStart", std::to_string(timeStart));
}

std::string ExportSuspEventsRequest::getLang()const
{
	return lang_;
}

void ExportSuspEventsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string ExportSuspEventsRequest::getLevels()const
{
	return levels_;
}

void ExportSuspEventsRequest::setLevels(const std::string& levels)
{
	levels_ = levels;
	setCoreParameter("Levels", std::to_string(levels));
}

std::string ExportSuspEventsRequest::getParentEventTypes()const
{
	return parentEventTypes_;
}

void ExportSuspEventsRequest::setParentEventTypes(const std::string& parentEventTypes)
{
	parentEventTypes_ = parentEventTypes;
	setCoreParameter("ParentEventTypes", std::to_string(parentEventTypes));
}

std::string ExportSuspEventsRequest::getStatus()const
{
	return status_;
}

void ExportSuspEventsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

