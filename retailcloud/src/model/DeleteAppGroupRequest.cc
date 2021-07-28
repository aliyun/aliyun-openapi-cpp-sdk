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

#include <alibabacloud/retailcloud/model/DeleteAppGroupRequest.h>

using AlibabaCloud::Retailcloud::Model::DeleteAppGroupRequest;

DeleteAppGroupRequest::DeleteAppGroupRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "DeleteAppGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAppGroupRequest::~DeleteAppGroupRequest()
{}

long DeleteAppGroupRequest::getGroupId()const
{
	return groupId_;
}

void DeleteAppGroupRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

bool DeleteAppGroupRequest::getForce()const
{
	return force_;
}

void DeleteAppGroupRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", force ? "true" : "false");
}

