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

#include <alibabacloud/emr/model/ModifyJobExecutionPlanFolderRequest.h>

using AlibabaCloud::Emr::Model::ModifyJobExecutionPlanFolderRequest;

ModifyJobExecutionPlanFolderRequest::ModifyJobExecutionPlanFolderRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyJobExecutionPlanFolder")
{}

ModifyJobExecutionPlanFolderRequest::~ModifyJobExecutionPlanFolderRequest()
{}

long ModifyJobExecutionPlanFolderRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyJobExecutionPlanFolderRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyJobExecutionPlanFolderRequest::getName()const
{
	return name_;
}

void ModifyJobExecutionPlanFolderRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long ModifyJobExecutionPlanFolderRequest::getId()const
{
	return id_;
}

void ModifyJobExecutionPlanFolderRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

long ModifyJobExecutionPlanFolderRequest::getParentId()const
{
	return parentId_;
}

void ModifyJobExecutionPlanFolderRequest::setParentId(long parentId)
{
	parentId_ = parentId;
	setCoreParameter("ParentId", parentId);
}

std::string ModifyJobExecutionPlanFolderRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyJobExecutionPlanFolderRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

