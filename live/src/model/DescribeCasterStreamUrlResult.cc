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

#include <alibabacloud/live/model/DescribeCasterStreamUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeCasterStreamUrlResult::DescribeCasterStreamUrlResult() :
	ServiceResult()
{}

DescribeCasterStreamUrlResult::DescribeCasterStreamUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCasterStreamUrlResult::~DescribeCasterStreamUrlResult()
{}

void DescribeCasterStreamUrlResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCasterStreams = value["CasterStreams"]["CasterStream"];
	for (auto value : allCasterStreams)
	{
		CasterStream casterStreamsObject;
		if(!value["SceneId"].isNull())
			casterStreamsObject.sceneId = value["SceneId"].asString();
		if(!value["StreamUrl"].isNull())
			casterStreamsObject.streamUrl = value["StreamUrl"].asString();
		if(!value["RtmpUrl"].isNull())
			casterStreamsObject.rtmpUrl = value["RtmpUrl"].asString();
		if(!value["OutputType"].isNull())
			casterStreamsObject.outputType = std::stoi(value["OutputType"].asString());
		auto allStreamInfos = value["StreamInfos"]["StreamInfo"];
		for (auto value : allStreamInfos)
		{
			CasterStream::StreamInfo streamInfosObject;
			if(!value["TranscodeConfig"].isNull())
				streamInfosObject.transcodeConfig = value["TranscodeConfig"].asString();
			if(!value["VideoFormat"].isNull())
				streamInfosObject.videoFormat = value["VideoFormat"].asString();
			if(!value["OutputStreamUrl"].isNull())
				streamInfosObject.outputStreamUrl = value["OutputStreamUrl"].asString();
			casterStreamsObject.streamInfos.push_back(streamInfosObject);
		}
		casterStreams_.push_back(casterStreamsObject);
	}
	if(!value["CasterId"].isNull())
		casterId_ = value["CasterId"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeCasterStreamUrlResult::CasterStream> DescribeCasterStreamUrlResult::getCasterStreams()const
{
	return casterStreams_;
}

int DescribeCasterStreamUrlResult::getTotal()const
{
	return total_;
}

std::string DescribeCasterStreamUrlResult::getCasterId()const
{
	return casterId_;
}

