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
	auto allJobListNode = value["JobList"]["Job"];
	for (auto valueJobListJob : allJobListNode)
	{
		Job jobListObject;
		if(!valueJobListJob["JobId"].isNull())
			jobListObject.jobId = valueJobListJob["JobId"].asString();
		if(!valueJobListJob["State"].isNull())
			jobListObject.state = valueJobListJob["State"].asString();
		if(!valueJobListJob["Code"].isNull())
			jobListObject.code = valueJobListJob["Code"].asString();
		if(!valueJobListJob["Message"].isNull())
			jobListObject.message = valueJobListJob["Message"].asString();
		if(!valueJobListJob["Percent"].isNull())
			jobListObject.percent = std::stol(valueJobListJob["Percent"].asString());
		if(!valueJobListJob["PipelineId"].isNull())
			jobListObject.pipelineId = valueJobListJob["PipelineId"].asString();
		if(!valueJobListJob["CreationTime"].isNull())
			jobListObject.creationTime = valueJobListJob["CreationTime"].asString();
		if(!valueJobListJob["FinishTime"].isNull())
			jobListObject.finishTime = valueJobListJob["FinishTime"].asString();
		auto allEditingInputsNode = allJobListNode["EditingInputs"]["EditingInput"];
		for (auto allJobListNodeEditingInputsEditingInput : allEditingInputsNode)
		{
			Job::EditingInput editingInputsObject;
			if(!allJobListNodeEditingInputsEditingInput["Id"].isNull())
				editingInputsObject.id = allJobListNodeEditingInputsEditingInput["Id"].asString();
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
		auto allWaterMarkListNode = editingConfigNode["WaterMarkList"]["WaterMark"];
		for (auto editingConfigNodeWaterMarkListWaterMark : allWaterMarkListNode)
		{
			Job::EditingConfig::WaterMark waterMarkObject;
			if(!editingConfigNodeWaterMarkListWaterMark["WaterMarkTemplateId"].isNull())
				waterMarkObject.waterMarkTemplateId = editingConfigNodeWaterMarkListWaterMark["WaterMarkTemplateId"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Width"].isNull())
				waterMarkObject.width = editingConfigNodeWaterMarkListWaterMark["Width"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Height"].isNull())
				waterMarkObject.height = editingConfigNodeWaterMarkListWaterMark["Height"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Dx"].isNull())
				waterMarkObject.dx = editingConfigNodeWaterMarkListWaterMark["Dx"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Dy"].isNull())
				waterMarkObject.dy = editingConfigNodeWaterMarkListWaterMark["Dy"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["ReferPos"].isNull())
				waterMarkObject.referPos = editingConfigNodeWaterMarkListWaterMark["ReferPos"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Type"].isNull())
				waterMarkObject.type = editingConfigNodeWaterMarkListWaterMark["Type"].asString();
			auto inputFile1Node = value["InputFile"];
			if(!inputFile1Node["Bucket"].isNull())
				waterMarkObject.inputFile1.bucket = inputFile1Node["Bucket"].asString();
			if(!inputFile1Node["Location"].isNull())
				waterMarkObject.inputFile1.location = inputFile1Node["Location"].asString();
			if(!inputFile1Node["Object"].isNull())
				waterMarkObject.inputFile1.object = inputFile1Node["Object"].asString();
			jobListObject.editingConfig.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeListNode = editingConfigNode["MergeList"]["Merge"];
		for (auto editingConfigNodeMergeListMerge : allMergeListNode)
		{
			Job::EditingConfig::Merge mergeObject;
			if(!editingConfigNodeMergeListMerge["MergeURL"].isNull())
				mergeObject.mergeURL = editingConfigNodeMergeListMerge["MergeURL"].asString();
			if(!editingConfigNodeMergeListMerge["Start"].isNull())
				mergeObject.start = editingConfigNodeMergeListMerge["Start"].asString();
			if(!editingConfigNodeMergeListMerge["Duration"].isNull())
				mergeObject.duration = editingConfigNodeMergeListMerge["Duration"].asString();
			if(!editingConfigNodeMergeListMerge["RoleArn"].isNull())
				mergeObject.roleArn = editingConfigNodeMergeListMerge["RoleArn"].asString();
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
		auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
		for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
		{
			Job::EditingConfig::Properties::Streams::VideoStream videoStreamObject;
			if(!streamsNodeVideoStreamListVideoStream["Index"].isNull())
				videoStreamObject.index = streamsNodeVideoStreamListVideoStream["Index"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecName"].isNull())
				videoStreamObject.codecName = streamsNodeVideoStreamListVideoStream["CodecName"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecLongName"].isNull())
				videoStreamObject.codecLongName = streamsNodeVideoStreamListVideoStream["CodecLongName"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Profile"].isNull())
				videoStreamObject.profile = streamsNodeVideoStreamListVideoStream["Profile"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTimeBase"].isNull())
				videoStreamObject.codecTimeBase = streamsNodeVideoStreamListVideoStream["CodecTimeBase"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTagString"].isNull())
				videoStreamObject.codecTagString = streamsNodeVideoStreamListVideoStream["CodecTagString"].asString();
			if(!streamsNodeVideoStreamListVideoStream["CodecTag"].isNull())
				videoStreamObject.codecTag = streamsNodeVideoStreamListVideoStream["CodecTag"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Width"].isNull())
				videoStreamObject.width = streamsNodeVideoStreamListVideoStream["Width"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Height"].isNull())
				videoStreamObject.height = streamsNodeVideoStreamListVideoStream["Height"].asString();
			if(!streamsNodeVideoStreamListVideoStream["HasBFrames"].isNull())
				videoStreamObject.hasBFrames = streamsNodeVideoStreamListVideoStream["HasBFrames"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Sar"].isNull())
				videoStreamObject.sar = streamsNodeVideoStreamListVideoStream["Sar"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Dar"].isNull())
				videoStreamObject.dar = streamsNodeVideoStreamListVideoStream["Dar"].asString();
			if(!streamsNodeVideoStreamListVideoStream["PixFmt"].isNull())
				videoStreamObject.pixFmt = streamsNodeVideoStreamListVideoStream["PixFmt"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Level"].isNull())
				videoStreamObject.level = streamsNodeVideoStreamListVideoStream["Level"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Fps"].isNull())
				videoStreamObject.fps = streamsNodeVideoStreamListVideoStream["Fps"].asString();
			if(!streamsNodeVideoStreamListVideoStream["AvgFPS"].isNull())
				videoStreamObject.avgFPS = streamsNodeVideoStreamListVideoStream["AvgFPS"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Timebase"].isNull())
				videoStreamObject.timebase = streamsNodeVideoStreamListVideoStream["Timebase"].asString();
			if(!streamsNodeVideoStreamListVideoStream["StartTime"].isNull())
				videoStreamObject.startTime = streamsNodeVideoStreamListVideoStream["StartTime"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Duration"].isNull())
				videoStreamObject.duration = streamsNodeVideoStreamListVideoStream["Duration"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Bitrate"].isNull())
				videoStreamObject.bitrate = streamsNodeVideoStreamListVideoStream["Bitrate"].asString();
			if(!streamsNodeVideoStreamListVideoStream["NumFrames"].isNull())
				videoStreamObject.numFrames = streamsNodeVideoStreamListVideoStream["NumFrames"].asString();
			if(!streamsNodeVideoStreamListVideoStream["Lang"].isNull())
				videoStreamObject.lang = streamsNodeVideoStreamListVideoStream["Lang"].asString();
			auto networkCostNode = value["NetworkCost"];
			if(!networkCostNode["PreloadTime"].isNull())
				videoStreamObject.networkCost.preloadTime = networkCostNode["PreloadTime"].asString();
			if(!networkCostNode["CostBandwidth"].isNull())
				videoStreamObject.networkCost.costBandwidth = networkCostNode["CostBandwidth"].asString();
			if(!networkCostNode["AvgBitrate"].isNull())
				videoStreamObject.networkCost.avgBitrate = networkCostNode["AvgBitrate"].asString();
			jobListObject.editingConfig.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
		for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
		{
			Job::EditingConfig::Properties::Streams::AudioStream audioStreamObject;
			if(!streamsNodeAudioStreamListAudioStream["Index"].isNull())
				audioStreamObject.index = streamsNodeAudioStreamListAudioStream["Index"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecName"].isNull())
				audioStreamObject.codecName = streamsNodeAudioStreamListAudioStream["CodecName"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTimeBase"].isNull())
				audioStreamObject.codecTimeBase = streamsNodeAudioStreamListAudioStream["CodecTimeBase"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecLongName"].isNull())
				audioStreamObject.codecLongName = streamsNodeAudioStreamListAudioStream["CodecLongName"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTagString"].isNull())
				audioStreamObject.codecTagString = streamsNodeAudioStreamListAudioStream["CodecTagString"].asString();
			if(!streamsNodeAudioStreamListAudioStream["CodecTag"].isNull())
				audioStreamObject.codecTag = streamsNodeAudioStreamListAudioStream["CodecTag"].asString();
			if(!streamsNodeAudioStreamListAudioStream["SampleFmt"].isNull())
				audioStreamObject.sampleFmt = streamsNodeAudioStreamListAudioStream["SampleFmt"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Samplerate"].isNull())
				audioStreamObject.samplerate = streamsNodeAudioStreamListAudioStream["Samplerate"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Channels"].isNull())
				audioStreamObject.channels = streamsNodeAudioStreamListAudioStream["Channels"].asString();
			if(!streamsNodeAudioStreamListAudioStream["ChannelLayout"].isNull())
				audioStreamObject.channelLayout = streamsNodeAudioStreamListAudioStream["ChannelLayout"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Timebase"].isNull())
				audioStreamObject.timebase = streamsNodeAudioStreamListAudioStream["Timebase"].asString();
			if(!streamsNodeAudioStreamListAudioStream["StartTime"].isNull())
				audioStreamObject.startTime = streamsNodeAudioStreamListAudioStream["StartTime"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Duration"].isNull())
				audioStreamObject.duration = streamsNodeAudioStreamListAudioStream["Duration"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Bitrate"].isNull())
				audioStreamObject.bitrate = streamsNodeAudioStreamListAudioStream["Bitrate"].asString();
			if(!streamsNodeAudioStreamListAudioStream["NumFrames"].isNull())
				audioStreamObject.numFrames = streamsNodeAudioStreamListAudioStream["NumFrames"].asString();
			if(!streamsNodeAudioStreamListAudioStream["Lang"].isNull())
				audioStreamObject.lang = streamsNodeAudioStreamListAudioStream["Lang"].asString();
			jobListObject.editingConfig.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
		for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
		{
			Job::EditingConfig::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!streamsNodeSubtitleStreamListSubtitleStream["Index"].isNull())
				subtitleStreamObject.index = streamsNodeSubtitleStreamListSubtitleStream["Index"].asString();
			if(!streamsNodeSubtitleStreamListSubtitleStream["Lang"].isNull())
				subtitleStreamObject.lang = streamsNodeSubtitleStreamListSubtitleStream["Lang"].asString();
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
		auto allSubtitleListNode = subtitleConfigNode["SubtitleList"]["Subtitle"];
		for (auto subtitleConfigNodeSubtitleListSubtitle : allSubtitleListNode)
		{
			Job::EditingConfig::SubtitleConfig::Subtitle subtitleObject;
			if(!subtitleConfigNodeSubtitleListSubtitle["Map"].isNull())
				subtitleObject.map = subtitleConfigNodeSubtitleListSubtitle["Map"].asString();
			jobListObject.editingConfig.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto allExtSubtitleListNode = subtitleConfigNode["ExtSubtitleList"]["ExtSubtitle"];
		for (auto subtitleConfigNodeExtSubtitleListExtSubtitle : allExtSubtitleListNode)
		{
			Job::EditingConfig::SubtitleConfig::ExtSubtitle extSubtitleObject;
			if(!subtitleConfigNodeExtSubtitleListExtSubtitle["FontName"].isNull())
				extSubtitleObject.fontName = subtitleConfigNodeExtSubtitleListExtSubtitle["FontName"].asString();
			if(!subtitleConfigNodeExtSubtitleListExtSubtitle["CharEnc"].isNull())
				extSubtitleObject.charEnc = subtitleConfigNodeExtSubtitleListExtSubtitle["CharEnc"].asString();
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
		auto allClipListNode = editingNode["ClipList"]["Clip"];
		for (auto editingNodeClipListClip : allClipListNode)
		{
			Job::EditingConfig::Editing::Clip3 clip3Object;
			if(!editingNodeClipListClip["Id"].isNull())
				clip3Object.id = editingNodeClipListClip["Id"].asString();
			if(!editingNodeClipListClip["Type"].isNull())
				clip3Object.type = editingNodeClipListClip["Type"].asString();
			if(!editingNodeClipListClip["SourceType"].isNull())
				clip3Object.sourceType = editingNodeClipListClip["SourceType"].asString();
			if(!editingNodeClipListClip["SourceID"].isNull())
				clip3Object.sourceID = editingNodeClipListClip["SourceID"].asString();
			if(!editingNodeClipListClip["SourceStrmMap"].isNull())
				clip3Object.sourceStrmMap = editingNodeClipListClip["SourceStrmMap"].asString();
			if(!editingNodeClipListClip["In"].isNull())
				clip3Object.in = editingNodeClipListClip["In"].asString();
			if(!editingNodeClipListClip["Out"].isNull())
				clip3Object.out = editingNodeClipListClip["Out"].asString();
			auto allEffectsNode = allClipListNode["Effects"]["Effect"];
			for (auto allClipListNodeEffectsEffect : allEffectsNode)
			{
				Job::EditingConfig::Editing::Clip3::Effect effectsObject;
				if(!allClipListNodeEffectsEffect["Effect"].isNull())
					effectsObject.effect = allClipListNodeEffectsEffect["Effect"].asString();
				if(!allClipListNodeEffectsEffect["EffectConfig"].isNull())
					effectsObject.effectConfig = allClipListNodeEffectsEffect["EffectConfig"].asString();
				clip3Object.effects.push_back(effectsObject);
			}
			jobListObject.editingConfig.editing.clipList.push_back(clip3Object);
		}
		auto timelineNode = editingNode["Timeline"];
		auto allTrackListNode = timelineNode["TrackList"]["Track"];
		for (auto timelineNodeTrackListTrack : allTrackListNode)
		{
			Job::EditingConfig::Editing::Timeline::Track trackObject;
			if(!timelineNodeTrackListTrack["Id"].isNull())
				trackObject.id = timelineNodeTrackListTrack["Id"].asString();
			if(!timelineNodeTrackListTrack["Type"].isNull())
				trackObject.type = timelineNodeTrackListTrack["Type"].asString();
			if(!timelineNodeTrackListTrack["Order"].isNull())
				trackObject.order = timelineNodeTrackListTrack["Order"].asString();
			auto allClipsNode = allTrackListNode["Clips"]["Clip"];
			for (auto allTrackListNodeClipsClip : allClipsNode)
			{
				Job::EditingConfig::Editing::Timeline::Track::Clip4 clipsObject;
				if(!allTrackListNodeClipsClip["clipID"].isNull())
					clipsObject.clipID = allTrackListNodeClipsClip["clipID"].asString();
				if(!allTrackListNodeClipsClip["In"].isNull())
					clipsObject.in = allTrackListNodeClipsClip["In"].asString();
				if(!allTrackListNodeClipsClip["Out"].isNull())
					clipsObject.out = allTrackListNodeClipsClip["Out"].asString();
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

