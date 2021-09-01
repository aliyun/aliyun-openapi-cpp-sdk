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
	auto allJobResultListNode = value["JobResultList"]["JobResult"];
	for (auto valueJobResultListJobResult : allJobResultListNode)
	{
		JobResult jobResultListObject;
		if(!valueJobResultListJobResult["Success"].isNull())
			jobResultListObject.success = valueJobResultListJobResult["Success"].asString() == "true";
		if(!valueJobResultListJobResult["Code"].isNull())
			jobResultListObject.code = valueJobResultListJobResult["Code"].asString();
		if(!valueJobResultListJobResult["Message"].isNull())
			jobResultListObject.message = valueJobResultListJobResult["Message"].asString();
		auto jobNode = value["Job"];
		if(!jobNode["CreationTime"].isNull())
			jobResultListObject.job.creationTime = jobNode["CreationTime"].asString();
		if(!jobNode["Percent"].isNull())
			jobResultListObject.job.percent = std::stol(jobNode["Percent"].asString());
		if(!jobNode["FinishTime"].isNull())
			jobResultListObject.job.finishTime = jobNode["FinishTime"].asString();
		if(!jobNode["State"].isNull())
			jobResultListObject.job.state = jobNode["State"].asString();
		if(!jobNode["JobId"].isNull())
			jobResultListObject.job.jobId = jobNode["JobId"].asString();
		if(!jobNode["Code"].isNull())
			jobResultListObject.job.code = jobNode["Code"].asString();
		if(!jobNode["Message"].isNull())
			jobResultListObject.job.message = jobNode["Message"].asString();
		if(!jobNode["PipelineId"].isNull())
			jobResultListObject.job.pipelineId = jobNode["PipelineId"].asString();
		auto outputNode = jobNode["Output"];
		if(!outputNode["WaterMarkConfigUrl"].isNull())
			jobResultListObject.job.output.waterMarkConfigUrl = outputNode["WaterMarkConfigUrl"].asString();
		if(!outputNode["DeWatermark"].isNull())
			jobResultListObject.job.output.deWatermark = outputNode["DeWatermark"].asString();
		if(!outputNode["Priority"].isNull())
			jobResultListObject.job.output.priority = outputNode["Priority"].asString();
		if(!outputNode["AudioStreamMap"].isNull())
			jobResultListObject.job.output.audioStreamMap = outputNode["AudioStreamMap"].asString();
		if(!outputNode["UserData"].isNull())
			jobResultListObject.job.output.userData = outputNode["UserData"].asString();
		if(!outputNode["VideoStreamMap"].isNull())
			jobResultListObject.job.output.videoStreamMap = outputNode["VideoStreamMap"].asString();
		if(!outputNode["Rotate"].isNull())
			jobResultListObject.job.output.rotate = outputNode["Rotate"].asString();
		if(!outputNode["MergeConfigUrl"].isNull())
			jobResultListObject.job.output.mergeConfigUrl = outputNode["MergeConfigUrl"].asString();
		if(!outputNode["TemplateId"].isNull())
			jobResultListObject.job.output.templateId = outputNode["TemplateId"].asString();
		auto allWaterMarkListNode = outputNode["WaterMarkList"]["WaterMark"];
		for (auto outputNodeWaterMarkListWaterMark : allWaterMarkListNode)
		{
			JobResult::Job::Output::WaterMark waterMarkObject;
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
			jobResultListObject.job.output.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeListNode = outputNode["MergeList"]["Merge"];
		for (auto outputNodeMergeListMerge : allMergeListNode)
		{
			JobResult::Job::Output::Merge mergeObject;
			if(!outputNodeMergeListMerge["Start"].isNull())
				mergeObject.start = outputNodeMergeListMerge["Start"].asString();
			if(!outputNodeMergeListMerge["RoleArn"].isNull())
				mergeObject.roleArn = outputNodeMergeListMerge["RoleArn"].asString();
			if(!outputNodeMergeListMerge["MergeURL"].isNull())
				mergeObject.mergeURL = outputNodeMergeListMerge["MergeURL"].asString();
			if(!outputNodeMergeListMerge["Duration"].isNull())
				mergeObject.duration = outputNodeMergeListMerge["Duration"].asString();
			jobResultListObject.job.output.mergeList.push_back(mergeObject);
		}
		auto allOutSubtitleListNode = outputNode["OutSubtitleList"]["OutSubtitle"];
		for (auto outputNodeOutSubtitleListOutSubtitle : allOutSubtitleListNode)
		{
			JobResult::Job::Output::OutSubtitle outSubtitleObject;
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
			jobResultListObject.job.output.outSubtitleList.push_back(outSubtitleObject);
		}
		auto allAmixListNode = outputNode["AmixList"]["Amix"];
		for (auto outputNodeAmixListAmix : allAmixListNode)
		{
			JobResult::Job::Output::Amix amixObject;
			if(!outputNodeAmixListAmix["Map"].isNull())
				amixObject.map = outputNodeAmixListAmix["Map"].asString();
			if(!outputNodeAmixListAmix["Start"].isNull())
				amixObject.start = outputNodeAmixListAmix["Start"].asString();
			if(!outputNodeAmixListAmix["AmixURL"].isNull())
				amixObject.amixURL = outputNodeAmixListAmix["AmixURL"].asString();
			if(!outputNodeAmixListAmix["Duration"].isNull())
				amixObject.duration = outputNodeAmixListAmix["Duration"].asString();
			if(!outputNodeAmixListAmix["MixDurMode"].isNull())
				amixObject.mixDurMode = outputNodeAmixListAmix["MixDurMode"].asString();
			jobResultListObject.job.output.amixList.push_back(amixObject);
		}
		auto allOpeningListNode = outputNode["OpeningList"]["Opening"];
		for (auto outputNodeOpeningListOpening : allOpeningListNode)
		{
			JobResult::Job::Output::Opening openingObject;
			if(!outputNodeOpeningListOpening["openUrl"].isNull())
				openingObject.openUrl = outputNodeOpeningListOpening["openUrl"].asString();
			if(!outputNodeOpeningListOpening["Start"].isNull())
				openingObject.start = outputNodeOpeningListOpening["Start"].asString();
			if(!outputNodeOpeningListOpening["Width"].isNull())
				openingObject.width = outputNodeOpeningListOpening["Width"].asString();
			if(!outputNodeOpeningListOpening["Height"].isNull())
				openingObject.height = outputNodeOpeningListOpening["Height"].asString();
			jobResultListObject.job.output.openingList.push_back(openingObject);
		}
		auto allTailSlateListNode = outputNode["TailSlateList"]["TailSlate"];
		for (auto outputNodeTailSlateListTailSlate : allTailSlateListNode)
		{
			JobResult::Job::Output::TailSlate tailSlateObject;
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
			jobResultListObject.job.output.tailSlateList.push_back(tailSlateObject);
		}
		auto videoNode = outputNode["Video"];
		if(!videoNode["Bufsize"].isNull())
			jobResultListObject.job.output.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Degrain"].isNull())
			jobResultListObject.job.output.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobResultListObject.job.output.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Pad"].isNull())
			jobResultListObject.job.output.video.pad = videoNode["Pad"].asString();
		if(!videoNode["Codec"].isNull())
			jobResultListObject.job.output.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Height"].isNull())
			jobResultListObject.job.output.video.height = videoNode["Height"].asString();
		if(!videoNode["Qscale"].isNull())
			jobResultListObject.job.output.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobResultListObject.job.output.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobResultListObject.job.output.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobResultListObject.job.output.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobResultListObject.job.output.video.maxFps = videoNode["MaxFps"].asString();
		if(!videoNode["Profile"].isNull())
			jobResultListObject.job.output.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Crf"].isNull())
			jobResultListObject.job.output.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Gop"].isNull())
			jobResultListObject.job.output.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Width"].isNull())
			jobResultListObject.job.output.video.width = videoNode["Width"].asString();
		if(!videoNode["Fps"].isNull())
			jobResultListObject.job.output.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Preset"].isNull())
			jobResultListObject.job.output.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobResultListObject.job.output.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["ResoPriority"].isNull())
			jobResultListObject.job.output.video.resoPriority = videoNode["ResoPriority"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobResultListObject.job.output.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobResultListObject.job.output.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto transConfigNode = outputNode["TransConfig"];
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobResultListObject.job.output.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["TransMode"].isNull())
			jobResultListObject.job.output.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobResultListObject.job.output.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobResultListObject.job.output.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobResultListObject.job.output.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobResultListObject.job.output.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobResultListObject.job.output.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobResultListObject.job.output.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		auto encryptionNode = outputNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobResultListObject.job.output.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Key"].isNull())
			jobResultListObject.job.output.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobResultListObject.job.output.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["Id"].isNull())
			jobResultListObject.job.output.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobResultListObject.job.output.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobResultListObject.job.output.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
		auto m3U8NonStandardSupportNode = outputNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["SizeSupport"].isNull())
			jobResultListObject.job.output.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		if(!tSNode["Md5Support"].isNull())
			jobResultListObject.job.output.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		auto audioNode = outputNode["Audio"];
		if(!audioNode["Profile"].isNull())
			jobResultListObject.job.output.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Codec"].isNull())
			jobResultListObject.job.output.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobResultListObject.job.output.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Qscale"].isNull())
			jobResultListObject.job.output.audio.qscale = audioNode["Qscale"].asString();
		if(!audioNode["Channels"].isNull())
			jobResultListObject.job.output.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobResultListObject.job.output.audio.bitrate = audioNode["Bitrate"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Method"].isNull())
			jobResultListObject.job.output.audio.volume.method = volumeNode["Method"].asString();
		if(!volumeNode["Level"].isNull())
			jobResultListObject.job.output.audio.volume.level = volumeNode["Level"].asString();
		auto superResoNode = outputNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobResultListObject.job.output.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto digiWaterMarkNode = outputNode["DigiWaterMark"];
		if(!digiWaterMarkNode["Type"].isNull())
			jobResultListObject.job.output.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
		if(!digiWaterMarkNode["Alpha"].isNull())
			jobResultListObject.job.output.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
		auto inputFile1Node = digiWaterMarkNode["InputFile"];
		if(!inputFile1Node["Object"].isNull())
			jobResultListObject.job.output.digiWaterMark.inputFile1.object = inputFile1Node["Object"].asString();
		if(!inputFile1Node["Location"].isNull())
			jobResultListObject.job.output.digiWaterMark.inputFile1.location = inputFile1Node["Location"].asString();
		if(!inputFile1Node["Bucket"].isNull())
			jobResultListObject.job.output.digiWaterMark.inputFile1.bucket = inputFile1Node["Bucket"].asString();
		auto outputFileNode = outputNode["OutputFile"];
		if(!outputFileNode["RoleArn"].isNull())
			jobResultListObject.job.output.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		if(!outputFileNode["Object"].isNull())
			jobResultListObject.job.output.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			jobResultListObject.job.output.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			jobResultListObject.job.output.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto containerNode = outputNode["Container"];
		if(!containerNode["Format"].isNull())
			jobResultListObject.job.output.container.format = containerNode["Format"].asString();
		auto clipNode = outputNode["Clip"];
		auto timeSpanNode = clipNode["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobResultListObject.job.output.clip.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobResultListObject.job.output.clip.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto muxConfigNode = outputNode["MuxConfig"];
		auto webpNode = muxConfigNode["Webp"];
		if(!webpNode["Loop"].isNull())
			jobResultListObject.job.output.muxConfig.webp.loop = webpNode["Loop"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["FinalDelay"].isNull())
			jobResultListObject.job.output.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobResultListObject.job.output.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		if(!gifNode["Loop"].isNull())
			jobResultListObject.job.output.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobResultListObject.job.output.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobResultListObject.job.output.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto subtitleConfigNode = outputNode["SubtitleConfig"];
		auto allExtSubtitleListNode = subtitleConfigNode["ExtSubtitleList"]["ExtSubtitle"];
		for (auto subtitleConfigNodeExtSubtitleListExtSubtitle : allExtSubtitleListNode)
		{
			JobResult::Job::Output::SubtitleConfig::ExtSubtitle extSubtitleObject;
			if(!subtitleConfigNodeExtSubtitleListExtSubtitle["CharEnc"].isNull())
				extSubtitleObject.charEnc = subtitleConfigNodeExtSubtitleListExtSubtitle["CharEnc"].asString();
			if(!subtitleConfigNodeExtSubtitleListExtSubtitle["FontName"].isNull())
				extSubtitleObject.fontName = subtitleConfigNodeExtSubtitleListExtSubtitle["FontName"].asString();
			auto input2Node = value["Input"];
			if(!input2Node["Object"].isNull())
				extSubtitleObject.input2.object = input2Node["Object"].asString();
			if(!input2Node["Location"].isNull())
				extSubtitleObject.input2.location = input2Node["Location"].asString();
			if(!input2Node["Bucket"].isNull())
				extSubtitleObject.input2.bucket = input2Node["Bucket"].asString();
			jobResultListObject.job.output.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto allSubtitleListNode = subtitleConfigNode["SubtitleList"]["Subtitle"];
		for (auto subtitleConfigNodeSubtitleListSubtitle : allSubtitleListNode)
		{
			JobResult::Job::Output::SubtitleConfig::Subtitle subtitleObject;
			if(!subtitleConfigNodeSubtitleListSubtitle["Map"].isNull())
				subtitleObject.map = subtitleConfigNodeSubtitleListSubtitle["Map"].asString();
			jobResultListObject.job.output.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto propertiesNode = outputNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobResultListObject.job.output.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobResultListObject.job.output.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobResultListObject.job.output.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobResultListObject.job.output.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobResultListObject.job.output.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobResultListObject.job.output.properties.fileFormat = propertiesNode["FileFormat"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobResultListObject.job.output.properties.fileSize = propertiesNode["FileSize"].asString();
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
		for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
		{
			JobResult::Job::Output::Properties::Streams::VideoStream videoStreamObject;
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
			jobResultListObject.job.output.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
		for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
		{
			JobResult::Job::Output::Properties::Streams::AudioStream audioStreamObject;
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
			jobResultListObject.job.output.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
		for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
		{
			JobResult::Job::Output::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!streamsNodeSubtitleStreamListSubtitleStream["Index"].isNull())
				subtitleStreamObject.index = streamsNodeSubtitleStreamListSubtitleStream["Index"].asString();
			if(!streamsNodeSubtitleStreamListSubtitleStream["Lang"].isNull())
				subtitleStreamObject.lang = streamsNodeSubtitleStreamListSubtitleStream["Lang"].asString();
			jobResultListObject.job.output.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["StartTime"].isNull())
			jobResultListObject.job.output.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobResultListObject.job.output.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["Size"].isNull())
			jobResultListObject.job.output.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["NumStreams"].isNull())
			jobResultListObject.job.output.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobResultListObject.job.output.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["Duration"].isNull())
			jobResultListObject.job.output.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobResultListObject.job.output.properties.format.bitrate = formatNode["Bitrate"].asString();
		if(!formatNode["FormatName"].isNull())
			jobResultListObject.job.output.properties.format.formatName = formatNode["FormatName"].asString();
		auto inputNode = jobNode["Input"];
		if(!inputNode["Object"].isNull())
			jobResultListObject.job.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			jobResultListObject.job.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			jobResultListObject.job.input.bucket = inputNode["Bucket"].asString();
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

