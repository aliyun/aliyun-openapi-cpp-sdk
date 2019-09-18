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

#include <alibabacloud/mts/model/QueryEditingJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryEditingJobListResult::QueryEditingJobListResult() :
	ServiceResult()
{}

QueryEditingJobListResult::QueryEditingJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEditingJobListResult::~QueryEditingJobListResult()
{}

void QueryEditingJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
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
		auto allEditingInputs = value["EditingInputs"]["EditingInput"];
		for (auto value : allEditingInputs)
		{
			Job::EditingInput editingInputsObject;
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
			jobListObject.editingInputs.push_back(editingInputsObject);
		}
		auto editingConfigNode = value["EditingConfig"];
		if(!editingConfigNode["TemplateId"].isNull())
			jobListObject.editingConfig.templateId = editingConfigNode["TemplateId"].asString();
		if(!editingConfigNode["UserData"].isNull())
			jobListObject.editingConfig.userData = editingConfigNode["UserData"].asString();
		if(!editingConfigNode["Rotate"].isNull())
			jobListObject.editingConfig.rotate = editingConfigNode["Rotate"].asString();
		if(!editingConfigNode["VideoStreamMap"].isNull())
			jobListObject.editingConfig.videoStreamMap = editingConfigNode["VideoStreamMap"].asString();
		if(!editingConfigNode["AudioStreamMap"].isNull())
			jobListObject.editingConfig.audioStreamMap = editingConfigNode["AudioStreamMap"].asString();
		if(!editingConfigNode["DeWatermark"].isNull())
			jobListObject.editingConfig.deWatermark = editingConfigNode["DeWatermark"].asString();
		if(!editingConfigNode["Priority"].isNull())
			jobListObject.editingConfig.priority = editingConfigNode["Priority"].asString();
		if(!editingConfigNode["WaterMarkConfigUrl"].isNull())
			jobListObject.editingConfig.waterMarkConfigUrl = editingConfigNode["WaterMarkConfigUrl"].asString();
		if(!editingConfigNode["MergeConfigUrl"].isNull())
			jobListObject.editingConfig.mergeConfigUrl = editingConfigNode["MergeConfigUrl"].asString();
		auto allWaterMarkList = value["WaterMarkList"]["WaterMark"];
		for (auto value : allWaterMarkList)
		{
			Job::EditingConfig::WaterMark waterMarkObject;
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
			auto inputFile1Node = value["InputFile"];
			if(!inputFile1Node["Bucket"].isNull())
				waterMarkObject.inputFile1.bucket = inputFile1Node["Bucket"].asString();
			if(!inputFile1Node["Location"].isNull())
				waterMarkObject.inputFile1.location = inputFile1Node["Location"].asString();
			if(!inputFile1Node["Object"].isNull())
				waterMarkObject.inputFile1.object = inputFile1Node["Object"].asString();
			jobListObject.editingConfig.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeList = value["MergeList"]["Merge"];
		for (auto value : allMergeList)
		{
			Job::EditingConfig::Merge mergeObject;
			if(!value["MergeURL"].isNull())
				mergeObject.mergeURL = value["MergeURL"].asString();
			if(!value["Start"].isNull())
				mergeObject.start = value["Start"].asString();
			if(!value["Duration"].isNull())
				mergeObject.duration = value["Duration"].asString();
			if(!value["RoleArn"].isNull())
				mergeObject.roleArn = value["RoleArn"].asString();
			jobListObject.editingConfig.mergeList.push_back(mergeObject);
		}
		auto digiWaterMarkNode = editingConfigNode["DigiWaterMark"];
		if(!digiWaterMarkNode["Type"].isNull())
			jobListObject.editingConfig.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
		if(!digiWaterMarkNode["Alpha"].isNull())
			jobListObject.editingConfig.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
		auto inputFile2Node = digiWaterMarkNode["InputFile"];
		if(!inputFile2Node["Bucket"].isNull())
			jobListObject.editingConfig.digiWaterMark.inputFile2.bucket = inputFile2Node["Bucket"].asString();
		if(!inputFile2Node["Location"].isNull())
			jobListObject.editingConfig.digiWaterMark.inputFile2.location = inputFile2Node["Location"].asString();
		if(!inputFile2Node["Object"].isNull())
			jobListObject.editingConfig.digiWaterMark.inputFile2.object = inputFile2Node["Object"].asString();
		auto outputFileNode = editingConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.editingConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.editingConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			jobListObject.editingConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["RoleArn"].isNull())
			jobListObject.editingConfig.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		auto m3U8NonStandardSupportNode = editingConfigNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["Md5Support"].isNull())
			jobListObject.editingConfig.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		if(!tSNode["SizeSupport"].isNull())
			jobListObject.editingConfig.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		auto propertiesNode = editingConfigNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobListObject.editingConfig.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobListObject.editingConfig.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobListObject.editingConfig.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobListObject.editingConfig.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobListObject.editingConfig.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobListObject.editingConfig.properties.fileSize = propertiesNode["FileSize"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobListObject.editingConfig.properties.fileFormat = propertiesNode["FileFormat"].asString();
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
		for (auto value : allVideoStreamList)
		{
			Job::EditingConfig::Properties::Streams::VideoStream videoStreamObject;
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
			jobListObject.editingConfig.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
		for (auto value : allAudioStreamList)
		{
			Job::EditingConfig::Properties::Streams::AudioStream audioStreamObject;
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
			jobListObject.editingConfig.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
		for (auto value : allSubtitleStreamList)
		{
			Job::EditingConfig::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!value["Index"].isNull())
				subtitleStreamObject.index = value["Index"].asString();
			if(!value["Lang"].isNull())
				subtitleStreamObject.lang = value["Lang"].asString();
			jobListObject.editingConfig.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["NumStreams"].isNull())
			jobListObject.editingConfig.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobListObject.editingConfig.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["FormatName"].isNull())
			jobListObject.editingConfig.properties.format.formatName = formatNode["FormatName"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobListObject.editingConfig.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["StartTime"].isNull())
			jobListObject.editingConfig.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["Duration"].isNull())
			jobListObject.editingConfig.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Size"].isNull())
			jobListObject.editingConfig.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobListObject.editingConfig.properties.format.bitrate = formatNode["Bitrate"].asString();
		auto clipNode = editingConfigNode["Clip"];
		auto timeSpanNode = clipNode["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobListObject.editingConfig.clip.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobListObject.editingConfig.clip.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto superResoNode = editingConfigNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobListObject.editingConfig.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto subtitleConfigNode = editingConfigNode["SubtitleConfig"];
		auto allSubtitleList = value["SubtitleList"]["Subtitle"];
		for (auto value : allSubtitleList)
		{
			Job::EditingConfig::SubtitleConfig::Subtitle subtitleObject;
			if(!value["Map"].isNull())
				subtitleObject.map = value["Map"].asString();
			jobListObject.editingConfig.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto allExtSubtitleList = value["ExtSubtitleList"]["ExtSubtitle"];
		for (auto value : allExtSubtitleList)
		{
			Job::EditingConfig::SubtitleConfig::ExtSubtitle extSubtitleObject;
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
			jobListObject.editingConfig.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto transConfigNode = editingConfigNode["TransConfig"];
		if(!transConfigNode["TransMode"].isNull())
			jobListObject.editingConfig.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobListObject.editingConfig.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobListObject.editingConfig.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobListObject.editingConfig.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobListObject.editingConfig.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobListObject.editingConfig.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobListObject.editingConfig.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobListObject.editingConfig.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		if(!transConfigNode["Duration"].isNull())
			jobListObject.editingConfig.transConfig.duration = transConfigNode["Duration"].asString();
		auto muxConfigNode = editingConfigNode["MuxConfig"];
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobListObject.editingConfig.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["Loop"].isNull())
			jobListObject.editingConfig.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["FinalDelay"].isNull())
			jobListObject.editingConfig.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobListObject.editingConfig.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobListObject.editingConfig.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		auto audioNode = editingConfigNode["Audio"];
		if(!audioNode["Codec"].isNull())
			jobListObject.editingConfig.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Profile"].isNull())
			jobListObject.editingConfig.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobListObject.editingConfig.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobListObject.editingConfig.audio.bitrate = audioNode["Bitrate"].asString();
		if(!audioNode["Channels"].isNull())
			jobListObject.editingConfig.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Qscale"].isNull())
			jobListObject.editingConfig.audio.qscale = audioNode["Qscale"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Level"].isNull())
			jobListObject.editingConfig.audio.volume.level = volumeNode["Level"].asString();
		if(!volumeNode["Method"].isNull())
			jobListObject.editingConfig.audio.volume.method = volumeNode["Method"].asString();
		auto videoNode = editingConfigNode["Video"];
		if(!videoNode["Codec"].isNull())
			jobListObject.editingConfig.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Profile"].isNull())
			jobListObject.editingConfig.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobListObject.editingConfig.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Crf"].isNull())
			jobListObject.editingConfig.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Width"].isNull())
			jobListObject.editingConfig.video.width = videoNode["Width"].asString();
		if(!videoNode["Height"].isNull())
			jobListObject.editingConfig.video.height = videoNode["Height"].asString();
		if(!videoNode["Fps"].isNull())
			jobListObject.editingConfig.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Gop"].isNull())
			jobListObject.editingConfig.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Preset"].isNull())
			jobListObject.editingConfig.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobListObject.editingConfig.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["Bufsize"].isNull())
			jobListObject.editingConfig.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobListObject.editingConfig.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobListObject.editingConfig.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Degrain"].isNull())
			jobListObject.editingConfig.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["Qscale"].isNull())
			jobListObject.editingConfig.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobListObject.editingConfig.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Pad"].isNull())
			jobListObject.editingConfig.video.pad = videoNode["Pad"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobListObject.editingConfig.video.maxFps = videoNode["MaxFps"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobListObject.editingConfig.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobListObject.editingConfig.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto containerNode = editingConfigNode["Container"];
		if(!containerNode["Format"].isNull())
			jobListObject.editingConfig.container.format = containerNode["Format"].asString();
		auto encryptionNode = editingConfigNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobListObject.editingConfig.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Id"].isNull())
			jobListObject.editingConfig.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["Key"].isNull())
			jobListObject.editingConfig.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobListObject.editingConfig.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobListObject.editingConfig.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobListObject.editingConfig.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
		auto editingNode = editingConfigNode["Editing"];
		auto allClipList = value["ClipList"]["Clip"];
		for (auto value : allClipList)
		{
			Job::EditingConfig::Editing::Clip3 clip3Object;
			if(!value["Id"].isNull())
				clip3Object.id = value["Id"].asString();
			if(!value["Type"].isNull())
				clip3Object.type = value["Type"].asString();
			if(!value["SourceType"].isNull())
				clip3Object.sourceType = value["SourceType"].asString();
			if(!value["SourceID"].isNull())
				clip3Object.sourceID = value["SourceID"].asString();
			if(!value["SourceStrmMap"].isNull())
				clip3Object.sourceStrmMap = value["SourceStrmMap"].asString();
			if(!value["In"].isNull())
				clip3Object.in = value["In"].asString();
			if(!value["Out"].isNull())
				clip3Object.out = value["Out"].asString();
			auto allEffects = value["Effects"]["Effect"];
			for (auto value : allEffects)
			{
				Job::EditingConfig::Editing::Clip3::Effect effectsObject;
				if(!value["Effect"].isNull())
					effectsObject.effect = value["Effect"].asString();
				if(!value["EffectConfig"].isNull())
					effectsObject.effectConfig = value["EffectConfig"].asString();
				clip3Object.effects.push_back(effectsObject);
			}
			jobListObject.editingConfig.editing.clipList.push_back(clip3Object);
		}
		auto timelineNode = editingNode["Timeline"];
		auto allTrackList = value["TrackList"]["Track"];
		for (auto value : allTrackList)
		{
			Job::EditingConfig::Editing::Timeline::Track trackObject;
			if(!value["Id"].isNull())
				trackObject.id = value["Id"].asString();
			if(!value["Type"].isNull())
				trackObject.type = value["Type"].asString();
			if(!value["Order"].isNull())
				trackObject.order = value["Order"].asString();
			auto allClips = value["Clips"]["Clip"];
			for (auto value : allClips)
			{
				Job::EditingConfig::Editing::Timeline::Track::Clip4 clipsObject;
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
			jobListObject.editingConfig.editing.timeline.trackList.push_back(trackObject);
		}
		auto timelineConfigNode = timelineNode["TimelineConfig"];
		auto timelineConfigVideoNode = timelineConfigNode["TimelineConfigVideo"];
		if(!timelineConfigVideoNode["Width"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.width = timelineConfigVideoNode["Width"].asString();
		if(!timelineConfigVideoNode["Height"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.height = timelineConfigVideoNode["Height"].asString();
		if(!timelineConfigVideoNode["BgColor"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.bgColor = timelineConfigVideoNode["BgColor"].asString();
		if(!timelineConfigVideoNode["Fps"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.fps = timelineConfigVideoNode["Fps"].asString();
		if(!timelineConfigVideoNode["RenderRatio"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.renderRatio = timelineConfigVideoNode["RenderRatio"].asString();
		if(!timelineConfigVideoNode["ReclosePrec"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.reclosePrec = timelineConfigVideoNode["ReclosePrec"].asString();
		if(!timelineConfigVideoNode["IsGpuData"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.isGpuData = timelineConfigVideoNode["IsGpuData"].asString();
		if(!timelineConfigVideoNode["IsOneTrackData"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.isOneTrackData = timelineConfigVideoNode["IsOneTrackData"].asString();
		auto timelineConfigAudioNode = timelineConfigNode["TimelineConfigAudio"];
		if(!timelineConfigAudioNode["Samplerate"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.samplerate = timelineConfigAudioNode["Samplerate"].asString();
		if(!timelineConfigAudioNode["ChannelLayout"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.channelLayout = timelineConfigAudioNode["ChannelLayout"].asString();
		if(!timelineConfigAudioNode["Channels"].isNull())
			jobListObject.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.channels = timelineConfigAudioNode["Channels"].asString();
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

std::vector<std::string> QueryEditingJobListResult::getNonExistJobIds()const
{
	return nonExistJobIds_;
}

std::vector<QueryEditingJobListResult::Job> QueryEditingJobListResult::getJobList()const
{
	return jobList_;
}

