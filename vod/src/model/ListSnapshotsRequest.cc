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

#include <alibabacloud/vod/model/ListSnapshotsRequest.h>

using AlibabaCloud::Vod::Model::ListSnapshotsRequest;

ListSnapshotsRequest::ListSnapshotsRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListSnapshots")
{}

ListSnapshotsRequest::~ListSnapshotsRequest()
{}

long ListSnapshotsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListSnapshotsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListSnapshotsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListSnapshotsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListSnapshotsRequest::getSnapshotType()const
{
	return snapshotType_;
}

void ListSnapshotsRequest::setSnapshotType(const std::string& snapshotType)
{
	snapshotType_ = snapshotType;
	setCoreParameter("SnapshotType", snapshotType);
}

std::string ListSnapshotsRequest::getPageNo()const
{
	return pageNo_;
}

void ListSnapshotsRequest::setPageNo(const std::string& pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", pageNo);
}

std::string ListSnapshotsRequest::getPageSize()const
{
	return pageSize_;
}

void ListSnapshotsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListSnapshotsRequest::getVideoId()const
{
	return videoId_;
}

void ListSnapshotsRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", videoId);
}

long ListSnapshotsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListSnapshotsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ListSnapshotsRequest::getAuthTimeout()const
{
	return authTimeout_;
}

void ListSnapshotsRequest::setAuthTimeout(const std::string& authTimeout)
{
	authTimeout_ = authTimeout;
	setCoreParameter("AuthTimeout", authTimeout);
}

std::string ListSnapshotsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListSnapshotsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

