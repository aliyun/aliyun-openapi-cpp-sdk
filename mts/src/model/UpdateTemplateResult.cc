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

#include <alibabacloud/mts/model/UpdateTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

UpdateTemplateResult::UpdateTemplateResult() :
	ServiceResult()
{}

UpdateTemplateResult::UpdateTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateTemplateResult::~UpdateTemplateResult()
{}

void UpdateTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto _templateNode = value["Template"];
	if(!_templateNode["State"].isNull())
		_template_.state = _templateNode["State"].asString();
	if(!_templateNode["Name"].isNull())
		_template_.name = _templateNode["Name"].asString();
	if(!_templateNode["Id"].isNull())
		_template_.id = _templateNode["Id"].asString();
	auto videoNode = _templateNode["Video"];
	if(!videoNode["LongShortMode"].isNull())
		_template_.video.longShortMode = videoNode["LongShortMode"].asString();
	if(!videoNode["Bufsize"].isNull())
		_template_.video.bufsize = videoNode["Bufsize"].asString();
	if(!videoNode["Degrain"].isNull())
		_template_.video.degrain = videoNode["Degrain"].asString();
	if(!videoNode["PixFmt"].isNull())
		_template_.video.pixFmt = videoNode["PixFmt"].asString();
	if(!videoNode["Pad"].isNull())
		_template_.video.pad = videoNode["Pad"].asString();
	if(!videoNode["Codec"].isNull())
		_template_.video.codec = videoNode["Codec"].asString();
	if(!videoNode["Height"].isNull())
		_template_.video.height = videoNode["Height"].asString();
	if(!videoNode["Qscale"].isNull())
		_template_.video.qscale = videoNode["Qscale"].asString();
	if(!videoNode["Crop"].isNull())
		_template_.video.crop = videoNode["Crop"].asString();
	if(!videoNode["Bitrate"].isNull())
		_template_.video.bitrate = videoNode["Bitrate"].asString();
	if(!videoNode["Maxrate"].isNull())
		_template_.video.maxrate = videoNode["Maxrate"].asString();
	if(!videoNode["MaxFps"].isNull())
		_template_.video.maxFps = videoNode["MaxFps"].asString();
	if(!videoNode["Profile"].isNull())
		_template_.video.profile = videoNode["Profile"].asString();
	if(!videoNode["Crf"].isNull())
		_template_.video.crf = videoNode["Crf"].asString();
	if(!videoNode["Remove"].isNull())
		_template_.video.remove = videoNode["Remove"].asString();
	if(!videoNode["Gop"].isNull())
		_template_.video.gop = videoNode["Gop"].asString();
	if(!videoNode["Width"].isNull())
		_template_.video.width = videoNode["Width"].asString();
	if(!videoNode["Fps"].isNull())
		_template_.video.fps = videoNode["Fps"].asString();
	if(!videoNode["Preset"].isNull())
		_template_.video.preset = videoNode["Preset"].asString();
	if(!videoNode["ScanMode"].isNull())
		_template_.video.scanMode = videoNode["ScanMode"].asString();
	if(!videoNode["ResoPriority"].isNull())
		_template_.video.resoPriority = videoNode["ResoPriority"].asString();
	if(!videoNode["Hdr2sdr"].isNull())
		_template_.video.hdr2sdr = videoNode["Hdr2sdr"].asString();
	auto bitrateBndNode = videoNode["BitrateBnd"];
	if(!bitrateBndNode["Max"].isNull())
		_template_.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
	if(!bitrateBndNode["Min"].isNull())
		_template_.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
	auto narrowBandNode = videoNode["NarrowBand"];
	if(!narrowBandNode["Version"].isNull())
		_template_.video.narrowBand.version = narrowBandNode["Version"].asString();
	if(!narrowBandNode["Abrmax"].isNull())
		_template_.video.narrowBand.abrmax = std::stof(narrowBandNode["Abrmax"].asString());
	if(!narrowBandNode["MaxAbrRatio"].isNull())
		_template_.video.narrowBand.maxAbrRatio = std::stof(narrowBandNode["MaxAbrRatio"].asString());
	auto transConfigNode = _templateNode["TransConfig"];
	if(!transConfigNode["IsCheckAudioBitrate"].isNull())
		_template_.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
	if(!transConfigNode["TransMode"].isNull())
		_template_.transConfig.transMode = transConfigNode["TransMode"].asString();
	if(!transConfigNode["IsCheckReso"].isNull())
		_template_.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
	if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
		_template_.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
	if(!transConfigNode["AdjDarMethod"].isNull())
		_template_.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
	if(!transConfigNode["IsCheckVideoBitrate"].isNull())
		_template_.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
	if(!transConfigNode["IsCheckResoFail"].isNull())
		_template_.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
	if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
		_template_.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
	auto muxConfigNode = _templateNode["MuxConfig"];
	auto webpNode = muxConfigNode["Webp"];
	if(!webpNode["Loop"].isNull())
		_template_.muxConfig.webp.loop = webpNode["Loop"].asString();
	auto gifNode = muxConfigNode["Gif"];
	if(!gifNode["FinalDelay"].isNull())
		_template_.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
	if(!gifNode["DitherMode"].isNull())
		_template_.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
	if(!gifNode["Loop"].isNull())
		_template_.muxConfig.gif.loop = gifNode["Loop"].asString();
	if(!gifNode["IsCustomPalette"].isNull())
		_template_.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
	auto segmentNode = muxConfigNode["Segment"];
	if(!segmentNode["Duration"].isNull())
		_template_.muxConfig.segment.duration = segmentNode["Duration"].asString();
	auto audioNode = _templateNode["Audio"];
	if(!audioNode["Profile"].isNull())
		_template_.audio.profile = audioNode["Profile"].asString();
	if(!audioNode["Remove"].isNull())
		_template_.audio.remove = audioNode["Remove"].asString();
	if(!audioNode["Codec"].isNull())
		_template_.audio.codec = audioNode["Codec"].asString();
	if(!audioNode["Samplerate"].isNull())
		_template_.audio.samplerate = audioNode["Samplerate"].asString();
	if(!audioNode["Qscale"].isNull())
		_template_.audio.qscale = audioNode["Qscale"].asString();
	if(!audioNode["Channels"].isNull())
		_template_.audio.channels = audioNode["Channels"].asString();
	if(!audioNode["Bitrate"].isNull())
		_template_.audio.bitrate = audioNode["Bitrate"].asString();
	auto volumeNode = audioNode["Volume"];
	if(!volumeNode["Method"].isNull())
		_template_.audio.volume.method = volumeNode["Method"].asString();
	if(!volumeNode["TruePeak"].isNull())
		_template_.audio.volume.truePeak = volumeNode["TruePeak"].asString();
	if(!volumeNode["IntegratedLoudnessTarget"].isNull())
		_template_.audio.volume.integratedLoudnessTarget = volumeNode["IntegratedLoudnessTarget"].asString();
	if(!volumeNode["Level"].isNull())
		_template_.audio.volume.level = volumeNode["Level"].asString();
	if(!volumeNode["LoudnessRangeTarget"].isNull())
		_template_.audio.volume.loudnessRangeTarget = volumeNode["LoudnessRangeTarget"].asString();
	if(!volumeNode["PeakLevel"].isNull())
		_template_.audio.volume.peakLevel = volumeNode["PeakLevel"].asString();
	auto containerNode = _templateNode["Container"];
	if(!containerNode["Format"].isNull())
		_template_.container.format = containerNode["Format"].asString();

}

UpdateTemplateResult::_Template UpdateTemplateResult::get_Template()const
{
	return _template_;
}

