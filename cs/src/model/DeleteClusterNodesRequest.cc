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

#include <alibabacloud/cs/model/DeleteClusterNodesRequest.h>

using AlibabaCloud::CS::Model::DeleteClusterNodesRequest;

DeleteClusterNodesRequest::DeleteClusterNodesRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[ClusterId]/nodes");
	setMethod(HttpRequest::Method::Post);
}

DeleteClusterNodesRequest::~DeleteClusterNodesRequest()
{}

std::string DeleteClusterNodesRequest::getRelease_node()const
{
	return release_node_;
}

void DeleteClusterNodesRequest::setRelease_node(const std::string& release_node)
{
	release_node_ = release_node;
	setBodyParameter("Release_node", release_node);
}

std::string DeleteClusterNodesRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteClusterNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

