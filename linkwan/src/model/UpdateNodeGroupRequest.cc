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

#include <alibabacloud/linkwan/model/UpdateNodeGroupRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateNodeGroupRequest;

UpdateNodeGroupRequest::UpdateNodeGroupRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateNodeGroup")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateNodeGroupRequest::~UpdateNodeGroupRequest()
{}

std::string UpdateNodeGroupRequest::getNodeGroupName()const
{
	return nodeGroupName_;
}

void UpdateNodeGroupRequest::setNodeGroupName(const std::string& nodeGroupName)
{
	nodeGroupName_ = nodeGroupName;
	setParameter("NodeGroupName", nodeGroupName);
}

std::string UpdateNodeGroupRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void UpdateNodeGroupRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string UpdateNodeGroupRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateNodeGroupRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateNodeGroupRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateNodeGroupRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

