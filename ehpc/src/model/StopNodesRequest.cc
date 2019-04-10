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

#include <alibabacloud/ehpc/model/StopNodesRequest.h>

using AlibabaCloud::EHPC::Model::StopNodesRequest;

StopNodesRequest::StopNodesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "StopNodes")
{}

StopNodesRequest::~StopNodesRequest()
{}

std::string StopNodesRequest::getRole()const
{
	return role_;
}

void StopNodesRequest::setRole(const std::string& role)
{
	role_ = role;
	setCoreParameter("Role", role);
}

std::vector<StopNodesRequest::Instance> StopNodesRequest::getInstance()const
{
	return instance_;
}

void StopNodesRequest::setInstance(const std::vector<Instance>& instance)
{
	instance_ = instance;
	int i = 0;
	for(int i = 0; i!= instance.size(); i++)	{
		auto obj = instance.at(i);
		std::string str ="Instance."+ std::to_string(i);
		setCoreParameter(str + ".Id", obj.id);
	}
}

std::string StopNodesRequest::getClusterId()const
{
	return clusterId_;
}

void StopNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string StopNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

