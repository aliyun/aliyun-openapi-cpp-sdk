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

#include <alibabacloud/live/model/RemoveShowFromShowListRequest.h>

using AlibabaCloud::Live::Model::RemoveShowFromShowListRequest;

RemoveShowFromShowListRequest::RemoveShowFromShowListRequest() :
	RpcServiceRequest("live", "2016-11-01", "RemoveShowFromShowList")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveShowFromShowListRequest::~RemoveShowFromShowListRequest()
{}

std::string RemoveShowFromShowListRequest::getCasterId()const
{
	return casterId_;
}

void RemoveShowFromShowListRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setParameter("CasterId", casterId);
}

long RemoveShowFromShowListRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveShowFromShowListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RemoveShowFromShowListRequest::getShowId()const
{
	return showId_;
}

void RemoveShowFromShowListRequest::setShowId(const std::string& showId)
{
	showId_ = showId;
	setParameter("ShowId", showId);
}

