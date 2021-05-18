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

#include <alibabacloud/ehpc/model/AddExistedNodesRequest.h>

using AlibabaCloud::EHPC::Model::AddExistedNodesRequest;

AddExistedNodesRequest::AddExistedNodesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "AddExistedNodes")
{
	setMethod(HttpRequest::Method::Get);
}

AddExistedNodesRequest::~AddExistedNodesRequest()
{}

std::string AddExistedNodesRequest::getImageId()const
{
	return imageId_;
}

void AddExistedNodesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::vector<AddExistedNodesRequest::Instance> AddExistedNodesRequest::getInstance()const
{
	return instance_;
}

void AddExistedNodesRequest::setInstance(const std::vector<Instance>& instance)
{
	instance_ = instance;
	for(int dep1 = 0; dep1!= instance.size(); dep1++) {
		auto instanceObj = instance.at(dep1);
		std::string instanceObjStr = "Instance." + std::to_string(dep1 + 1);
		setParameter(instanceObjStr + ".Id", instanceObj.id);
	}
}

std::string AddExistedNodesRequest::getClientToken()const
{
	return clientToken_;
}

void AddExistedNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AddExistedNodesRequest::getClusterId()const
{
	return clusterId_;
}

void AddExistedNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string AddExistedNodesRequest::getJobQueue()const
{
	return jobQueue_;
}

void AddExistedNodesRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setParameter("JobQueue", jobQueue);
}

std::string AddExistedNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddExistedNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddExistedNodesRequest::getImageOwnerAlias()const
{
	return imageOwnerAlias_;
}

void AddExistedNodesRequest::setImageOwnerAlias(const std::string& imageOwnerAlias)
{
	imageOwnerAlias_ = imageOwnerAlias;
	setParameter("ImageOwnerAlias", imageOwnerAlias);
}

