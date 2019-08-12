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

#include <alibabacloud/imm/model/CreateGroupFacesJobRequest.h>

using AlibabaCloud::Imm::Model::CreateGroupFacesJobRequest;

CreateGroupFacesJobRequest::CreateGroupFacesJobRequest() :
	RpcServiceRequest("imm", "2017-09-06", "CreateGroupFacesJob")
{}

CreateGroupFacesJobRequest::~CreateGroupFacesJobRequest()
{}

std::string CreateGroupFacesJobRequest::getNotifyTopicName()const
{
	return notifyTopicName_;
}

void CreateGroupFacesJobRequest::setNotifyTopicName(const std::string& notifyTopicName)
{
	notifyTopicName_ = notifyTopicName;
	setCoreParameter("NotifyTopicName", std::to_string(notifyTopicName));
}

std::string CreateGroupFacesJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateGroupFacesJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateGroupFacesJobRequest::getNotifyEndpoint()const
{
	return notifyEndpoint_;
}

void CreateGroupFacesJobRequest::setNotifyEndpoint(const std::string& notifyEndpoint)
{
	notifyEndpoint_ = notifyEndpoint;
	setCoreParameter("NotifyEndpoint", std::to_string(notifyEndpoint));
}

std::string CreateGroupFacesJobRequest::getProject()const
{
	return project_;
}

void CreateGroupFacesJobRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string CreateGroupFacesJobRequest::getSetId()const
{
	return setId_;
}

void CreateGroupFacesJobRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string CreateGroupFacesJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGroupFacesJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

