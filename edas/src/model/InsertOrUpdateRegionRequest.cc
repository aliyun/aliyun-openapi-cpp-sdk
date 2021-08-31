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

#include <alibabacloud/edas/model/InsertOrUpdateRegionRequest.h>

using AlibabaCloud::Edas::Model::InsertOrUpdateRegionRequest;

InsertOrUpdateRegionRequest::InsertOrUpdateRegionRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/user_region_def");
	setMethod(HttpRequest::Method::Post);
}

InsertOrUpdateRegionRequest::~InsertOrUpdateRegionRequest()
{}

bool InsertOrUpdateRegionRequest::getDebugEnable()const
{
	return debugEnable_;
}

void InsertOrUpdateRegionRequest::setDebugEnable(bool debugEnable)
{
	debugEnable_ = debugEnable;
	setParameter("DebugEnable", debugEnable ? "true" : "false");
}

std::string InsertOrUpdateRegionRequest::getRegionTag()const
{
	return regionTag_;
}

void InsertOrUpdateRegionRequest::setRegionTag(const std::string& regionTag)
{
	regionTag_ = regionTag;
	setParameter("RegionTag", regionTag);
}

std::string InsertOrUpdateRegionRequest::getRegionName()const
{
	return regionName_;
}

void InsertOrUpdateRegionRequest::setRegionName(const std::string& regionName)
{
	regionName_ = regionName;
	setParameter("RegionName", regionName);
}

std::string InsertOrUpdateRegionRequest::getDescription()const
{
	return description_;
}

void InsertOrUpdateRegionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long InsertOrUpdateRegionRequest::getId()const
{
	return id_;
}

void InsertOrUpdateRegionRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

