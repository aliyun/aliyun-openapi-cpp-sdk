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

#include <alibabacloud/imm/model/CreatePornBatchDetectJobRequest.h>

using AlibabaCloud::Imm::Model::CreatePornBatchDetectJobRequest;

CreatePornBatchDetectJobRequest::CreatePornBatchDetectJobRequest() :
	RpcServiceRequest("imm", "2017-09-06", "CreatePornBatchDetectJob")
{}

CreatePornBatchDetectJobRequest::~CreatePornBatchDetectJobRequest()
{}

std::string CreatePornBatchDetectJobRequest::getNotifyTopicName()const
{
	return notifyTopicName_;
}

void CreatePornBatchDetectJobRequest::setNotifyTopicName(const std::string& notifyTopicName)
{
	notifyTopicName_ = notifyTopicName;
	setCoreParameter("NotifyTopicName", notifyTopicName);
}

std::string CreatePornBatchDetectJobRequest::getRegionId()const
{
	return regionId_;
}

void CreatePornBatchDetectJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreatePornBatchDetectJobRequest::getNotifyEndpoint()const
{
	return notifyEndpoint_;
}

void CreatePornBatchDetectJobRequest::setNotifyEndpoint(const std::string& notifyEndpoint)
{
	notifyEndpoint_ = notifyEndpoint;
	setCoreParameter("NotifyEndpoint", notifyEndpoint);
}

std::string CreatePornBatchDetectJobRequest::getProject()const
{
	return project_;
}

void CreatePornBatchDetectJobRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string CreatePornBatchDetectJobRequest::getExternalID()const
{
	return externalID_;
}

void CreatePornBatchDetectJobRequest::setExternalID(const std::string& externalID)
{
	externalID_ = externalID;
	setCoreParameter("ExternalID", externalID);
}

std::string CreatePornBatchDetectJobRequest::getSrcUri()const
{
	return srcUri_;
}

void CreatePornBatchDetectJobRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", srcUri);
}

std::string CreatePornBatchDetectJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreatePornBatchDetectJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreatePornBatchDetectJobRequest::getTgtUri()const
{
	return tgtUri_;
}

void CreatePornBatchDetectJobRequest::setTgtUri(const std::string& tgtUri)
{
	tgtUri_ = tgtUri;
	setCoreParameter("TgtUri", tgtUri);
}

