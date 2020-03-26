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

#include <alibabacloud/foas/model/UpdatePackageRequest.h>

using AlibabaCloud::Foas::Model::UpdatePackageRequest;

UpdatePackageRequest::UpdatePackageRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/packages/[packageName]");
	setMethod(HttpRequest::Method::Put);
}

UpdatePackageRequest::~UpdatePackageRequest()
{}

std::string UpdatePackageRequest::getProjectName()const
{
	return projectName_;
}

void UpdatePackageRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string UpdatePackageRequest::getOssBucket()const
{
	return ossBucket_;
}

void UpdatePackageRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setBodyParameter("OssBucket", ossBucket);
}

std::string UpdatePackageRequest::getOssOwner()const
{
	return ossOwner_;
}

void UpdatePackageRequest::setOssOwner(const std::string& ossOwner)
{
	ossOwner_ = ossOwner;
	setBodyParameter("OssOwner", ossOwner);
}

std::string UpdatePackageRequest::getRegionId()const
{
	return regionId_;
}

void UpdatePackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string UpdatePackageRequest::getPackageName()const
{
	return packageName_;
}

void UpdatePackageRequest::setPackageName(const std::string& packageName)
{
	packageName_ = packageName;
	setParameter("PackageName", packageName);
}

std::string UpdatePackageRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void UpdatePackageRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setBodyParameter("OssEndpoint", ossEndpoint);
}

std::string UpdatePackageRequest::getDescription()const
{
	return description_;
}

void UpdatePackageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdatePackageRequest::getTag()const
{
	return tag_;
}

void UpdatePackageRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setBodyParameter("Tag", tag);
}

std::string UpdatePackageRequest::getOriginName()const
{
	return originName_;
}

void UpdatePackageRequest::setOriginName(const std::string& originName)
{
	originName_ = originName;
	setBodyParameter("OriginName", originName);
}

std::string UpdatePackageRequest::getOssPath()const
{
	return ossPath_;
}

void UpdatePackageRequest::setOssPath(const std::string& ossPath)
{
	ossPath_ = ossPath;
	setBodyParameter("OssPath", ossPath);
}

std::string UpdatePackageRequest::getMd5()const
{
	return md5_;
}

void UpdatePackageRequest::setMd5(const std::string& md5)
{
	md5_ = md5;
	setBodyParameter("Md5", md5);
}

