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

#include <alibabacloud/mts/model/ListJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListJobResult::ListJobResult() :
	ServiceResult()
{}

ListJobResult::ListJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobResult::~ListJobResult()
{}

void ListJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["Job"];
	for (auto valueJobListJob : allJobListNode)
	{
		Job jobListObject;
		if(!valueJobListJob["CreationTime"].isNull())
			jobListObject.creationTime = valueJobListJob["CreationTime"].asString();
		if(!valueJobListJob["Percent"].isNull())
			jobListObject.percent = std::stol(valueJobListJob["Percent"].asString());
		if(!valueJobListJob["FinishTime"].isNull())
			jobListObject.finishTime = valueJobListJob["FinishTime"].asString();
		if(!valueJobListJob["State"].isNull())
			jobListObject.state = valueJobListJob["State"].asString();
		if(!valueJobListJob["JobId"].isNull())
			jobListObject.jobId = valueJobListJob["JobId"].asString();
		if(!valueJobListJob["Code"].isNull())
			jobListObject.code = valueJobListJob["Code"].asString();
		if(!valueJobListJob["Message"].isNull())
			jobListObject.message = valueJobListJob["Message"].asString();
		if(!valueJobListJob["PipelineId"].isNull())
			jobListObject.pipelineId = valueJobListJob["PipelineId"].asString();
		auto outputNode = value["Output"];
		if(!outputNode["WaterMarkConfigUrl"].isNull())
			jobListObject.output.waterMarkConfigUrl = outputNode["WaterMarkConfigUrl"].asString();
		if(!outputNode["DeWatermark"].isNull())
			jobListObject.output.deWatermark = outputNode["DeWatermark"].asString();
		if(!outputNode["Priority"].isNull())
			jobListObject.output.priority = outputNode["Priority"].asString();
		if(!outputNode["AudioStreamMap"].isNull())
			jobListObject.output.audioStreamMap = outputNode["AudioStreamMap"].asString();
		if(!outputNode["UserData"].isNull())
			jobListObject.output.userData = outputNode["UserData"].asString();
		if(!outputNode["VideoStreamMap"].isNull())
			jobListObject.output.videoStreamMap = outputNode["VideoStreamMap"].asString();
		if(!outputNode["Rotate"].isNull())
			jobListObject.output.rotate = outputNode["Rotate"].asString();
		if(!outputNode["MergeConfigUrl"].isNull())
			jobListObject.output.mergeConfigUrl = outputNode["MergeConfigUrl"].asString();
		if(!outputNode["TemplateId"].isNull())
			jobListObject.output.templateId = outputNode["TemplateId"].asString();
		auto allWaterMarkListNode = outputNode["WaterMarkList"]["WaterMark"];
		for (auto outputNodeWaterMarkListWaterMark : allWaterMarkListNode)
		{
			Job::Output::WaterMark waterMarkObject;
			if(!outputNodeWaterMarkListWaterMark["Type"].isNull())
				waterMarkObject.type = outputNodeWaterMarkListWaterMark["Type"].asString();
			if(!outputNodeWaterMarkListWaterMark["ReferPos"].isNull())
				waterMarkObject.referPos = outputNodeWaterMarkListWaterMark["ReferPos"].asString();
			if(!outputNodeWaterMarkListWaterMark["Dx"].isNull())
				waterMarkObject.dx = outputNodeWaterMarkListWaterMark["Dx"].asString();
			if(!outputNodeWaterMarkListWaterMark["Width"].isNull())
				waterMarkObject.width = outputNodeWaterMarkListWaterMark["Width"].asString();
			if(!outputNodeWaterMarkListWaterMark["Height"].isNull())
				waterMarkObject.height = outputNodeWaterMarkListWaterMark["Height"].asString();
			if(!outputNodeWaterMarkListWaterMark["WaterMarkTemplateId"].isNull())
				waterMarkObject.waterMarkTemplateId = outputNodeWaterMarkListWaterMark["WaterMarkTemplateId"].asString();
			if(!outputNodeWaterMarkListWaterMark["Dy"].isNull())
				waterMarkObject.dy = outputNodeWaterMarkListWaterMark["Dy"].asString();
			auto inputFileNode = value["InputFile"];
			if(!inputFileNode["Object"].isNull())
				waterMarkObject.inputFile.object = inputFileNode["Object"].asString();
			if(!inputFileNode["Location"].isNull())
				waterMarkObject.inputFile.location = inputFileNode["Location"].asString();
			if(!inputFileNode["Bucket"].isNull())
				waterMarkObject.inputFile.bucket = inputFileNode["Bucket"].asString();
			jobListObject.output.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeListNode = outputNode["MergeList"]["Merge"];
		for (auto outputNodeMergeListMerge : allMergeListNode)
		{
			Job::Output::Merge mergeObject;
			if(!outputNodeMergeListMerge["Start"].isNull())
				mergeObject.start = outputNodeMergeListMerge["Start"].asString();
			if(!outputNodeMergeListMerge["RoleArn"].isNull())
				mergeObject.roleArn = outputNodeMergeListMerge["RoleArn"].asString();
			if(!outputNodeMergeListMerge["MergeURL"].isNull())
				mergeObject.mergeURL = outputNodeMergeListMerge["MergeURL"].asString();
			if(!outputNodeMergeListMerge["Duration"].isNull())
				mergeObject.duration = outputNodeMergeListMerge["Duration"].asString();
			jobListObject.output.mergeList.push_back(mergeObject);
		}
		auto allOutSubtitleListNode = outputNode["OutSubtitleList"]["OutSubtitle"];
		for (auto outputNodeOutSubtitleListOutSubtitle : allOutSubtitleListNode)
		{
			Job::Output::OutSubtitle outSubtitleObject;
			if(!outputNodeOutSubtitleListOutSubtitle["Map"].isNull())
				outSubtitleObject.map = outputNodeOutSubtitleListOutSubtitle["Map"].asString();
			if(!outputNodeOutSubtitleListOutSubtitle["Success"].isNull())
				outSubtitleObject.success = outputNodeOutSubtitleListOutSubtitle["Success"].asString() == "true";
			if(!outputNodeOutSubtitleListOutSubtitle["Message"].isNull())
				outSubtitleObject.message = outputNodeOutSubtitleListOutSubtitle["Message"].asString();
			auto outSubtitleFileNode = value["OutSubtitleFile"];
			if(!outSubtitleFileNode["RoleArn"].isNull())
				outSubtitleObject.outSubtitleFile.roleArn = outSubtitleFileNode["RoleArn"].asString();
			if(!outSubtitleFileNode["Object"].isNull())
				outSubtitleObject.outSubtitleFile.object = outSubtitleFileNode["Object"].asString();
			if(!outSubtitleFileNode["Location"].isNull())
				outSubtitleObject.outSubtitleFile.location = outSubtitleFileNode["Location"].asString();
			if(!outSubtitleFileNode["Bucket"].isNull())
				outSubtitleObject.outSubtitleFile.bucket = outSubtitleFileNode["Bucket"].asString();
			jobListObject.output.outSubtitleList.push_back(outSubtitleObject);
		}
		auto allOpeningListNode = outputNode["OpeningList"]["Opening"];
		for (auto outputNodeOpeningListOpening : allOpeningListNode)
		{
			Job::Output::Opening openingObject;
			if(!outputNodeOpeningListOpening["openUrl"].isNull())
				openingObject.openUrl = outputNodeOpeningListOpening["openUrl"].asString();
			if(!outputNodeOpeningListOpening["Start"].isNull())
				openingObject.start = outputNodeOpeningListOpening["Start"].asString();
			if(!outputNodeOpeningListOpening["Width"].isNull())
				openingObject.width = outputNodeOpeningListOpening["Width"].asString();
			if(!outputNodeOpeningListOpening["Height"].isNull())
				openingObject.height = outputNodeOpeningListOpening["Height"].asString();
			jobListObject.output.openingList.push_back(openingObject);
		}
		auto allTailSlateListNode = outputNode["TailSlateList"]["TailSlate"];
		for (auto outputNodeTailSlateListTailSlate : allTailSlateListNode)
		{
			Job::Output::TailSlate tailSlateObject;
			if(!outputNodeTailSlateListTailSlate["Start"].isNull())
				tailSlateObject.start = outputNodeTailSlateListTailSlate["Start"].asString();
			if(!outputNodeTailSlateListTailSlate["BgColor"].isNull())
				tailSlateObject.bgColor = outputNodeTailSlateListTailSlate["BgColor"].asString();
			if(!outputNodeTailSlateListTailSlate["IsMergeAudio"].isNull())
				tailSlateObject.isMergeAudio = outputNodeTailSlateListTailSlate["IsMergeAudio"].asString() == "true";
			if(!outputNodeTailSlateListTailSlate["Width"].isNull())
				tailSlateObject.width = outputNodeTailSlateListTailSlate["Width"].asString();
			if(!outputNodeTailSlateListTailSlate["Height"].isNull())
				tailSlateObject.height = outputNodeTailSlateListTailSlate["Height"].asString();
			if(!outputNodeTailSlateListTailSlate["BlendDuration"].isNull())
				tailSlateObject.blendDuration = outputNodeTailSlateListTailSlate["BlendDuration"].asString();
			if(!outputNodeTailSlateListTailSlate["TailUrl"].isNull())
				tailSlateObject.tailUrl = outputNodeTailSlateListTailSlate["TailUrl"].asString();
			jobListObject.output.tailSlateList.push_back(tailSlateObject);
		}
		auto videoNode = outputNode["Video"];
		if(!videoNode["Bufsize"].isNull())
			jobListObject.output.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Degrain"].isNull())
			jobListObject.output.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobListObject.output.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Pad"].isNull())
			jobListObject.output.video.pad = videoNode["Pad"].asString();
		if(!videoNode["Codec"].isNull())
			jobListObject.output.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Height"].isNull())
			jobListObject.output.video.height = videoNode["Height"].asString();
		if(!videoNode["Qscale"].isNull())
			jobListObject.output.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobListObject.output.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobListObject.output.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobListObject.output.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobListObject.output.video.maxFps = videoNode["MaxFps"].asString();
		if(!videoNode["Profile"].isNull())
			jobListObject.output.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Crf"].isNull())
			jobListObject.output.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Gop"].isNull())
			jobListObject.output.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Width"].isNull())
			jobListObject.output.video.width = videoNode["Width"].asString();
		if(!videoNode["Fps"].isNull())
			jobListObject.output.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Preset"].isNull())
			jobListObject.output.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobListObject.output.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["ResoPriority"].isNull())
			jobListObject.output.video.resoPriority = videoNode["ResoPriority"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobListObject.output.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobListObject.output.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto transConfigNode = outputNode["TransConfig"];
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobListObject.output.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["TransMode"].isNull())
			jobListObject.output.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobListObject.output.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobListObject.output.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobListObject.output.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobListObject.output.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobListObject.output.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobListObject.output.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		auto encryptionNode = outputNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobListObject.output.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Key"].isNull())
			jobListObject.output.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobListObject.output.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["Id"].isNull())
			jobListObject.output.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobListObject.output.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobListObject.output.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
		auto m3U8NonStandardSupportNode = outputNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["SizeSupport"].isNull())
			jobListObject.output.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		if(!tSNode["Md5Support"].isNull())
			jobListObject.output.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		auto audioNode = outputNode["Audio"];
		if(!audioNode["Profile"].isNull())
			jobListObject.output.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Codec"].isNull())
			jobListObject.output.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobListObject.output.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Qscale"].isNull())
			jobListObject.output.audio.qscale = audioNode["Qscale"].asString();
		if(!audioNode["Channels"].isNull())
			jobListObject.output.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobListObject.output.audio.bitrate = audioNode["Bitrate"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Method"].isNull())
			jobListObject.output.audio.volume.method = volumeNode["Method"].asString();
		if(!volumeNode["Level"].isNull())
			jobListObject.output.audio.volume.level = volumeNode["Level"].asString();
		auto superResoNode = outputNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobListObject.output.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto outputFileNode = outputNode["OutputFile"];
		if(!outputFileNode["RoleArn"].isNull())
			jobListObject.output.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		if(!outputFileNode["Object"].isNull())
			jobListObject.output.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.output.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.output.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto containerNode = outputNode["Container"];
		if(!containerNode["Format"].isNull())
			jobListObject.output.container.format = containerNode["Format"].asString();
		auto clipNode = outputNode["Clip"];
		auto timeSpanNode = clipNode["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobListObject.output.clip.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobListObject.output.clip.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto muxConfigNode = outputNode["MuxConfig"];
		auto webpNode = muxConfigNode["Webp"];
		if(!webpNode["Loop"].isNull())
			jobListObject.output.muxConfig.webp.loop = webpNode["Loop"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["FinalDelay"].isNull())
			jobListObject.output.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobListObject.output.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		if(!gifNode["Loop"].isNull())
			jobListObject.output.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobListObject.output.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobListObject.output.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto subtitleConfigNode = outputNode["SubtitleConfig"];
		auto allExtSubtitleListNode = subtitleConfigNode["ExtSubtitleList"]["ExtSubtitle"];
		for (auto subtitleConfigNodeExtSubtitleListExtSubtitle : allExtSubtitleListNode)
		{
			Job::Output::SubtitleConfig::ExtSubtitle extSubtitleObject;
			if(!subtitleConfigNodeExtSubtitleListExtSubtitle["CharEnc"].isNull())
				extSubtitleObject.charEnc = subtitleConfigNodeExtSubtitleListExtSubtitle["CharEnc"].asString();
			if(!subtitleConfigNodeExtSubtitleListExtSubtitle["FontName"].isNull())
				extSubtitleObject.fontName = subtitleConfigNodeExtSubtitleListExtSubtitle["FontName"].asString();
			auto input1Node = value["Input"];
			if(!input1Node["Object"].isNull())
				extSubtitleObject.input1.object = input1Node["Object"].asString();
			if(!input1Node["Location"].isNull())
				extSubtitleObject.input1.location = input1Node["Location"].asString();
			if(!input1Node["Bucket"].isNull())
				extSubtitleObject.input1.bucket = input1Node["Bucket"].asString();
			jobListObject.output.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto allSubtitleListNode = subtitleConfigNode["SubtitleList"]["Subtitle"];
		for (auto subtitleConfigNodeSubtitleListSubtitle : allSubtitleListNode)
		{
			Job::Output::SubtitleConfig::Subtitle subtitleObject;
			if(!subtitleConfigNodeSubtitleListSubtitle["Map"].isNull())
				subtitleObject.map = subtitleConfigNodeSubtitleListSubtitle["Map"].asString();
			jobListObject.output.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto propertiesNode = outputNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobListObject.output.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobListObject.output.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobListObject.output.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobListObject.output.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobListObject.output.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobListObject.output.properties.fileFormat = propertiesNode["FileFormat"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobListObject.output.properties.fileSize = propertiesNode["FileSize"].asString();
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
		for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
		{
			Job::Output::Properties::Streams::VideoStream videoStreamObject;
			if(!streamsNodeVideoStreamListVideoStream["Index"].isNull())
				videoStreamObject.index = streamsNodeVideoStreamListVideoStream["Index"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Timebase"].isNull())
				videoStreamObject.timebase = streamsNodeVideoStreamListVideoStream["Timebase"].asString();
			if(!streamsNodeVideoStreamListVideoStream["AvgFPS"].isNull())
				videoStreamObject.avgFPS = streamsNodeVideoStreamListVideoStream["AvgFPS"].asString();
			if(!streamsNodeVideoStreamListVideoStream["PixFmt"].isNull())
				videoStreamObject.pixFmt = streamsNodeVideoStreamListVideoStream["PixFmt"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Sar"].isNull())
				videoStreamObject.sar = streamsNodeVideoStreamListVideoStream["Sar"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Lang"].isNull())
				videoStreamObject.lang = streamsNodeVideoStreamListVideoStream["Lang"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecLongName"].isNull())
				videoStreamObject.codecLongName = streamsNodeVideoStreamListVideoStream["CodecLongName"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Height"].isNull())
				videoStreamObject.height = streamsNodeVideoStreamListVideoStream["Height"].asString();
			if(!streamsNodeVideoStreamListVideoStream["NumFrames"].isNull())
				videoStreamObject.numFrames = streamsNodeVideoStreamListVideoStream["NumFrames"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Bitrate"].isNull())
				videoStreamObject.bitrate = streamsNodeVideoStreamListVideoStream["Bitrate"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTagString"].isNull())
				videoStreamObject.codecTagString = streamsNodeVideoStreamListVideoStream["CodecTagString"].asString();
			if(!streamsNodeVideoStreamListVideoStream["HasBFrames"].isNull())
				videoStreamObject.hasBFrames = streamsNodeVideoStreamListVideoStream["HasBFrames"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Profile"].isNull())
				videoStreamObject.profile = streamsNodeVideoStreamListVideoStream["Profile"].asString();
			if(!streamsNodeVideoStreamListVideoStream["StartTime"].isNull())
				videoStreamObject.startTime = streamsNodeVideoStreamListVideoStream["StartTime"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Dar"].isNull())
				videoStreamObject.dar = streamsNodeVideoStreamListVideoStream["Dar"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecName"].isNull())
				videoStreamObject.codecName = streamsNodeVideoStreamListVideoStream["CodecName"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Width"].isNull())
				videoStreamObject.width = streamsNodeVideoStreamListVideoStream["Width"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Duration"].isNull())
				videoStreamObject.duration = streamsNodeVideoStreamListVideoStream["Duration"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Fps"].isNull())
				videoStreamObject.fps = streamsNodeVideoStreamListVideoStream["Fps"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTag"].isNull())
				videoStreamObject.codecTag = streamsNodeVideoStreamListVideoStream["CodecTag"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTimeBase"].isNull())
				videoStreamObject.codecTimeBase = streamsNodeVideoStreamListVideoStream["CodecTimeBase"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Level"].isNull())
				videoStreamObject.level = streamsNodeVideoStreamListVideoStream["Level"].asString();
			auto networkCostNode = value["NetworkCost"];
			if(!networkCostNode["PreloadTime"].isNull())
				videoStreamObject.networkCost.preloadTime = networkCostNode["PreloadTime"].asString();
			if(!networkCostNode["AvgBitrate"].isNull())
				videoStreamObject.networkCost.avgBitrate = networkCostNode["AvgBitrate"].asString();
			if(!networkCostNode["CostBandwidth"].isNull())
				videoStreamObject.networkCost.costBandwidth = networkCostNode["CostBandwidth"].asString();
			jobListObject.output.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
		for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
		{
			Job::Output::Properties::Streams::AudioStream audioStreamObject;
			if(!streamsNodeAudioStreamListAudioStream["Timebase"].isNull())
				audioStreamObject.timebase = streamsNodeAudioStreamListAudioStream["Timebase"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Index"].isNull())
				audioStreamObject.index = streamsNodeAudioStreamListAudioStream["Index"].asString();
			if(!streamsNodeAudioStreamListAudioStream["SampleFmt"].isNull())
				audioStreamObject.sampleFmt = streamsNodeAudioStreamListAudioStream["SampleFmt"].asString();
			if(!streamsNodeAudioStreamListAudioStream["ChannelLayout"].isNull())
				audioStreamObject.channelLayout = streamsNodeAudioStreamListAudioStream["ChannelLayout"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Lang"].isNull())
				audioStreamObject.lang = streamsNodeAudioStreamListAudioStream["Lang"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Samplerate"].isNull())
				audioStreamObject.samplerate = streamsNodeAudioStreamListAudioStream["Samplerate"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecLongName"].isNull())
				audioStreamObject.codecLongName = streamsNodeAudioStreamListAudioStream["CodecLongName"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Channels"].isNull())
				audioStreamObject.channels = streamsNodeAudioStreamListAudioStream["Channels"].asString();
			if(!streamsNodeAudioStreamListAudioStream["NumFrames"].isNull())
				audioStreamObject.numFrames = streamsNodeAudioStreamListAudioStream["NumFrames"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Bitrate"].isNull())
				audioStreamObject.bitrate = streamsNodeAudioStreamListAudioStream["Bitrate"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTagString"].isNull())
				audioStreamObject.codecTagString = streamsNodeAudioStreamListAudioStream["CodecTagString"].asString();
			if(!streamsNodeAudioStreamListAudioStream["StartTime"].isNull())
				audioStreamObject.startTime = streamsNodeAudioStreamListAudioStream["StartTime"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecName"].isNull())
				audioStreamObject.codecName = streamsNodeAudioStreamListAudioStream["CodecName"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Duration"].isNull())
				audioStreamObject.duration = streamsNodeAudioStreamListAudioStream["Duration"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTag"].isNull())
				audioStreamObject.codecTag = streamsNodeAudioStreamListAudioStream["CodecTag"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTimeBase"].isNull())
				audioStreamObject.codecTimeBase = streamsNodeAudioStreamListAudioStream["CodecTimeBase"].asString();
			jobListObject.output.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
		for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
		{
			Job::Output::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!streamsNodeSubtitleStreamListSubtitleStream["Index"].isNull())
				subtitleStreamObject.index = streamsNodeSubtitleStreamListSubtitleStream["Index"].asString();
			if(!streamsNodeSubtitleStreamListSubtitleStream["Lang"].isNull())
				subtitleStreamObject.lang = streamsNodeSubtitleStreamListSubtitleStream["Lang"].asString();
			jobListObject.output.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["StartTime"].isNull())
			jobListObject.output.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobListObject.output.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["Size"].isNull())
			jobListObject.output.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["NumStreams"].isNull())
			jobListObject.output.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobListObject.output.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["Duration"].isNull())
			jobListObject.output.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobListObject.output.properties.format.bitrate = formatNode["Bitrate"].asString();
		if(!formatNode["FormatName"].isNull())
			jobListObject.output.properties.format.formatName = formatNode["FormatName"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			jobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			jobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			jobListObject.input.bucket = inputNode["Bucket"].asString();
		auto mNSMessageResultNode = value["MNSMessageResult"];
		if(!mNSMessageResultNode["MessageId"].isNull())
			jobListObject.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
		if(!mNSMessageResultNode["ErrorMessage"].isNull())
			jobListObject.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
		if(!mNSMessageResultNode["ErrorCode"].isNull())
			jobListObject.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
		jobList_.push_back(jobListObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::string ListJobResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListJobResult::Job> ListJobResult::getJobList()const
{
	return jobList_;
}

