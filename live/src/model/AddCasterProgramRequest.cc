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

#include <alibabacloud/live/model/AddCasterProgramRequest.h>

using AlibabaCloud::Live::Model::AddCasterProgramRequest;

AddCasterProgramRequest::AddCasterProgramRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddCasterProgram")
{
	setMethod(HttpRequest::Method::Post);
}

AddCasterProgramRequest::~AddCasterProgramRequest()
{}

std::vector<AddCasterProgramRequest::Episode> AddCasterProgramRequest::getEpisode()const
{
	return episode_;
}

void AddCasterProgramRequest::setEpisode(const std::vector<Episode>& episode)
{
	episode_ = episode;
	for(int dep1 = 0; dep1!= episode.size(); dep1++) {
		auto episodeObj = episode.at(dep1);
		std::string episodeObjStr = "Episode." + std::to_string(dep1);
		setCoreParameter(episodeObjStr + ".EpisodeType", episodeObj.episodeType);
		setCoreParameter(episodeObjStr + ".EpisodeName", episodeObj.episodeName);
		setCoreParameter(episodeObjStr + ".ResourceId", episodeObj.resourceId);
		for(int dep2 = 0; dep2!= episodeObj.componentId.size(); dep2++) {
			setCoreParameter(episodeObjStr + ".ComponentId."+ std::to_string(dep2), episodeObj.componentId.at(dep2));
		}
		setCoreParameter(episodeObjStr + ".StartTime", episodeObj.startTime);
		setCoreParameter(episodeObjStr + ".EndTime", episodeObj.endTime);
		setCoreParameter(episodeObjStr + ".SwitchType", episodeObj.switchType);
	}
}

std::string AddCasterProgramRequest::getCasterId()const
{
	return casterId_;
}

void AddCasterProgramRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

long AddCasterProgramRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCasterProgramRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

