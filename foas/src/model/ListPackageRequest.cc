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

#include <alibabacloud/foas/model/ListPackageRequest.h>

using AlibabaCloud::Foas::Model::ListPackageRequest;

ListPackageRequest::ListPackageRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{}

ListPackageRequest::~ListPackageRequest()
{}

std::string ListPackageRequest::getProjectName()const
{
	return projectName_;
}

void ListPackageRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string ListPackageRequest::getRegionId()const
{
	return regionId_;
}

void ListPackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListPackageRequest::getPackageName()const
{
	return packageName_;
}

void ListPackageRequest::setPackageName(const std::string& packageName)
{
	packageName_ = packageName;
	setCoreParameter("PackageName", packageName);
}

int ListPackageRequest::getPageSize()const
{
	return pageSize_;
}

void ListPackageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int ListPackageRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListPackageRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListPackageRequest::getTag()const
{
	return tag_;
}

void ListPackageRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

std::string ListPackageRequest::getType()const
{
	return type_;
}

void ListPackageRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

