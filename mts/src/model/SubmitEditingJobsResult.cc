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
		auto allEditingInputsNode = jobNode["EditingInputs"]["EditingInput"];
		for (auto jobNodeEditingInputsEditingInput : allEditingInputsNode)
		{
			JobResult::Job::EditingInput editingInputObject;
			if(!jobNodeEditingInputsEditingInput["Id"].isNull())
				editingInputObject.id = jobNodeEditingInputsEditingInput["Id"].asString();
			auto inputFileNode = value["InputFile"];
			if(!inputFileNode["Object"].isNull())
				editingInputObject.inputFile.object = inputFileNode["Object"].asString();
			if(!inputFileNode["Location"].isNull())
				editingInputObject.inputFile.location = inputFileNode["Location"].asString();
			if(!inputFileNode["Bucket"].isNull())
				editingInputObject.inputFile.bucket = inputFileNode["Bucket"].asString();
			auto inputConfigNode = value["InputConfig"];
			if(!inputConfigNode["IsNormalSar"].isNull())
				editingInputObject.inputConfig.isNormalSar = inputConfigNode["IsNormalSar"].asString();
			if(!inputConfigNode["DeinterlaceMethod"].isNull())
				editingInputObject.inputConfig.deinterlaceMethod = inputConfigNode["DeinterlaceMethod"].asString();
			jobResultListObject.job.editingInputs.push_back(editingInputObject);
		}
		auto editingConfigNode = jobNode["EditingConfig"];
		if(!editingConfigNode["DeWatermark"].isNull())
			jobResultListObject.job.editingConfig.deWatermark = editingConfigNode["DeWatermark"].asString();
		if(!editingConfigNode["WaterMarkConfigUrl"].isNull())
			jobResultListObject.job.editingConfig.waterMarkConfigUrl = editingConfigNode["WaterMarkConfigUrl"].asString();
		if(!editingConfigNode["Priority"].isNull())
			jobResultListObject.job.editingConfig.priority = editingConfigNode["Priority"].asString();
		if(!editingConfigNode["AudioStreamMap"].isNull())
			jobResultListObject.job.editingConfig.audioStreamMap = editingConfigNode["AudioStreamMap"].asString();
		if(!editingConfigNode["UserData"].isNull())
			jobResultListObject.job.editingConfig.userData = editingConfigNode["UserData"].asString();
		if(!editingConfigNode["VideoStreamMap"].isNull())
			jobResultListObject.job.editingConfig.videoStreamMap = editingConfigNode["VideoStreamMap"].asString();
		if(!editingConfigNode["Rotate"].isNull())
			jobResultListObject.job.editingConfig.rotate = editingConfigNode["Rotate"].asString();
		if(!editingConfigNode["MergeConfigUrl"].isNull())
			jobResultListObject.job.editingConfig.mergeConfigUrl = editingConfigNode["MergeConfigUrl"].asString();
		if(!editingConfigNode["TemplateId"].isNull())
			jobResultListObject.job.editingConfig.templateId = editingConfigNode["TemplateId"].asString();
		auto allWaterMarkListNode = editingConfigNode["WaterMarkList"]["WaterMark"];
		for (auto editingConfigNodeWaterMarkListWaterMark : allWaterMarkListNode)
		{
			JobResult::Job::EditingConfig::WaterMark waterMarkObject;
			if(!editingConfigNodeWaterMarkListWaterMark["Type"].isNull())
				waterMarkObject.type = editingConfigNodeWaterMarkListWaterMark["Type"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["ReferPos"].isNull())
				waterMarkObject.referPos = editingConfigNodeWaterMarkListWaterMark["ReferPos"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Dx"].isNull())
				waterMarkObject.dx = editingConfigNodeWaterMarkListWaterMark["Dx"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Width"].isNull())
				waterMarkObject.width = editingConfigNodeWaterMarkListWaterMark["Width"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Height"].isNull())
				waterMarkObject.height = editingConfigNodeWaterMarkListWaterMark["Height"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["WaterMarkTemplateId"].isNull())
				waterMarkObject.waterMarkTemplateId = editingConfigNodeWaterMarkListWaterMark["WaterMarkTemplateId"].asString();
			if(!editingConfigNodeWaterMarkListWaterMark["Dy"].isNull())
				waterMarkObject.dy = editingConfigNodeWaterMarkListWaterMark["Dy"].asString();
			auto inputFile1Node = value["InputFile"];
			if(!inputFile1Node["Object"].isNull())
				waterMarkObject.inputFile1.object = inputFile1Node["Object"].asString();
			if(!inputFile1Node["Location"].isNull())
				waterMarkObject.inputFile1.location = inputFile1Node["Location"].asString();
			if(!inputFile1Node["Bucket"].isNull())
				waterMarkObject.inputFile1.bucket = inputFile1Node["Bucket"].asString();
			jobResultListObject.job.editingConfig.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeListNode = editingConfigNode["MergeList"]["Merge"];
		for (auto editingConfigNodeMergeListMerge : allMergeListNode)
		{
			JobResult::Job::EditingConfig::Merge mergeObject;
			if(!editingConfigNodeMergeListMerge["Start"].isNull())
				mergeObject.start = editingConfigNodeMergeListMerge["Start"].asString();
			if(!editingConfigNodeMergeListMerge["RoleArn"].isNull())
				mergeObject.roleArn = editingConfigNodeMergeListMerge["RoleArn"].asString();
			if(!editingConfigNodeMergeListMerge["MergeURL"].isNull())
				mergeObject.mergeURL = editingConfigNodeMergeListMerge["MergeURL"].asString();
			if(!editingConfigNodeMergeListMerge["Duration"].isNull())
				mergeObject.duration = editingConfigNodeMergeListMerge["Duration"].asString();
			jobResultListObject.job.editingConfig.mergeList.push_back(mergeObject);
		}
		auto videoNode = editingConfigNode["Video"];
		if(!videoNode["Bufsize"].isNull())
			jobResultListObject.job.editingConfig.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Degrain"].isNull())
			jobResultListObject.job.editingConfig.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobResultListObject.job.editingConfig.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Pad"].isNull())
			jobResultListObject.job.editingConfig.video.pad = videoNode["Pad"].asString();
		if(!videoNode["Codec"].isNull())
			jobResultListObject.job.editingConfig.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Height"].isNull())
			jobResultListObject.job.editingConfig.video.height = videoNode["Height"].asString();
		if(!videoNode["Qscale"].isNull())
			jobResultListObject.job.editingConfig.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobResultListObject.job.editingConfig.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobResultListObject.job.editingConfig.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobResultListObject.job.editingConfig.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobResultListObject.job.editingConfig.video.maxFps = videoNode["MaxFps"].asString();
		if(!videoNode["Profile"].isNull())
			jobResultListObject.job.editingConfig.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Crf"].isNull())
			jobResultListObject.job.editingConfig.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Gop"].isNull())
			jobResultListObject.job.editingConfig.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Width"].isNull())
			jobResultListObject.job.editingConfig.video.width = videoNode["Width"].asString();
		if(!videoNode["Fps"].isNull())
			jobResultListObject.job.editingConfig.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Preset"].isNull())
			jobResultListObject.job.editingConfig.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobResultListObject.job.editingConfig.video.scanMode = videoNode["ScanMode"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobResultListObject.job.editingConfig.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobResultListObject.job.editingConfig.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto transConfigNode = editingConfigNode["TransConfig"];
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["TransMode"].isNull())
			jobResultListObject.job.editingConfig.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobResultListObject.job.editingConfig.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.transConfig.duration = transConfigNode["Duration"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobResultListObject.job.editingConfig.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		auto encryptionNode = editingConfigNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobResultListObject.job.editingConfig.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Key"].isNull())
			jobResultListObject.job.editingConfig.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobResultListObject.job.editingConfig.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["Id"].isNull())
			jobResultListObject.job.editingConfig.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobResultListObject.job.editingConfig.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobResultListObject.job.editingConfig.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
		auto m3U8NonStandardSupportNode = editingConfigNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["SizeSupport"].isNull())
			jobResultListObject.job.editingConfig.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		if(!tSNode["Md5Support"].isNull())
			jobResultListObject.job.editingConfig.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		auto audioNode = editingConfigNode["Audio"];
		if(!audioNode["Profile"].isNull())
			jobResultListObject.job.editingConfig.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Codec"].isNull())
			jobResultListObject.job.editingConfig.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobResultListObject.job.editingConfig.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Qscale"].isNull())
			jobResultListObject.job.editingConfig.audio.qscale = audioNode["Qscale"].asString();
		if(!audioNode["Channels"].isNull())
			jobResultListObject.job.editingConfig.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobResultListObject.job.editingConfig.audio.bitrate = audioNode["Bitrate"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Method"].isNull())
			jobResultListObject.job.editingConfig.audio.volume.method = volumeNode["Method"].asString();
		if(!volumeNode["Level"].isNull())
			jobResultListObject.job.editingConfig.audio.volume.level = volumeNode["Level"].asString();
		auto superResoNode = editingConfigNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobResultListObject.job.editingConfig.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto digiWaterMarkNode = editingConfigNode["DigiWaterMark"];
		if(!digiWaterMarkNode["Type"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
		if(!digiWaterMarkNode["Alpha"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
		auto inputFile2Node = digiWaterMarkNode["InputFile"];
		if(!inputFile2Node["Object"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.inputFile2.object = inputFile2Node["Object"].asString();
		if(!inputFile2Node["Location"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.inputFile2.location = inputFile2Node["Location"].asString();
		if(!inputFile2Node["Bucket"].isNull())
			jobResultListObject.job.editingConfig.digiWaterMark.inputFile2.bucket = inputFile2Node["Bucket"].asString();
		auto outputFileNode = editingConfigNode["OutputFile"];
		if(!outputFileNode["RoleArn"].isNull())
			jobResultListObject.job.editingConfig.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		if(!outputFileNode["Object"].isNull())
			jobResultListObject.job.editingConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			jobResultListObject.job.editingConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			jobResultListObject.job.editingConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto editingNode = editingConfigNode["Editing"];
		auto allClipListNode = editingNode["ClipList"]["Clip"];
		for (auto editingNodeClipListClip : allClipListNode)
		{
			JobResult::Job::EditingConfig::Editing::Clip clipObject;
			if(!editingNodeClipListClip["Type"].isNull())
				clipObject.type = editingNodeClipListClip["Type"].asString();
			if(!editingNodeClipListClip["SourceID"].isNull())
				clipObject.sourceID = editingNodeClipListClip["SourceID"].asString();
			if(!editingNodeClipListClip["SourceType"].isNull())
				clipObject.sourceType = editingNodeClipListClip["SourceType"].asString();
			if(!editingNodeClipListClip["SourceStrmMap"].isNull())
				clipObject.sourceStrmMap = editingNodeClipListClip["SourceStrmMap"].asString();
			if(!editingNodeClipListClip["Out"].isNull())
				clipObject.out = editingNodeClipListClip["Out"].asString();
			if(!editingNodeClipListClip["In"].isNull())
				clipObject.in = editingNodeClipListClip["In"].asString();
			if(!editingNodeClipListClip["Id"].isNull())
				clipObject.id = editingNodeClipListClip["Id"].asString();
			auto allEffectsNode = editingNodeClipListClip["Effects"]["Effect"];
			for (auto editingNodeClipListClipEffectsEffect : allEffectsNode)
			{
				JobResult::Job::EditingConfig::Editing::Clip::Effect effectsObject;
				if(!editingNodeClipListClipEffectsEffect["Effect"].isNull())
					effectsObject.effect = editingNodeClipListClipEffectsEffect["Effect"].asString();
				if(!editingNodeClipListClipEffectsEffect["EffectConfig"].isNull())
					effectsObject.effectConfig = editingNodeClipListClipEffectsEffect["EffectConfig"].asString();
				clipObject.effects.push_back(effectsObject);
			}
			jobResultListObject.job.editingConfig.editing.clipList.push_back(clipObject);
		}
		auto timelineNode = editingNode["Timeline"];
		auto allTrackListNode = timelineNode["TrackList"]["Track"];
		for (auto timelineNodeTrackListTrack : allTrackListNode)
		{
			JobResult::Job::EditingConfig::Editing::Timeline::Track trackObject;
			if(!timelineNodeTrackListTrack["Type"].isNull())
				trackObject.type = timelineNodeTrackListTrack["Type"].asString();
			if(!timelineNodeTrackListTrack["Order"].isNull())
				trackObject.order = timelineNodeTrackListTrack["Order"].asString();
			if(!timelineNodeTrackListTrack["Id"].isNull())
				trackObject.id = timelineNodeTrackListTrack["Id"].asString();
			auto allClipsNode = timelineNodeTrackListTrack["Clips"]["Clip"];
			for (auto timelineNodeTrackListTrackClipsClip : allClipsNode)
			{
				JobResult::Job::EditingConfig::Editing::Timeline::Track::Clip3 clipsObject;
				if(!timelineNodeTrackListTrackClipsClip["Out"].isNull())
					clipsObject.out = timelineNodeTrackListTrackClipsClip["Out"].asString();
				if(!timelineNodeTrackListTrackClipsClip["In"].isNull())
					clipsObject.in = timelineNodeTrackListTrackClipsClip["In"].asString();
				if(!timelineNodeTrackListTrackClipsClip["clipID"].isNull())
					clipsObject.clipID = timelineNodeTrackListTrackClipsClip["clipID"].asString();
				auto clipsConfigNode = value["ClipsConfig"];
				auto clipsConfigVideoNode = clipsConfigNode["ClipsConfigVideo"];
				if(!clipsConfigVideoNode["T"].isNull())
					clipsObject.clipsConfig.clipsConfigVideo.t = clipsConfigVideoNode["T"].asString();
				if(!clipsConfigVideoNode["L"].isNull())
					clipsObject.clipsConfig.clipsConfigVideo.l = clipsConfigVideoNode["L"].asString();
				trackObject.clips.push_back(clipsObject);
			}
			jobResultListObject.job.editingConfig.editing.timeline.trackList.push_back(trackObject);
		}
		auto timelineConfigNode = timelineNode["TimelineConfig"];
		auto timelineConfigAudioNode = timelineConfigNode["TimelineConfigAudio"];
		if(!timelineConfigAudioNode["ChannelLayout"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.channelLayout = timelineConfigAudioNode["ChannelLayout"].asString();
		if(!timelineConfigAudioNode["Samplerate"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.samplerate = timelineConfigAudioNode["Samplerate"].asString();
		if(!timelineConfigAudioNode["Channels"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigAudio.channels = timelineConfigAudioNode["Channels"].asString();
		auto timelineConfigVideoNode = timelineConfigNode["TimelineConfigVideo"];
		if(!timelineConfigVideoNode["BgColor"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.bgColor = timelineConfigVideoNode["BgColor"].asString();
		if(!timelineConfigVideoNode["Width"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.width = timelineConfigVideoNode["Width"].asString();
		if(!timelineConfigVideoNode["RenderRatio"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.renderRatio = timelineConfigVideoNode["RenderRatio"].asString();
		if(!timelineConfigVideoNode["IsGpuData"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.isGpuData = timelineConfigVideoNode["IsGpuData"].asString();
		if(!timelineConfigVideoNode["Height"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.height = timelineConfigVideoNode["Height"].asString();
		if(!timelineConfigVideoNode["IsOneTrackData"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.isOneTrackData = timelineConfigVideoNode["IsOneTrackData"].asString();
		if(!timelineConfigVideoNode["Fps"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.fps = timelineConfigVideoNode["Fps"].asString();
		if(!timelineConfigVideoNode["ReclosePrec"].isNull())
			jobResultListObject.job.editingConfig.editing.timeline.timelineConfig.timelineConfigVideo.reclosePrec = timelineConfigVideoNode["ReclosePrec"].asString();
		auto containerNode = editingConfigNode["Container"];
		if(!containerNode["Format"].isNull())
			jobResultListObject.job.editingConfig.container.format = containerNode["Format"].asString();
		auto clip4Node = editingConfigNode["Clip"];
		auto timeSpanNode = clip4Node["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobResultListObject.job.editingConfig.clip4.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.clip4.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto muxConfigNode = editingConfigNode["MuxConfig"];
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["FinalDelay"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		if(!gifNode["Loop"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto subtitleConfigNode = editingConfigNode["SubtitleConfig"];
		auto allExtSubtitleListNode = subtitleConfigNode["ExtSubtitleList"]["ExtSubtitle"];
		for (auto subtitleConfigNodeExtSubtitleListExtSubtitle : allExtSubtitleListNode)
		{
			JobResult::Job::EditingConfig::SubtitleConfig::ExtSubtitle extSubtitleObject;
			if(!subtitleConfigNodeExtSubtitleListExtSubtitle["CharEnc"].isNull())
				extSubtitleObject.charEnc = subtitleConfigNodeExtSubtitleListExtSubtitle["CharEnc"].asString();
			if(!subtitleConfigNodeExtSubtitleListExtSubtitle["FontName"].isNull())
				extSubtitleObject.fontName = subtitleConfigNodeExtSubtitleListExtSubtitle["FontName"].asString();
			auto inputNode = value["Input"];
			if(!inputNode["Object"].isNull())
				extSubtitleObject.input.object = inputNode["Object"].asString();
			if(!inputNode["Location"].isNull())
				extSubtitleObject.input.location = inputNode["Location"].asString();
			if(!inputNode["Bucket"].isNull())
				extSubtitleObject.input.bucket = inputNode["Bucket"].asString();
			jobResultListObject.job.editingConfig.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto allSubtitleListNode = subtitleConfigNode["SubtitleList"]["Subtitle"];
		for (auto subtitleConfigNodeSubtitleListSubtitle : allSubtitleListNode)
		{
			JobResult::Job::EditingConfig::SubtitleConfig::Subtitle subtitleObject;
			if(!subtitleConfigNodeSubtitleListSubtitle["Map"].isNull())
				subtitleObject.map = subtitleConfigNodeSubtitleListSubtitle["Map"].asString();
			jobResultListObject.job.editingConfig.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto propertiesNode = editingConfigNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobResultListObject.job.editingConfig.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobResultListObject.job.editingConfig.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobResultListObject.job.editingConfig.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobResultListObject.job.editingConfig.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobResultListObject.job.editingConfig.properties.fileFormat = propertiesNode["FileFormat"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobResultListObject.job.editingConfig.properties.fileSize = propertiesNode["FileSize"].asString();
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
		for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
		{
			JobResult::Job::EditingConfig::Properties::Streams::VideoStream videoStreamObject;
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
			jobResultListObject.job.editingConfig.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
		for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
		{
			JobResult::Job::EditingConfig::Properties::Streams::AudioStream audioStreamObject;
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
			jobResultListObject.job.editingConfig.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
		for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
		{
			JobResult::Job::EditingConfig::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!streamsNodeSubtitleStreamListSubtitleStream["Index"].isNull())
				subtitleStreamObject.index = streamsNodeSubtitleStreamListSubtitleStream["Index"].asString();
			if(!streamsNodeSubtitleStreamListSubtitleStream["Lang"].isNull())
				subtitleStreamObject.lang = streamsNodeSubtitleStreamListSubtitleStream["Lang"].asString();
			jobResultListObject.job.editingConfig.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["StartTime"].isNull())
			jobResultListObject.job.editingConfig.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobResultListObject.job.editingConfig.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["Size"].isNull())
			jobResultListObject.job.editingConfig.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["NumStreams"].isNull())
			jobResultListObject.job.editingConfig.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobResultListObject.job.editingConfig.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["Duration"].isNull())
			jobResultListObject.job.editingConfig.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobResultListObject.job.editingConfig.properties.format.bitrate = formatNode["Bitrate"].asString();
		if(!formatNode["FormatName"].isNull())
			jobResultListObject.job.editingConfig.properties.format.formatName = formatNode["FormatName"].asString();
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

