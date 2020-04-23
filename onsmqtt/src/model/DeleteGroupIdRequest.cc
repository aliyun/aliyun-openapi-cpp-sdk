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

#include <alibabacloud/onsmqtt/model/DeleteGroupIdRequest.h>

using AlibabaCloud::OnsMqtt::Model::DeleteGroupIdRequest;

DeleteGroupIdRequest::DeleteGroupIdRequest() :
	RpcServiceRequest("onsmqtt", "2020-04-20", "DeleteGroupId")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteGroupIdRequest::~DeleteGroupIdRequest()
{}

std::string DeleteGroupIdRequest::getGroupId()const
{
	return groupId_;
}

void DeleteGroupIdRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string DeleteGroupIdRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteGroupIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

