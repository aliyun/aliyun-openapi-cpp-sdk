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

#include <alibabacloud/ehpc/model/DeleteNodesRequest.h>

using AlibabaCloud::EHPC::Model::DeleteNodesRequest;

DeleteNodesRequest::DeleteNodesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DeleteNodes")
{}

DeleteNodesRequest::~DeleteNodesRequest()
{}

bool DeleteNodesRequest::getReleaseInstance()const
{
	return releaseInstance_;
}

void DeleteNodesRequest::setReleaseInstance(bool releaseInstance)
{
	releaseInstance_ = releaseInstance;
	setCoreParameter("ReleaseInstance", releaseInstance ? "true" : "false");
}

std::vector<DeleteNodesRequest::Instance> DeleteNodesRequest::getInstance()const
{
	return instance_;
}

void DeleteNodesRequest::setInstance(const std::vector<Instance>& instance)
{
	instance_ = instance;
	int i = 0;
	for(int i = 0; i!= instance.size(); i++)	{
		auto obj = instance.at(i);
		std::string str ="Instance."+ std::to_string(i);
		setCoreParameter(str + ".Id", std::to_string(obj.id));
	}
}

std::string DeleteNodesRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string DeleteNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

