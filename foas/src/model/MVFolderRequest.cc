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

#include <alibabacloud/foas/model/MVFolderRequest.h>

using AlibabaCloud::Foas::Model::MVFolderRequest;

MVFolderRequest::MVFolderRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/folders");
	setMethod(HttpRequest::Method::Put);
}

MVFolderRequest::~MVFolderRequest()
{}

std::string MVFolderRequest::getProjectName()const
{
	return projectName_;
}

void MVFolderRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string MVFolderRequest::getRegionId()const
{
	return regionId_;
}

void MVFolderRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string MVFolderRequest::getSrcPath()const
{
	return srcPath_;
}

void MVFolderRequest::setSrcPath(const std::string& srcPath)
{
	srcPath_ = srcPath;
	setBodyParameter("SrcPath", srcPath);
}

std::string MVFolderRequest::getDestPath()const
{
	return destPath_;
}

void MVFolderRequest::setDestPath(const std::string& destPath)
{
	destPath_ = destPath;
	setBodyParameter("DestPath", destPath);
}

