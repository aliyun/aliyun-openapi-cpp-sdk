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

#include <alibabacloud/ccc/model/GetConfigRequest.h>

using AlibabaCloud::CCC::Model::GetConfigRequest;

GetConfigRequest::GetConfigRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetConfig")
{}

GetConfigRequest::~GetConfigRequest()
{}

std::string GetConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void GetConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetConfigRequest::getName()const
{
	return name_;
}

void GetConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string GetConfigRequest::getObjectType()const
{
	return objectType_;
}

void GetConfigRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setCoreParameter("ObjectType", objectType);
}

std::string GetConfigRequest::getObjectId()const
{
	return objectId_;
}

void GetConfigRequest::setObjectId(const std::string& objectId)
{
	objectId_ = objectId;
	setCoreParameter("ObjectId", objectId);
}

std::string GetConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

