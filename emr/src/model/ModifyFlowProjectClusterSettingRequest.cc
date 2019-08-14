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
{}

ModifyFlowProjectClusterSettingRequest::~ModifyFlowProjectClusterSettingRequest()
{}

std::vector<std::string> ModifyFlowProjectClusterSettingRequest::getUserList()const
{
	return userList_;
}

void ModifyFlowProjectClusterSettingRequest::setUserList(const std::vector<std::string>& userList)
{
	userList_ = userList;
	for(int i = 0; i!= userList.size(); i++)
		setCoreParameter("UserList."+ std::to_string(i), userList.at(i));
}

std::vector<std::string> ModifyFlowProjectClusterSettingRequest::getQueueList()const
{
	return queueList_;
}

void ModifyFlowProjectClusterSettingRequest::setQueueList(const std::vector<std::string>& queueList)
{
	queueList_ = queueList;
	for(int i = 0; i!= queueList.size(); i++)
		setCoreParameter("QueueList."+ std::to_string(i), queueList.at(i));
}

std::string ModifyFlowProjectClusterSettingRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFlowProjectClusterSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<std::string> ModifyFlowProjectClusterSettingRequest::getHostList()const
{
	return hostList_;
}

void ModifyFlowProjectClusterSettingRequest::setHostList(const std::vector<std::string>& hostList)
{
	hostList_ = hostList;
	for(int i = 0; i!= hostList.size(); i++)
		setCoreParameter("HostList."+ std::to_string(i), hostList.at(i));
}

std::string ModifyFlowProjectClusterSettingRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyFlowProjectClusterSettingRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyFlowProjectClusterSettingRequest::getDefaultQueue()const
{
	return defaultQueue_;
}

void ModifyFlowProjectClusterSettingRequest::setDefaultQueue(const std::string& defaultQueue)
{
	defaultQueue_ = defaultQueue;
	setCoreParameter("DefaultQueue", defaultQueue);
}

std::string ModifyFlowProjectClusterSettingRequest::getProjectId()const
{
	return projectId_;
}

void ModifyFlowProjectClusterSettingRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string ModifyFlowProjectClusterSettingRequest::getDefaultUser()const
{
	return defaultUser_;
}

void ModifyFlowProjectClusterSettingRequest::setDefaultUser(const std::string& defaultUser)
{
	defaultUser_ = defaultUser;
	setCoreParameter("DefaultUser", defaultUser);
}

