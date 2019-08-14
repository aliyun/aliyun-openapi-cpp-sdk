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

#include <alibabacloud/cr/model/GetImageManifestRequest.h>

using AlibabaCloud::Cr::Model::GetImageManifestRequest;

GetImageManifestRequest::GetImageManifestRequest() :
	RoaServiceRequest("cr", "2016-06-07")
{}

GetImageManifestRequest::~GetImageManifestRequest()
{}

std::string GetImageManifestRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void GetImageManifestRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setCoreParameter("RepoNamespace", repoNamespace);
}

std::string GetImageManifestRequest::getRepoName()const
{
	return repoName_;
}

void GetImageManifestRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setCoreParameter("RepoName", repoName);
}

std::string GetImageManifestRequest::getRegionId()const
{
	return regionId_;
}

void GetImageManifestRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetImageManifestRequest::getTag()const
{
	return tag_;
}

void GetImageManifestRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

int GetImageManifestRequest::getSchemaVersion()const
{
	return schemaVersion_;
}

void GetImageManifestRequest::setSchemaVersion(int schemaVersion)
{
	schemaVersion_ = schemaVersion;
	setCoreParameter("SchemaVersion", std::to_string(schemaVersion));
}

