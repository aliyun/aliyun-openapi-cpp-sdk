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

#include <alibabacloud/dataworks-public/model/CreateDataServiceFolderRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDataServiceFolderRequest;

CreateDataServiceFolderRequest::CreateDataServiceFolderRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDataServiceFolder")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDataServiceFolderRequest::~CreateDataServiceFolderRequest()
{}

std::string CreateDataServiceFolderRequest::getGroupId()const
{
	return groupId_;
}

void CreateDataServiceFolderRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

long CreateDataServiceFolderRequest::getTenantId()const
{
	return tenantId_;
}

void CreateDataServiceFolderRequest::setTenantId(long tenantId)
{
	tenantId_ = tenantId;
	setBodyParameter("TenantId", std::to_string(tenantId));
}

std::string CreateDataServiceFolderRequest::getFolderName()const
{
	return folderName_;
}

void CreateDataServiceFolderRequest::setFolderName(const std::string& folderName)
{
	folderName_ = folderName;
	setBodyParameter("FolderName", folderName);
}

long CreateDataServiceFolderRequest::getProjectId()const
{
	return projectId_;
}

void CreateDataServiceFolderRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

long CreateDataServiceFolderRequest::getParentId()const
{
	return parentId_;
}

void CreateDataServiceFolderRequest::setParentId(long parentId)
{
	parentId_ = parentId;
	setBodyParameter("ParentId", std::to_string(parentId));
}

