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

#include <alibabacloud/emr/model/CreateNoteRequest.h>

using AlibabaCloud::Emr::Model::CreateNoteRequest;

CreateNoteRequest::CreateNoteRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateNote")
{
	setMethod(HttpRequest::Method::Post);
}

CreateNoteRequest::~CreateNoteRequest()
{}

long CreateNoteRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNoteRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateNoteRequest::getClusterId()const
{
	return clusterId_;
}

void CreateNoteRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateNoteRequest::getType()const
{
	return type_;
}

void CreateNoteRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateNoteRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNoteRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateNoteRequest::getRegionId()const
{
	return regionId_;
}

void CreateNoteRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateNoteRequest::getName()const
{
	return name_;
}

void CreateNoteRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

