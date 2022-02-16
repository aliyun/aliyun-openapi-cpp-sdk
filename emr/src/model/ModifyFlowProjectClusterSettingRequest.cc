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

#include <alibabacloud/emr/model/ModifyFlowProjectClusterSettingRequest.h>

using AlibabaCloud::Emr::Model::ModifyFlowProjectClusterSettingRequest;

ModifyFlowProjectClusterSettingRequest::ModifyFlowProjectClusterSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyFlowProjectClusterSetting")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyFlowProjectClusterSettingRequest::~ModifyFlowProjectClusterSettingRequest()
{}

std::vector<std::string> ModifyFlowProjectClusterSettingRequest::getUserList()const
{
	return userList_;
}

void ModifyFlowProjectClusterSettingRequest::setUserList(const std::vector<std::string>& userList)
{
	userList_ = userList;
	for(int dep1 = 0; dep1!= userList.size(); dep1++) {
		setParameter("UserList."+ std::to_string(dep1), userList.at(dep1));
	}
}

std::vector<std::string> ModifyFlowProjectClusterSettingRequest::getHostList()const
{
	return hostList_;
}

void ModifyFlowProjectClusterSettingRequest::setHostList(const std::vector<std::string>& hostList)
{
	hostList_ = hostList;
	for(int dep1 = 0; dep1!= hostList.size(); dep1++) {
		setParameter("HostList."+ std::to_string(dep1), hostList.at(dep1));
	}
}

std::string ModifyFlowProjectClusterSettingRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyFlowProjectClusterSettingRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyFlowProjectClusterSettingRequest::getDefaultQueue()const
{
	return defaultQueue_;
}

void ModifyFlowProjectClusterSettingRequest::setDefaultQueue(const std::string& defaultQueue)
{
	defaultQueue_ = defaultQueue;
	setParameter("DefaultQueue", defaultQueue);
}

std::string ModifyFlowProjectClusterSettingRequest::getDefaultUser()const
{
	return defaultUser_;
}

void ModifyFlowProjectClusterSettingRequest::setDefaultUser(const std::string& defaultUser)
{
	defaultUser_ = defaultUser;
	setParameter("DefaultUser", defaultUser);
}

std::vector<std::string> ModifyFlowProjectClusterSettingRequest::getQueueList()const
{
	return queueList_;
}

void ModifyFlowProjectClusterSettingRequest::setQueueList(const std::vector<std::string>& queueList)
{
	queueList_ = queueList;
	for(int dep1 = 0; dep1!= queueList.size(); dep1++) {
		setParameter("QueueList."+ std::to_string(dep1), queueList.at(dep1));
	}
}

std::string ModifyFlowProjectClusterSettingRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowProjectClusterSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyFlowProjectClusterSettingRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowProjectClusterSettingRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

