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

#include <alibabacloud/ehpc/model/AddLocalNodesRequest.h>

using AlibabaCloud::EHPC::Model::AddLocalNodesRequest;

AddLocalNodesRequest::AddLocalNodesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "AddLocalNodes")
{}

AddLocalNodesRequest::~AddLocalNodesRequest()
{}

std::string AddLocalNodesRequest::getClusterId()const
{
	return clusterId_;
}

void AddLocalNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string AddLocalNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddLocalNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddLocalNodesRequest::getNodes()const
{
	return nodes_;
}

void AddLocalNodesRequest::setNodes(const std::string& nodes)
{
	nodes_ = nodes;
	setCoreParameter("Nodes", nodes);
}

