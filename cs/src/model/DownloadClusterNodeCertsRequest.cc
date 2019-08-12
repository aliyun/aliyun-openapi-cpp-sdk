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

#include <alibabacloud/cs/model/DownloadClusterNodeCertsRequest.h>

using AlibabaCloud::CS::Model::DownloadClusterNodeCertsRequest;

DownloadClusterNodeCertsRequest::DownloadClusterNodeCertsRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{}

DownloadClusterNodeCertsRequest::~DownloadClusterNodeCertsRequest()
{}

std::string DownloadClusterNodeCertsRequest::getNodeId()const
{
	return nodeId_;
}

void DownloadClusterNodeCertsRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string DownloadClusterNodeCertsRequest::getToken()const
{
	return token_;
}

void DownloadClusterNodeCertsRequest::setToken(const std::string& token)
{
	token_ = token;
	setCoreParameter("Token", token);
}

