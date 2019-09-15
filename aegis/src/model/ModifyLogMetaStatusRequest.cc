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

#include <alibabacloud/aegis/model/ModifyLogMetaStatusRequest.h>

using AlibabaCloud::Aegis::Model::ModifyLogMetaStatusRequest;

ModifyLogMetaStatusRequest::ModifyLogMetaStatusRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyLogMetaStatus")
{}

ModifyLogMetaStatusRequest::~ModifyLogMetaStatusRequest()
{}

std::string ModifyLogMetaStatusRequest::getProject()const
{
	return project_;
}

void ModifyLogMetaStatusRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ModifyLogMetaStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyLogMetaStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyLogMetaStatusRequest::getFrom()const
{
	return from_;
}

void ModifyLogMetaStatusRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string ModifyLogMetaStatusRequest::getLang()const
{
	return lang_;
}

void ModifyLogMetaStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ModifyLogMetaStatusRequest::getLogStore()const
{
	return logStore_;
}

void ModifyLogMetaStatusRequest::setLogStore(const std::string& logStore)
{
	logStore_ = logStore;
	setCoreParameter("LogStore", logStore);
}

std::string ModifyLogMetaStatusRequest::getStatus()const
{
	return status_;
}

void ModifyLogMetaStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

