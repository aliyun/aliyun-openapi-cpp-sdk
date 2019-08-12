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

#include <alibabacloud/emr/model/CreateFlowProjectClusterSettingRequest.h>

using AlibabaCloud::Emr::Model::CreateFlowProjectClusterSettingRequest;

CreateFlowProjectClusterSettingRequest::CreateFlowProjectClusterSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateFlowProjectClusterSetting")
{}

CreateFlowProjectClusterSettingRequest::~CreateFlowProjectClusterSettingRequest()
{}

std::vector<std::string> CreateFlowProjectClusterSettingRequest::getUserList()const
{
	return userList_;
}

void CreateFlowProjectClusterSettingRequest::setUserList(const std::vector<std::string>& userList)
{
	userList_ = userList;
	for(int i = 0; i!= userList.size(); i++)
		setCoreParameter("UserList."+ std::to_string(i), std::to_string(userList.at(i)));
}

std::vector<std::string> CreateFlowProjectClusterSettingRequest::getQueueList()const
{
	return queueList_;
}

void CreateFlowProjectClusterSettingRequest::setQueueList(const std::vector<std::string>& queueList)
{
	queueList_ = queueList;
	for(int i = 0; i!= queueList.size(); i++)
		setCoreParameter("QueueList."+ std::to_string(i), std::to_string(queueList.at(i)));
}

std::string CreateFlowProjectClusterSettingRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowProjectClusterSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<std::string> CreateFlowProjectClusterSettingRequest::getHostList()const
{
	return hostList_;
}

void CreateFlowProjectClusterSettingRequest::setHostList(const std::vector<std::string>& hostList)
{
	hostList_ = hostList;
	for(int i = 0; i!= hostList.size(); i++)
		setCoreParameter("HostList."+ std::to_string(i), std::to_string(hostList.at(i)));
}

std::string CreateFlowProjectClusterSettingRequest::getClusterId()const
{
	return clusterId_;
}

void CreateFlowProjectClusterSettingRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateFlowProjectClusterSettingRequest::getDefaultQueue()const
{
	return defaultQueue_;
}

void CreateFlowProjectClusterSettingRequest::setDefaultQueue(const std::string& defaultQueue)
{
	defaultQueue_ = defaultQueue;
	setCoreParameter("DefaultQueue", defaultQueue);
}

std::string CreateFlowProjectClusterSettingRequest::getProjectId()const
{
	return projectId_;
}

void CreateFlowProjectClusterSettingRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateFlowProjectClusterSettingRequest::getDefaultUser()const
{
	return defaultUser_;
}

void CreateFlowProjectClusterSettingRequest::setDefaultUser(const std::string& defaultUser)
{
	defaultUser_ = defaultUser;
	setCoreParameter("DefaultUser", defaultUser);
}

