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

#include <alibabacloud/emr/model/UpdateWorkspaceRepoSettingRequest.h>

using AlibabaCloud::Emr::Model::UpdateWorkspaceRepoSettingRequest;

UpdateWorkspaceRepoSettingRequest::UpdateWorkspaceRepoSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateWorkspaceRepoSetting")
{}

UpdateWorkspaceRepoSettingRequest::~UpdateWorkspaceRepoSettingRequest()
{}

long UpdateWorkspaceRepoSettingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateWorkspaceRepoSettingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateWorkspaceRepoSettingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateWorkspaceRepoSettingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateWorkspaceRepoSettingRequest::getRegionId()const
{
	return regionId_;
}

void UpdateWorkspaceRepoSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<UpdateWorkspaceRepoSettingRequest::RepoMaven> UpdateWorkspaceRepoSettingRequest::getRepoMaven()const
{
	return repoMaven_;
}

void UpdateWorkspaceRepoSettingRequest::setRepoMaven(const std::vector<RepoMaven>& repoMaven)
{
	repoMaven_ = repoMaven;
	int i = 0;
	for(int i = 0; i!= repoMaven.size(); i++)	{
		auto obj = repoMaven.at(i);
		std::string str ="RepoMaven."+ std::to_string(i);
		setCoreParameter(str + ".GroupId", obj.groupId);
		setCoreParameter(str + ".ArtifactId", obj.artifactId);
		setCoreParameter(str + ".Version", obj.version);
	}
}

std::vector<UpdateWorkspaceRepoSettingRequest::RepoPip> UpdateWorkspaceRepoSettingRequest::getRepoPip()const
{
	return repoPip_;
}

void UpdateWorkspaceRepoSettingRequest::setRepoPip(const std::vector<RepoPip>& repoPip)
{
	repoPip_ = repoPip;
	int i = 0;
	for(int i = 0; i!= repoPip.size(); i++)	{
		auto obj = repoPip.at(i);
		std::string str ="RepoPip."+ std::to_string(i);
		setCoreParameter(str + ".PackageName", obj.packageName);
		setCoreParameter(str + ".Version", obj.version);
	}
}

std::string UpdateWorkspaceRepoSettingRequest::getWorkspaceId()const
{
	return workspaceId_;
}

void UpdateWorkspaceRepoSettingRequest::setWorkspaceId(const std::string& workspaceId)
{
	workspaceId_ = workspaceId;
	setCoreParameter("WorkspaceId", workspaceId);
}

