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

#include <alibabacloud/sgw/model/CheckBlockVolumeNameRequest.h>

using AlibabaCloud::Sgw::Model::CheckBlockVolumeNameRequest;

CheckBlockVolumeNameRequest::CheckBlockVolumeNameRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CheckBlockVolumeName")
{
	setMethod(HttpRequest::Method::Post);
}

CheckBlockVolumeNameRequest::~CheckBlockVolumeNameRequest()
{}

std::string CheckBlockVolumeNameRequest::getVolumeName()const
{
	return volumeName_;
}

void CheckBlockVolumeNameRequest::setVolumeName(const std::string& volumeName)
{
	volumeName_ = volumeName;
	setParameter("VolumeName", volumeName);
}

std::string CheckBlockVolumeNameRequest::getBucketEndpoint()const
{
	return bucketEndpoint_;
}

void CheckBlockVolumeNameRequest::setBucketEndpoint(const std::string& bucketEndpoint)
{
	bucketEndpoint_ = bucketEndpoint;
	setParameter("BucketEndpoint", bucketEndpoint);
}

std::string CheckBlockVolumeNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckBlockVolumeNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CheckBlockVolumeNameRequest::getSecurityToken()const
{
	return securityToken_;
}

void CheckBlockVolumeNameRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CheckBlockVolumeNameRequest::getBucketName()const
{
	return bucketName_;
}

void CheckBlockVolumeNameRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

