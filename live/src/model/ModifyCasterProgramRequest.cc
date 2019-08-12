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

#include <alibabacloud/live/model/ModifyCasterProgramRequest.h>

using AlibabaCloud::Live::Model::ModifyCasterProgramRequest;

ModifyCasterProgramRequest::ModifyCasterProgramRequest() :
	RpcServiceRequest("live", "2016-11-01", "ModifyCasterProgram")
{}

ModifyCasterProgramRequest::~ModifyCasterProgramRequest()
{}

std::string ModifyCasterProgramRequest::getCasterId()const
{
	return casterId_;
}

void ModifyCasterProgramRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

std::vector<ModifyCasterProgramRequest::Episode> ModifyCasterProgramRequest::getEpisode()const
{
	return episode_;
}

void ModifyCasterProgramRequest::setEpisode(const std::vector<Episode>& episode)
{
	episode_ = episode;
	int i = 0;
	for(int i = 0; i!= episode.size(); i++)	{
		auto obj = episode.at(i);
		std::string str ="Episode."+ std::to_string(i);
		setCoreParameter(str + ".ResourceId", obj.resourceId);
		for(int i = 0; i!= obj.componentId.size(); i++)				setCoreParameter(str + ".ComponentId."+ std::to_string(i), obj.componentId.at(i));
		setCoreParameter(str + ".SwitchType", obj.switchType);
		setCoreParameter(str + ".EpisodeType", obj.episodeType);
		setCoreParameter(str + ".EpisodeName", obj.episodeName);
		setCoreParameter(str + ".EndTime", obj.endTime);
		setCoreParameter(str + ".StartTime", obj.startTime);
		setCoreParameter(str + ".EpisodeId", obj.episodeId);
	}
}

long ModifyCasterProgramRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCasterProgramRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

