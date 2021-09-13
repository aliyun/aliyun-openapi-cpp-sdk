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

#include <alibabacloud/linkwan/model/BindJoinPermissionToNodeGroupRequest.h>

using AlibabaCloud::LinkWAN::Model::BindJoinPermissionToNodeGroupRequest;

BindJoinPermissionToNodeGroupRequest::BindJoinPermissionToNodeGroupRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "BindJoinPermissionToNodeGroup")
{
	setMethod(HttpRequest::Method::Post);
}

BindJoinPermissionToNodeGroupRequest::~BindJoinPermissionToNodeGroupRequest()
{}

std::string BindJoinPermissionToNodeGroupRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void BindJoinPermissionToNodeGroupRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string BindJoinPermissionToNodeGroupRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void BindJoinPermissionToNodeGroupRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string BindJoinPermissionToNodeGroupRequest::getApiProduct()const
{
	return apiProduct_;
}

void BindJoinPermissionToNodeGroupRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BindJoinPermissionToNodeGroupRequest::getApiRevision()const
{
	return apiRevision_;
}

void BindJoinPermissionToNodeGroupRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

