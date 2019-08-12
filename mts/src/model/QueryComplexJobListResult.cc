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

#include <alibabacloud/mts/model/QueryComplexJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryComplexJobListResult::QueryComplexJobListResult() :
	ServiceResult()
{}

QueryComplexJobListResult::QueryComplexJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryComplexJobListResult::~QueryComplexJobListResult()
{}

void QueryComplexJobListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allJobList = value["JobList"]["Job"];
	for (auto value : allJobList)
	{
		Job jobListObject;
		if(!value["JobId"].isNull())
			jobListObject.jobId = value["JobId"].asString();
		if(!value["State"].isNull())
			jobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			jobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			jobListObject.message = value["Message"].asString();
		if(!value["Percent"].isNull())
			jobListObject.percent = std::stol(value["Percent"].asString());
		if(!value["PipelineId"].isNull())
			jobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["CreationTime"].isNull())
			jobListObject.creationTime = value["CreationTime"].asString();
		if(!value["FinishTime"].isNull())
			jobListObject.finishTime = value["FinishTime"].asString();
		auto allInputs = value["Inputs"]["InputsItem"];
		for (auto value : allInputs)
		{
			Job::InputsItem inputsObject;
			auto allEditingInputs = value["EditingInputs"]["EditingInput"];
			for (auto value : allEditingInputs)
			{
				Job::InputsItem::EditingInput editingInputsObject;
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
				inputsObject.editingInputs.push_back(editingInputsObject);
			}
			jobListObject.inputs.push_back(inputsObject);
		}
		auto allComplexEditingConfigs = value["ComplexEditingConfigs"]["ComplexEditingConfigsItem"];
		for (auto value : allComplexEditingConfigs)
		{
			Job::ComplexEditingConfigsItem complexEditingConfigsObject;
			auto editingNode = value["Editing"];
			auto allClipList = value["ClipList"]["Clip"];
			for (auto value : allClipList)
			{
				Job::ComplexEditingConfigsItem::Editing::Clip clipObject;
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
					Job::ComplexEditingConfigsItem::Editing::Clip::Effect effectsObject;
					if(!value["Effect"].isNull())
						effectsObject.effect = value["Effect"].asString();
					if(!value["EffectConfig"].isNull())
						effectsObject.effectConfig = value["EffectConfig"].asString();
					clipObject.effects.push_back(effectsObject);
				}
				complexEditingConfigsObject.editing.clipList.push_back(clipObject);
			}
			auto timelineNode = editingNode["Timeline"];
			auto allTrackList = value["TrackList"]["Track"];
			for (auto value : allTrackList)
			{
				Job::ComplexEditingConfigsItem::Editing::Timeline::Track trackObject;
				if(!value["Id"].isNull())
					trackObject.id = value["Id"].asString();
				if(!value["Type"].isNull())
					trackObject.type = value["Type"].asString();
				if(!value["Order"].isNull())
					trackObject.order = value["Order"].asString();
				auto allClips = value["Clips"]["Clip"];
				for (auto value : allClips)
				{
					Job::ComplexEditingConfigsItem::Editing::Timeline::Track::Clip1 clipsObject;
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
				complexEditingConfigsObject.editing.timeline.trackList.push_back(trackObject);
			}
			auto timelineConfigNode = timelineNode["TimelineConfig"];
			auto timelineConfigVideoNode = timelineConfigNode["TimelineConfigVideo"];
			if(!timelineConfigVideoNode["Width"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.width = timelineConfigVideoNode["Width"].asString();
			if(!timelineConfigVideoNode["Height"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.height = timelineConfigVideoNode["Height"].asString();
			if(!timelineConfigVideoNode["BgColor"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.bgColor = timelineConfigVideoNode["BgColor"].asString();
			if(!timelineConfigVideoNode["Fps"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.fps = timelineConfigVideoNode["Fps"].asString();
			if(!timelineConfigVideoNode["RenderRatio"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.renderRatio = timelineConfigVideoNode["RenderRatio"].asString();
			if(!timelineConfigVideoNode["ReclosePrec"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.reclosePrec = timelineConfigVideoNode["ReclosePrec"].asString();
			if(!timelineConfigVideoNode["IsGpuData"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.isGpuData = timelineConfigVideoNode["IsGpuData"].asString();
			if(!timelineConfigVideoNode["IsOneTrackData"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.isOneTrackData = timelineConfigVideoNode["IsOneTrackData"].asString();
			auto timelineConfigAudioNode = timelineConfigNode["TimelineConfigAudio"];
			if(!timelineConfigAudioNode["Samplerate"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigAudio.samplerate = timelineConfigAudioNode["Samplerate"].asString();
			if(!timelineConfigAudioNode["ChannelLayout"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigAudio.channelLayout = timelineConfigAudioNode["ChannelLayout"].asString();
			if(!timelineConfigAudioNode["Channels"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigAudio.channels = timelineConfigAudioNode["Channels"].asString();
			jobListObject.complexEditingConfigs.push_back(complexEditingConfigsObject);
		}
		auto transcodeOutputNode = value["transcodeOutput"];
		if(!transcodeOutputNode["TemplateId"].isNull())
			jobListObject.transcodeOutput.templateId = transcodeOutputNode["TemplateId"].asString();
		if(!transcodeOutputNode["UserData"].isNull())
			jobListObject.transcodeOutput.userData = transcodeOutputNode["UserData"].asString();
		if(!transcodeOutputNode["Rotate"].isNull())
			jobListObject.transcodeOutput.rotate = transcodeOutputNode["Rotate"].asString();
		if(!transcodeOutputNode["VideoStreamMap"].isNull())
			jobListObject.transcodeOutput.videoStreamMap = transcodeOutputNode["VideoStreamMap"].asString();
		if(!transcodeOutputNode["AudioStreamMap"].isNull())
			jobListObject.transcodeOutput.audioStreamMap = transcodeOutputNode["AudioStreamMap"].asString();
		if(!transcodeOutputNode["DeWatermark"].isNull())
			jobListObject.transcodeOutput.deWatermark = transcodeOutputNode["DeWatermark"].asString();
		if(!transcodeOutputNode["Priority"].isNull())
			jobListObject.transcodeOutput.priority = transcodeOutputNode["Priority"].asString();
		if(!transcodeOutputNode["WaterMarkConfigUrl"].isNull())
			jobListObject.transcodeOutput.waterMarkConfigUrl = transcodeOutputNode["WaterMarkConfigUrl"].asString();
		if(!transcodeOutputNode["MergeConfigUrl"].isNull())
			jobListObject.transcodeOutput.mergeConfigUrl = transcodeOutputNode["MergeConfigUrl"].asString();
		auto allWaterMarkList = value["WaterMarkList"]["WaterMark"];
		for (auto value : allWaterMarkList)
		{
			Job::TranscodeOutput::WaterMark waterMarkObject;
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
			jobListObject.transcodeOutput.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeList = value["MergeList"]["Merge"];
		for (auto value : allMergeList)
		{
			Job::TranscodeOutput::Merge mergeObject;
			if(!value["MergeURL"].isNull())
				mergeObject.mergeURL = value["MergeURL"].asString();
			if(!value["Start"].isNull())
				mergeObject.start = value["Start"].asString();
			if(!value["Duration"].isNull())
				mergeObject.duration = value["Duration"].asString();
			if(!value["RoleArn"].isNull())
				mergeObject.roleArn = value["RoleArn"].asString();
			jobListObject.transcodeOutput.mergeList.push_back(mergeObject);
		}
		auto digiWaterMarkNode = transcodeOutputNode["DigiWaterMark"];
		if(!digiWaterMarkNode["Type"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
		if(!digiWaterMarkNode["Alpha"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
		auto inputFile3Node = digiWaterMarkNode["InputFile"];
		if(!inputFile3Node["Bucket"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.inputFile3.bucket = inputFile3Node["Bucket"].asString();
		if(!inputFile3Node["Location"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.inputFile3.location = inputFile3Node["Location"].asString();
		if(!inputFile3Node["Object"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.inputFile3.object = inputFile3Node["Object"].asString();
		auto outputFileNode = transcodeOutputNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.transcodeOutput.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.transcodeOutput.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			jobListObject.transcodeOutput.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["RoleArn"].isNull())
			jobListObject.transcodeOutput.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		auto m3U8NonStandardSupportNode = transcodeOutputNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["Md5Support"].isNull())
			jobListObject.transcodeOutput.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		if(!tSNode["SizeSupport"].isNull())
			jobListObject.transcodeOutput.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		auto propertiesNode = transcodeOutputNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobListObject.transcodeOutput.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobListObject.transcodeOutput.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobListObject.transcodeOutput.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobListObject.transcodeOutput.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobListObject.transcodeOutput.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobListObject.transcodeOutput.properties.fileSize = propertiesNode["FileSize"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobListObject.transcodeOutput.properties.fileFormat = propertiesNode["FileFormat"].asString();
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
		for (auto value : allVideoStreamList)
		{
			Job::TranscodeOutput::Properties::Streams::VideoStream videoStreamObject;
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
			jobListObject.transcodeOutput.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
		for (auto value : allAudioStreamList)
		{
			Job::TranscodeOutput::Properties::Streams::AudioStream audioStreamObject;
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
			jobListObject.transcodeOutput.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
		for (auto value : allSubtitleStreamList)
		{
			Job::TranscodeOutput::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!value["Index"].isNull())
				subtitleStreamObject.index = value["Index"].asString();
			if(!value["Lang"].isNull())
				subtitleStreamObject.lang = value["Lang"].asString();
			jobListObject.transcodeOutput.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["NumStreams"].isNull())
			jobListObject.transcodeOutput.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobListObject.transcodeOutput.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["FormatName"].isNull())
			jobListObject.transcodeOutput.properties.format.formatName = formatNode["FormatName"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobListObject.transcodeOutput.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["StartTime"].isNull())
			jobListObject.transcodeOutput.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["Duration"].isNull())
			jobListObject.transcodeOutput.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Size"].isNull())
			jobListObject.transcodeOutput.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobListObject.transcodeOutput.properties.format.bitrate = formatNode["Bitrate"].asString();
		auto clip4Node = transcodeOutputNode["Clip"];
		auto timeSpanNode = clip4Node["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobListObject.transcodeOutput.clip4.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobListObject.transcodeOutput.clip4.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto superResoNode = transcodeOutputNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobListObject.transcodeOutput.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto subtitleConfigNode = transcodeOutputNode["SubtitleConfig"];
		auto allSubtitleList = value["SubtitleList"]["Subtitle"];
		for (auto value : allSubtitleList)
		{
			Job::TranscodeOutput::SubtitleConfig::Subtitle subtitleObject;
			if(!value["Map"].isNull())
				subtitleObject.map = value["Map"].asString();
			jobListObject.transcodeOutput.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto allExtSubtitleList = value["ExtSubtitleList"]["ExtSubtitle"];
		for (auto value : allExtSubtitleList)
		{
			Job::TranscodeOutput::SubtitleConfig::ExtSubtitle extSubtitleObject;
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
			jobListObject.transcodeOutput.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto transConfigNode = transcodeOutputNode["TransConfig"];
		if(!transConfigNode["TransMode"].isNull())
			jobListObject.transcodeOutput.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobListObject.transcodeOutput.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		if(!transConfigNode["Duration"].isNull())
			jobListObject.transcodeOutput.transConfig.duration = transConfigNode["Duration"].asString();
		auto muxConfigNode = transcodeOutputNode["MuxConfig"];
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobListObject.transcodeOutput.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["Loop"].isNull())
			jobListObject.transcodeOutput.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["FinalDelay"].isNull())
			jobListObject.transcodeOutput.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobListObject.transcodeOutput.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobListObject.transcodeOutput.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		auto audioNode = transcodeOutputNode["Audio"];
		if(!audioNode["Codec"].isNull())
			jobListObject.transcodeOutput.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Profile"].isNull())
			jobListObject.transcodeOutput.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobListObject.transcodeOutput.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobListObject.transcodeOutput.audio.bitrate = audioNode["Bitrate"].asString();
		if(!audioNode["Channels"].isNull())
			jobListObject.transcodeOutput.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Qscale"].isNull())
			jobListObject.transcodeOutput.audio.qscale = audioNode["Qscale"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Level"].isNull())
			jobListObject.transcodeOutput.audio.volume.level = volumeNode["Level"].asString();
		if(!volumeNode["Method"].isNull())
			jobListObject.transcodeOutput.audio.volume.method = volumeNode["Method"].asString();
		auto videoNode = transcodeOutputNode["Video"];
		if(!videoNode["Codec"].isNull())
			jobListObject.transcodeOutput.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Profile"].isNull())
			jobListObject.transcodeOutput.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobListObject.transcodeOutput.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Crf"].isNull())
			jobListObject.transcodeOutput.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Width"].isNull())
			jobListObject.transcodeOutput.video.width = videoNode["Width"].asString();
		if(!videoNode["Height"].isNull())
			jobListObject.transcodeOutput.video.height = videoNode["Height"].asString();
		if(!videoNode["Fps"].isNull())
			jobListObject.transcodeOutput.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Gop"].isNull())
			jobListObject.transcodeOutput.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Preset"].isNull())
			jobListObject.transcodeOutput.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobListObject.transcodeOutput.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["Bufsize"].isNull())
			jobListObject.transcodeOutput.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobListObject.transcodeOutput.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobListObject.transcodeOutput.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Degrain"].isNull())
			jobListObject.transcodeOutput.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["Qscale"].isNull())
			jobListObject.transcodeOutput.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobListObject.transcodeOutput.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Pad"].isNull())
			jobListObject.transcodeOutput.video.pad = videoNode["Pad"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobListObject.transcodeOutput.video.maxFps = videoNode["MaxFps"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobListObject.transcodeOutput.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobListObject.transcodeOutput.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto containerNode = transcodeOutputNode["Container"];
		if(!containerNode["Format"].isNull())
			jobListObject.transcodeOutput.container.format = containerNode["Format"].asString();
		auto encryptionNode = transcodeOutputNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobListObject.transcodeOutput.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Id"].isNull())
			jobListObject.transcodeOutput.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["Key"].isNull())
			jobListObject.transcodeOutput.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobListObject.transcodeOutput.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobListObject.transcodeOutput.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobListObject.transcodeOutput.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
		auto mNSMessageResultNode = value["MNSMessageResult"];
		if(!mNSMessageResultNode["MessageId"].isNull())
			jobListObject.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
		if(!mNSMessageResultNode["ErrorMessage"].isNull())
			jobListObject.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
		if(!mNSMessageResultNode["ErrorCode"].isNull())
			jobListObject.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
		jobList_.push_back(jobListObject);
	}
	auto allNonExistJobIds = value["NonExistJobIds"]["String"];
	for (const auto &item : allNonExistJobIds)
		nonExistJobIds_.push_back(item.asString());

}

std::vector<std::string> QueryComplexJobListResult::getNonExistJobIds()const
{
	return nonExistJobIds_;
}

std::vector<QueryComplexJobListResult::Job> QueryComplexJobListResult::getJobList()const
{
	return jobList_;
}

