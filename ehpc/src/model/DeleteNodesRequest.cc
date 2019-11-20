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
{
	setMethod(HttpRequest::Method::Get);
}

DeleteNodesRequest::~DeleteNodesRequest()
{}

std::vector<DeleteNodesRequest::Instance> DeleteNodesRequest::getInstance()const
{
	return instance_;
}

void DeleteNodesRequest::setInstance(const std::vector<Instance>& instance)
{
	instance_ = instance;
	for(int dep1 = 0; dep1!= instance.size(); dep1++) {
		auto instanceObj = instance.at(dep1);
		std::string instanceObjStr = "Instance." + std::to_string(dep1);
		setCoreParameter(instanceObjStr + ".Id", instanceObj.id);
	}
}

std::string DeleteNodesRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string DeleteNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DeleteNodesRequest::getReleaseInstance()const
{
	return releaseInstance_;
}

void DeleteNodesRequest::setReleaseInstance(bool releaseInstance)
{
	releaseInstance_ = releaseInstance;
	setCoreParameter("ReleaseInstance", releaseInstance ? "true" : "false");
}

