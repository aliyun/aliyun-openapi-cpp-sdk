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

#include <alibabacloud/ehpc/model/SetQueueRequest.h>

using AlibabaCloud::EHPC::Model::SetQueueRequest;

SetQueueRequest::SetQueueRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "SetQueue")
{
	setMethod(HttpRequest::Method::Get);
}

SetQueueRequest::~SetQueueRequest()
{}

std::string SetQueueRequest::getQueueName()const
{
	return queueName_;
}

void SetQueueRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setParameter("QueueName", queueName);
}

std::string SetQueueRequest::getClusterId()const
{
	return clusterId_;
}

void SetQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string SetQueueRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetQueueRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<SetQueueRequest::Node> SetQueueRequest::getNode()const
{
	return node_;
}

void SetQueueRequest::setNode(const std::vector<Node>& node)
{
	node_ = node;
	for(int dep1 = 0; dep1!= node.size(); dep1++) {
		auto nodeObj = node.at(dep1);
		std::string nodeObjStr = "Node." + std::to_string(dep1 + 1);
		setParameter(nodeObjStr + ".Name", nodeObj.name);
	}
}

