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

#include <alibabacloud/ehpc/model/DescribeImageRequest.h>

using AlibabaCloud::EHPC::Model::DescribeImageRequest;

DescribeImageRequest::DescribeImageRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DescribeImage")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeImageRequest::~DescribeImageRequest()
{}

std::string DescribeImageRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeImageRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeImageRequest::getRepository()const
{
	return repository_;
}

void DescribeImageRequest::setRepository(const std::string& repository)
{
	repository_ = repository;
	setParameter("Repository", repository);
}

std::string DescribeImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeImageRequest::getContainerType()const
{
	return containerType_;
}

void DescribeImageRequest::setContainerType(const std::string& containerType)
{
	containerType_ = containerType;
	setParameter("ContainerType", containerType);
}

std::string DescribeImageRequest::getImageTag()const
{
	return imageTag_;
}

void DescribeImageRequest::setImageTag(const std::string& imageTag)
{
	imageTag_ = imageTag;
	setParameter("ImageTag", imageTag);
}

