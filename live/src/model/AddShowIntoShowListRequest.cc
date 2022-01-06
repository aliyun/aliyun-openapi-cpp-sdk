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

#include <alibabacloud/live/model/AddShowIntoShowListRequest.h>

using AlibabaCloud::Live::Model::AddShowIntoShowListRequest;

AddShowIntoShowListRequest::AddShowIntoShowListRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddShowIntoShowList")
{
	setMethod(HttpRequest::Method::Post);
}

AddShowIntoShowListRequest::~AddShowIntoShowListRequest()
{}

int AddShowIntoShowListRequest::getLiveInputType()const
{
	return liveInputType_;
}

void AddShowIntoShowListRequest::setLiveInputType(int liveInputType)
{
	liveInputType_ = liveInputType;
	setParameter("LiveInputType", std::to_string(liveInputType));
}

long AddShowIntoShowListRequest::getDuration()const
{
	return duration_;
}

void AddShowIntoShowListRequest::setDuration(long duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

int AddShowIntoShowListRequest::getRepeatTimes()const
{
	return repeatTimes_;
}

void AddShowIntoShowListRequest::setRepeatTimes(int repeatTimes)
{
	repeatTimes_ = repeatTimes;
	setParameter("RepeatTimes", std::to_string(repeatTimes));
}

std::string AddShowIntoShowListRequest::getShowName()const
{
	return showName_;
}

void AddShowIntoShowListRequest::setShowName(const std::string& showName)
{
	showName_ = showName;
	setParameter("ShowName", showName);
}

std::string AddShowIntoShowListRequest::getResourceId()const
{
	return resourceId_;
}

void AddShowIntoShowListRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string AddShowIntoShowListRequest::getCasterId()const
{
	return casterId_;
}

void AddShowIntoShowListRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setParameter("CasterId", casterId);
}

long AddShowIntoShowListRequest::getOwnerId()const
{
	return ownerId_;
}

void AddShowIntoShowListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddShowIntoShowListRequest::getResourceType()const
{
	return resourceType_;
}

void AddShowIntoShowListRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string AddShowIntoShowListRequest::getResourceUrl()const
{
	return resourceUrl_;
}

void AddShowIntoShowListRequest::setResourceUrl(const std::string& resourceUrl)
{
	resourceUrl_ = resourceUrl;
	setParameter("ResourceUrl", resourceUrl);
}

int AddShowIntoShowListRequest::getSpot()const
{
	return spot_;
}

void AddShowIntoShowListRequest::setSpot(int spot)
{
	spot_ = spot;
	setParameter("Spot", std::to_string(spot));
}

