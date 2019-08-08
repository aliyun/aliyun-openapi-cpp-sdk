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

#include <alibabacloud/ehpc/model/PullImageRequest.h>

using AlibabaCloud::EHPC::Model::PullImageRequest;

PullImageRequest::PullImageRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "PullImage")
{}

PullImageRequest::~PullImageRequest()
{}

std::string PullImageRequest::getContainerType()const
{
	return containerType_;
}

void PullImageRequest::setContainerType(const std::string& containerType)
{
	containerType_ = containerType;
	setCoreParameter("ContainerType", containerType);
}

std::string PullImageRequest::getClusterId()const
{
	return clusterId_;
}

void PullImageRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string PullImageRequest::getRepository()const
{
	return repository_;
}

void PullImageRequest::setRepository(const std::string& repository)
{
	repository_ = repository;
	setCoreParameter("Repository", repository);
}

std::string PullImageRequest::getImageTag()const
{
	return imageTag_;
}

void PullImageRequest::setImageTag(const std::string& imageTag)
{
	imageTag_ = imageTag;
	setCoreParameter("ImageTag", imageTag);
}

std::string PullImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PullImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

