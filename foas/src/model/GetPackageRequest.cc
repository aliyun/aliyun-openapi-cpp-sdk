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

#include <alibabacloud/foas/model/GetPackageRequest.h>

using AlibabaCloud::Foas::Model::GetPackageRequest;

GetPackageRequest::GetPackageRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/packages/[packageName]");
	setMethod(HttpRequest::Method::Get);
}

GetPackageRequest::~GetPackageRequest()
{}

std::string GetPackageRequest::getProjectName()const
{
	return projectName_;
}

void GetPackageRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string GetPackageRequest::getRegionId()const
{
	return regionId_;
}

void GetPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetPackageRequest::getPackageName()const
{
	return packageName_;
}

void GetPackageRequest::setPackageName(const std::string& packageName)
{
	packageName_ = packageName;
	setCoreParameter("PackageName", packageName);
}

