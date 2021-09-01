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
		if(!valueJobListJob["Message"].isNull())
			jobListObject.message = valueJobListJob["Message"].asString();
		if(!valueJobListJob["JobId"].isNull())
			jobListObject.jobId = valueJobListJob["JobId"].asString();
		if(!valueJobListJob["Code"].isNull())
			jobListObject.code = valueJobListJob["Code"].asString();
		if(!valueJobListJob["PipelineId"].isNull())
			jobListObject.pipelineId = valueJobListJob["PipelineId"].asString();
		auto allComplexEditingConfigsNode = valueJobListJob["ComplexEditingConfigs"]["ComplexEditingConfigsItem"];
		for (auto valueJobListJobComplexEditingConfigsComplexEditingConfigsItem : allComplexEditingConfigsNode)
		{
			Job::ComplexEditingConfigsItem complexEditingConfigsObject;
			auto editingNode = value["Editing"];
			auto allClipListNode = editingNode["ClipList"]["Clip"];
			for (auto editingNodeClipListClip : allClipListNode)
			{
				Job::ComplexEditingConfigsItem::Editing::Clip clipObject;
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
					Job::ComplexEditingConfigsItem::Editing::Clip::Effect effectsObject;
					if(!editingNodeClipListClipEffectsEffect["Effect"].isNull())
						effectsObject.effect = editingNodeClipListClipEffectsEffect["Effect"].asString();
					if(!editingNodeClipListClipEffectsEffect["EffectConfig"].isNull())
						effectsObject.effectConfig = editingNodeClipListClipEffectsEffect["EffectConfig"].asString();
					clipObject.effects.push_back(effectsObject);
				}
				complexEditingConfigsObject.editing.clipList.push_back(clipObject);
			}
			auto timelineNode = editingNode["Timeline"];
			auto allTrackListNode = timelineNode["TrackList"]["Track"];
			for (auto timelineNodeTrackListTrack : allTrackListNode)
			{
				Job::ComplexEditingConfigsItem::Editing::Timeline::Track trackObject;
				if(!timelineNodeTrackListTrack["Type"].isNull())
					trackObject.type = timelineNodeTrackListTrack["Type"].asString();
				if(!timelineNodeTrackListTrack["Order"].isNull())
					trackObject.order = timelineNodeTrackListTrack["Order"].asString();
				if(!timelineNodeTrackListTrack["Id"].isNull())
					trackObject.id = timelineNodeTrackListTrack["Id"].asString();
				auto allClipsNode = timelineNodeTrackListTrack["Clips"]["Clip"];
				for (auto timelineNodeTrackListTrackClipsClip : allClipsNode)
				{
					Job::ComplexEditingConfigsItem::Editing::Timeline::Track::Clip1 clipsObject;
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
				complexEditingConfigsObject.editing.timeline.trackList.push_back(trackObject);
			}
			auto timelineConfigNode = timelineNode["TimelineConfig"];
			auto timelineConfigAudioNode = timelineConfigNode["TimelineConfigAudio"];
			if(!timelineConfigAudioNode["ChannelLayout"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigAudio.channelLayout = timelineConfigAudioNode["ChannelLayout"].asString();
			if(!timelineConfigAudioNode["Samplerate"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigAudio.samplerate = timelineConfigAudioNode["Samplerate"].asString();
			if(!timelineConfigAudioNode["Channels"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigAudio.channels = timelineConfigAudioNode["Channels"].asString();
			auto timelineConfigVideoNode = timelineConfigNode["TimelineConfigVideo"];
			if(!timelineConfigVideoNode["BgColor"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.bgColor = timelineConfigVideoNode["BgColor"].asString();
			if(!timelineConfigVideoNode["Width"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.width = timelineConfigVideoNode["Width"].asString();
			if(!timelineConfigVideoNode["RenderRatio"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.renderRatio = timelineConfigVideoNode["RenderRatio"].asString();
			if(!timelineConfigVideoNode["IsGpuData"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.isGpuData = timelineConfigVideoNode["IsGpuData"].asString();
			if(!timelineConfigVideoNode["Height"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.height = timelineConfigVideoNode["Height"].asString();
			if(!timelineConfigVideoNode["IsOneTrackData"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.isOneTrackData = timelineConfigVideoNode["IsOneTrackData"].asString();
			if(!timelineConfigVideoNode["Fps"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.fps = timelineConfigVideoNode["Fps"].asString();
			if(!timelineConfigVideoNode["ReclosePrec"].isNull())
				complexEditingConfigsObject.editing.timeline.timelineConfig.timelineConfigVideo.reclosePrec = timelineConfigVideoNode["ReclosePrec"].asString();
			jobListObject.complexEditingConfigs.push_back(complexEditingConfigsObject);
		}
		auto allInputsNode = valueJobListJob["Inputs"]["InputsItem"];
		for (auto valueJobListJobInputsInputsItem : allInputsNode)
		{
			Job::InputsItem inputsObject;
			auto allEditingInputsNode = valueJobListJobInputsInputsItem["EditingInputs"]["EditingInput"];
			for (auto valueJobListJobInputsInputsItemEditingInputsEditingInput : allEditingInputsNode)
			{
				Job::InputsItem::EditingInput editingInputsObject;
				if(!valueJobListJobInputsInputsItemEditingInputsEditingInput["Id"].isNull())
					editingInputsObject.id = valueJobListJobInputsInputsItemEditingInputsEditingInput["Id"].asString();
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
				inputsObject.editingInputs.push_back(editingInputsObject);
			}
			jobListObject.inputs.push_back(inputsObject);
		}
		auto transcodeOutputNode = value["transcodeOutput"];
		if(!transcodeOutputNode["DeWatermark"].isNull())
			jobListObject.transcodeOutput.deWatermark = transcodeOutputNode["DeWatermark"].asString();
		if(!transcodeOutputNode["WaterMarkConfigUrl"].isNull())
			jobListObject.transcodeOutput.waterMarkConfigUrl = transcodeOutputNode["WaterMarkConfigUrl"].asString();
		if(!transcodeOutputNode["Priority"].isNull())
			jobListObject.transcodeOutput.priority = transcodeOutputNode["Priority"].asString();
		if(!transcodeOutputNode["AudioStreamMap"].isNull())
			jobListObject.transcodeOutput.audioStreamMap = transcodeOutputNode["AudioStreamMap"].asString();
		if(!transcodeOutputNode["UserData"].isNull())
			jobListObject.transcodeOutput.userData = transcodeOutputNode["UserData"].asString();
		if(!transcodeOutputNode["VideoStreamMap"].isNull())
			jobListObject.transcodeOutput.videoStreamMap = transcodeOutputNode["VideoStreamMap"].asString();
		if(!transcodeOutputNode["Rotate"].isNull())
			jobListObject.transcodeOutput.rotate = transcodeOutputNode["Rotate"].asString();
		if(!transcodeOutputNode["MergeConfigUrl"].isNull())
			jobListObject.transcodeOutput.mergeConfigUrl = transcodeOutputNode["MergeConfigUrl"].asString();
		if(!transcodeOutputNode["TemplateId"].isNull())
			jobListObject.transcodeOutput.templateId = transcodeOutputNode["TemplateId"].asString();
		auto allWaterMarkListNode = transcodeOutputNode["WaterMarkList"]["WaterMark"];
		for (auto transcodeOutputNodeWaterMarkListWaterMark : allWaterMarkListNode)
		{
			Job::TranscodeOutput::WaterMark waterMarkObject;
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
			jobListObject.transcodeOutput.waterMarkList.push_back(waterMarkObject);
		}
		auto allMergeListNode = transcodeOutputNode["MergeList"]["Merge"];
		for (auto transcodeOutputNodeMergeListMerge : allMergeListNode)
		{
			Job::TranscodeOutput::Merge mergeObject;
			if(!transcodeOutputNodeMergeListMerge["Start"].isNull())
				mergeObject.start = transcodeOutputNodeMergeListMerge["Start"].asString();
			if(!transcodeOutputNodeMergeListMerge["RoleArn"].isNull())
				mergeObject.roleArn = transcodeOutputNodeMergeListMerge["RoleArn"].asString();
			if(!transcodeOutputNodeMergeListMerge["MergeURL"].isNull())
				mergeObject.mergeURL = transcodeOutputNodeMergeListMerge["MergeURL"].asString();
			if(!transcodeOutputNodeMergeListMerge["Duration"].isNull())
				mergeObject.duration = transcodeOutputNodeMergeListMerge["Duration"].asString();
			jobListObject.transcodeOutput.mergeList.push_back(mergeObject);
		}
		auto videoNode = transcodeOutputNode["Video"];
		if(!videoNode["Bufsize"].isNull())
			jobListObject.transcodeOutput.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Degrain"].isNull())
			jobListObject.transcodeOutput.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["PixFmt"].isNull())
			jobListObject.transcodeOutput.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Pad"].isNull())
			jobListObject.transcodeOutput.video.pad = videoNode["Pad"].asString();
		if(!videoNode["Codec"].isNull())
			jobListObject.transcodeOutput.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Height"].isNull())
			jobListObject.transcodeOutput.video.height = videoNode["Height"].asString();
		if(!videoNode["Qscale"].isNull())
			jobListObject.transcodeOutput.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Crop"].isNull())
			jobListObject.transcodeOutput.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Bitrate"].isNull())
			jobListObject.transcodeOutput.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Maxrate"].isNull())
			jobListObject.transcodeOutput.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["MaxFps"].isNull())
			jobListObject.transcodeOutput.video.maxFps = videoNode["MaxFps"].asString();
		if(!videoNode["Profile"].isNull())
			jobListObject.transcodeOutput.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Crf"].isNull())
			jobListObject.transcodeOutput.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Gop"].isNull())
			jobListObject.transcodeOutput.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Width"].isNull())
			jobListObject.transcodeOutput.video.width = videoNode["Width"].asString();
		if(!videoNode["Fps"].isNull())
			jobListObject.transcodeOutput.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Preset"].isNull())
			jobListObject.transcodeOutput.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			jobListObject.transcodeOutput.video.scanMode = videoNode["ScanMode"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			jobListObject.transcodeOutput.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			jobListObject.transcodeOutput.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto transConfigNode = transcodeOutputNode["TransConfig"];
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["TransMode"].isNull())
			jobListObject.transcodeOutput.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			jobListObject.transcodeOutput.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["Duration"].isNull())
			jobListObject.transcodeOutput.transConfig.duration = transConfigNode["Duration"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			jobListObject.transcodeOutput.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		auto encryptionNode = transcodeOutputNode["Encryption"];
		if(!encryptionNode["Type"].isNull())
			jobListObject.transcodeOutput.encryption.type = encryptionNode["Type"].asString();
		if(!encryptionNode["Key"].isNull())
			jobListObject.transcodeOutput.encryption.key = encryptionNode["Key"].asString();
		if(!encryptionNode["KeyType"].isNull())
			jobListObject.transcodeOutput.encryption.keyType = encryptionNode["KeyType"].asString();
		if(!encryptionNode["Id"].isNull())
			jobListObject.transcodeOutput.encryption.id = encryptionNode["Id"].asString();
		if(!encryptionNode["KeyUri"].isNull())
			jobListObject.transcodeOutput.encryption.keyUri = encryptionNode["KeyUri"].asString();
		if(!encryptionNode["SkipCnt"].isNull())
			jobListObject.transcodeOutput.encryption.skipCnt = encryptionNode["SkipCnt"].asString();
		auto m3U8NonStandardSupportNode = transcodeOutputNode["M3U8NonStandardSupport"];
		auto tSNode = m3U8NonStandardSupportNode["TS"];
		if(!tSNode["SizeSupport"].isNull())
			jobListObject.transcodeOutput.m3U8NonStandardSupport.tS.sizeSupport = tSNode["SizeSupport"].asString() == "true";
		if(!tSNode["Md5Support"].isNull())
			jobListObject.transcodeOutput.m3U8NonStandardSupport.tS.md5Support = tSNode["Md5Support"].asString() == "true";
		auto audioNode = transcodeOutputNode["Audio"];
		if(!audioNode["Profile"].isNull())
			jobListObject.transcodeOutput.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Codec"].isNull())
			jobListObject.transcodeOutput.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Samplerate"].isNull())
			jobListObject.transcodeOutput.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Qscale"].isNull())
			jobListObject.transcodeOutput.audio.qscale = audioNode["Qscale"].asString();
		if(!audioNode["Channels"].isNull())
			jobListObject.transcodeOutput.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Bitrate"].isNull())
			jobListObject.transcodeOutput.audio.bitrate = audioNode["Bitrate"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Method"].isNull())
			jobListObject.transcodeOutput.audio.volume.method = volumeNode["Method"].asString();
		if(!volumeNode["Level"].isNull())
			jobListObject.transcodeOutput.audio.volume.level = volumeNode["Level"].asString();
		auto superResoNode = transcodeOutputNode["SuperReso"];
		if(!superResoNode["IsHalfSample"].isNull())
			jobListObject.transcodeOutput.superReso.isHalfSample = superResoNode["IsHalfSample"].asString();
		auto digiWaterMarkNode = transcodeOutputNode["DigiWaterMark"];
		if(!digiWaterMarkNode["Type"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.type = digiWaterMarkNode["Type"].asString();
		if(!digiWaterMarkNode["Alpha"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.alpha = digiWaterMarkNode["Alpha"].asString();
		auto inputFile3Node = digiWaterMarkNode["InputFile"];
		if(!inputFile3Node["Object"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.inputFile3.object = inputFile3Node["Object"].asString();
		if(!inputFile3Node["Location"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.inputFile3.location = inputFile3Node["Location"].asString();
		if(!inputFile3Node["Bucket"].isNull())
			jobListObject.transcodeOutput.digiWaterMark.inputFile3.bucket = inputFile3Node["Bucket"].asString();
		auto outputFileNode = transcodeOutputNode["OutputFile"];
		if(!outputFileNode["RoleArn"].isNull())
			jobListObject.transcodeOutput.outputFile.roleArn = outputFileNode["RoleArn"].asString();
		if(!outputFileNode["Object"].isNull())
			jobListObject.transcodeOutput.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			jobListObject.transcodeOutput.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			jobListObject.transcodeOutput.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto containerNode = transcodeOutputNode["Container"];
		if(!containerNode["Format"].isNull())
			jobListObject.transcodeOutput.container.format = containerNode["Format"].asString();
		auto clip4Node = transcodeOutputNode["Clip"];
		auto timeSpanNode = clip4Node["TimeSpan"];
		if(!timeSpanNode["Seek"].isNull())
			jobListObject.transcodeOutput.clip4.timeSpan.seek = timeSpanNode["Seek"].asString();
		if(!timeSpanNode["Duration"].isNull())
			jobListObject.transcodeOutput.clip4.timeSpan.duration = timeSpanNode["Duration"].asString();
		auto muxConfigNode = transcodeOutputNode["MuxConfig"];
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["FinalDelay"].isNull())
			jobListObject.transcodeOutput.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["DitherMode"].isNull())
			jobListObject.transcodeOutput.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		if(!gifNode["Loop"].isNull())
			jobListObject.transcodeOutput.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			jobListObject.transcodeOutput.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			jobListObject.transcodeOutput.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto subtitleConfigNode = transcodeOutputNode["SubtitleConfig"];
		auto allExtSubtitleListNode = subtitleConfigNode["ExtSubtitleList"]["ExtSubtitle"];
		for (auto subtitleConfigNodeExtSubtitleListExtSubtitle : allExtSubtitleListNode)
		{
			Job::TranscodeOutput::SubtitleConfig::ExtSubtitle extSubtitleObject;
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
			jobListObject.transcodeOutput.subtitleConfig.extSubtitleList.push_back(extSubtitleObject);
		}
		auto allSubtitleListNode = subtitleConfigNode["SubtitleList"]["Subtitle"];
		for (auto subtitleConfigNodeSubtitleListSubtitle : allSubtitleListNode)
		{
			Job::TranscodeOutput::SubtitleConfig::Subtitle subtitleObject;
			if(!subtitleConfigNodeSubtitleListSubtitle["Map"].isNull())
				subtitleObject.map = subtitleConfigNodeSubtitleListSubtitle["Map"].asString();
			jobListObject.transcodeOutput.subtitleConfig.subtitleList.push_back(subtitleObject);
		}
		auto propertiesNode = transcodeOutputNode["Properties"];
		if(!propertiesNode["Width"].isNull())
			jobListObject.transcodeOutput.properties.width = propertiesNode["Width"].asString();
		if(!propertiesNode["Height"].isNull())
			jobListObject.transcodeOutput.properties.height = propertiesNode["Height"].asString();
		if(!propertiesNode["Duration"].isNull())
			jobListObject.transcodeOutput.properties.duration = propertiesNode["Duration"].asString();
		if(!propertiesNode["Fps"].isNull())
			jobListObject.transcodeOutput.properties.fps = propertiesNode["Fps"].asString();
		if(!propertiesNode["Bitrate"].isNull())
			jobListObject.transcodeOutput.properties.bitrate = propertiesNode["Bitrate"].asString();
		if(!propertiesNode["FileFormat"].isNull())
			jobListObject.transcodeOutput.properties.fileFormat = propertiesNode["FileFormat"].asString();
		if(!propertiesNode["FileSize"].isNull())
			jobListObject.transcodeOutput.properties.fileSize = propertiesNode["FileSize"].asString();
		auto streamsNode = propertiesNode["Streams"];
		auto allVideoStreamListNode = streamsNode["VideoStreamList"]["VideoStream"];
		for (auto streamsNodeVideoStreamListVideoStream : allVideoStreamListNode)
		{
			Job::TranscodeOutput::Properties::Streams::VideoStream videoStreamObject;
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
			jobListObject.transcodeOutput.properties.streams.videoStreamList.push_back(videoStreamObject);
		}
		auto allAudioStreamListNode = streamsNode["AudioStreamList"]["AudioStream"];
		for (auto streamsNodeAudioStreamListAudioStream : allAudioStreamListNode)
		{
			Job::TranscodeOutput::Properties::Streams::AudioStream audioStreamObject;
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
			jobListObject.transcodeOutput.properties.streams.audioStreamList.push_back(audioStreamObject);
		}
		auto allSubtitleStreamListNode = streamsNode["SubtitleStreamList"]["SubtitleStream"];
		for (auto streamsNodeSubtitleStreamListSubtitleStream : allSubtitleStreamListNode)
		{
			Job::TranscodeOutput::Properties::Streams::SubtitleStream subtitleStreamObject;
			if(!streamsNodeSubtitleStreamListSubtitleStream["Index"].isNull())
				subtitleStreamObject.index = streamsNodeSubtitleStreamListSubtitleStream["Index"].asString();
			if(!streamsNodeSubtitleStreamListSubtitleStream["Lang"].isNull())
				subtitleStreamObject.lang = streamsNodeSubtitleStreamListSubtitleStream["Lang"].asString();
			jobListObject.transcodeOutput.properties.streams.subtitleStreamList.push_back(subtitleStreamObject);
		}
		auto formatNode = propertiesNode["Format"];
		if(!formatNode["StartTime"].isNull())
			jobListObject.transcodeOutput.properties.format.startTime = formatNode["StartTime"].asString();
		if(!formatNode["NumPrograms"].isNull())
			jobListObject.transcodeOutput.properties.format.numPrograms = formatNode["NumPrograms"].asString();
		if(!formatNode["Size"].isNull())
			jobListObject.transcodeOutput.properties.format.size = formatNode["Size"].asString();
		if(!formatNode["NumStreams"].isNull())
			jobListObject.transcodeOutput.properties.format.numStreams = formatNode["NumStreams"].asString();
		if(!formatNode["FormatLongName"].isNull())
			jobListObject.transcodeOutput.properties.format.formatLongName = formatNode["FormatLongName"].asString();
		if(!formatNode["Duration"].isNull())
			jobListObject.transcodeOutput.properties.format.duration = formatNode["Duration"].asString();
		if(!formatNode["Bitrate"].isNull())
			jobListObject.transcodeOutput.properties.format.bitrate = formatNode["Bitrate"].asString();
		if(!formatNode["FormatName"].isNull())
			jobListObject.transcodeOutput.properties.format.formatName = formatNode["FormatName"].asString();
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

