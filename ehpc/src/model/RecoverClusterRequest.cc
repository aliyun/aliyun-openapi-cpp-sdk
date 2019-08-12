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

#include <alibabacloud/ehpc/model/RecoverClusterRequest.h>

using AlibabaCloud::EHPC::Model::RecoverClusterRequest;

RecoverClusterRequest::RecoverClusterRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "RecoverCluster")
{}

RecoverClusterRequest::~RecoverClusterRequest()
{}

std::string RecoverClusterRequest::getImageId()const
{
	return imageId_;
}

void RecoverClusterRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string RecoverClusterRequest::getOsTag()const
{
	return osTag_;
}

void RecoverClusterRequest::setOsTag(const std::string& osTag)
{
	osTag_ = osTag;
	setCoreParameter("OsTag", osTag);
}

std::string RecoverClusterRequest::getClientVersion()const
{
	return clientVersion_;
}

void RecoverClusterRequest::setClientVersion(const std::string& clientVersion)
{
	clientVersion_ = clientVersion;
	setCoreParameter("ClientVersion", clientVersion);
}

std::string RecoverClusterRequest::getAccountType()const
{
	return accountType_;
}

void RecoverClusterRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

std::string RecoverClusterRequest::getSchedulerType()const
{
	return schedulerType_;
}

void RecoverClusterRequest::setSchedulerType(const std::string& schedulerType)
{
	schedulerType_ = schedulerType;
	setCoreParameter("SchedulerType", schedulerType);
}

std::string RecoverClusterRequest::getClusterId()const
{
	return clusterId_;
}

void RecoverClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string RecoverClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RecoverClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RecoverClusterRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void RecoverClusterRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setCoreParameter("ImageOwnerAlias", imageOwnerAlias);
}

