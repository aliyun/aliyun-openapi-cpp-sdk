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

#include <alibabacloud/retailcloud/model/CreatePersistentVolumeClaimRequest.h>

using AlibabaCloud::Retailcloud::Model::CreatePersistentVolumeClaimRequest;

CreatePersistentVolumeClaimRequest::CreatePersistentVolumeClaimRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreatePersistentVolumeClaim")
{
	setMethod(HttpRequest::Method::Post);
}

CreatePersistentVolumeClaimRequest::~CreatePersistentVolumeClaimRequest()
{}

std::string CreatePersistentVolumeClaimRequest::getAccessModes()const
{
	return accessModes_;
}

void CreatePersistentVolumeClaimRequest::setAccessModes(const std::string& accessModes)
{
	accessModes_ = accessModes;
	setParameter("AccessModes", accessModes);
}

long CreatePersistentVolumeClaimRequest::getAppId()const
{
	return appId_;
}

void CreatePersistentVolumeClaimRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string CreatePersistentVolumeClaimRequest::getName()const
{
	return name_;
}

void CreatePersistentVolumeClaimRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long CreatePersistentVolumeClaimRequest::getEnvId()const
{
	return envId_;
}

void CreatePersistentVolumeClaimRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

std::string CreatePersistentVolumeClaimRequest::getStorageClass()const
{
	return storageClass_;
}

void CreatePersistentVolumeClaimRequest::setStorageClass(const std::string& storageClass)
{
	storageClass_ = storageClass;
	setParameter("StorageClass", storageClass);
}

std::string CreatePersistentVolumeClaimRequest::getCapacity()const
{
	return capacity_;
}

void CreatePersistentVolumeClaimRequest::setCapacity(const std::string& capacity)
{
	capacity_ = capacity;
	setParameter("Capacity", capacity);
}

