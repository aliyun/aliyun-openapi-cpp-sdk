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

#include <alibabacloud/foas/model/CreateFolderRequest.h>

using AlibabaCloud::Foas::Model::CreateFolderRequest;

CreateFolderRequest::CreateFolderRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/folders");
	setMethod(HttpRequest::Method::Post);
}

CreateFolderRequest::~CreateFolderRequest()
{}

std::string CreateFolderRequest::getPath()const
{
	return path_;
}

void CreateFolderRequest::setPath(const std::string& path)
{
	path_ = path;
	setBodyParameter("Path", path);
}

std::string CreateFolderRequest::getProjectName()const
{
	return projectName_;
}

void CreateFolderRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string CreateFolderRequest::getRegionId()const
{
	return regionId_;
}

void CreateFolderRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

