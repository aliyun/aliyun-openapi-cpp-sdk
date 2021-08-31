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

#include <alibabacloud/edas/model/CreateGrayEnvironmentRequest.h>

using AlibabaCloud::Edas::Model::CreateGrayEnvironmentRequest;

CreateGrayEnvironmentRequest::CreateGrayEnvironmentRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/gray/env");
	setMethod(HttpRequest::Method::Post);
}

CreateGrayEnvironmentRequest::~CreateGrayEnvironmentRequest()
{}

std::string CreateGrayEnvironmentRequest::getShowName()const
{
	return showName_;
}

void CreateGrayEnvironmentRequest::setShowName(const std::string& showName)
{
	showName_ = showName;
	setBodyParameter("ShowName", showName);
}

std::string CreateGrayEnvironmentRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void CreateGrayEnvironmentRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setBodyParameter("LogicalRegionId", logicalRegionId);
}

std::string CreateGrayEnvironmentRequest::getDescription()const
{
	return description_;
}

void CreateGrayEnvironmentRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateGrayEnvironmentRequest::getTag()const
{
	return tag_;
}

void CreateGrayEnvironmentRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setBodyParameter("Tag", tag);
}

