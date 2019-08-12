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

#include <alibabacloud/mts/model/SubmitComplexJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitComplexJobResult::SubmitComplexJobResult() :
	ServiceResult()
{}

SubmitComplexJobResult::SubmitComplexJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitComplexJobResult::~SubmitComplexJobResult()
{}

void SubmitComplexJobResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto complexJobNode = value["ComplexJob"];
	if(!complexJobNode["JobId"].isNull())
		complexJob_.jobId = complexJobNode["JobId"].asString();
	if(!complexJobNode["State"].isNull())
		complexJob_.state = complexJobNode["State"].asString();
	if(!complexJobNode["Code"].isNull())
		complexJob_.code = complexJobNode["Code"].asString();
	if(!complexJobNode["Message"].isNull())
		complexJob_.message = complexJobNode["Message"].asString();
	if(!complexJobNode["Percent"].isNull())
		complexJob_.percent = std::stol(complexJobNode["Percent"].asString());
	if(!complexJobNode["PipelineId"].isNull())
		complexJob_.pipelineId = complexJobNode["PipelineId"].asString();
	if(!complexJobNode["CreationTime"].isNull())
		complexJob_.creationTime = complexJobNode["CreationTime"].asString();
	if(!complexJobNode["FinishTime"].isNull())
		complexJob_.finishTime = complexJobNode["FinishTime"].asString();
	auto allInputs = value["Inputs"]["InputsItem"];
	for (auto value : allInputs)
	{
		ComplexJob::InputsItem inputsItemObject;
		auto allEditingInputs = value["EditingInputs"]["EditingInput"];
		for (auto value : allEditingInputs)
		{
			ComplexJob::InputsItem::EditingInput editingInputsObject;
			if(!value["Id"].isNull())
				editingInputsObject.id = value["Id"].asString();
			auto inputFileNode = value["InputFile"];
			if(!inputFileNode["Bucket"].isNull())
				editingInputsObject.inputFile.bucket = inputFileNode["Bucket"].asString();
			if(!inputFileNode["Location"].isNull())
				editingInputsObject.inputFile.location = inputFileNode["Location"].asString();
			if(!inputFileNode["Object"].isNull())
				editingInputsObject.inputFile.object = inputFileNode["Object"].asString();
			auto inputConfigNode = value["InputConfig"];
			if(!inputConfigNode["DeinterlaceMethod"].isNull())
				editingInputsObject.inputConfig.deinterlaceMethod = inputConfigNode["DeinterlaceMethod"].asString();
			if(!inputConfigNode["IsNormalSar"].isNull())
				editingInputsObject.inputConfig.isNormalSar = inputConfigNode["IsNormalSar"].asString();
			inputsItemObject.editingInputs.push_back(editingInputsObject);
		}
		complexJob_.inputs.push_back(inputsItemObject);
	}
	auto allComplexEditingConfigs = value["ComplexEditingConfigs"]["ComplexEditingConfigsItem"];
	for (auto value : allComplexEditingConfigs)
	{
		ComplexJob::ComplexEditingConfigsItem complexEditingConfigsItemObject;
		auto editingNode = value["Editing"];
		auto allClipList = value["ClipList"]["Clip"];
		for (auto value : allClipList)
		{
			ComplexJob::ComplexEditingConfigsItem::Editing::Clip clipObject;
			if(!value["Id"].isNull())
				clipObject.id = value["Id"].asString();
			if(!value["Type"].isNull())
				clipObject.type = value["Type"].asString();
			if(!value["SourceType"].isNull())
				clipObject.sourceType = value["SourceType"].asString();
			if(!value["SourceID"].isNull())
				clipObject.sourceID = value["SourceID"].asString();
			if(!value["SourceStrmMap"].isNull())
				clipObject.sourceStrmMap = value["SourceStrmMap"].asString();
			if(!value["In"].isNull())
				clipObject.in = value["In"].asString();
			if(!value["Out"].isNull())
				clipObject.out = value["Out"].asString();
			auto allEffects = value["Effects"]["Effect"];
			for (auto value : allEffects)
			{
				ComplexJob::ComplexEditingConfigsItem::Editing::Clip::Effect effectsObject;
				if(!value["Effect"].isNull())
					effectsObject.effect = value["Effect"].asString();
				if(!value["EffectConfig"].isNull())
					effectsObject.effectConfig = value["EffectConfig"].asString();
				clipObject.effects.push_back(effectsObject);
			}
			complexEditingConfigsItemObject.editing.clipList.push_back(clipObject);
		}
		auto timelineNode = editingNode["Timeline"];
		auto allTrackList = value["TrackList"]["Track"];
		for (auto value : allTrackList)
		{
			ComplexJob::ComplexEditingConfigsItem::Editing::Timeline::Track trackObject;
			if(!value["Id"].isNull())
				trackObject.id = value["Id"].asString();
			if(!value["Type"].isNull())
				trackObject.type = value["Type"].asString();
			if(!value["Order"].isNull())
				trackObject.order = value["Order"].asString();
			auto allClips = value["Clips"]["Clip"];
			for (auto value : allClips)
			{
				ComplexJob::ComplexEditingConfigsItem::Editing::Timeline::Track::Clip1 clipsObject;
				if(!value["clipID"].isNull())
					clipsObject.clipID = value["clipID"].asString();
				if(!value["In"].isNull())
					clipsObject.in = value["In"].asString();
				if(!value["Out"].isNull())
					clipsObject.out = value["Out"].asString();
				auto clipsConfigNode = value["ClipsConfig"];
				auto clipsConfigVideoNode = clipsConfigNode["ClipsConfigVideo"];
				if(!clipsConfigVideoNode["L"].isNull())
					clipsObject.clipsConfig.clipsConfigVideo.l = clipsConfigVideoNode["L"].asString();
				if(!clipsConfigVideoNode["T"].isNull())
					clipsObject.clipsConfig.clipsConfigVideo.t = clipsConfigVideoNode["T"].asString();
				trackObject.clips.push_back(clipsObject);
			}
			complexEditingConfigsItemObject.editing.timeline.trackList.push_back(trackObject);
		}
		auto timelineConfigNode = timelineNode["TimelineConfig"];
		auto timelineConfigVideoNode = timelineConfigNode["TimelineConfigVideo"];
		if(!timelineConfigVideoNode["Width"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.width = timelineConfigVideoNode["Width"].asString();
		if(!timelineConfigVideoNode["Height"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.height = timelineConfigVideoNode["Height"].asString();
		if(!timelineConfigVideoNode["BgColor"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.bgColor = timelineConfigVideoNode["BgColor"].asString();
		if(!timelineConfigVideoNode["Fps"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.fps = timelineConfigVideoNode["Fps"].asString();
		if(!timelineConfigVideoNode["RenderRatio"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.renderRatio = timelineConfigVideoNode["RenderRatio"].asString();
		if(!timelineConfigVideoNode["ReclosePrec"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.reclosePrec = timelineConfigVideoNode["ReclosePrec"].asString();
		if(!timelineConfigVideoNode["IsGpuData"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.isGpuData = timelineConfigVideoNode["IsGpuData"].asString();
		if(!timelineConfigVideoNode["IsOneTrackData"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.isOneTrackData = timelineConfigVideoNode["IsOneTrackData"].asString();
		auto timelineConfigAudioNode = timelineConfigNode["TimelineConfigAudio"];
		if(!timelineConfigAudioNode["Samplerate"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigAudio.samplerate = timelineConfigAudioNode["Samplerate"].asString();
		if(!timelineConfigAudioNode["ChannelLayout"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigAudio.channelLayout = timelineConfigAudioNode["ChannelLayout"].asString();
		if(!timelineConfigAudioNode["Channels"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigAudio.channels = timelineConfigAudioNode["Channels"].asString();
		complexJob_.complexEditingConfigs.push_back(complexEditingConfigsItemObject);
	}
	auto transcodeOutputNode = complexJobNode["transcodeOutput"];
	if(!transcodeOutputNode["TemplateId"].isNull())
		complexJob_.transcodeOutput.templateId = transcodeOutputNode["TemplateId"].asString();
	if(!transcodeOutputNode["UserData"].isNull())
		complexJob_.transcodeOutput.userData = transcodeOutputNode["UserData"].asString();
	if(!transcodeOutputNode["Rotate"].isNull())
		complexJob_.transcodeOutput.rotate = transcodeOutputNode["Rotate"].asString();
	if(!transcodeOutputNode["VideoStreamMap"].isNull())
		complexJob_.transcodeOutput.videoStreamMap = transcodeOutputNode["VideoStreamMap"].asString();
	if(!transcodeOutputNode["AudioStreamMap"].isNull())
		complexJob_.transcodeOutput.audioStreamMap = transcodeOutputNode["AudioStreamMap"].asString();
	if(!transcodeOutputNode["DeWatermark"].isNull())
		complexJob_.transcodeOutput.deWatermark = transcodeOutputNode["DeWatermark"].asString();
	if(!transcodeOutputNode["Priority"].isNull())
		complexJob_.transcodeOutput.priority = transcodeOutputNode["Priority"].asString();
	if(!transcodeOutputNode["WaterMarkConfigUrl"].isNull())
		complexJob_.transcodeOutput.waterMarkConfigUrl = transcodeOutputNode["WaterMarkConfigUrl"].asString();
	if(!transcodeOutputNode["MergeConfigUrl"].isNull())
		complexJob_.transcodeOutput.mergeConfigUrl = transcodeOutputNode["MergeConfigUrl"].asString();
	auto allWaterMarkList = value["WaterMarkList"]["WaterMark"];
	for (auto value : allWaterMarkList)
	{
		ComplexJob::TranscodeOutput::WaterMark waterMarkObject;
		if(!value["WaterMarkTemplateId"].isNull())
			waterMarkObject.waterMarkTemplateId = value["WaterMarkTemplateId"].asString();
		if(!value["Width"].isNull())
			waterMarkObject.width = value["Width"].asString();
		if(!value["Height"].isNull())
			waterMarkObject.height = value["Height"].asString();
		if(!value["Dx"].isNull())
			waterMarkObject.dx = value["Dx"].asString();
		if(!value["Dy"].isNull())
			waterMarkObject.dy = value["Dy"].asString();
		if(!value["ReferPos"].isNull())
			waterMarkObject.referPos = value["ReferPos"].asString();
		if(!value["Type"].isNull())
			waterMarkObject.type = value["Type"].asString();
		auto inputFile2Node = value["InputFile"];
		if(!inputFile2Node["Bucket"].isNull())
			waterMarkObject.inputFile2.bucket = inputFile2Node["Bucket"].asString();
		if(!inputFile2Node["Location"].isNull())
			waterMarkObject.inputFile2.location = inputFile2Node["Location"].asString();
		if(!inputFile2Node["Object"].isNull())
			waterMarkObject.inputFile2.object = inputFile2Node["Object"].asString();
		complexJob_.transcodeOutput.waterMarkList.push_back(waterMarkObject);
	}
	auto allMergeList = value["MergeList"]["Merge"];
	for (auto value : allMergeList)
	{
		ComplexJob::TranscodeOutput::Merge mergeObject;
		if(!value["MergeURL"].isNull())
			mergeObject.mergeURL = value["MergeURL"].asString();
		if(!value["Start"].isNull())
			mergeObject.start = value["Start"].asString();
		if(!value["Duration"].isNull())
			mergeObject.duration = value["Duration"].asString();
		if(!value["RoleArn"].isNull())
			mergeObject.roleArn = value["RoleArn"].asString();
		complexJob_.transcodeOutput.mergeList.push_back(mergeObject);
	}
	auto digiWaterMarkNode = transcodeOutputNode["DigiWaterMark"];
	if(!digiWaterMarkNode["Type"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
	if(!digiWaterMarkNode["Alpha"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
	auto inputFile3Node = digiWaterMarkNode["InputFile"];
	if(!inputFile3Node["Bucket"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.inputFile3.bucket = inputFile3Node["Bucket"].asString();
	if(!inputFile3Node["Location"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.inputFile3.location = inputFile3Node["Location"].asString();
	if(!inputFile3Node["Object"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.inputFile3.object = inputFile3Node["Object"].asString();
	auto outputFileNode = transcodeOutputNode["OutputFile"];
	if(!outputFileNode["Bucket"].isNull())
		complexJob_.transcodeOutput.outputFile.bucket = outputFileNode["Bucket"].asString();
	if(!outputFileNode["Location"].isNull())
		complexJob_.transcodeOutput.outputFile.location = outputFileNode["Location"].asString();
	if(!outputFileNode["Object"].isNull())
		complexJob_.transcodeOutput.outputFile.object = outputFileNode["Object"].asString();
	if(!outputFileNode["RoleArn"].isNull())
		complexJob_.transcodeOutput.outputFile.roleArn = outputFileNode["RoleArn"].asString();
	auto m3U8NonStandardSupportNode = transcodeOutputNode["M3U8NonStandardSupport"];
	auto tSNode = m3U8NonStandardSupportNode["TS"];
	if(!tSNode["Md5Support"].isNull())
		complexJob_.transcodeOutput.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
	if(!tSNode["SizeSupport"].isNull())
		complexJob_.transcodeOutput.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
	auto propertiesNode = transcodeOutputNode["Properties"];
	if(!propertiesNode["Width"].isNull())
		complexJob_.transcodeOutput.properties.width = propertiesNode["Width"].asString();
	if(!propertiesNode["Height"].isNull())
		complexJob_.transcodeOutput.properties.height = propertiesNode["Height"].asString();
	if(!propertiesNode["Bitrate"].isNull())
		complexJob_.transcodeOutput.properties.bitrate = propertiesNode["Bitrate"].asString();
	if(!propertiesNode["Duration"].isNull())
		complexJob_.transcodeOutput.properties.duration = propertiesNode["Duration"].asString();
	if(!propertiesNode["Fps"].isNull())
		complexJob_.transcodeOutput.properties.fps = propertiesNode["Fps"].asString();
	if(!propertiesNode["FileSize"].isNull())
		complexJob_.transcodeOutput.properties.fileSize = propertiesNode["FileSize"].asString();
	if(!propertiesNode["FileFormat"].isNull())
		complexJob_.transcodeOutput.properties.fileFormat = propertiesNode["FileFormat"].asString();
	auto streamsNode = propertiesNode["Streams"];
	auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
	for (auto value : allVideoStreamList)
	{
		ComplexJob::TranscodeOutput::Properties::Streams::VideoStream videoStreamObject;
		if(!value["Index"].isNull())
			videoStreamObject.index = value["Index"].asString();
		if(!value["CodecName"].isNull())
			videoStreamObject.codecName = value["CodecName"].asString();
		if(!value["CodecLongName"].isNull())
			videoStreamObject.codecLongName = value["CodecLongName"].asString();
		if(!value["Profile"].isNull())
			videoStreamObject.profile = value["Profile"].asString();
		if(!value["CodecTimeBase"].isNull())
			videoStreamObject.codecTimeBase = value["CodecTimeBase"].asString();
		if(!value["CodecTagString"].isNull())
			videoStreamObject.codecTagString = value["CodecTagString"].asString();
		if(!value["CodecTag"].isNull())
			videoStreamObject.codecTag = value["CodecTag"].asString();
		if(!value["Width"].isNull())
			videoStreamObject.width = value["Width"].asString();
		if(!value["Height"].isNull())
			videoStreamObject.height = value["Height"].asString();
		if(!value["HasBFrames"].isNull())
			videoStreamObject.hasBFrames = value["HasBFrames"].asString();
		if(!value["Sar"].isNull())
			videoStreamObject.sar = value["Sar"].asString();
		if(!value["Dar"].isNull())
			videoStreamObject.dar = value["Dar"].asString();
		if(!value["PixFmt"].isNull())
			videoStreamObject.pixFmt = value["PixFmt"].asString();
		if(!value["Level"].isNull())
			videoStreamObject.level = value["Level"].asString();
		if(!value["Fps"].isNull())
			videoStreamObject.fps = value["Fps"].asString();
		if(!value["AvgFPS"].isNull())
			videoStreamObject.avgFPS = value["AvgFPS"].asString();
		if(!value["Timebase"].isNull())
			videoStreamObject.timebase = value["Timebase"].asString();
		if(!value["StartTime"].isNull())
			videoStreamObject.startTime = value["StartTime"].asString();
		if(!value["Duration"].isNull())
			videoStreamObject.duration = value["Duration"].asString();
		if(!value["Bitrate"].isNull())
			videoStreamObject.bitrate = value["Bitrate"].asString();
		if(!value["NumFrames"].isNull())
			videoStreamObject.numFrames = value["NumFrames"].asString();
		if(!value["Lang"].isNull())
			videoStreamObject.lang = value["Lang"].asString();
		auto networkCostNode = value["NetworkCost"];
		if(!networkCostNode["PreloadTime"].isNull())
			videoStreamObject.networkCost.preloadTime = networkCostNode["PreloadTime"].asString();
		if(!networkCostNode["CostBandwidth"].isNull())
			videoStreamObject.networkCost.costBandwidth = networkCostNode["CostBandwidth"].asString();
		if(!networkCostNode["AvgBitrate"].isNull())
			videoStreamObject.networkCost.avgBitrate = networkCostNode["AvgBitrate"].asString();
		complexJob_.transcodeOutput.properties.streams.videoStreamList.push_back(videoStreamObject);
	}
	auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
	for (auto value : allAudioStreamList)
	{
		ComplexJob::TranscodeOutput::Properties::Streams::AudioStream audioStreamObject;
		if(!value["Index"].isNull())
			audioStreamObject.index = value["Index"].asString();
		if(!value["CodecName"].isNull())
			audioStreamObject.codecName = value["CodecName"].asString();
		if(!value["CodecTimeBase"].isNull())
			audioStreamObject.codecTimeBase = value["CodecTimeBase"].asString();
		if(!value["CodecLongName"].isNull())
			audioStreamObject.codecLongName = value["CodecLongName"].asString();
		if(!value["CodecTagString"].isNull())
			audioStreamObject.codecTagString = value["CodecTagString"].asString();
		if(!value["CodecTag"].isNull())
			audioStreamObject.codecTag = value["CodecTag"].asString();
		if(!value["SampleFmt"].isNull())
			audioStreamObject.sampleFmt = value["SampleFmt"].asString();
		if(!value["Samplerate"].isNull())
			audioStreamObject.samplerate = value["Samplerate"].asString();
		if(!value["Channels"].isNull())
			audioStreamObject.channels = value["Channels"].asString();
		if(!value["ChannelLayout"].isNull())
			audioStreamObject.channelLayout = value["ChannelLayout"].asString();
		if(!value["Timebase"].isNull())
			audioStreamObject.timebase = value["Timebase"].asString();
		if(!value["StartTime"].isNull())
			audioStreamObject.startTime = value["StartTime"].asString();
		if(!value["Duration"].isNull())
			audioStreamObject.duration = value["Duration"].asString();
		if(!value["Bitrate"].isNull())
			audioStreamObject.bitrate = value["Bitrate"].asString();
		if(!value["NumFrames"].isNull())
			audioStreamObject.numFrames = value["NumFrames"].asString();
		if(!value["Lang"].isNull())
			audioStreamObject.lang = value["Lang"].asString();
		complexJob_.transcodeOutput.properties.streams.audioStreamList.push_back(audioStreamObject);
	}
	auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
	for (auto value : allSubtitleStreamList)
	{
		ComplexJob::TranscodeOutput::Properties::Streams::SubtitleStream subtitleStreamObject;
		if(!value["Index"].isNull())
			subtitleStreamObject.index = value["Index"].asString();
		if(!value["Lang"].isNull())
			subtitleStreamObject.lang = value["Lang"].asString();
		complexJob_.transcodeOutput.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
	}
	auto formatNode = propertiesNode["Format"];
	if(!formatNode["NumStreams"].isNull())
		complexJob_.transcodeOutput.properties.format.numStreams = formatNode["NumStreams"].asString();
	if(!formatNode["NumPrograms"].isNull())
		complexJob_.transcodeOutput.properties.format.numPrograms = formatNode["NumPrograms"].asString();
	if(!formatNode["FormatName"].isNull())
		complexJob_.transcodeOutput.properties.format.formatName = formatNode["FormatName"].asString();
	if(!formatNode["FormatLongName"].isNull())
		complexJob_.transcodeOutput.properties.format.formatLongName = formatNode["FormatLongName"].asString();
	if(!formatNode["StartTime"].isNull())
		complexJob_.transcodeOutput.properties.format.startTime = formatNode["StartTime"].asString();
	if(!formatNode["Duration"].isNull())
		complexJob_.transcodeOutput.properties.format.duration = formatNode["Duration"].asString();
	if(!formatNode["Size"].isNull())
		complexJob_.transcodeOutput.properties.format.size = formatNode["Size"].asString();
	if(!formatNode["Bitrate"].isNull())
		complexJob_.transcodeOutput.properties.format.bitrate = formatNode["Bitrate"].asString();
	auto clip4Node = transcodeOutputNode["Clip"];
	auto timeSpanNode = clip4Node["TimeSpan"];
	if(!timeSpanNode["Seek"].isNull())
		complexJob_.transcodeOutput.clip4.timeSpan.seek = timeSpanNode["Seek"].asString();
	if(!timeSpanNode["Duration"].isNull())
		complexJob_.transcodeOutput.clip4.timeSpan.duration = timeSpanNode["Duration"].asString();
	auto superResoNode = transcodeOutputNode["SuperReso"];
	if(!superResoNode["IsHalfSample"].isNull())
		complexJob_.transcodeOutput.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
	auto subtitleConfigNode = transcodeOutputNode["SubtitleConfig"];
	auto allSubtitleList = value["SubtitleList"]["Subtitle"];
	for (auto value : allSubtitleList)
	{
		ComplexJob::TranscodeOutput::SubtitleConfig::Subtitle subtitleObject;
		if(!value["Map"].isNull())
			subtitleObject.map = value["Map"].asString();
		complexJob_.transcodeOutput.subtitleConfig.subtitleList.push_back(subtitleObject);
	}
	auto allExtSubtitleList = value["ExtSubtitleList"]["ExtSubtitle"];
	for (auto value : allExtSubtitleList)
	{
		ComplexJob::TranscodeOutput::SubtitleConfig::ExtSubtitle extSubtitleObject;
		if(!value["FontName"].isNull())
			extSubtitleObject.fontName = value["FontName"].asString();
		if(!value["CharEnc"].isNull())
			extSubtitleObject.charEnc = value["CharEnc"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			extSubtitleObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			extSubtitleObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			extSubtitleObject.input.object = inputNode["Object"].asString();
		complexJob_.transcodeOutput.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
	}
	auto transConfigNode = transcodeOutputNode["TransConfig"];
	if(!transConfigNode["TransMode"].isNull())
		complexJob_.transcodeOutput.transConfig.transMode = transConfigNode["TransMode"].asString();
	if(!transConfigNode["IsCheckReso"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
	if(!transConfigNode["IsCheckResoFail"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
	if(!transConfigNode["IsCheckVideoBitrate"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
	if(!transConfigNode["IsCheckAudioBitrate"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
	if(!transConfigNode["AdjDarMethod"].isNull())
		complexJob_.transcodeOutput.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
	if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
	if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
	if(!transConfigNode["Duration"].isNull())
		complexJob_.transcodeOutput.transConfig.duration = transConfigNode["Duration"].asString();
	auto muxConfigNode = transcodeOutputNode["MuxConfig"];
	auto segmentNode = muxConfigNode["Segment"];
	if(!segmentNode["Duration"].isNull())
		complexJob_.transcodeOutput.muxConfig.segment.duration = segmentNode["Duration"].asString();
	auto gifNode = muxConfigNode["Gif"];
	if(!gifNode["Loop"].isNull())
		complexJob_.transcodeOutput.muxConfig.gif.loop = gifNode["Loop"].asString();
	if(!gifNode["FinalDelay"].isNull())
		complexJob_.transcodeOutput.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
	if(!gifNode["IsCustomPalette"].isNull())
		complexJob_.transcodeOutput.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
	if(!gifNode["DitherMode"].isNull())
		complexJob_.transcodeOutput.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
	auto audioNode = transcodeOutputNode["Audio"];
	if(!audioNode["Codec"].isNull())
		complexJob_.transcodeOutput.audio.codec = audioNode["Codec"].asString();
	if(!audioNode["Profile"].isNull())
		complexJob_.transcodeOutput.audio.profile = audioNode["Profile"].asString();
	if(!audioNode["Samplerate"].isNull())
		complexJob_.transcodeOutput.audio.samplerate = audioNode["Samplerate"].asString();
	if(!audioNode["Bitrate"].isNull())
		complexJob_.transcodeOutput.audio.bitrate = audioNode["Bitrate"].asString();
	if(!audioNode["Channels"].isNull())
		complexJob_.transcodeOutput.audio.channels = audioNode["Channels"].asString();
	if(!audioNode["Qscale"].isNull())
		complexJob_.transcodeOutput.audio.qscale = audioNode["Qscale"].asString();
	auto volumeNode = audioNode["Volume"];
	if(!volumeNode["Level"].isNull())
		complexJob_.transcodeOutput.audio.volume.level = volumeNode["Level"].asString();
	if(!volumeNode["Method"].isNull())
		complexJob_.transcodeOutput.audio.volume.method = volumeNode["Method"].asString();
	auto videoNode = transcodeOutputNode["Video"];
	if(!videoNode["Codec"].isNull())
		complexJob_.transcodeOutput.video.codec = videoNode["Codec"].asString();
	if(!videoNode["Profile"].isNull())
		complexJob_.transcodeOutput.video.profile = videoNode["Profile"].asString();
	if(!videoNode["Bitrate"].isNull())
		complexJob_.transcodeOutput.video.bitrate = videoNode["Bitrate"].asString();
	if(!videoNode["Crf"].isNull())
		complexJob_.transcodeOutput.video.crf = videoNode["Crf"].asString();
	if(!videoNode["Width"].isNull())
		complexJob_.transcodeOutput.video.width = videoNode["Width"].asString();
	if(!videoNode["Height"].isNull())
		complexJob_.transcodeOutput.video.height = videoNode["Height"].asString();
	if(!videoNode["Fps"].isNull())
		complexJob_.transcodeOutput.video.fps = videoNode["Fps"].asString();
	if(!videoNode["Gop"].isNull())
		complexJob_.transcodeOutput.video.gop = videoNode["Gop"].asString();
	if(!videoNode["Preset"].isNull())
		complexJob_.transcodeOutput.video.preset = videoNode["Preset"].asString();
	if(!videoNode["ScanMode"].isNull())
		complexJob_.transcodeOutput.video.scanMode = videoNode["ScanMode"].asString();
	if(!videoNode["Bufsize"].isNull())
		complexJob_.transcodeOutput.video.bufsize = videoNode["Bufsize"].asString();
	if(!videoNode["Maxrate"].isNull())
		complexJob_.transcodeOutput.video.maxrate = videoNode["Maxrate"].asString();
	if(!videoNode["PixFmt"].isNull())
		complexJob_.transcodeOutput.video.pixFmt = videoNode["PixFmt"].asString();
	if(!videoNode["Degrain"].isNull())
		complexJob_.transcodeOutput.video.degrain = videoNode["Degrain"].asString();
	if(!videoNode["Qscale"].isNull())
		complexJob_.transcodeOutput.video.qscale = videoNode["Qscale"].asString();
	if(!videoNode["Crop"].isNull())
		complexJob_.transcodeOutput.video.crop = videoNode["Crop"].asString();
	if(!videoNode["Pad"].isNull())
		complexJob_.transcodeOutput.video.pad = videoNode["Pad"].asString();
	if(!videoNode["MaxFps"].isNull())
		complexJob_.transcodeOutput.video.maxFps = videoNode["MaxFps"].asString();
	auto bitrateBndNode = videoNode["BitrateBnd"];
	if(!bitrateBndNode["Max"].isNull())
		complexJob_.transcodeOutput.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
	if(!bitrateBndNode["Min"].isNull())
		complexJob_.transcodeOutput.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
	auto containerNode = transcodeOutputNode["Container"];
	if(!containerNode["Format"].isNull())
		complexJob_.transcodeOutput.container.format = containerNode["Format"].asString();
	auto encryptionNode = transcodeOutputNode["Encryption"];
	if(!encryptionNode["Type"].isNull())
		complexJob_.transcodeOutput.encryption.type = encryptionNode["Type"].asString();
	if(!encryptionNode["Id"].isNull())
		complexJob_.transcodeOutput.encryption.id = encryptionNode["Id"].asString();
	if(!encryptionNode["Key"].isNull())
		complexJob_.transcodeOutput.encryption.key = encryptionNode["Key"].asString();
	if(!encryptionNode["KeyUri"].isNull())
		complexJob_.transcodeOutput.encryption.keyUri = encryptionNode["KeyUri"].asString();
	if(!encryptionNode["KeyType"].isNull())
		complexJob_.transcodeOutput.encryption.keyType = encryptionNode["KeyType"].asString();
	if(!encryptionNode["SkipCnt"].isNull())
		complexJob_.transcodeOutput.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
	auto mNSMessageResultNode = complexJobNode["MNSMessageResult"];
	if(!mNSMessageResultNode["MessageId"].isNull())
		complexJob_.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
	if(!mNSMessageResultNode["ErrorMessage"].isNull())
		complexJob_.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
	if(!mNSMessageResultNode["ErrorCode"].isNull())
		complexJob_.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();

}

SubmitComplexJobResult::ComplexJob SubmitComplexJobResult::getComplexJob()const
{
	return complexJob_;
}

