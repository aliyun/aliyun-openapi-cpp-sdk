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

#include <alibabacloud/aegis/model/OperateAgentClientInstallRequest.h>

using AlibabaCloud::Aegis::Model::OperateAgentClientInstallRequest;

OperateAgentClientInstallRequest::OperateAgentClientInstallRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "OperateAgentClientInstall")
{}

OperateAgentClientInstallRequest::~OperateAgentClientInstallRequest()
{}

std::string OperateAgentClientInstallRequest::getSourceIp()const
{
	return sourceIp_;
}

void OperateAgentClientInstallRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string OperateAgentClientInstallRequest::getInstanceIds()const
{
	return instanceIds_;
}

void OperateAgentClientInstallRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string OperateAgentClientInstallRequest::getLang()const
{
	return lang_;
}

void OperateAgentClientInstallRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string OperateAgentClientInstallRequest::getUuids()const
{
	return uuids_;
}

void OperateAgentClientInstallRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

