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

#include <alibabacloud/emr/model/InstallLibrariesRequest.h>

using AlibabaCloud::Emr::Model::InstallLibrariesRequest;

InstallLibrariesRequest::InstallLibrariesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "InstallLibraries")
{
	setMethod(HttpRequest::Method::Post);
}

InstallLibrariesRequest::~InstallLibrariesRequest()
{}

long InstallLibrariesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void InstallLibrariesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string InstallLibrariesRequest::getLibraryBizId()const
{
	return libraryBizId_;
}

void InstallLibrariesRequest::setLibraryBizId(const std::string& libraryBizId)
{
	libraryBizId_ = libraryBizId;
	setParameter("LibraryBizId", libraryBizId);
}

std::string InstallLibrariesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void InstallLibrariesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string InstallLibrariesRequest::getRegionId()const
{
	return regionId_;
}

void InstallLibrariesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> InstallLibrariesRequest::getClusterBizIdList()const
{
	return clusterBizIdList_;
}

void InstallLibrariesRequest::setClusterBizIdList(const std::vector<std::string>& clusterBizIdList)
{
	clusterBizIdList_ = clusterBizIdList;
	for(int dep1 = 0; dep1!= clusterBizIdList.size(); dep1++) {
		setParameter("ClusterBizIdList."+ std::to_string(dep1), clusterBizIdList.at(dep1));
	}
}

