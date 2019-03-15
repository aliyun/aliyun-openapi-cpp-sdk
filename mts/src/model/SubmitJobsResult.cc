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

#include <alibabacloud/mts/model/SubmitJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitJobsResult::SubmitJobsResult() :
	ServiceResult()
{}

SubmitJobsResult::SubmitJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitJobsResult::~SubmitJobsResult()
{}

void SubmitJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

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
		auto inputNode = jobNode["Input"];
		if(!inputNode["Bucket"].isNull())
			jobResultListObject.job.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			jobResultListObject.job.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			jobResultListObject.job.input.object = inputNode["Object"].asString();
		auto outputNode = jobNode["Output"];
		if(!outputNode["TemplateId"].isNull())
			jobResultListObject.job.output.templateId = outputNode["TemplateId"].asString();
		if(!outputNode["UserData"].isNull())
			jobResultListObject.job.output.userData = outputNode["UserData"].asString();
		if(!outputNode["Rotate"].isNull())
			jobResultListObject.job.output.rotate = outputNode["Rotate"].asString();
		if(!outputNode["VideoStreamMap"].isNull())
			jobResultListObject.job.output.videoStreamMap = outputNode["VideoStreamMap"].asString();
		if(!outputNode["AudioStreamMap"].isNull())
			jobResultListObject.job.output.audioStreamMap = outputNode["AudioStreamMap"].asString();
		if(!outputNode["DeWatermark"].isNull())
			jobResultListObject.job.output.deWatermark = outputNode["DeWatermark"].asString();
		if(!outputNode["Priority"].isNull())
			jobResultListObject.job.output.priority = outputNode["Priority"].asString();
		if(!outputNode["WaterMarkConfigUrl"].isNull())
			jobResultListObject.job.output.waterMarkConfigUrl = outputNode["WaterMarkConfigUrl"].asString();
		if(!outputNode["MergeConfigUrl"].isNull())
			jobResultListObject.job.output.mergeConfigUrl = outputNode["MergeConfigUrl"].asString();
		auto allWaterMarkList = value["WaterMarkList"]["WaterMark"];
		for (auto value : allWaterMarkList)
		{
			JobResult::Job::Output::WaterMark waterMarkObject;
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
			auto inputFileNode = value["InputFile"];
			if(!inputFileNode["Bucket"].isNull())
				waterMarkObject.inputFile.bucket = inputFileNode["Bucket"].asString();
			if(!inputFileNode["Location"].isNull())
				waterMarkObject.inputFile.location = inputFileNode["Location"].asString();
			if(!inputFileNode["Object"].isNull())
				waterMarkObject.inputFile.object = inputFileNode["Object"].asString();
			jobResultListObject.job.output.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeList = value["MergeList"]["Merge"];
		for (auto value : allMergeList)
		{
			JobResult::Job::Output::Merge mergeObject;
			if(!value["MergeURL"].isNull())
				mergeObject.mergeURL = value["MergeURL"].asString();
			if(!value["Start"].isNull())
				mergeObject.start = value["Start"].asString();
			if(!value["Duration"].isNull())
				mergeObject.duration = value["Duration"].asString();
			if(!value["RoleArn"].isNull())
				mergeObject.roleArn = value["RoleArn"].asString();
			jobResultListObject.job.output.mergeList.push_back(mergeObject);
		}
		auto allOpeningList = value["OpeningList"]["Opening"];
		for (auto value : allOpeningList)
		{
			JobResult::Job::Output::Opening openingObject;
			if(!value["openUrl"].isNull())
				openingObject.openUrl = value["openUrl"].asString();
			if(!value["Start"].isNull())
				openingObject.start = value["Start"].asString();
			if(!value["Width"].isNull())
				openingObject.width = value["Width"].asString();
			if(!value["Height"].isNull())
				openingObject.height = value["Height"].asString();
			jobResultListObject.job.output.openingList.push_back(openingObject);
		}
		auto allTailSlateList = value["TailSlateList"]["TailSlate"];
		for (auto value : allTailSlateList)
		{
			JobResult::Job::Output::TailSlate tailSlateObject;
			if(!value["TailUrl"].isNull())
				tailSlateObject.tailUrl = value["TailUrl"].asString();
			if(!value["Start"].isNull())
				tailSlateObject.start = value["Start"].asString();
			if(!value["BlendDuration"].isNull())
				tailSlateObject.blendDuration = value["BlendDuration"].asString();
			if(!value["Width"].isNull())
				tailSlateObject.width = value["Width"].asString();
			if(!value["Height"].isNull())
				tailSlateObject.height = value["Height"].asString();
			if(!value["IsMergeAudio"].isNull())
				tailSlateObject.isMergeAudio = value["IsMergeAudio"].asString() == "true";
			if(!value["BgColor"].isNull())
				tailSlateObject.bgColor = value["BgColor"].asString();
			jobResultListObject.job.output.tailSlateList.push_back(tailSlateObject);
		}
		auto allOutSubtitleList = value["OutSubtitleList"]["OutSubtitle"];
		for (auto value : allOutSubtitleList)
		{
			JobResult::Job::Output::OutSubtitle outSubtitleObject;
			if(!value["Map"].isNull())
				outSubtitleObject.map = value["Map"].asString();
			if(!value["Success"].isNull())
				outSubtitleObject.success = value["Success"].asString() == "true";
			if(!value["Message"].isNull())
				outSubtitleObject.message = value["Message"].asString();
			auto outSubtitleFileNode = value["OutSubtitleFile"];
			if(!outSubtitleFileNode["Bucket"].isNull())
				outSubtitleObject.outSubtitleFile.bucket = outSubtitleFileNode["Bucket"].asString();
			if(!outSubtitleFileNode["Location"].isNull())
				outSubtitleObject.outSubtitleFile.location = outSubtitleFileNode["Location"].asString();
			if(!outSubtitleFileNode["Object"].isNull())
				outSubtitleObject.outSubtitleFile.object = outSubtitleFileNode["Object"].asString();
			if(!outSubtitleFileNode["RoleArn"].isNull())
				outSubtitleObject.outSubtitleFile.roleArn = outSubtitleFileNode["RoleArn"].asString();
			jobResultListObject.job.output.outSubtitleList.push_back(outSubtitleObject);
		}
		auto allAmixList = value["AmixList"]["Amix"];
		for (auto value : allAmixList)
		{
			JobResult::Job::Output::Amix amixObject;
			if(!value["AmixURL"].isNull())
				amixObject.amixURL = value["AmixURL"].asString();
			if(!value["Map"].isNull())
				amixObject.map = value["Map"].asString();
			if(!value["MixDurMode"].isNull())
				amixObject.mixDurMode = value["MixDurMode"].asString();
			if(!value["Start"].isNull())
				amixObject.start = value["Start"].asString();
			if(!value["Duration"].isNull())
				amixObject.duration = value["Duration"].asString();
			jobResultListObject.job.output.amixList.push_back(amixObject);
		}
		auto digiWaterMarkNode = outputNode["DigiWaterMark"];
		if(!digiWaterMarkNode["Type"].isNull())
			jobResultListObject.job.output.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
		if(!digiWaterMarkNode["Alpha"].isNull())
			jobResultListObject.job.output.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
		auto inputFile1Node = digiWaterMarkNode["InputFile"];
		if(!inputFile1Node["Bucket"].isNull())
			jobResultListObject.job.output.digiWaterMark.inputFile1.bucket = inputFile1Node["Bucket"].asString();
		if(!inputFile1Node["Location"].isNull())
			jobResultListObject.job.output.digiWaterMark.inputFile1.location = inputFile1Node["Location"].asString();
		if(!inputFile1Node["Object"].isNull())
			jobResultListObject.job.output.digiWaterMark.inputFile1.object = inputFile1Node["Object"].asString();
		auto outputFileNode = outputNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			jobResultListObject.job.output.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			jobResultListObject.job.output.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			jobResultListObject.job.output.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["RoleArn"].isNull())
			jobResultListObject.job.output.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		auto m3U8NonStandardSupportNode = outputNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["Md5Support"].isNull())
			jobResultListObject.job.output.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		if(!tSNode["SizeSupport"].isNull())
			jobResultListObject.job.output.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		auto propertiesNode = outputNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobResultListObject.job.output.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobResultListObject.job.output.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobResultListObject.job.output.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobResultListObject.job.output.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobResultListObject.job.output.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobResultListObject.job.output.properties.fileSize = propertiesNode["FileSize"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobResultListObject.job.output.properties.fileFormat = propertiesNode["FileFormat"].asString();
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
		for (auto value : allVideoStreamList)
		{
			JobResult::Job::Output::Properties::Streams::VideoStream videoStreamObject;
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
			jobResultListObject.job.output.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
		for (auto value : allAudioStreamList)
		{
			JobResult::Job::Output::Properties::Streams::AudioStream audioStreamObject;
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
			jobResultListObject.job.output.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
		for (auto value : allSubtitleStreamList)
		{
			JobResult::Job::Output::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!value["Index"].isNull())
				subtitleStreamObject.index = value["Index"].asString();
			if(!value["Lang"].isNull())
				subtitleStreamObject.lang = value["Lang"].asString();
			jobResultListObject.job.output.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["NumStreams"].isNull())
			jobResultListObject.job.output.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobResultListObject.job.output.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["FormatName"].isNull())
			jobResultListObject.job.output.properties.format.formatName = formatNode["FormatName"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobResultListObject.job.output.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["StartTime"].isNull())
			jobResultListObject.job.output.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["Duration"].isNull())
			jobResultListObject.job.output.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Size"].isNull())
			jobResultListObject.job.output.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobResultListObject.job.output.properties.format.bitrate = formatNode["Bitrate"].asString();
		auto clipNode = outputNode["Clip"];
		auto timeSpanNode = clipNode["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobResultListObject.job.output.clip.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobResultListObject.job.output.clip.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto superResoNode = outputNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobResultListObject.job.output.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto subtitleConfigNode = outputNode["SubtitleConfig"];
		auto allSubtitleList = value["SubtitleList"]["Subtitle"];
		for (auto value : allSubtitleList)
		{
			JobResult::Job::Output::SubtitleConfig::Subtitle subtitleObject;
			if(!value["Map"].isNull())
				subtitleObject.map = value["Map"].asString();
			jobResultListObject.job.output.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto allExtSubtitleList = value["ExtSubtitleList"]["ExtSubtitle"];
		for (auto value : allExtSubtitleList)
		{
			JobResult::Job::Output::SubtitleConfig::ExtSubtitle extSubtitleObject;
			if(!value["FontName"].isNull())
				extSubtitleObject.fontName = value["FontName"].asString();
			if(!value["CharEnc"].isNull())
				extSubtitleObject.charEnc = value["CharEnc"].asString();
			auto input2Node = value["Input"];
			if(!input2Node["Bucket"].isNull())
				extSubtitleObject.input2.bucket = input2Node["Bucket"].asString();
			if(!input2Node["Location"].isNull())
				extSubtitleObject.input2.location = input2Node["Location"].asString();
			if(!input2Node["Object"].isNull())
				extSubtitleObject.input2.object = input2Node["Object"].asString();
			jobResultListObject.job.output.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto transConfigNode = outputNode["TransConfig"];
		if(!transConfigNode["TransMode"].isNull())
			jobResultListObject.job.output.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobResultListObject.job.output.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobResultListObject.job.output.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobResultListObject.job.output.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobResultListObject.job.output.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobResultListObject.job.output.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobResultListObject.job.output.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobResultListObject.job.output.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		auto muxConfigNode = outputNode["MuxConfig"];
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobResultListObject.job.output.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["Loop"].isNull())
			jobResultListObject.job.output.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["FinalDelay"].isNull())
			jobResultListObject.job.output.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobResultListObject.job.output.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobResultListObject.job.output.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		auto webpNode = muxConfigNode["Webp"];
		if(!webpNode["Loop"].isNull())
			jobResultListObject.job.output.muxConfig.webp.loop = webpNode["Loop"].asString();
		auto audioNode = outputNode["Audio"];
		if(!audioNode["Codec"].isNull())
			jobResultListObject.job.output.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Profile"].isNull())
			jobResultListObject.job.output.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobResultListObject.job.output.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobResultListObject.job.output.audio.bitrate = audioNode["Bitrate"].asString();
		if(!audioNode["Channels"].isNull())
			jobResultListObject.job.output.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Qscale"].isNull())
			jobResultListObject.job.output.audio.qscale = audioNode["Qscale"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Level"].isNull())
			jobResultListObject.job.output.audio.volume.level = volumeNode["Level"].asString();
		if(!volumeNode["Method"].isNull())
			jobResultListObject.job.output.audio.volume.method = volumeNode["Method"].asString();
		auto videoNode = outputNode["Video"];
		if(!videoNode["Codec"].isNull())
			jobResultListObject.job.output.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Profile"].isNull())
			jobResultListObject.job.output.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobResultListObject.job.output.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Crf"].isNull())
			jobResultListObject.job.output.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Width"].isNull())
			jobResultListObject.job.output.video.width = videoNode["Width"].asString();
		if(!videoNode["Height"].isNull())
			jobResultListObject.job.output.video.height = videoNode["Height"].asString();
		if(!videoNode["Fps"].isNull())
			jobResultListObject.job.output.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Gop"].isNull())
			jobResultListObject.job.output.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Preset"].isNull())
			jobResultListObject.job.output.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobResultListObject.job.output.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["Bufsize"].isNull())
			jobResultListObject.job.output.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobResultListObject.job.output.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobResultListObject.job.output.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Degrain"].isNull())
			jobResultListObject.job.output.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["Qscale"].isNull())
			jobResultListObject.job.output.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobResultListObject.job.output.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Pad"].isNull())
			jobResultListObject.job.output.video.pad = videoNode["Pad"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobResultListObject.job.output.video.maxFps = videoNode["MaxFps"].asString();
		if(!videoNode["ResoPriority"].isNull())
			jobResultListObject.job.output.video.resoPriority = videoNode["ResoPriority"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobResultListObject.job.output.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobResultListObject.job.output.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto containerNode = outputNode["Container"];
		if(!containerNode["Format"].isNull())
			jobResultListObject.job.output.container.format = containerNode["Format"].asString();
		auto encryptionNode = outputNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobResultListObject.job.output.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Id"].isNull())
			jobResultListObject.job.output.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["Key"].isNull())
			jobResultListObject.job.output.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobResultListObject.job.output.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobResultListObject.job.output.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobResultListObject.job.output.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
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

std::vector<SubmitJobsResult::JobResult> SubmitJobsResult::getJobResultList()const
{
	return jobResultList_;
}

