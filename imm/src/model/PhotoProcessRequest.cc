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

#include <alibabacloud/imm/model/PhotoProcessRequest.h>

using AlibabaCloud::Imm::Model::PhotoProcessRequest;

PhotoProcessRequest::PhotoProcessRequest() :
	RpcServiceRequest("imm", "2017-09-06", "PhotoProcess")
{}

PhotoProcessRequest::~PhotoProcessRequest()
{}

std::string PhotoProcessRequest::getNotifyTopicName()const
{
	return notifyTopicName_;
}

void PhotoProcessRequest::setNotifyTopicName(const std::string& notifyTopicName)
{
	notifyTopicName_ = notifyTopicName;
	setCoreParameter("NotifyTopicName", notifyTopicName);
}

std::string PhotoProcessRequest::getRegionId()const
{
	return regionId_;
}

void PhotoProcessRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PhotoProcessRequest::getNotifyEndpoint()const
{
	return notifyEndpoint_;
}

void PhotoProcessRequest::setNotifyEndpoint(const std::string& notifyEndpoint)
{
	notifyEndpoint_ = notifyEndpoint;
	setCoreParameter("NotifyEndpoint", notifyEndpoint);
}

std::string PhotoProcessRequest::getProject()const
{
	return project_;
}

void PhotoProcessRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string PhotoProcessRequest::getExternalID()const
{
	return externalID_;
}

void PhotoProcessRequest::setExternalID(const std::string& externalID)
{
	externalID_ = externalID;
	setCoreParameter("ExternalID", externalID);
}

std::string PhotoProcessRequest::getSrcUri()const
{
	return srcUri_;
}

void PhotoProcessRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", srcUri);
}

std::string PhotoProcessRequest::getStyle()const
{
	return style_;
}

void PhotoProcessRequest::setStyle(const std::string& style)
{
	style_ = style;
	setCoreParameter("Style", style);
}

std::string PhotoProcessRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PhotoProcessRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PhotoProcessRequest::getTgtUri()const
{
	return tgtUri_;
}

void PhotoProcessRequest::setTgtUri(const std::string& tgtUri)
{
	tgtUri_ = tgtUri;
	setCoreParameter("TgtUri", tgtUri);
}

