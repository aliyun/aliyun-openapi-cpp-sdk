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

#include <alibabacloud/foas/model/CreatePackageRequest.h>

using AlibabaCloud::Foas::Model::CreatePackageRequest;

CreatePackageRequest::CreatePackageRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/packages");
	setMethod(HttpRequest::Method::Post);
}

CreatePackageRequest::~CreatePackageRequest()
{}

std::string CreatePackageRequest::getProjectName()const
{
	return projectName_;
}

void CreatePackageRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string CreatePackageRequest::getOssBucket()const
{
	return ossBucket_;
}

void CreatePackageRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setBodyParameter("OssBucket", ossBucket);
}

std::string CreatePackageRequest::getOssOwner()const
{
	return ossOwner_;
}

void CreatePackageRequest::setOssOwner(const std::string& ossOwner)
{
	ossOwner_ = ossOwner;
	setBodyParameter("OssOwner", ossOwner);
}

std::string CreatePackageRequest::getRegionId()const
{
	return regionId_;
}

void CreatePackageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string CreatePackageRequest::getPackageName()const
{
	return packageName_;
}

void CreatePackageRequest::setPackageName(const std::string& packageName)
{
	packageName_ = packageName;
	setBodyParameter("PackageName", packageName);
}

std::string CreatePackageRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void CreatePackageRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setBodyParameter("OssEndpoint", ossEndpoint);
}

std::string CreatePackageRequest::getDescription()const
{
	return description_;
}

void CreatePackageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreatePackageRequest::getTag()const
{
	return tag_;
}

void CreatePackageRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setBodyParameter("Tag", tag);
}

std::string CreatePackageRequest::getOriginName()const
{
	return originName_;
}

void CreatePackageRequest::setOriginName(const std::string& originName)
{
	originName_ = originName;
	setBodyParameter("OriginName", originName);
}

std::string CreatePackageRequest::getType()const
{
	return type_;
}

void CreatePackageRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string CreatePackageRequest::getOssPath()const
{
	return ossPath_;
}

void CreatePackageRequest::setOssPath(const std::string& ossPath)
{
	ossPath_ = ossPath;
	setBodyParameter("OssPath", ossPath);
}

std::string CreatePackageRequest::getMd5()const
{
	return md5_;
}

void CreatePackageRequest::setMd5(const std::string& md5)
{
	md5_ = md5;
	setBodyParameter("Md5", md5);
}

