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

#include <alibabacloud/sas/model/InstallCloudMonitorRequest.h>

using AlibabaCloud::Sas::Model::InstallCloudMonitorRequest;

InstallCloudMonitorRequest::InstallCloudMonitorRequest() :
	RpcServiceRequest("sas", "2018-12-03", "InstallCloudMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

InstallCloudMonitorRequest::~InstallCloudMonitorRequest()
{}

std::string InstallCloudMonitorRequest::getAgentAccessKey()const
{
	return agentAccessKey_;
}

void InstallCloudMonitorRequest::setAgentAccessKey(const std::string& agentAccessKey)
{
	agentAccessKey_ = agentAccessKey;
	setParameter("AgentAccessKey", agentAccessKey);
}

std::string InstallCloudMonitorRequest::getAgentSecretKey()const
{
	return agentSecretKey_;
}

void InstallCloudMonitorRequest::setAgentSecretKey(const std::string& agentSecretKey)
{
	agentSecretKey_ = agentSecretKey;
	setParameter("AgentSecretKey", agentSecretKey);
}

std::string InstallCloudMonitorRequest::getSourceIp()const
{
	return sourceIp_;
}

void InstallCloudMonitorRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::vector<std::string> InstallCloudMonitorRequest::getUuidList()const
{
	return uuidList_;
}

void InstallCloudMonitorRequest::setUuidList(const std::vector<std::string>& uuidList)
{
	uuidList_ = uuidList;
	for(int dep1 = 0; dep1!= uuidList.size(); dep1++) {
		setParameter("UuidList."+ std::to_string(dep1), uuidList.at(dep1));
	}
}

std::string InstallCloudMonitorRequest::getArgusVersion()const
{
	return argusVersion_;
}

void InstallCloudMonitorRequest::setArgusVersion(const std::string& argusVersion)
{
	argusVersion_ = argusVersion;
	setParameter("ArgusVersion", argusVersion);
}

std::vector<std::string> InstallCloudMonitorRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void InstallCloudMonitorRequest::setInstanceIdList(const std::vector<std::string>& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	for(int dep1 = 0; dep1!= instanceIdList.size(); dep1++) {
		setParameter("InstanceIdList."+ std::to_string(dep1), instanceIdList.at(dep1));
	}
}

