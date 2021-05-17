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

#include <alibabacloud/ccc/model/ListTransferableSkillGroupsRequest.h>

using AlibabaCloud::CCC::Model::ListTransferableSkillGroupsRequest;

ListTransferableSkillGroupsRequest::ListTransferableSkillGroupsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListTransferableSkillGroups")
{
	setMethod(HttpRequest::Method::Post);
}

ListTransferableSkillGroupsRequest::~ListTransferableSkillGroupsRequest()
{}

std::string ListTransferableSkillGroupsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListTransferableSkillGroupsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListTransferableSkillGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTransferableSkillGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

