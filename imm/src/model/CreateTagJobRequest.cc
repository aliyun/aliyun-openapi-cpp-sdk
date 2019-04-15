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

#include <alibabacloud/imm/model/CreateTagJobRequest.h>

using AlibabaCloud::Imm::Model::CreateTagJobRequest;

CreateTagJobRequest::CreateTagJobRequest() :
	RpcServiceRequest("imm", "2017-09-06", "CreateTagJob")
{}

CreateTagJobRequest::~CreateTagJobRequest()
{}

std::string CreateTagJobRequest::getNotifyTopicName()const
{
	return notifyTopicName_;
}

void CreateTagJobRequest::setNotifyTopicName(const std::string& notifyTopicName)
{
	notifyTopicName_ = notifyTopicName;
	setCoreParameter("NotifyTopicName", notifyTopicName);
}

std::string CreateTagJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateTagJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateTagJobRequest::getNotifyEndpoint()const
{
	return notifyEndpoint_;
}

void CreateTagJobRequest::setNotifyEndpoint(const std::string& notifyEndpoint)
{
	notifyEndpoint_ = notifyEndpoint;
	setCoreParameter("NotifyEndpoint", notifyEndpoint);
}

std::string CreateTagJobRequest::getProject()const
{
	return project_;
}

void CreateTagJobRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string CreateTagJobRequest::getExternalID()const
{
	return externalID_;
}

void CreateTagJobRequest::setExternalID(const std::string& externalID)
{
	externalID_ = externalID;
	setCoreParameter("ExternalID", externalID);
}

std::string CreateTagJobRequest::getSrcUri()const
{
	return srcUri_;
}

void CreateTagJobRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", srcUri);
}

std::string CreateTagJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTagJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

