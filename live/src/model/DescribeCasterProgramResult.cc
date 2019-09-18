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

#include <alibabacloud/live/model/DescribeCasterProgramResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeCasterProgramResult::DescribeCasterProgramResult() :
	ServiceResult()
{}

DescribeCasterProgramResult::DescribeCasterProgramResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCasterProgramResult::~DescribeCasterProgramResult()
{}

void DescribeCasterProgramResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEpisodes = value["Episodes"]["Episode"];
	for (auto value : allEpisodes)
	{
		Episode episodesObject;
		if(!value["EpisodeId"].isNull())
			episodesObject.episodeId = value["EpisodeId"].asString();
		if(!value["EpisodeType"].isNull())
			episodesObject.episodeType = value["EpisodeType"].asString();
		if(!value["EpisodeName"].isNull())
			episodesObject.episodeName = value["EpisodeName"].asString();
		if(!value["ResourceId"].isNull())
			episodesObject.resourceId = value["ResourceId"].asString();
		if(!value["StartTime"].isNull())
			episodesObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			episodesObject.endTime = value["EndTime"].asString();
		if(!value["SwitchType"].isNull())
			episodesObject.switchType = value["SwitchType"].asString();
		if(!value["Status"].isNull())
			episodesObject.status = std::stoi(value["Status"].asString());
		auto allComponentIds = value["ComponentIds"]["ComponentId"];
		for (auto value : allComponentIds)
			episodesObject.componentIds.push_back(value.asString());
		episodes_.push_back(episodesObject);
	}
	if(!value["CasterId"].isNull())
		casterId_ = value["CasterId"].asString();
	if(!value["ProgramName"].isNull())
		programName_ = value["ProgramName"].asString();
	if(!value["ProgramEffect"].isNull())
		programEffect_ = std::stoi(value["ProgramEffect"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeCasterProgramResult::getProgramEffect()const
{
	return programEffect_;
}

int DescribeCasterProgramResult::getTotal()const
{
	return total_;
}

std::vector<DescribeCasterProgramResult::Episode> DescribeCasterProgramResult::getEpisodes()const
{
	return episodes_;
}

std::string DescribeCasterProgramResult::getCasterId()const
{
	return casterId_;
}

std::string DescribeCasterProgramResult::getProgramName()const
{
	return programName_;
}

