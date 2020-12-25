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

#include <alibabacloud/emr/model/CreateLibraryRequest.h>

using AlibabaCloud::Emr::Model::CreateLibraryRequest;

CreateLibraryRequest::CreateLibraryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateLibrary")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLibraryRequest::~CreateLibraryRequest()
{}

long CreateLibraryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateLibraryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateLibraryRequest::getLibraryVersion()const
{
	return libraryVersion_;
}

void CreateLibraryRequest::setLibraryVersion(const std::string& libraryVersion)
{
	libraryVersion_ = libraryVersion;
	setParameter("LibraryVersion", libraryVersion);
}

std::string CreateLibraryRequest::getType()const
{
	return type_;
}

void CreateLibraryRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateLibraryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLibraryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateLibraryRequest::getRegionId()const
{
	return regionId_;
}

void CreateLibraryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateLibraryRequest::getScope()const
{
	return scope_;
}

void CreateLibraryRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

std::string CreateLibraryRequest::getName()const
{
	return name_;
}

void CreateLibraryRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateLibraryRequest::getSourceType()const
{
	return sourceType_;
}

void CreateLibraryRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setParameter("SourceType", sourceType);
}

std::string CreateLibraryRequest::getProperties()const
{
	return properties_;
}

void CreateLibraryRequest::setProperties(const std::string& properties)
{
	properties_ = properties;
	setParameter("Properties", properties);
}

std::string CreateLibraryRequest::getSourceLocation()const
{
	return sourceLocation_;
}

void CreateLibraryRequest::setSourceLocation(const std::string& sourceLocation)
{
	sourceLocation_ = sourceLocation;
	setParameter("SourceLocation", sourceLocation);
}

