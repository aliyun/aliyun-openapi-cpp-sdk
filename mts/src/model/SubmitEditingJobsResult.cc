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

#include <alibabacloud/mts/model/SubmitEditingJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitEditingJobsResult::SubmitEditingJobsResult() :
	ServiceResult()
{}

SubmitEditingJobsResult::SubmitEditingJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitEditingJobsResult::~SubmitEditingJobsResult()
{}

void SubmitEditingJobsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allJobResultList = value["JobResultList"]["JobResult"];
	for (auto value : allJobResultList)
	{
		JobResult jobResultListObject;
		if(!value["Success"].isNull())
			jobResultListObject.success = value["Success"].asString() == "true";
		if(!value["Code"].isNull())
			jobResultListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			jobResultListObject.message = value["Message"].asString();
		auto jobNode = value["Job"];
		if(!jobNode["JobId"].isNull())
			jobResultListObject.job.jobId = jobNode["JobId"].asString();
		if(!jobNode["State"].isNull())
			jobResultListObject.job.state = jobNode["State"].asString();
		if(!jobNode["Code"].isNull())
			jobResultListObject.job.code = jobNode["Code"].asString();
		if(!jobNode["Message"].isNull())
			jobResultListObject.job.message = jobNode["Message"].asString();
		if(!jobNode["Percent"].isNull())
			jobResultListObject.job.percent = std::stol(jobNode["Percent"].asString());
		if(!jobNode["PipelineId"].isNull())
			jobResultListObject.job.pipelineId = jobNode["PipelineId"].asString();
		if(!jobNode["CreationTime"].isNull())
			jobResultListObject.job.creationTime = jobNode["CreationTime"].asString();
		if(!jobNode["FinishTime"].isNull())
			jobResultListObject.job.finishTime = jobNode["FinishTime"].asString();
		auto allEditingInputs = value["EditingInputs"]["EditingInput"];
		for (auto value : allEditingInputs)
		{
			JobResult::Job::EditingInput editingInputObject;
			if(!value["Id"].isNull())
				editingInputObject.id = value["Id"].asString();
			auto inputFileNode = value["InputFile"];
			if(!inputFileNode["Bucket"].isNull())
				editingInputObject.inputFile.bucket = inputFileNode["Bucket"].asString();
			if(!inputFileNode["Location"].isNull())
				editingInputObject.inputFile.location = inputFileNode["Location"].asString();
			if(!inputFileNode["Object"].isNull())
				editingInputObject.inputFile.object = inputFileNode["Object"].asString();
			auto inputConfigNode = value["InputConfig"];
			if(!inputConfigNode["DeinterlaceMethod"].isNull())
				editingInputObject.inputConfig.deinterlaceMethod = inputConfigNode["DeinterlaceMethod"].asString();
			if(!inputConfigNode["IsNormalSar"].isNull())
				editingInputObject.inputConfig.isNormalSar = inputConfigNode["IsNormalSar"].asString();
			jobResultListObject.job.editingInputs.push_back(editingInputObject);
		}
		auto editingConfigNode = jobNode["EditingConfig"];
		if(!editingConfigNode["TemplateId"].isNull())
			jobResultListObject.job.editingConfig.templateId = editingConfigNode["TemplateId"].asString();
		if(!editingConfigNode["UserData"].isNull())
			jobResultListObject.job.editingConfig.userData = editingConfigNode["UserData"].asString();
		if(!editingConfigNode["Rotate"].isNull())
			jobResultListObject.job.editingConfig.rotate = editingConfigNode["Rotate"].asString();
		if(!editingConfigNode["VideoStreamMap"].isNull())
			jobResultListObject.job.editingConfig.videoStreamMap = editingConfigNode["VideoStreamMap"].asString();
		if(!editingConfigNode["AudioStreamMap"].isNull())
			jobResultListObject.job.editingConfig.audioStreamMap = editingConfigNode["AudioStreamMap"].asString();
		if(!editingConfigNode["DeWatermark"].isNull())
			jobResultListObject.job.editingConfig.deWatermark = editingConfigNode["DeWatermark"].asString();
		if(!editingConfigNode["Priority"].isNull())
			jobResultListObject.job.editingConfig.priority = editingConfigNode["Priority"].asString();
		if(!editingConfigNode["WaterMarkConfigUrl"].isNull())
			jobResultListObject.job.editingConfig.waterMarkConfigUrl = editingConfigNode["WaterMarkConfigUrl"].asString();
		if(!editingConfigNode["MergeConfigUrl"].isNull())
			jobResultListObject.job.editingConfig.mergeConfigUrl = editingConfigNode["MergeConfigUrl"].asString();
		auto allWaterMarkList = value["WaterMarkList"]["WaterMark"];
		for (auto value : allWaterMarkList)
		{
			JobResult::Job::EditingConfig::WaterMark waterMarkObject;
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
			jobResultListObject.job.editingConfig.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeList = value["MergeList"]["Merge"];
		for (auto value : allMergeList)
		{
			JobResult::Job::EditingConfig::Merge mergeObject;
			if(!value["MergeURL"].isNull())
				mergeObject.mergeURL = value["MergeURL"].asString();
			if(!value["Start"].isNull())
				mergeObject.start = value["Start"].asString();
			if(!value["Duration"].isNull())
				mergeObject.duration = value["Duration"].asString();
			if(!value["RoleArn"].isNull())
				mergeObject.roleArn = value["RoleArn"].asString();
			jobResultListObject.job.editingConfig.mergeList.push_back(mergeObject);
		}
		auto digiWaterMarkNode = editingConfigNode["DigiWaterMark"];
		if(!digiWaterMarkNode["Type"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
		if(!digiWaterMarkNode["Alpha"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
		auto inputFile2Node = digiWaterMarkNode["InputFile"];
		if(!inputFile2Node["Bucket"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.inputFile2.bucket = inputFile2Node["Bucket"].asString();
		if(!inputFile2Node["Location"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.inputFile2.location = inputFile2Node["Location"].asString();
		if(!inputFile2Node["Object"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.inputFile2.object = inputFile2Node["Object"].asString();
		auto outputFileNode = editingConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			jobResultListObject.job.editingConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			jobResultListObject.job.editingConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			jobResultListObject.job.editingConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["RoleArn"].isNull())
			jobResultListObject.job.editingConfig.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		auto m3U8NonStandardSupportNode = editingConfigNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["Md5Support"].isNull())
			jobResultListObject.job.editingConfig.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		if(!tSNode["SizeSupport"].isNull())
			jobResultListObject.job.editingConfig.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		auto propertiesNode = editingConfigNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobResultListObject.job.editingConfig.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobResultListObject.job.editingConfig.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobResultListObject.job.editingConfig.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobResultListObject.job.editingConfig.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobResultListObject.job.editingConfig.properties.fileSize = propertiesNode["FileSize"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobResultListObject.job.editingConfig.properties.fileFormat = propertiesNode["FileFormat"].asString();
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
		for (auto value : allVideoStreamList)
		{
			JobResult::Job::EditingConfig::Properties::Streams::VideoStream videoStreamObject;
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
			jobResultListObject.job.editingConfig.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
		for (auto value : allAudioStreamList)
		{
			JobResult::Job::EditingConfig::Properties::Streams::AudioStream audioStreamObject;
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
			jobResultListObject.job.editingConfig.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
		for (auto value : allSubtitleStreamList)
		{
			JobResult::Job::EditingConfig::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!value["Index"].isNull())
				subtitleStreamObject.index = value["Index"].asString();
			if(!value["Lang"].isNull())
				subtitleStreamObject.lang = value["Lang"].asString();
			jobResultListObject.job.editingConfig.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["NumStreams"].isNull())
			jobResultListObject.job.editingConfig.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobResultListObject.job.editingConfig.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["FormatName"].isNull())
			jobResultListObject.job.editingConfig.properties.format.formatName = formatNode["FormatName"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobResultListObject.job.editingConfig.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["StartTime"].isNull())
			jobResultListObject.job.editingConfig.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Size"].isNull())
			jobResultListObject.job.editingConfig.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobResultListObject.job.editingConfig.properties.format.bitrate = formatNode["Bitrate"].asString();
		auto clipNode = editingConfigNode["Clip"];
		auto timeSpanNode = clipNode["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobResultListObject.job.editingConfig.clip.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.clip.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto superResoNode = editingConfigNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobResultListObject.job.editingConfig.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto subtitleConfigNode = editingConfigNode["SubtitleConfig"];
		auto allSubtitleList = value["SubtitleList"]["Subtitle"];
		for (auto value : allSubtitleList)
		{
			JobResult::Job::EditingConfig::SubtitleConfig::Subtitle subtitleObject;
			if(!value["Map"].isNull())
				subtitleObject.map = value["Map"].asString();
			jobResultListObject.job.editingConfig.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto allExtSubtitleList = value["ExtSubtitleList"]["ExtSubtitle"];
		for (auto value : allExtSubtitleList)
		{
			JobResult::Job::EditingConfig::SubtitleConfig::ExtSubtitle extSubtitleObject;
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
			jobResultListObject.job.editingConfig.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto transConfigNode = editingConfigNode["TransConfig"];
		if(!transConfigNode["TransMode"].isNull())
			jobResultListObject.job.editingConfig.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobResultListObject.job.editingConfig.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		if(!transConfigNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.transConfig.duration = transConfigNode["Duration"].asString();
		auto muxConfigNode = editingConfigNode["MuxConfig"];
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["Loop"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["FinalDelay"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		auto audioNode = editingConfigNode["Audio"];
		if(!audioNode["Codec"].isNull())
			jobResultListObject.job.editingConfig.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Profile"].isNull())
			jobResultListObject.job.editingConfig.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobResultListObject.job.editingConfig.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobResultListObject.job.editingConfig.audio.bitrate = audioNode["Bitrate"].asString();
		if(!audioNode["Channels"].isNull())
			jobResultListObject.job.editingConfig.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Qscale"].isNull())
			jobResultListObject.job.editingConfig.audio.qscale = audioNode["Qscale"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Level"].isNull())
			jobResultListObject.job.editingConfig.audio.volume.level = volumeNode["Level"].asString();
		if(!volumeNode["Method"].isNull())
			jobResultListObject.job.editingConfig.audio.volume.method = volumeNode["Method"].asString();
		auto videoNode = editingConfigNode["Video"];
		if(!videoNode["Codec"].isNull())
			jobResultListObject.job.editingConfig.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Profile"].isNull())
			jobResultListObject.job.editingConfig.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobResultListObject.job.editingConfig.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Crf"].isNull())
			jobResultListObject.job.editingConfig.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Width"].isNull())
			jobResultListObject.job.editingConfig.video.width = videoNode["Width"].asString();
		if(!videoNode["Height"].isNull())
			jobResultListObject.job.editingConfig.video.height = videoNode["Height"].asString();
		if(!videoNode["Fps"].isNull())
			jobResultListObject.job.editingConfig.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Gop"].isNull())
			jobResultListObject.job.editingConfig.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Preset"].isNull())
			jobResultListObject.job.editingConfig.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobResultListObject.job.editingConfig.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["Bufsize"].isNull())
			jobResultListObject.job.editingConfig.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobResultListObject.job.editingConfig.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobResultListObject.job.editingConfig.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Degrain"].isNull())
			jobResultListObject.job.editingConfig.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["Qscale"].isNull())
			jobResultListObject.job.editingConfig.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobResultListObject.job.editingConfig.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Pad"].isNull())
			jobResultListObject.job.editingConfig.video.pad = videoNode["Pad"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobResultListObject.job.editingConfig.video.maxFps = videoNode["MaxFps"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobResultListObject.job.editingConfig.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobResultListObject.job.editingConfig.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto containerNode = editingConfigNode["Container"];
		if(!containerNode["Format"].isNull())
			jobResultListObject.job.editingConfig.container.format = containerNode["Format"].asString();
		auto encryptionNode = editingConfigNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobResultListObject.job.editingConfig.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Id"].isNull())
			jobResultListObject.job.editingConfig.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["Key"].isNull())
			jobResultListObject.job.editingConfig.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobResultListObject.job.editingConfig.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobResultListObject.job.editingConfig.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobResultListObject.job.editingConfig.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
		auto editingNode = editingConfigNode["Editing"];
		auto allClipList = value["ClipList"]["Clip"];
		for (auto value : allClipList)
		{
			JobResult::Job::EditingConfig::Editing::Clip3 clip3Object;
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
				JobResult::Job::EditingConfig::Editing::Clip3::Effect effectsObject;
				if(!value["Effect"].isNull())
					effectsObject.effect = value["Effect"].asString();
				if(!value["EffectConfig"].isNull())
					effectsObject.effectConfig = value["EffectConfig"].asString();
				clip3Object.effects.push_back(effectsObject);
			}
			jobResultListObject.job.editingConfig.editing.clipList.push_back(clip3Object);
		}
		auto timelineNode = editingNode["Timeline"];
		auto allTrackList = value["TrackList"]["Track"];
		for (auto value : allTrackList)
		{
			JobResult::Job::EditingConfig::Editing::Timeline::Track trackObject;
			if(!value["Id"].isNull())
				trackObject.id = value["Id"].asString();
			if(!value["Type"].isNull())
				trackObject.type = value["Type"].asString();
			if(!value["Order"].isNull())
				trackObject.order = value["Order"].asString();
			auto allClips = value["Clips"]["Clip"];
			for (auto value : allClips)
			{
				JobResult::Job::EditingConfig::Editing::Timeline::Track::Clip4 clipsObject;
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
			jobResultListObject.job.editingConfig.editing.timeline.trackList.push_back(trackObject);
		}
		auto timelineConfigNode = timelineNode["TimelineConfig"];
		auto timelineConfigVideoNode = timelineConfigNode["TimelineConfigVideo"];
		if(!timelineConfigVideoNode["Width"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.width = timelineConfigVideoNode["Width"].asString();
		if(!timelineConfigVideoNode["Height"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.height = timelineConfigVideoNode["Height"].asString();
		if(!timelineConfigVideoNode["BgColor"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.bgColor = timelineConfigVideoNode["BgColor"].asString();
		if(!timelineConfigVideoNode["Fps"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.fps = timelineConfigVideoNode["Fps"].asString();
		if(!timelineConfigVideoNode["RenderRatio"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.renderRatio = timelineConfigVideoNode["RenderRatio"].asString();
		if(!timelineConfigVideoNode["ReclosePrec"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.reclosePrec = timelineConfigVideoNode["ReclosePrec"].asString();
		if(!timelineConfigVideoNode["IsGpuData"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.isGpuData = timelineConfigVideoNode["IsGpuData"].asString();
		if(!timelineConfigVideoNode["IsOneTrackData"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.isOneTrackData = timelineConfigVideoNode["IsOneTrackData"].asString();
		auto timelineConfigAudioNode = timelineConfigNode["TimelineConfigAudio"];
		if(!timelineConfigAudioNode["Samplerate"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.samplerate = timelineConfigAudioNode["Samplerate"].asString();
		if(!timelineConfigAudioNode["ChannelLayout"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.channelLayout = timelineConfigAudioNode["ChannelLayout"].asString();
		if(!timelineConfigAudioNode["Channels"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.channels = timelineConfigAudioNode["Channels"].asString();
		auto mNSMessageResultNode = jobNode["MNSMessageResult"];
		if(!mNSMessageResultNode["MessageId"].isNull())
			jobResultListObject.job.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
		if(!mNSMessageResultNode["ErrorMessage"].isNull())
			jobResultListObject.job.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
		if(!mNSMessageResultNode["ErrorCode"].isNull())
			jobResultListObject.job.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
		jobResultList_.push_back(jobResultListObject);
	}

}

std::vector<SubmitEditingJobsResult::JobResult> SubmitEditingJobsResult::getJobResultList()const
{
	return jobResultList_;
}

