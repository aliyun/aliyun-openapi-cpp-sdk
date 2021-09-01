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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto complexJobNode = value["ComplexJob"];
	if(!complexJobNode["CreationTime"].isNull())
		complexJob_.creationTime = complexJobNode["CreationTime"].asString();
	if(!complexJobNode["Percent"].isNull())
		complexJob_.percent = std::stol(complexJobNode["Percent"].asString());
	if(!complexJobNode["FinishTime"].isNull())
		complexJob_.finishTime = complexJobNode["FinishTime"].asString();
	if(!complexJobNode["State"].isNull())
		complexJob_.state = complexJobNode["State"].asString();
	if(!complexJobNode["Message"].isNull())
		complexJob_.message = complexJobNode["Message"].asString();
	if(!complexJobNode["JobId"].isNull())
		complexJob_.jobId = complexJobNode["JobId"].asString();
	if(!complexJobNode["Code"].isNull())
		complexJob_.code = complexJobNode["Code"].asString();
	if(!complexJobNode["PipelineId"].isNull())
		complexJob_.pipelineId = complexJobNode["PipelineId"].asString();
	auto allComplexEditingConfigsNode = complexJobNode["ComplexEditingConfigs"]["ComplexEditingConfigsItem"];
	for (auto complexJobNodeComplexEditingConfigsComplexEditingConfigsItem : allComplexEditingConfigsNode)
	{
		ComplexJob::ComplexEditingConfigsItem complexEditingConfigsItemObject;
		auto editingNode = value["Editing"];
		auto allClipListNode = editingNode["ClipList"]["Clip"];
		for (auto editingNodeClipListClip : allClipListNode)
		{
			ComplexJob::ComplexEditingConfigsItem::Editing::Clip clipObject;
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
				ComplexJob::ComplexEditingConfigsItem::Editing::Clip::Effect effectsObject;
				if(!editingNodeClipListClipEffectsEffect["Effect"].isNull())
					effectsObject.effect = editingNodeClipListClipEffectsEffect["Effect"].asString();
				if(!editingNodeClipListClipEffectsEffect["EffectConfig"].isNull())
					effectsObject.effectConfig = editingNodeClipListClipEffectsEffect["EffectConfig"].asString();
				clipObject.effects.push_back(effectsObject);
			}
			complexEditingConfigsItemObject.editing.clipList.push_back(clipObject);
		}
		auto timelineNode = editingNode["Timeline"];
		auto allTrackListNode = timelineNode["TrackList"]["Track"];
		for (auto timelineNodeTrackListTrack : allTrackListNode)
		{
			ComplexJob::ComplexEditingConfigsItem::Editing::Timeline::Track trackObject;
			if(!timelineNodeTrackListTrack["Type"].isNull())
				trackObject.type = timelineNodeTrackListTrack["Type"].asString();
			if(!timelineNodeTrackListTrack["Order"].isNull())
				trackObject.order = timelineNodeTrackListTrack["Order"].asString();
			if(!timelineNodeTrackListTrack["Id"].isNull())
				trackObject.id = timelineNodeTrackListTrack["Id"].asString();
			auto allClipsNode = timelineNodeTrackListTrack["Clips"]["Clip"];
			for (auto timelineNodeTrackListTrackClipsClip : allClipsNode)
			{
				ComplexJob::ComplexEditingConfigsItem::Editing::Timeline::Track::Clip1 clipsObject;
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
			complexEditingConfigsItemObject.editing.timeline.trackList.push_back(trackObject);
		}
		auto timelineConfigNode = timelineNode["TimelineConfig"];
		auto timelineConfigAudioNode = timelineConfigNode["TimelineConfigAudio"];
		if(!timelineConfigAudioNode["ChannelLayout"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigAudio.channelLayout = timelineConfigAudioNode["ChannelLayout"].asString();
		if(!timelineConfigAudioNode["Samplerate"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigAudio.samplerate = timelineConfigAudioNode["Samplerate"].asString();
		if(!timelineConfigAudioNode["Channels"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigAudio.channels = timelineConfigAudioNode["Channels"].asString();
		auto timelineConfigVideoNode = timelineConfigNode["TimelineConfigVideo"];
		if(!timelineConfigVideoNode["BgColor"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.bgColor = timelineConfigVideoNode["BgColor"].asString();
		if(!timelineConfigVideoNode["Width"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.width = timelineConfigVideoNode["Width"].asString();
		if(!timelineConfigVideoNode["RenderRatio"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.renderRatio = timelineConfigVideoNode["RenderRatio"].asString();
		if(!timelineConfigVideoNode["IsGpuData"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.isGpuData = timelineConfigVideoNode["IsGpuData"].asString();
		if(!timelineConfigVideoNode["Height"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.height = timelineConfigVideoNode["Height"].asString();
		if(!timelineConfigVideoNode["IsOneTrackData"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.isOneTrackData = timelineConfigVideoNode["IsOneTrackData"].asString();
		if(!timelineConfigVideoNode["Fps"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.fps = timelineConfigVideoNode["Fps"].asString();
		if(!timelineConfigVideoNode["ReclosePrec"].isNull())
			complexEditingConfigsItemObject.editing.timeline.timelineConfig.timelineConfigVideo.reclosePrec = timelineConfigVideoNode["ReclosePrec"].asString();
		complexJob_.complexEditingConfigs.push_back(complexEditingConfigsItemObject);
	}
	auto allInputsNode = complexJobNode["Inputs"]["InputsItem"];
	for (auto complexJobNodeInputsInputsItem : allInputsNode)
	{
		ComplexJob::InputsItem inputsItemObject;
		auto allEditingInputsNode = complexJobNodeInputsInputsItem["EditingInputs"]["EditingInput"];
		for (auto complexJobNodeInputsInputsItemEditingInputsEditingInput : allEditingInputsNode)
		{
			ComplexJob::InputsItem::EditingInput editingInputsObject;
			if(!complexJobNodeInputsInputsItemEditingInputsEditingInput["Id"].isNull())
				editingInputsObject.id = complexJobNodeInputsInputsItemEditingInputsEditingInput["Id"].asString();
			auto inputFileNode = value["InputFile"];
			if(!inputFileNode["Object"].isNull())
				editingInputsObject.inputFile.object = inputFileNode["Object"].asString();
			if(!inputFileNode["Location"].isNull())
				editingInputsObject.inputFile.location = inputFileNode["Location"].asString();
			if(!inputFileNode["Bucket"].isNull())
				editingInputsObject.inputFile.bucket = inputFileNode["Bucket"].asString();
			auto inputConfigNode = value["InputConfig"];
			if(!inputConfigNode["IsNormalSar"].isNull())
				editingInputsObject.inputConfig.isNormalSar = inputConfigNode["IsNormalSar"].asString();
			if(!inputConfigNode["DeinterlaceMethod"].isNull())
				editingInputsObject.inputConfig.deinterlaceMethod = inputConfigNode["DeinterlaceMethod"].asString();
			inputsItemObject.editingInputs.push_back(editingInputsObject);
		}
		complexJob_.inputs.push_back(inputsItemObject);
	}
	auto transcodeOutputNode = complexJobNode["transcodeOutput"];
	if(!transcodeOutputNode["DeWatermark"].isNull())
		complexJob_.transcodeOutput.deWatermark = transcodeOutputNode["DeWatermark"].asString();
	if(!transcodeOutputNode["WaterMarkConfigUrl"].isNull())
		complexJob_.transcodeOutput.waterMarkConfigUrl = transcodeOutputNode["WaterMarkConfigUrl"].asString();
	if(!transcodeOutputNode["Priority"].isNull())
		complexJob_.transcodeOutput.priority = transcodeOutputNode["Priority"].asString();
	if(!transcodeOutputNode["AudioStreamMap"].isNull())
		complexJob_.transcodeOutput.audioStreamMap = transcodeOutputNode["AudioStreamMap"].asString();
	if(!transcodeOutputNode["UserData"].isNull())
		complexJob_.transcodeOutput.userData = transcodeOutputNode["UserData"].asString();
	if(!transcodeOutputNode["VideoStreamMap"].isNull())
		complexJob_.transcodeOutput.videoStreamMap = transcodeOutputNode["VideoStreamMap"].asString();
	if(!transcodeOutputNode["Rotate"].isNull())
		complexJob_.transcodeOutput.rotate = transcodeOutputNode["Rotate"].asString();
	if(!transcodeOutputNode["MergeConfigUrl"].isNull())
		complexJob_.transcodeOutput.mergeConfigUrl = transcodeOutputNode["MergeConfigUrl"].asString();
	if(!transcodeOutputNode["TemplateId"].isNull())
		complexJob_.transcodeOutput.templateId = transcodeOutputNode["TemplateId"].asString();
	auto allWaterMarkListNode = transcodeOutputNode["WaterMarkList"]["WaterMark"];
	for (auto transcodeOutputNodeWaterMarkListWaterMark : allWaterMarkListNode)
	{
		ComplexJob::TranscodeOutput::WaterMark waterMarkObject;
		if(!transcodeOutputNodeWaterMarkListWaterMark["Type"].isNull())
			waterMarkObject.type = transcodeOutputNodeWaterMarkListWaterMark["Type"].asString();
		if(!transcodeOutputNodeWaterMarkListWaterMark["ReferPos"].isNull())
			waterMarkObject.referPos = transcodeOutputNodeWaterMarkListWaterMark["ReferPos"].asString();
		if(!transcodeOutputNodeWaterMarkListWaterMark["Dx"].isNull())
			waterMarkObject.dx = transcodeOutputNodeWaterMarkListWaterMark["Dx"].asString();
		if(!transcodeOutputNodeWaterMarkListWaterMark["Width"].isNull())
			waterMarkObject.width = transcodeOutputNodeWaterMarkListWaterMark["Width"].asString();
		if(!transcodeOutputNodeWaterMarkListWaterMark["Height"].isNull())
			waterMarkObject.height = transcodeOutputNodeWaterMarkListWaterMark["Height"].asString();
		if(!transcodeOutputNodeWaterMarkListWaterMark["WaterMarkTemplateId"].isNull())
			waterMarkObject.waterMarkTemplateId = transcodeOutputNodeWaterMarkListWaterMark["WaterMarkTemplateId"].asString();
		if(!transcodeOutputNodeWaterMarkListWaterMark["Dy"].isNull())
			waterMarkObject.dy = transcodeOutputNodeWaterMarkListWaterMark["Dy"].asString();
		auto inputFile2Node = value["InputFile"];
		if(!inputFile2Node["Object"].isNull())
			waterMarkObject.inputFile2.object = inputFile2Node["Object"].asString();
		if(!inputFile2Node["Location"].isNull())
			waterMarkObject.inputFile2.location = inputFile2Node["Location"].asString();
		if(!inputFile2Node["Bucket"].isNull())
			waterMarkObject.inputFile2.bucket = inputFile2Node["Bucket"].asString();
		complexJob_.transcodeOutput.waterMarkList.push_back(waterMarkObject);
	}
	auto allMergeListNode = transcodeOutputNode["MergeList"]["Merge"];
	for (auto transcodeOutputNodeMergeListMerge : allMergeListNode)
	{
		ComplexJob::TranscodeOutput::Merge mergeObject;
		if(!transcodeOutputNodeMergeListMerge["Start"].isNull())
			mergeObject.start = transcodeOutputNodeMergeListMerge["Start"].asString();
		if(!transcodeOutputNodeMergeListMerge["RoleArn"].isNull())
			mergeObject.roleArn = transcodeOutputNodeMergeListMerge["RoleArn"].asString();
		if(!transcodeOutputNodeMergeListMerge["MergeURL"].isNull())
			mergeObject.mergeURL = transcodeOutputNodeMergeListMerge["MergeURL"].asString();
		if(!transcodeOutputNodeMergeListMerge["Duration"].isNull())
			mergeObject.duration = transcodeOutputNodeMergeListMerge["Duration"].asString();
		complexJob_.transcodeOutput.mergeList.push_back(mergeObject);
	}
	auto videoNode = transcodeOutputNode["Video"];
	if(!videoNode["Bufsize"].isNull())
		complexJob_.transcodeOutput.video.bufsize = videoNode["Bufsize"].asString();
	if(!videoNode["Degrain"].isNull())
		complexJob_.transcodeOutput.video.degrain = videoNode["Degrain"].asString();
	if(!videoNode["PixFmt"].isNull())
		complexJob_.transcodeOutput.video.pixFmt = videoNode["PixFmt"].asString();
	if(!videoNode["Pad"].isNull())
		complexJob_.transcodeOutput.video.pad = videoNode["Pad"].asString();
	if(!videoNode["Codec"].isNull())
		complexJob_.transcodeOutput.video.codec = videoNode["Codec"].asString();
	if(!videoNode["Height"].isNull())
		complexJob_.transcodeOutput.video.height = videoNode["Height"].asString();
	if(!videoNode["Qscale"].isNull())
		complexJob_.transcodeOutput.video.qscale = videoNode["Qscale"].asString();
	if(!videoNode["Crop"].isNull())
		complexJob_.transcodeOutput.video.crop = videoNode["Crop"].asString();
	if(!videoNode["Bitrate"].isNull())
		complexJob_.transcodeOutput.video.bitrate = videoNode["Bitrate"].asString();
	if(!videoNode["Maxrate"].isNull())
		complexJob_.transcodeOutput.video.maxrate = videoNode["Maxrate"].asString();
	if(!videoNode["MaxFps"].isNull())
		complexJob_.transcodeOutput.video.maxFps = videoNode["MaxFps"].asString();
	if(!videoNode["Profile"].isNull())
		complexJob_.transcodeOutput.video.profile = videoNode["Profile"].asString();
	if(!videoNode["Crf"].isNull())
		complexJob_.transcodeOutput.video.crf = videoNode["Crf"].asString();
	if(!videoNode["Gop"].isNull())
		complexJob_.transcodeOutput.video.gop = videoNode["Gop"].asString();
	if(!videoNode["Width"].isNull())
		complexJob_.transcodeOutput.video.width = videoNode["Width"].asString();
	if(!videoNode["Fps"].isNull())
		complexJob_.transcodeOutput.video.fps = videoNode["Fps"].asString();
	if(!videoNode["Preset"].isNull())
		complexJob_.transcodeOutput.video.preset = videoNode["Preset"].asString();
	if(!videoNode["ScanMode"].isNull())
		complexJob_.transcodeOutput.video.scanMode = videoNode["ScanMode"].asString();
	auto bitrateBndNode = videoNode["BitrateBnd"];
	if(!bitrateBndNode["Max"].isNull())
		complexJob_.transcodeOutput.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
	if(!bitrateBndNode["Min"].isNull())
		complexJob_.transcodeOutput.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
	auto transConfigNode = transcodeOutputNode["TransConfig"];
	if(!transConfigNode["IsCheckAudioBitrate"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
	if(!transConfigNode["IsCheckReso"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
	if(!transConfigNode["TransMode"].isNull())
		complexJob_.transcodeOutput.transConfig.transMode = transConfigNode["TransMode"].asString();
	if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
	if(!transConfigNode["AdjDarMethod"].isNull())
		complexJob_.transcodeOutput.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
	if(!transConfigNode["Duration"].isNull())
		complexJob_.transcodeOutput.transConfig.duration = transConfigNode["Duration"].asString();
	if(!transConfigNode["IsCheckVideoBitrate"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
	if(!transConfigNode["IsCheckResoFail"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
	if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
		complexJob_.transcodeOutput.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
	auto encryptionNode = transcodeOutputNode["Encryption"];
	if(!encryptionNode["Type"].isNull())
		complexJob_.transcodeOutput.encryption.type = encryptionNode["Type"].asString();
	if(!encryptionNode["Key"].isNull())
		complexJob_.transcodeOutput.encryption.key = encryptionNode["Key"].asString();
	if(!encryptionNode["KeyType"].isNull())
		complexJob_.transcodeOutput.encryption.keyType = encryptionNode["KeyType"].asString();
	if(!encryptionNode["Id"].isNull())
		complexJob_.transcodeOutput.encryption.id = encryptionNode["Id"].asString();
	if(!encryptionNode["KeyUri"].isNull())
		complexJob_.transcodeOutput.encryption.keyUri = encryptionNode["KeyUri"].asString();
	if(!encryptionNode["SkipCnt"].isNull())
		complexJob_.transcodeOutput.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
	auto m3U8NonStandardSupportNode = transcodeOutputNode["M3U8NonStandardSupport"];
	auto tSNode = m3U8NonStandardSupportNode["TS"];
	if(!tSNode["SizeSupport"].isNull())
		complexJob_.transcodeOutput.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
	if(!tSNode["Md5Support"].isNull())
		complexJob_.transcodeOutput.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
	auto audioNode = transcodeOutputNode["Audio"];
	if(!audioNode["Profile"].isNull())
		complexJob_.transcodeOutput.audio.profile = audioNode["Profile"].asString();
	if(!audioNode["Codec"].isNull())
		complexJob_.transcodeOutput.audio.codec = audioNode["Codec"].asString();
	if(!audioNode["Samplerate"].isNull())
		complexJob_.transcodeOutput.audio.samplerate = audioNode["Samplerate"].asString();
	if(!audioNode["Qscale"].isNull())
		complexJob_.transcodeOutput.audio.qscale = audioNode["Qscale"].asString();
	if(!audioNode["Channels"].isNull())
		complexJob_.transcodeOutput.audio.channels = audioNode["Channels"].asString();
	if(!audioNode["Bitrate"].isNull())
		complexJob_.transcodeOutput.audio.bitrate = audioNode["Bitrate"].asString();
	auto volumeNode = audioNode["Volume"];
	if(!volumeNode["Method"].isNull())
		complexJob_.transcodeOutput.audio.volume.method = volumeNode["Method"].asString();
	if(!volumeNode["Level"].isNull())
		complexJob_.transcodeOutput.audio.volume.level = volumeNode["Level"].asString();
	auto superResoNode = transcodeOutputNode["SuperReso"];
	if(!superResoNode["IsHalfSample"].isNull())
		complexJob_.transcodeOutput.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
	auto digiWaterMarkNode = transcodeOutputNode["DigiWaterMark"];
	if(!digiWaterMarkNode["Type"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
	if(!digiWaterMarkNode["Alpha"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
	auto inputFile3Node = digiWaterMarkNode["InputFile"];
	if(!inputFile3Node["Object"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.inputFile3.object = inputFile3Node["Object"].asString();
	if(!inputFile3Node["Location"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.inputFile3.location = inputFile3Node["Location"].asString();
	if(!inputFile3Node["Bucket"].isNull())
		complexJob_.transcodeOutput.digiWaterMark.inputFile3.bucket = inputFile3Node["Bucket"].asString();
	auto outputFileNode = transcodeOutputNode["OutputFile"];
	if(!outputFileNode["RoleArn"].isNull())
		complexJob_.transcodeOutput.outputFile.roleArn = outputFileNode["RoleArn"].asString();
	if(!outputFileNode["Object"].isNull())
		complexJob_.transcodeOutput.outputFile.object = outputFileNode["Object"].asString();
	if(!outputFileNode["Location"].isNull())
		complexJob_.transcodeOutput.outputFile.location = outputFileNode["Location"].asString();
	if(!outputFileNode["Bucket"].isNull())
		complexJob_.transcodeOutput.outputFile.bucket = outputFileNode["Bucket"].asString();
	auto containerNode = transcodeOutputNode["Container"];
	if(!containerNode["Format"].isNull())
		complexJob_.transcodeOutput.container.format = containerNode["Format"].asString();
	auto clip4Node = transcodeOutputNode["Clip"];
	auto timeSpanNode = clip4Node["TimeSpan"];
	if(!timeSpanNode["Seek"].isNull())
		complexJob_.transcodeOutput.clip4.timeSpan.seek = timeSpanNode["Seek"].asString();
	if(!timeSpanNode["Duration"].isNull())
		complexJob_.transcodeOutput.clip4.timeSpan.duration = timeSpanNode["Duration"].asString();
	auto muxConfigNode = transcodeOutputNode["MuxConfig"];
	auto gifNode = muxConfigNode["Gif"];
	if(!gifNode["FinalDelay"].isNull())
		complexJob_.transcodeOutput.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
	if(!gifNode["DitherMode"].isNull())
		complexJob_.transcodeOutput.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
	if(!gifNode["Loop"].isNull())
		complexJob_.transcodeOutput.muxConfig.gif.loop = gifNode["Loop"].asString();
	if(!gifNode["IsCustomPalette"].isNull())
		complexJob_.transcodeOutput.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
	auto segmentNode = muxConfigNode["Segment"];
	if(!segmentNode["Duration"].isNull())
		complexJob_.transcodeOutput.muxConfig.segment.duration = segmentNode["Duration"].asString();
	auto subtitleConfigNode = transcodeOutputNode["SubtitleConfig"];
	auto allExtSubtitleListNode = subtitleConfigNode["ExtSubtitleList"]["ExtSubtitle"];
	for (auto subtitleConfigNodeExtSubtitleListExtSubtitle : allExtSubtitleListNode)
	{
		ComplexJob::TranscodeOutput::SubtitleConfig::ExtSubtitle extSubtitleObject;
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
		complexJob_.transcodeOutput.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
	}
	auto allSubtitleListNode = subtitleConfigNode["SubtitleList"]["Subtitle"];
	for (auto subtitleConfigNodeSubtitleListSubtitle : allSubtitleListNode)
	{
		ComplexJob::TranscodeOutput::SubtitleConfig::Subtitle subtitleObject;
		if(!subtitleConfigNodeSubtitleListSubtitle["Map"].isNull())
			subtitleObject.map = subtitleConfigNodeSubtitleListSubtitle["Map"].asString();
		complexJob_.transcodeOutput.subtitleConfig.subtitleList.push_back(subtitleObject);
	}
	auto propertiesNode = transcodeOutputNode["Properties"];
	if(!propertiesNode["Width"].isNull())
		complexJob_.transcodeOutput.properties.width = propertiesNode["Width"].asString();
	if(!propertiesNode["Height"].isNull())
		complexJob_.transcodeOutput.properties.height = propertiesNode["Height"].asString();
	if(!propertiesNode["Duration"].isNull())
		complexJob_.transcodeOutput.properties.duration = propertiesNode["Duration"].asString();
	if(!propertiesNode["Fps"].isNull())
		complexJob_.transcodeOutput.properties.fps = propertiesNode["Fps"].asString();
	if(!propertiesNode["Bitrate"].isNull())
		complexJob_.transcodeOutput.properties.bitrate = propertiesNode["Bitrate"].asString();
	if(!propertiesNode["FileFormat"].isNull())
		complexJob_.transcodeOutput.properties.fileFormat = propertiesNode["FileFormat"].asString();
	if(!propertiesNode["FileSize"].isNull())
		complexJob_.transcodeOutput.properties.fileSize = propertiesNode["FileSize"].asString();
	auto streamsNode = propertiesNode["Streams"];
	auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
	for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
	{
		ComplexJob::TranscodeOutput::Properties::Streams::VideoStream videoStreamObject;
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
		complexJob_.transcodeOutput.properties.streams.videoStreamList.push_back(videoStreamObject);
	}
	auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
	for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
	{
		ComplexJob::TranscodeOutput::Properties::Streams::AudioStream audioStreamObject;
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
		complexJob_.transcodeOutput.properties.streams.audioStreamList.push_back(audioStreamObject);
	}
	auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
	for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
	{
		ComplexJob::TranscodeOutput::Properties::Streams::SubtitleStream subtitleStreamObject;
		if(!streamsNodeSubtitleStreamListSubtitleStream["Index"].isNull())
			subtitleStreamObject.index = streamsNodeSubtitleStreamListSubtitleStream["Index"].asString();
		if(!streamsNodeSubtitleStreamListSubtitleStream["Lang"].isNull())
			subtitleStreamObject.lang = streamsNodeSubtitleStreamListSubtitleStream["Lang"].asString();
		complexJob_.transcodeOutput.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
	}
	auto formatNode = propertiesNode["Format"];
	if(!formatNode["StartTime"].isNull())
		complexJob_.transcodeOutput.properties.format.startTime = formatNode["StartTime"].asString();
	if(!formatNode["NumPrograms"].isNull())
		complexJob_.transcodeOutput.properties.format.numPrograms = formatNode["NumPrograms"].asString();
	if(!formatNode["Size"].isNull())
		complexJob_.transcodeOutput.properties.format.size = formatNode["Size"].asString();
	if(!formatNode["NumStreams"].isNull())
		complexJob_.transcodeOutput.properties.format.numStreams = formatNode["NumStreams"].asString();
	if(!formatNode["FormatLongName"].isNull())
		complexJob_.transcodeOutput.properties.format.formatLongName = formatNode["FormatLongName"].asString();
	if(!formatNode["Duration"].isNull())
		complexJob_.transcodeOutput.properties.format.duration = formatNode["Duration"].asString();
	if(!formatNode["Bitrate"].isNull())
		complexJob_.transcodeOutput.properties.format.bitrate = formatNode["Bitrate"].asString();
	if(!formatNode["FormatName"].isNull())
		complexJob_.transcodeOutput.properties.format.formatName = formatNode["FormatName"].asString();
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

