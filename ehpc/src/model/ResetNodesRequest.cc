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

#include <alibabacloud/ehpc/model/ResetNodesRequest.h>

using AlibabaCloud::EHPC::Model::ResetNodesRequest;

ResetNodesRequest::ResetNodesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ResetNodes")
{}

ResetNodesRequest::~ResetNodesRequest()
{}

std::vector<ResetNodesRequest::Instance> ResetNodesRequest::getInstance()const
{
	return instance_;
}

void ResetNodesRequest::setInstance(const std::vector<Instance>& instance)
{
	instance_ = instance;
	int i = 0;
	for(int i = 0; i!= instance.size(); i++)	{
		auto obj = instance.at(i);
		std::string str ="Instance."+ std::to_string(i);
		setCoreParameter(str + ".Id", std::to_string(obj.id));
	}
}

std::string ResetNodesRequest::getClusterId()const
{
	return clusterId_;
}

void ResetNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ResetNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

