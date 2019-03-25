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

#include <alibabacloud/mts/model/QueryMediaListByURLRequest.h>

using AlibabaCloud::Mts::Model::QueryMediaListByURLRequest;

QueryMediaListByURLRequest::QueryMediaListByURLRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryMediaListByURL")
{}

QueryMediaListByURLRequest::~QueryMediaListByURLRequest()
{}

long QueryMediaListByURLRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryMediaListByURLRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool QueryMediaListByURLRequest::getIncludeSummaryList()const
{
	return includeSummaryList_;
}

void QueryMediaListByURLRequest::setIncludeSummaryList(bool includeSummaryList)
{
	includeSummaryList_ = includeSummaryList;
	setParameter("IncludeSummaryList", includeSummaryList ? "true" : "false");
}

std::string QueryMediaListByURLRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryMediaListByURLRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool QueryMediaListByURLRequest::getIncludeSnapshotList()const
{
	return includeSnapshotList_;
}

void QueryMediaListByURLRequest::setIncludeSnapshotList(bool includeSnapshotList)
{
	includeSnapshotList_ = includeSnapshotList;
	setParameter("IncludeSnapshotList", includeSnapshotList ? "true" : "false");
}

std::string QueryMediaListByURLRequest::getFileURLs()const
{
	return fileURLs_;
}

void QueryMediaListByURLRequest::setFileURLs(const std::string& fileURLs)
{
	fileURLs_ = fileURLs;
	setParameter("FileURLs", fileURLs);
}

std::string QueryMediaListByURLRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryMediaListByURLRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryMediaListByURLRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryMediaListByURLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool QueryMediaListByURLRequest::getIncludePlayList()const
{
	return includePlayList_;
}

void QueryMediaListByURLRequest::setIncludePlayList(bool includePlayList)
{
	includePlayList_ = includePlayList;
	setParameter("IncludePlayList", includePlayList ? "true" : "false");
}

std::string QueryMediaListByURLRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryMediaListByURLRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool QueryMediaListByURLRequest::getIncludeMediaInfo()const
{
	return includeMediaInfo_;
}

void QueryMediaListByURLRequest::setIncludeMediaInfo(bool includeMediaInfo)
{
	includeMediaInfo_ = includeMediaInfo;
	setParameter("IncludeMediaInfo", includeMediaInfo ? "true" : "false");
}

