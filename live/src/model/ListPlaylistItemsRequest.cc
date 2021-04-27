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

#include <alibabacloud/live/model/ListPlaylistItemsRequest.h>

using AlibabaCloud::Live::Model::ListPlaylistItemsRequest;

ListPlaylistItemsRequest::ListPlaylistItemsRequest() :
	RpcServiceRequest("live", "2016-11-01", "ListPlaylistItems")
{
	setMethod(HttpRequest::Method::Post);
}

ListPlaylistItemsRequest::~ListPlaylistItemsRequest()
{}

std::string ListPlaylistItemsRequest::getProgramItemIds()const
{
	return programItemIds_;
}

void ListPlaylistItemsRequest::setProgramItemIds(const std::string& programItemIds)
{
	programItemIds_ = programItemIds;
	setParameter("ProgramItemIds", programItemIds);
}

std::string ListPlaylistItemsRequest::getProgramId()const
{
	return programId_;
}

void ListPlaylistItemsRequest::setProgramId(const std::string& programId)
{
	programId_ = programId;
	setParameter("ProgramId", programId);
}

long ListPlaylistItemsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListPlaylistItemsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

