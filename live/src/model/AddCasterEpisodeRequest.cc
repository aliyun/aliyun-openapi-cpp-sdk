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

#include <alibabacloud/live/model/AddCasterEpisodeRequest.h>

using AlibabaCloud::Live::Model::AddCasterEpisodeRequest;

AddCasterEpisodeRequest::AddCasterEpisodeRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddCasterEpisode")
{}

AddCasterEpisodeRequest::~AddCasterEpisodeRequest()
{}

std::string AddCasterEpisodeRequest::getResourceId()const
{
	return resourceId_;
}

void AddCasterEpisodeRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", std::to_string(resourceId));
}

std::vector<std::string> AddCasterEpisodeRequest::getComponentId()const
{
	return componentId_;
}

void AddCasterEpisodeRequest::setComponentId(const std::vector<std::string>& componentId)
{
	componentId_ = componentId;
	for(int i = 0; i!= componentId.size(); i++)
		setCoreParameter("ComponentId."+ std::to_string(i), std::to_string(componentId.at(i)));
}

std::string AddCasterEpisodeRequest::getSwitchType()const
{
	return switchType_;
}

void AddCasterEpisodeRequest::setSwitchType(const std::string& switchType)
{
	switchType_ = switchType;
	setCoreParameter("SwitchType", std::to_string(switchType));
}

std::string AddCasterEpisodeRequest::getCasterId()const
{
	return casterId_;
}

void AddCasterEpisodeRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", std::to_string(casterId));
}

std::string AddCasterEpisodeRequest::getEpisodeType()const
{
	return episodeType_;
}

void AddCasterEpisodeRequest::setEpisodeType(const std::string& episodeType)
{
	episodeType_ = episodeType;
	setCoreParameter("EpisodeType", std::to_string(episodeType));
}

std::string AddCasterEpisodeRequest::getEpisodeName()const
{
	return episodeName_;
}

void AddCasterEpisodeRequest::setEpisodeName(const std::string& episodeName)
{
	episodeName_ = episodeName;
	setCoreParameter("EpisodeName", std::to_string(episodeName));
}

std::string AddCasterEpisodeRequest::getEndTime()const
{
	return endTime_;
}

void AddCasterEpisodeRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string AddCasterEpisodeRequest::getStartTime()const
{
	return startTime_;
}

void AddCasterEpisodeRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long AddCasterEpisodeRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCasterEpisodeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

