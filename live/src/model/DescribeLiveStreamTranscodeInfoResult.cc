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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainTranscodeListNode = value["DomainTranscodeList"]["DomainTranscodeInfo"];
	for (auto valueDomainTranscodeListDomainTranscodeInfo : allDomainTranscodeListNode)
	{
		DomainTranscodeInfo domainTranscodeListObject;
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeApp"].isNull())
			domainTranscodeListObject.transcodeApp = valueDomainTranscodeListDomainTranscodeInfo["TranscodeApp"].asString();
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeTemplate"].isNull())
			domainTranscodeListObject.transcodeTemplate = valueDomainTranscodeListDomainTranscodeInfo["TranscodeTemplate"].asString();
		if(!valueDomainTranscodeListDomainTranscodeInfo["IsLazy"].isNull())
			domainTranscodeListObject.isLazy = valueDomainTranscodeListDomainTranscodeInfo["IsLazy"].asString() == "true";
		if(!valueDomainTranscodeListDomainTranscodeInfo["TranscodeName"].isNull())
			domainTranscodeListObject.transcodeName = valueDomainTranscodeListDomainTranscodeInfo["TranscodeName"].asString();
		auto customTranscodeParametersNode = value["CustomTranscodeParameters"];
		if(!customTranscodeParametersNode["BitrateWithSource"].isNull())
			domainTranscodeListObject.customTranscodeParameters.bitrateWithSource = customTranscodeParametersNode["BitrateWithSource"].asString();
		if(!customTranscodeParametersNode["VideoProfile"].isNull())
			domainTranscodeListObject.customTranscodeParameters.videoProfile = customTranscodeParametersNode["VideoProfile"].asString();
		if(!customTranscodeParametersNode["AudioBitrate"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioBitrate = std::stoi(customTranscodeParametersNode["AudioBitrate"].asString());
		if(!customTranscodeParametersNode["Height"].isNull())
			domainTranscodeListObject.customTranscodeParameters.height = std::stoi(customTranscodeParametersNode["Height"].asString());
		if(!customTranscodeParametersNode["RtsFlag"].isNull())
			domainTranscodeListObject.customTranscodeParameters.rtsFlag = customTranscodeParametersNode["RtsFlag"].asString();
		if(!customTranscodeParametersNode["TemplateType"].isNull())
			domainTranscodeListObject.customTranscodeParameters.templateType = customTranscodeParametersNode["TemplateType"].asString();
		if(!customTranscodeParametersNode["Bframes"].isNull())
			domainTranscodeListObject.customTranscodeParameters.bframes = customTranscodeParametersNode["Bframes"].asString();
		if(!customTranscodeParametersNode["ExtWithSource"].isNull())
			domainTranscodeListObject.customTranscodeParameters.extWithSource = customTranscodeParametersNode["ExtWithSource"].asString();
		if(!customTranscodeParametersNode["AudioRate"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioRate = std::stoi(customTranscodeParametersNode["AudioRate"].asString());
		if(!customTranscodeParametersNode["FpsWithSource"].isNull())
			domainTranscodeListObject.customTranscodeParameters.fpsWithSource = customTranscodeParametersNode["FpsWithSource"].asString();
		if(!customTranscodeParametersNode["AudioCodec"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioCodec = customTranscodeParametersNode["AudioCodec"].asString();
		if(!customTranscodeParametersNode["FPS"].isNull())
			domainTranscodeListObject.customTranscodeParameters.fPS = std::stoi(customTranscodeParametersNode["FPS"].asString());
		if(!customTranscodeParametersNode["Gop"].isNull())
			domainTranscodeListObject.customTranscodeParameters.gop = customTranscodeParametersNode["Gop"].asString();
		if(!customTranscodeParametersNode["Width"].isNull())
			domainTranscodeListObject.customTranscodeParameters.width = std::stoi(customTranscodeParametersNode["Width"].asString());
		if(!customTranscodeParametersNode["VideoBitrate"].isNull())
			domainTranscodeListObject.customTranscodeParameters.videoBitrate = std::stoi(customTranscodeParametersNode["VideoBitrate"].asString());
		if(!customTranscodeParametersNode["AudioChannelNum"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioChannelNum = std::stoi(customTranscodeParametersNode["AudioChannelNum"].asString());
		if(!customTranscodeParametersNode["AudioProfile"].isNull())
			domainTranscodeListObject.customTranscodeParameters.audioProfile = customTranscodeParametersNode["AudioProfile"].asString();
		if(!customTranscodeParametersNode["ResWithSource"].isNull())
			domainTranscodeListObject.customTranscodeParameters.resWithSource = customTranscodeParametersNode["ResWithSource"].asString();
		auto encryptParametersNode = value["EncryptParameters"];
		if(!encryptParametersNode["EncryptType"].isNull())
			domainTranscodeListObject.encryptParameters.encryptType = encryptParametersNode["EncryptType"].asString();
		if(!encryptParametersNode["KmsKeyID"].isNull())
			domainTranscodeListObject.encryptParameters.kmsKeyID = encryptParametersNode["KmsKeyID"].asString();
		if(!encryptParametersNode["KmsKeyExpireInterval"].isNull())
			domainTranscodeListObject.encryptParameters.kmsKeyExpireInterval = encryptParametersNode["KmsKeyExpireInterval"].asString();
		domainTranscodeList_.push_back(domainTranscodeListObject);
	}

}

std::vector<DescribeLiveStreamTranscodeInfoResult::DomainTranscodeInfo> DescribeLiveStreamTranscodeInfoResult::getDomainTranscodeList()const
{
	return domainTranscodeList_;
}

