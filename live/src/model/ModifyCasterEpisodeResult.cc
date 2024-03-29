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

#include <alibabacloud/live/model/ModifyCasterEpisodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ModifyCasterEpisodeResult::ModifyCasterEpisodeResult() :
	ServiceResult()
{}

ModifyCasterEpisodeResult::ModifyCasterEpisodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyCasterEpisodeResult::~ModifyCasterEpisodeResult()
{}

void ModifyCasterEpisodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EpisodeId"].isNull())
		episodeId_ = value["EpisodeId"].asString();
	if(!value["CasterId"].isNull())
		casterId_ = value["CasterId"].asString();

}

std::string ModifyCasterEpisodeResult::getEpisodeId()const
{
	return episodeId_;
}

std::string ModifyCasterEpisodeResult::getCasterId()const
{
	return casterId_;
}

