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

#include <alibabacloud/foas/model/GetRefPackageJobRequest.h>

using AlibabaCloud::Foas::Model::GetRefPackageJobRequest;

GetRefPackageJobRequest::GetRefPackageJobRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{}

GetRefPackageJobRequest::~GetRefPackageJobRequest()
{}

std::string GetRefPackageJobRequest::getProjectName()const
{
	return projectName_;
}

void GetRefPackageJobRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string GetRefPackageJobRequest::getRegionId()const
{
	return regionId_;
}

void GetRefPackageJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetRefPackageJobRequest::getPackageName()const
{
	return packageName_;
}

void GetRefPackageJobRequest::setPackageName(const std::string& packageName)
{
	packageName_ = packageName;
	setCoreParameter("PackageName", packageName);
}

int GetRefPackageJobRequest::getPageSize()const
{
	return pageSize_;
}

void GetRefPackageJobRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int GetRefPackageJobRequest::getPageIndex()const
{
	return pageIndex_;
}

void GetRefPackageJobRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

