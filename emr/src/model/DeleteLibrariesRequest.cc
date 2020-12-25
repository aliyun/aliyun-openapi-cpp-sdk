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

#include <alibabacloud/emr/model/DeleteLibrariesRequest.h>

using AlibabaCloud::Emr::Model::DeleteLibrariesRequest;

DeleteLibrariesRequest::DeleteLibrariesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteLibraries")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteLibrariesRequest::~DeleteLibrariesRequest()
{}

long DeleteLibrariesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteLibrariesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteLibrariesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLibrariesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteLibrariesRequest::getRegionId()const
{
	return regionId_;
}

void DeleteLibrariesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> DeleteLibrariesRequest::getLibraryBizIdList()const
{
	return libraryBizIdList_;
}

void DeleteLibrariesRequest::setLibraryBizIdList(const std::vector<std::string>& libraryBizIdList)
{
	libraryBizIdList_ = libraryBizIdList;
	for(int dep1 = 0; dep1!= libraryBizIdList.size(); dep1++) {
		setParameter("LibraryBizIdList."+ std::to_string(dep1), libraryBizIdList.at(dep1));
	}
}

