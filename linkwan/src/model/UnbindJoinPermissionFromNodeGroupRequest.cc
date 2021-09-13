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

#include <alibabacloud/linkwan/model/UnbindJoinPermissionFromNodeGroupRequest.h>

using AlibabaCloud::LinkWAN::Model::UnbindJoinPermissionFromNodeGroupRequest;

UnbindJoinPermissionFromNodeGroupRequest::UnbindJoinPermissionFromNodeGroupRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UnbindJoinPermissionFromNodeGroup")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindJoinPermissionFromNodeGroupRequest::~UnbindJoinPermissionFromNodeGroupRequest()
{}

std::string UnbindJoinPermissionFromNodeGroupRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void UnbindJoinPermissionFromNodeGroupRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string UnbindJoinPermissionFromNodeGroupRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void UnbindJoinPermissionFromNodeGroupRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string UnbindJoinPermissionFromNodeGroupRequest::getApiProduct()const
{
	return apiProduct_;
}

void UnbindJoinPermissionFromNodeGroupRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UnbindJoinPermissionFromNodeGroupRequest::getApiRevision()const
{
	return apiRevision_;
}

void UnbindJoinPermissionFromNodeGroupRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

