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

#include <alibabacloud/mts/model/QueryJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryJobListResult::QueryJobListResult() :
	ServiceResult()
{}

QueryJobListResult::QueryJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryJobListResult::~QueryJobListResult()
{}

void QueryJobListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			jobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			jobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			jobListObject.input.object = inputNode["Object"].asString();
		auto outputNode = value["Output"];
		if(!outputNode["TemplateId"].isNull())
			jobListObject.output.templateId = outputNode["TemplateId"].asString();
		if(!outputNode["UserData"].isNull())
			jobListObject.output.userData = outputNode["UserData"].asString();
		if(!outputNode["Rotate"].isNull())
			jobListObject.output.rotate = outputNode["Rotate"].asString();
		if(!outputNode["VideoStreamMap"].isNull())
			jobListObject.output.videoStreamMap = outputNode["VideoStreamMap"].asString();
		if(!outputNode["AudioStreamMap"].isNull())
			jobListObject.output.audioStreamMap = outputNode["AudioStreamMap"].asString();
		if(!outputNode["DeWatermark"].isNull())
			jobListObject.output.deWatermark = outputNode["DeWatermark"].asString();
		if(!outputNode["Priority"].isNull())
			jobListObject.output.priority = outputNode["Priority"].asString();
		if(!outputNode["WaterMarkConfigUrl"].isNull())
			jobListObject.output.waterMarkConfigUrl = outputNode["WaterMarkConfigUrl"].asString();
		if(!outputNode["MergeConfigUrl"].isNull())
			jobListObject.output.mergeConfigUrl = outputNode["MergeConfigUrl"].asString();
		auto allWaterMarkList = value["WaterMarkList"]["WaterMark"];
		for (auto value : allWaterMarkList)
		{
			Job::Output::WaterMark waterMarkObject;
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
			jobListObject.output.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeList = value["MergeList"]["Merge"];
		for (auto value : allMergeList)
		{
			Job::Output::Merge mergeObject;
			if(!value["MergeURL"].isNull())
				mergeObject.mergeURL = value["MergeURL"].asString();
			if(!value["Start"].isNull())
				mergeObject.start = value["Start"].asString();
			if(!value["Duration"].isNull())
				mergeObject.duration = value["Duration"].asString();
			if(!value["RoleArn"].isNull())
				mergeObject.roleArn = value["RoleArn"].asString();
			jobListObject.output.mergeList.push_back(mergeObject);
		}
		auto allOpeningList = value["OpeningList"]["Opening"];
		for (auto value : allOpeningList)
		{
			Job::Output::Opening openingObject;
			if(!value["openUrl"].isNull())
				openingObject.openUrl = value["openUrl"].asString();
			if(!value["Start"].isNull())
				openingObject.start = value["Start"].asString();
			if(!value["Width"].isNull())
				openingObject.width = value["Width"].asString();
			if(!value["Height"].isNull())
				openingObject.height = value["Height"].asString();
			jobListObject.output.openingList.push_back(openingObject);
		}
		auto allTailSlateList = value["TailSlateList"]["TailSlate"];
		for (auto value : allTailSlateList)
		{
			Job::Output::TailSlate tailSlateObject;
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
			jobListObject.output.tailSlateList.push_back(tailSlateObject);
		}
		auto allOutSubtitleList = value["OutSubtitleList"]["OutSubtitle"];
		for (auto value : allOutSubtitleList)
		{
			Job::Output::OutSubtitle outSubtitleObject;
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
			jobListObject.output.outSubtitleList.push_back(outSubtitleObject);
		}
		auto outputFileNode = outputNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.output.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.output.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			jobListObject.output.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["RoleArn"].isNull())
			jobListObject.output.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		auto m3U8NonStandardSupportNode = outputNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["Md5Support"].isNull())
			jobListObject.output.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		if(!tSNode["SizeSupport"].isNull())
			jobListObject.output.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		auto propertiesNode = outputNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobListObject.output.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobListObject.output.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobListObject.output.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobListObject.output.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobListObject.output.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobListObject.output.properties.fileSize = propertiesNode["FileSize"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobListObject.output.properties.fileFormat = propertiesNode["FileFormat"].asString();
		auto allSourceLogos = value["SourceLogos"]["SourceLogo"];
		for (auto value : allSourceLogos)
		{
			Job::Output::Properties::SourceLogo sourceLogoObject;
			if(!value["Source"].isNull())
				sourceLogoObject.source = value["Source"].asString();
			jobListObject.output.properties.sourceLogos.push_back(sourceLogoObject);
		}
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamList = value["VideoStreamList"]["VideoStream"];
		for (auto value : allVideoStreamList)
		{
			Job::Output::Properties::Streams::VideoStream videoStreamObject;
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
			jobListObject.output.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamList = value["AudioStreamList"]["AudioStream"];
		for (auto value : allAudioStreamList)
		{
			Job::Output::Properties::Streams::AudioStream audioStreamObject;
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
			jobListObject.output.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamList = value["SubtitleStreamList"]["SubtitleStream"];
		for (auto value : allSubtitleStreamList)
		{
			Job::Output::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!value["Index"].isNull())
				subtitleStreamObject.index = value["Index"].asString();
			if(!value["Lang"].isNull())
				subtitleStreamObject.lang = value["Lang"].asString();
			jobListObject.output.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["NumStreams"].isNull())
			jobListObject.output.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobListObject.output.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["FormatName"].isNull())
			jobListObject.output.properties.format.formatName = formatNode["FormatName"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobListObject.output.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["StartTime"].isNull())
			jobListObject.output.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["Duration"].isNull())
			jobListObject.output.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Size"].isNull())
			jobListObject.output.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobListObject.output.properties.format.bitrate = formatNode["Bitrate"].asString();
		auto clipNode = outputNode["Clip"];
		auto timeSpanNode = clipNode["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobListObject.output.clip.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobListObject.output.clip.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto superResoNode = outputNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobListObject.output.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto subtitleConfigNode = outputNode["SubtitleConfig"];
		auto allSubtitleList = value["SubtitleList"]["Subtitle"];
		for (auto value : allSubtitleList)
		{
			Job::Output::SubtitleConfig::Subtitle subtitleObject;
			if(!value["Map"].isNull())
				subtitleObject.map = value["Map"].asString();
			jobListObject.output.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto allExtSubtitleList = value["ExtSubtitleList"]["ExtSubtitle"];
		for (auto value : allExtSubtitleList)
		{
			Job::Output::SubtitleConfig::ExtSubtitle extSubtitleObject;
			if(!value["FontName"].isNull())
				extSubtitleObject.fontName = value["FontName"].asString();
			if(!value["CharEnc"].isNull())
				extSubtitleObject.charEnc = value["CharEnc"].asString();
			auto input1Node = value["Input"];
			if(!input1Node["Bucket"].isNull())
				extSubtitleObject.input1.bucket = input1Node["Bucket"].asString();
			if(!input1Node["Location"].isNull())
				extSubtitleObject.input1.location = input1Node["Location"].asString();
			if(!input1Node["Object"].isNull())
				extSubtitleObject.input1.object = input1Node["Object"].asString();
			jobListObject.output.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto transConfigNode = outputNode["TransConfig"];
		if(!transConfigNode["TransMode"].isNull())
			jobListObject.output.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobListObject.output.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobListObject.output.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobListObject.output.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobListObject.output.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobListObject.output.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobListObject.output.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobListObject.output.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		auto muxConfigNode = outputNode["MuxConfig"];
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobListObject.output.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["Loop"].isNull())
			jobListObject.output.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["FinalDelay"].isNull())
			jobListObject.output.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobListObject.output.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobListObject.output.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		auto webpNode = muxConfigNode["Webp"];
		if(!webpNode["Loop"].isNull())
			jobListObject.output.muxConfig.webp.loop = webpNode["Loop"].asString();
		auto audioNode = outputNode["Audio"];
		if(!audioNode["Codec"].isNull())
			jobListObject.output.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Profile"].isNull())
			jobListObject.output.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobListObject.output.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobListObject.output.audio.bitrate = audioNode["Bitrate"].asString();
		if(!audioNode["Channels"].isNull())
			jobListObject.output.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Qscale"].isNull())
			jobListObject.output.audio.qscale = audioNode["Qscale"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Level"].isNull())
			jobListObject.output.audio.volume.level = volumeNode["Level"].asString();
		if(!volumeNode["Method"].isNull())
			jobListObject.output.audio.volume.method = volumeNode["Method"].asString();
		auto videoNode = outputNode["Video"];
		if(!videoNode["Codec"].isNull())
			jobListObject.output.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Profile"].isNull())
			jobListObject.output.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobListObject.output.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Crf"].isNull())
			jobListObject.output.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Width"].isNull())
			jobListObject.output.video.width = videoNode["Width"].asString();
		if(!videoNode["Height"].isNull())
			jobListObject.output.video.height = videoNode["Height"].asString();
		if(!videoNode["Fps"].isNull())
			jobListObject.output.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Gop"].isNull())
			jobListObject.output.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Preset"].isNull())
			jobListObject.output.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobListObject.output.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["Bufsize"].isNull())
			jobListObject.output.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobListObject.output.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobListObject.output.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Degrain"].isNull())
			jobListObject.output.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["Qscale"].isNull())
			jobListObject.output.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobListObject.output.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Pad"].isNull())
			jobListObject.output.video.pad = videoNode["Pad"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobListObject.output.video.maxFps = videoNode["MaxFps"].asString();
		if(!videoNode["ResoPriority"].isNull())
			jobListObject.output.video.resoPriority = videoNode["ResoPriority"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobListObject.output.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobListObject.output.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto containerNode = outputNode["Container"];
		if(!containerNode["Format"].isNull())
			jobListObject.output.container.format = containerNode["Format"].asString();
		auto encryptionNode = outputNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobListObject.output.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Id"].isNull())
			jobListObject.output.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["Key"].isNull())
			jobListObject.output.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobListObject.output.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobListObject.output.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobListObject.output.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
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

std::vector<std::string> QueryJobListResult::getNonExistJobIds()const
{
	return nonExistJobIds_;
}

std::vector<QueryJobListResult::Job> QueryJobListResult::getJobList()const
{
	return jobList_;
}

