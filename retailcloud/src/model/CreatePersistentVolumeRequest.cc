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

#include <alibabacloud/retailcloud/model/CreatePersistentVolumeRequest.h>

using AlibabaCloud::Retailcloud::Model::CreatePersistentVolumeRequest;

CreatePersistentVolumeRequest::CreatePersistentVolumeRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreatePersistentVolume")
{
	setMethod(HttpRequest::Method::Post);
}

CreatePersistentVolumeRequest::~CreatePersistentVolumeRequest()
{}

std::string CreatePersistentVolumeRequest::getReclaimPolicy()const
{
	return reclaimPolicy_;
}

void CreatePersistentVolumeRequest::setReclaimPolicy(const std::string& reclaimPolicy)
{
	reclaimPolicy_ = reclaimPolicy;
	setBodyParameter("ReclaimPolicy", reclaimPolicy);
}

std::string CreatePersistentVolumeRequest::getNFSVersion()const
{
	return nFSVersion_;
}

void CreatePersistentVolumeRequest::setNFSVersion(const std::string& nFSVersion)
{
	nFSVersion_ = nFSVersion;
	setBodyParameter("NFSVersion", nFSVersion);
}

std::string CreatePersistentVolumeRequest::getAccessModes()const
{
	return accessModes_;
}

void CreatePersistentVolumeRequest::setAccessModes(const std::string& accessModes)
{
	accessModes_ = accessModes;
	setBodyParameter("AccessModes", accessModes);
}

std::string CreatePersistentVolumeRequest::getName()const
{
	return name_;
}

void CreatePersistentVolumeRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreatePersistentVolumeRequest::getMountTargetDomain()const
{
	return mountTargetDomain_;
}

void CreatePersistentVolumeRequest::setMountTargetDomain(const std::string& mountTargetDomain)
{
	mountTargetDomain_ = mountTargetDomain;
	setBodyParameter("MountTargetDomain", mountTargetDomain);
}

std::string CreatePersistentVolumeRequest::getMountDir()const
{
	return mountDir_;
}

void CreatePersistentVolumeRequest::setMountDir(const std::string& mountDir)
{
	mountDir_ = mountDir;
	setBodyParameter("MountDir", mountDir);
}

std::string CreatePersistentVolumeRequest::getClusterInstanceId()const
{
	return clusterInstanceId_;
}

void CreatePersistentVolumeRequest::setClusterInstanceId(const std::string& clusterInstanceId)
{
	clusterInstanceId_ = clusterInstanceId;
	setBodyParameter("ClusterInstanceId", clusterInstanceId);
}

std::string CreatePersistentVolumeRequest::getCapacity()const
{
	return capacity_;
}

void CreatePersistentVolumeRequest::setCapacity(const std::string& capacity)
{
	capacity_ = capacity;
	setBodyParameter("Capacity", capacity);
}

std::string CreatePersistentVolumeRequest::getStorageClass()const
{
	return storageClass_;
}

void CreatePersistentVolumeRequest::setStorageClass(const std::string& storageClass)
{
	storageClass_ = storageClass;
	setBodyParameter("StorageClass", storageClass);
}

