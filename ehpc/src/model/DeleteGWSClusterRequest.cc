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

#include <alibabacloud/ehpc/model/DeleteGWSClusterRequest.h>

using AlibabaCloud::EHPC::Model::DeleteGWSClusterRequest;

DeleteGWSClusterRequest::DeleteGWSClusterRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DeleteGWSCluster")
{}

DeleteGWSClusterRequest::~DeleteGWSClusterRequest()
{}

std::string DeleteGWSClusterRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteGWSClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string DeleteGWSClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteGWSClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

