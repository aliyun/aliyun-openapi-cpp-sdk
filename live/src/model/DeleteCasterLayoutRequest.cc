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

#include <alibabacloud/live/model/DeleteCasterLayoutRequest.h>

using AlibabaCloud::Live::Model::DeleteCasterLayoutRequest;

DeleteCasterLayoutRequest::DeleteCasterLayoutRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteCasterLayout")
{}

DeleteCasterLayoutRequest::~DeleteCasterLayoutRequest()
{}

std::string DeleteCasterLayoutRequest::getRegionId()const
{
	return regionId_;
}

void DeleteCasterLayoutRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteCasterLayoutRequest::getCasterId()const
{
	return casterId_;
}

void DeleteCasterLayoutRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", std::to_string(casterId));
}

long DeleteCasterLayoutRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteCasterLayoutRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteCasterLayoutRequest::getLayoutId()const
{
	return layoutId_;
}

void DeleteCasterLayoutRequest::setLayoutId(const std::string& layoutId)
{
	layoutId_ = layoutId;
	setCoreParameter("LayoutId", std::to_string(layoutId));
}

