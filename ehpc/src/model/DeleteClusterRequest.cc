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

#include <alibabacloud/ehpc/model/DeleteClusterRequest.h>

using AlibabaCloud::EHPC::Model::DeleteClusterRequest;

DeleteClusterRequest::DeleteClusterRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DeleteCluster")
{
	setMethod(HttpRequest::Method::Get);
}

DeleteClusterRequest::~DeleteClusterRequest()
{}

std::string DeleteClusterRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string DeleteClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteClusterRequest::getReleaseInstance()const
{
	return releaseInstance_;
}

void DeleteClusterRequest::setReleaseInstance(const std::string& releaseInstance)
{
	releaseInstance_ = releaseInstance;
	setCoreParameter("ReleaseInstance", releaseInstance);
}

