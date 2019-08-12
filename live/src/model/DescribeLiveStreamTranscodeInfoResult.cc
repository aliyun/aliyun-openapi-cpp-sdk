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

#include <alibabacloud/live/model/DescribeLiveStreamTranscodeInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamTranscodeInfoResult::DescribeLiveStreamTranscodeInfoResult() :
	ServiceResult()
{}

DescribeLiveStreamTranscodeInfoResult::DescribeLiveStreamTranscodeInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamTranscodeInfoResult::~DescribeLiveStreamTranscodeInfoResult()
{}

void DescribeLiveStreamTranscodeInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDomainTranscodeList = value["DomainTranscodeList"]["DomainTranscodeInfo"];
	for (auto value : allDomainTranscodeList)
	{
		DomainTranscodeInfo domainTranscodeListObject;
		if(!value["TranscodeApp"].isNull())
			domainTranscodeListObject.transcodeApp = value["TranscodeApp"].asString();
		if(!value["TranscodeName"].isNull())
			domainTranscodeListObject.transcodeName = value["TranscodeName"].asString();
		if(!value["TranscodeTemplate"].isNull())
			domainTranscodeListObject.transcodeTemplate = value["TranscodeTemplate"].asString();
		auto customTranscodeParametersNode = value["CustomTranscodeParameters"];
		if(!customTranscodeParametersNode["VideoBitrate"].isNull())
			domainTranscodeListObject.customTranscodeParameters.videoBitrate = std::stoi(customTranscodeParametersNode["VideoBitrate"].asString());
		if(!customTranscodeParametersNode["FPS"].isNull())
			domainTranscodeListObject.customTranscodeParameters.fPS = std::stoi(customTranscodeParametersNode["FPS"].asString());
		if(!customTranscodeParametersNode["Height"].isNull())
			domainTranscodeListObject.customTranscodeParameters.height = std::stoi(customTranscodeParametersNode["Height"].asString());
		if(!customTranscodeParametersNode["Width"].isNull())
			domainTranscodeListObject.customTranscodeParameters.width = std::stoi(customTranscodeParametersNode["Width"].asString());
		if(!customTranscodeParametersNode["TemplateType"].isNull())
			domainTranscodeListObject.customTranscodeParameters.templateType = customTranscodeParametersNode["TemplateType"].asString();
		if(!customTranscodeParametersNode["VideoProfile"].isNull())
			domainTranscodeListObject.customTranscodeParameters.videoProfile = customTranscodeParametersNode["VideoProfile"].asString();
		if(!customTranscodeParametersNode["Gop"].isNull())
			domainTranscodeListObject.customTranscodeParameters.gop = customTranscodeParametersNode["Gop"].asString();
		if(!customTranscodeParametersNode["AudioBitrate"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioBitrate = std::stoi(customTranscodeParametersNode["AudioBitrate"].asString());
		if(!customTranscodeParametersNode["AudioProfile"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioProfile = customTranscodeParametersNode["AudioProfile"].asString();
		if(!customTranscodeParametersNode["AudioCodec"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioCodec = customTranscodeParametersNode["AudioCodec"].asString();
		if(!customTranscodeParametersNode["AudioRate"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioRate = std::stoi(customTranscodeParametersNode["AudioRate"].asString());
		if(!customTranscodeParametersNode["AudioChannelNum"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioChannelNum = std::stoi(customTranscodeParametersNode["AudioChannelNum"].asString());
		domainTranscodeList_.push_back(domainTranscodeListObject);
	}

}

std::vector<DescribeLiveStreamTranscodeInfoResult::DomainTranscodeInfo> DescribeLiveStreamTranscodeInfoResult::getDomainTranscodeList()const
{
	return domainTranscodeList_;
}

