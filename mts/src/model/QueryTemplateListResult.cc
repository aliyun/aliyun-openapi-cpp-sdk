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

#include <alibabacloud/mts/model/QueryTemplateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryTemplateListResult::QueryTemplateListResult() :
	ServiceResult()
{}

QueryTemplateListResult::QueryTemplateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTemplateListResult::~QueryTemplateListResult()
{}

void QueryTemplateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateListNode = value["TemplateList"]["Template"];
	for (auto valueTemplateListTemplate : allTemplateListNode)
	{
		_Template templateListObject;
		if(!valueTemplateListTemplate["State"].isNull())
			templateListObject.state = valueTemplateListTemplate["State"].asString();
		if(!valueTemplateListTemplate["Name"].isNull())
			templateListObject.name = valueTemplateListTemplate["Name"].asString();
		if(!valueTemplateListTemplate["Id"].isNull())
			templateListObject.id = valueTemplateListTemplate["Id"].asString();
		if(!valueTemplateListTemplate["CreationTime"].isNull())
			templateListObject.creationTime = valueTemplateListTemplate["CreationTime"].asString();
		auto videoNode = value["Video"];
		if(!videoNode["Bufsize"].isNull())
			templateListObject.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["LongShortMode"].isNull())
			templateListObject.video.longShortMode = videoNode["LongShortMode"].asString();
		if(!videoNode["Degrain"].isNull())
			templateListObject.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["PixFmt"].isNull())
			templateListObject.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Pad"].isNull())
			templateListObject.video.pad = videoNode["Pad"].asString();
		if(!videoNode["Codec"].isNull())
			templateListObject.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Height"].isNull())
			templateListObject.video.height = videoNode["Height"].asString();
		if(!videoNode["Qscale"].isNull())
			templateListObject.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			templateListObject.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Bitrate"].isNull())
			templateListObject.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Maxrate"].isNull())
			templateListObject.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["MaxFps"].isNull())
			templateListObject.video.maxFps = videoNode["MaxFps"].asString();
		if(!videoNode["Profile"].isNull())
			templateListObject.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Crf"].isNull())
			templateListObject.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Remove"].isNull())
			templateListObject.video.remove = videoNode["Remove"].asString();
		if(!videoNode["Gop"].isNull())
			templateListObject.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Width"].isNull())
			templateListObject.video.width = videoNode["Width"].asString();
		if(!videoNode["Fps"].isNull())
			templateListObject.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Preset"].isNull())
			templateListObject.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			templateListObject.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["ResoPriority"].isNull())
			templateListObject.video.resoPriority = videoNode["ResoPriority"].asString();
		if(!videoNode["Hdr2sdr"].isNull())
			templateListObject.video.hdr2sdr = videoNode["Hdr2sdr"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			templateListObject.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			templateListObject.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto narrowBandNode = videoNode["NarrowBand"];
		if(!narrowBandNode["Version"].isNull())
			templateListObject.video.narrowBand.version = narrowBandNode["Version"].asString();
		if(!narrowBandNode["Abrmax"].isNull())
			templateListObject.video.narrowBand.abrmax = std::stof(narrowBandNode["Abrmax"].asString());
		if(!narrowBandNode["MaxAbrRatio"].isNull())
			templateListObject.video.narrowBand.maxAbrRatio = std::stof(narrowBandNode["MaxAbrRatio"].asString());
		auto transConfigNode = value["TransConfig"];
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			templateListObject.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["TransMode"].isNull())
			templateListObject.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			templateListObject.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			templateListObject.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			templateListObject.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			templateListObject.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			templateListObject.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			templateListObject.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		auto muxConfigNode = value["MuxConfig"];
		auto webpNode = muxConfigNode["Webp"];
		if(!webpNode["Loop"].isNull())
			templateListObject.muxConfig.webp.loop = webpNode["Loop"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["FinalDelay"].isNull())
			templateListObject.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["DitherMode"].isNull())
			templateListObject.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		if(!gifNode["Loop"].isNull())
			templateListObject.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			templateListObject.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			templateListObject.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto audioNode = value["Audio"];
		if(!audioNode["Profile"].isNull())
			templateListObject.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Remove"].isNull())
			templateListObject.audio.remove = audioNode["Remove"].asString();
		if(!audioNode["Codec"].isNull())
			templateListObject.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Samplerate"].isNull())
			templateListObject.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Qscale"].isNull())
			templateListObject.audio.qscale = audioNode["Qscale"].asString();
		if(!audioNode["Channels"].isNull())
			templateListObject.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Bitrate"].isNull())
			templateListObject.audio.bitrate = audioNode["Bitrate"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Method"].isNull())
			templateListObject.audio.volume.method = volumeNode["Method"].asString();
		if(!volumeNode["TruePeak"].isNull())
			templateListObject.audio.volume.truePeak = volumeNode["TruePeak"].asString();
		if(!volumeNode["IntegratedLoudnessTarget"].isNull())
			templateListObject.audio.volume.integratedLoudnessTarget = volumeNode["IntegratedLoudnessTarget"].asString();
		if(!volumeNode["LoudnessRangeTarget"].isNull())
			templateListObject.audio.volume.loudnessRangeTarget = volumeNode["LoudnessRangeTarget"].asString();
		if(!volumeNode["Level"].isNull())
			templateListObject.audio.volume.level = volumeNode["Level"].asString();
		if(!volumeNode["PeakLevel"].isNull())
			templateListObject.audio.volume.peakLevel = volumeNode["PeakLevel"].asString();
		auto containerNode = value["Container"];
		if(!containerNode["Format"].isNull())
			templateListObject.container.format = containerNode["Format"].asString();
		auto frontendHintNode = value["FrontendHint"];
		if(!frontendHintNode["TranscodeType"].isNull())
			templateListObject.frontendHint.transcodeType = frontendHintNode["TranscodeType"].asString();
		if(!frontendHintNode["BitrateControlType"].isNull())
			templateListObject.frontendHint.bitrateControlType = frontendHintNode["BitrateControlType"].asString();
		if(!frontendHintNode["Source"].isNull())
			templateListObject.frontendHint.source = frontendHintNode["Source"].asString();
		if(!frontendHintNode["IsDynamic"].isNull())
			templateListObject.frontendHint.isDynamic = frontendHintNode["IsDynamic"].asString() == "true";
		if(!frontendHintNode["HasOldHdr2Sdr"].isNull())
			templateListObject.frontendHint.hasOldHdr2Sdr = frontendHintNode["HasOldHdr2Sdr"].asString() == "true";
		templateList_.push_back(templateListObject);
	}
	auto allNonExistTids = value["NonExistTids"]["String"];
	for (const auto &item : allNonExistTids)
		nonExistTids_.push_back(item.asString());

}

std::vector<QueryTemplateListResult::_Template> QueryTemplateListResult::getTemplateList()const
{
	return templateList_;
}

std::vector<std::string> QueryTemplateListResult::getNonExistTids()const
{
	return nonExistTids_;
}

