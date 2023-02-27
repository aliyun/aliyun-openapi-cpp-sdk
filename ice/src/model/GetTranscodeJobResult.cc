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

#include <alibabacloud/ice/model/GetTranscodeJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetTranscodeJobResult::GetTranscodeJobResult() :
	ServiceResult()
{}

GetTranscodeJobResult::GetTranscodeJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTranscodeJobResult::~GetTranscodeJobResult()
{}

void GetTranscodeJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto transcodeParentJobNode = value["TranscodeParentJob"];
	if(!transcodeParentJobNode["CreateTime"].isNull())
		transcodeParentJob_.createTime = transcodeParentJobNode["CreateTime"].asString();
	if(!transcodeParentJobNode["Name"].isNull())
		transcodeParentJob_.name = transcodeParentJobNode["Name"].asString();
	if(!transcodeParentJobNode["RequestId"].isNull())
		transcodeParentJob_.requestId = transcodeParentJobNode["RequestId"].asString();
	if(!transcodeParentJobNode["ParentJobId"].isNull())
		transcodeParentJob_.parentJobId = transcodeParentJobNode["ParentJobId"].asString();
	if(!transcodeParentJobNode["JobCount"].isNull())
		transcodeParentJob_.jobCount = std::stoi(transcodeParentJobNode["JobCount"].asString());
	if(!transcodeParentJobNode["Status"].isNull())
		transcodeParentJob_.status = transcodeParentJobNode["Status"].asString();
	if(!transcodeParentJobNode["TriggerSource"].isNull())
		transcodeParentJob_.triggerSource = transcodeParentJobNode["TriggerSource"].asString();
	if(!transcodeParentJobNode["Percent"].isNull())
		transcodeParentJob_.percent = std::stoi(transcodeParentJobNode["Percent"].asString());
	if(!transcodeParentJobNode["SubmitTime"].isNull())
		transcodeParentJob_.submitTime = transcodeParentJobNode["SubmitTime"].asString();
	if(!transcodeParentJobNode["FinishTime"].isNull())
		transcodeParentJob_.finishTime = transcodeParentJobNode["FinishTime"].asString();
	if(!transcodeParentJobNode["UserData"].isNull())
		transcodeParentJob_.userData = transcodeParentJobNode["UserData"].asString();
	auto allTranscodeJobListNode = transcodeParentJobNode["TranscodeJobList"]["TranscodeJobListItem"];
	for (auto transcodeParentJobNodeTranscodeJobListTranscodeJobListItem : allTranscodeJobListNode)
	{
		TranscodeParentJob::TranscodeJobListItem transcodeJobListItemObject;
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["CreateTime"].isNull())
			transcodeJobListItemObject.createTime = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["CreateTime"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["Name"].isNull())
			transcodeJobListItemObject.name = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["Name"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["ParentJobId"].isNull())
			transcodeJobListItemObject.parentJobId = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["ParentJobId"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["JobId"].isNull())
			transcodeJobListItemObject.jobId = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["JobId"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["JobIndex"].isNull())
			transcodeJobListItemObject.jobIndex = std::stoi(transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["JobIndex"].asString());
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["UserData"].isNull())
			transcodeJobListItemObject.userData = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["UserData"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["Status"].isNull())
			transcodeJobListItemObject.status = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["Status"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["SubmitResultJson"].isNull())
			transcodeJobListItemObject.submitResultJson = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["SubmitResultJson"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["SubmitTime"].isNull())
			transcodeJobListItemObject.submitTime = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["SubmitTime"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["FinishTime"].isNull())
			transcodeJobListItemObject.finishTime = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["FinishTime"].asString();
		if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["RequestId"].isNull())
			transcodeJobListItemObject.requestId = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["RequestId"].asString();
		auto allInputGroup2Node = transcodeParentJobNodeTranscodeJobListTranscodeJobListItem["InputGroup"]["InputGroupItem"];
		for (auto transcodeParentJobNodeTranscodeJobListTranscodeJobListItemInputGroupInputGroupItem : allInputGroup2Node)
		{
			TranscodeParentJob::TranscodeJobListItem::InputGroupItem inputGroup2Object;
			if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItemInputGroupInputGroupItem["Type"].isNull())
				inputGroup2Object.type = transcodeParentJobNodeTranscodeJobListTranscodeJobListItemInputGroupInputGroupItem["Type"].asString();
			if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItemInputGroupInputGroupItem["Media"].isNull())
				inputGroup2Object.media = transcodeParentJobNodeTranscodeJobListTranscodeJobListItemInputGroupInputGroupItem["Media"].asString();
			if(!transcodeParentJobNodeTranscodeJobListTranscodeJobListItemInputGroupInputGroupItem["InputUrl"].isNull())
				inputGroup2Object.inputUrl = transcodeParentJobNodeTranscodeJobListTranscodeJobListItemInputGroupInputGroupItem["InputUrl"].asString();
			transcodeJobListItemObject.inputGroup2.push_back(inputGroup2Object);
		}
		auto processConfigNode = value["ProcessConfig"];
		if(!processConfigNode["IsInheritTags"].isNull())
			transcodeJobListItemObject.processConfig.isInheritTags = processConfigNode["IsInheritTags"].asString() == "true";
		auto allImageWatermarksNode = processConfigNode["ImageWatermarks"]["ImageWatermark"];
		for (auto processConfigNodeImageWatermarksImageWatermark : allImageWatermarksNode)
		{
			TranscodeParentJob::TranscodeJobListItem::ProcessConfig::ImageWatermark imageWatermarkObject;
			if(!processConfigNodeImageWatermarksImageWatermark["TemplateId"].isNull())
				imageWatermarkObject.templateId = processConfigNodeImageWatermarksImageWatermark["TemplateId"].asString();
			auto overwriteParamsNode = value["OverwriteParams"];
			if(!overwriteParamsNode["Width"].isNull())
				imageWatermarkObject.overwriteParams.width = overwriteParamsNode["Width"].asString();
			if(!overwriteParamsNode["Height"].isNull())
				imageWatermarkObject.overwriteParams.height = overwriteParamsNode["Height"].asString();
			if(!overwriteParamsNode["Dx"].isNull())
				imageWatermarkObject.overwriteParams.dx = overwriteParamsNode["Dx"].asString();
			if(!overwriteParamsNode["Dy"].isNull())
				imageWatermarkObject.overwriteParams.dy = overwriteParamsNode["Dy"].asString();
			if(!overwriteParamsNode["ReferPos"].isNull())
				imageWatermarkObject.overwriteParams.referPos = overwriteParamsNode["ReferPos"].asString();
			auto timelineNode = overwriteParamsNode["Timeline"];
			if(!timelineNode["Start"].isNull())
				imageWatermarkObject.overwriteParams.timeline.start = timelineNode["Start"].asString();
			if(!timelineNode["Duration"].isNull())
				imageWatermarkObject.overwriteParams.timeline.duration = timelineNode["Duration"].asString();
			auto fileNode = overwriteParamsNode["File"];
			if(!fileNode["Type"].isNull())
				imageWatermarkObject.overwriteParams.file.type = fileNode["Type"].asString();
			if(!fileNode["Media"].isNull())
				imageWatermarkObject.overwriteParams.file.media = fileNode["Media"].asString();
			transcodeJobListItemObject.processConfig.imageWatermarks.push_back(imageWatermarkObject);
		}
		auto allTextWatermarksNode = processConfigNode["TextWatermarks"]["TextWatermark"];
		for (auto processConfigNodeTextWatermarksTextWatermark : allTextWatermarksNode)
		{
			TranscodeParentJob::TranscodeJobListItem::ProcessConfig::TextWatermark textWatermarkObject;
			if(!processConfigNodeTextWatermarksTextWatermark["TemplateId"].isNull())
				textWatermarkObject.templateId = processConfigNodeTextWatermarksTextWatermark["TemplateId"].asString();
			auto overwriteParams3Node = value["OverwriteParams"];
			if(!overwriteParams3Node["Content"].isNull())
				textWatermarkObject.overwriteParams3.content = overwriteParams3Node["Content"].asString();
			if(!overwriteParams3Node["FontName"].isNull())
				textWatermarkObject.overwriteParams3.fontName = overwriteParams3Node["FontName"].asString();
			if(!overwriteParams3Node["FontColor"].isNull())
				textWatermarkObject.overwriteParams3.fontColor = overwriteParams3Node["FontColor"].asString();
			if(!overwriteParams3Node["FontAlpha"].isNull())
				textWatermarkObject.overwriteParams3.fontAlpha = overwriteParams3Node["FontAlpha"].asString();
			if(!overwriteParams3Node["Top"].isNull())
				textWatermarkObject.overwriteParams3.top = overwriteParams3Node["Top"].asString();
			if(!overwriteParams3Node["Left"].isNull())
				textWatermarkObject.overwriteParams3.left = overwriteParams3Node["Left"].asString();
			if(!overwriteParams3Node["FontSize"].isNull())
				textWatermarkObject.overwriteParams3.fontSize = std::stoi(overwriteParams3Node["FontSize"].asString());
			if(!overwriteParams3Node["BorderWidth"].isNull())
				textWatermarkObject.overwriteParams3.borderWidth = std::stoi(overwriteParams3Node["BorderWidth"].asString());
			if(!overwriteParams3Node["BorderColor"].isNull())
				textWatermarkObject.overwriteParams3.borderColor = overwriteParams3Node["BorderColor"].asString();
			if(!overwriteParams3Node["Adaptive"].isNull())
				textWatermarkObject.overwriteParams3.adaptive = overwriteParams3Node["Adaptive"].asString();
			transcodeJobListItemObject.processConfig.textWatermarks.push_back(textWatermarkObject);
		}
		auto allSubtitlesNode = processConfigNode["Subtitles"]["Subtitle"];
		for (auto processConfigNodeSubtitlesSubtitle : allSubtitlesNode)
		{
			TranscodeParentJob::TranscodeJobListItem::ProcessConfig::Subtitle subtitleObject;
			if(!processConfigNodeSubtitlesSubtitle["TemplateId"].isNull())
				subtitleObject.templateId = processConfigNodeSubtitlesSubtitle["TemplateId"].asString();
			auto overwriteParams4Node = value["OverwriteParams"];
			if(!overwriteParams4Node["Format"].isNull())
				subtitleObject.overwriteParams4.format = overwriteParams4Node["Format"].asString();
			if(!overwriteParams4Node["CharEnc"].isNull())
				subtitleObject.overwriteParams4.charEnc = overwriteParams4Node["CharEnc"].asString();
			auto file5Node = overwriteParams4Node["File"];
			if(!file5Node["Type"].isNull())
				subtitleObject.overwriteParams4.file5.type = file5Node["Type"].asString();
			if(!file5Node["Media"].isNull())
				subtitleObject.overwriteParams4.file5.media = file5Node["Media"].asString();
			transcodeJobListItemObject.processConfig.subtitles.push_back(subtitleObject);
		}
		auto allCombineConfigsNode = processConfigNode["CombineConfigs"]["CombineConfig"];
		for (auto processConfigNodeCombineConfigsCombineConfig : allCombineConfigsNode)
		{
			TranscodeParentJob::TranscodeJobListItem::ProcessConfig::CombineConfig combineConfigObject;
			if(!processConfigNodeCombineConfigsCombineConfig["AudioIndex"].isNull())
				combineConfigObject.audioIndex = processConfigNodeCombineConfigsCombineConfig["AudioIndex"].asString();
			if(!processConfigNodeCombineConfigsCombineConfig["VideoIndex"].isNull())
				combineConfigObject.videoIndex = processConfigNodeCombineConfigsCombineConfig["VideoIndex"].asString();
			if(!processConfigNodeCombineConfigsCombineConfig["Start"].isNull())
				combineConfigObject.start = processConfigNodeCombineConfigsCombineConfig["Start"].asString();
			if(!processConfigNodeCombineConfigsCombineConfig["Duration"].isNull())
				combineConfigObject.duration = processConfigNodeCombineConfigsCombineConfig["Duration"].asString();
			transcodeJobListItemObject.processConfig.combineConfigs.push_back(combineConfigObject);
		}
		auto transcodeNode = processConfigNode["Transcode"];
		if(!transcodeNode["TemplateId"].isNull())
			transcodeJobListItemObject.processConfig.transcode.templateId = transcodeNode["TemplateId"].asString();
		auto overwriteParams6Node = transcodeNode["OverwriteParams"];
		if(!overwriteParams6Node["Tags"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.tags = overwriteParams6Node["Tags"].asString();
		auto videoNode = overwriteParams6Node["Video"];
		if(!videoNode["Codec"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Profile"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Bitrate"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Crf"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Width"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.width = videoNode["Width"].asString();
		if(!videoNode["Height"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.height = videoNode["Height"].asString();
		if(!videoNode["Fps"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Gop"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Preset"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.scanMode = videoNode["ScanMode"].asString();
		if(!videoNode["PixFmt"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Remove"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.remove = videoNode["Remove"].asString();
		if(!videoNode["Crop"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Pad"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.pad = videoNode["Pad"].asString();
		if(!videoNode["LongShortMode"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.longShortMode = videoNode["LongShortMode"].asString();
		if(!videoNode["Bufsize"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Maxrate"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["AbrMax"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.video.abrMax = videoNode["AbrMax"].asString();
		auto audioNode = overwriteParams6Node["Audio"];
		if(!audioNode["Codec"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Profile"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Samplerate"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Bitrate"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.bitrate = audioNode["Bitrate"].asString();
		if(!audioNode["Channels"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Remove"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.remove = audioNode["Remove"].asString();
		auto volumeNode = audioNode["Volume"];
		if(!volumeNode["Method"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.volume.method = volumeNode["Method"].asString();
		if(!volumeNode["IntegratedLoudnessTarget"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.volume.integratedLoudnessTarget = volumeNode["IntegratedLoudnessTarget"].asString();
		if(!volumeNode["TruePeak"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.volume.truePeak = volumeNode["TruePeak"].asString();
		if(!volumeNode["LoudnessRangeTarget"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.audio.volume.loudnessRangeTarget = volumeNode["LoudnessRangeTarget"].asString();
		auto containerNode = overwriteParams6Node["Container"];
		if(!containerNode["Format"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.container.format = containerNode["Format"].asString();
		auto muxConfigNode = overwriteParams6Node["MuxConfig"];
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.muxConfig.segment.duration = segmentNode["Duration"].asString();
		if(!segmentNode["ForceSegTime"].isNull())
			transcodeJobListItemObject.processConfig.transcode.overwriteParams6.muxConfig.segment.forceSegTime = segmentNode["ForceSegTime"].asString();
		auto encryptionNode = processConfigNode["Encryption"];
		if(!encryptionNode["EncryptType"].isNull())
			transcodeJobListItemObject.processConfig.encryption.encryptType = encryptionNode["EncryptType"].asString();
		if(!encryptionNode["CipherText"].isNull())
			transcodeJobListItemObject.processConfig.encryption.cipherText = encryptionNode["CipherText"].asString();
		if(!encryptionNode["DecryptKeyUri"].isNull())
			transcodeJobListItemObject.processConfig.encryption.decryptKeyUri = encryptionNode["DecryptKeyUri"].asString();
		auto outputNode = value["Output"];
		if(!outputNode["Type"].isNull())
			transcodeJobListItemObject.output.type = outputNode["Type"].asString();
		if(!outputNode["Media"].isNull())
			transcodeJobListItemObject.output.media = outputNode["Media"].asString();
		if(!outputNode["OutputUrl"].isNull())
			transcodeJobListItemObject.output.outputUrl = outputNode["OutputUrl"].asString();
		auto scheduleConfig1Node = value["ScheduleConfig"];
		if(!scheduleConfig1Node["PipelineId"].isNull())
			transcodeJobListItemObject.scheduleConfig1.pipelineId = scheduleConfig1Node["PipelineId"].asString();
		if(!scheduleConfig1Node["Priority"].isNull())
			transcodeJobListItemObject.scheduleConfig1.priority = std::stoi(scheduleConfig1Node["Priority"].asString());
		auto outFileMetaNode = value["OutFileMeta"];
		auto allAudioStreamInfoListNode = outFileMetaNode["AudioStreamInfoList"]["AudioStreamInfoListItem"];
		for (auto outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem : allAudioStreamInfoListNode)
		{
			TranscodeParentJob::TranscodeJobListItem::OutFileMeta::AudioStreamInfoListItem audioStreamInfoListItemObject;
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Index"].isNull())
				audioStreamInfoListItemObject.index = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Index"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecName"].isNull())
				audioStreamInfoListItemObject.codecName = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecName"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecLongName"].isNull())
				audioStreamInfoListItemObject.codecLongName = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecLongName"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTimeBase"].isNull())
				audioStreamInfoListItemObject.codecTimeBase = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTimeBase"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTagString"].isNull())
				audioStreamInfoListItemObject.codecTagString = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTagString"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTag"].isNull())
				audioStreamInfoListItemObject.codecTag = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["CodecTag"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["SampleFmt"].isNull())
				audioStreamInfoListItemObject.sampleFmt = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["SampleFmt"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["SampleRate"].isNull())
				audioStreamInfoListItemObject.sampleRate = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["SampleRate"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Channels"].isNull())
				audioStreamInfoListItemObject.channels = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Channels"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["ChannelLayout"].isNull())
				audioStreamInfoListItemObject.channelLayout = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["ChannelLayout"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Timebase"].isNull())
				audioStreamInfoListItemObject.timebase = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Timebase"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["StartTime"].isNull())
				audioStreamInfoListItemObject.startTime = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["StartTime"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Duration"].isNull())
				audioStreamInfoListItemObject.duration = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Duration"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Bitrate"].isNull())
				audioStreamInfoListItemObject.bitrate = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Bitrate"].asString();
			if(!outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Lang"].isNull())
				audioStreamInfoListItemObject.lang = outFileMetaNodeAudioStreamInfoListAudioStreamInfoListItem["Lang"].asString();
			transcodeJobListItemObject.outFileMeta.audioStreamInfoList.push_back(audioStreamInfoListItemObject);
		}
		auto allVideoStreamInfoListNode = outFileMetaNode["VideoStreamInfoList"]["VideoStreamInfoListItem"];
		for (auto outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem : allVideoStreamInfoListNode)
		{
			TranscodeParentJob::TranscodeJobListItem::OutFileMeta::VideoStreamInfoListItem videoStreamInfoListItemObject;
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Index"].isNull())
				videoStreamInfoListItemObject.index = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Index"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_name"].isNull())
				videoStreamInfoListItemObject.codec_name = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_name"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_long_name"].isNull())
				videoStreamInfoListItemObject.codec_long_name = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_long_name"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Profile"].isNull())
				videoStreamInfoListItemObject.profile = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Profile"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_time_base"].isNull())
				videoStreamInfoListItemObject.codec_time_base = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_time_base"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_tag_string"].isNull())
				videoStreamInfoListItemObject.codec_tag_string = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_tag_string"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_tag"].isNull())
				videoStreamInfoListItemObject.codec_tag = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Codec_tag"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Width"].isNull())
				videoStreamInfoListItemObject.width = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Width"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Height"].isNull())
				videoStreamInfoListItemObject.height = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Height"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Has_b_frames"].isNull())
				videoStreamInfoListItemObject.has_b_frames = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Has_b_frames"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Sar"].isNull())
				videoStreamInfoListItemObject.sar = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Sar"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Dar"].isNull())
				videoStreamInfoListItemObject.dar = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Dar"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["PixFmt"].isNull())
				videoStreamInfoListItemObject.pixFmt = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["PixFmt"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Level"].isNull())
				videoStreamInfoListItemObject.level = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Level"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Fps"].isNull())
				videoStreamInfoListItemObject.fps = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Fps"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Avg_fps"].isNull())
				videoStreamInfoListItemObject.avg_fps = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Avg_fps"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Time_base"].isNull())
				videoStreamInfoListItemObject.time_base = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Time_base"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Start_time"].isNull())
				videoStreamInfoListItemObject.start_time = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Start_time"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Duration"].isNull())
				videoStreamInfoListItemObject.duration = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Duration"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Bit_rate"].isNull())
				videoStreamInfoListItemObject.bit_rate = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Bit_rate"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["NumFrames"].isNull())
				videoStreamInfoListItemObject.numFrames = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["NumFrames"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Lang"].isNull())
				videoStreamInfoListItemObject.lang = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Lang"].asString();
			if(!outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Rotate"].isNull())
				videoStreamInfoListItemObject.rotate = outFileMetaNodeVideoStreamInfoListVideoStreamInfoListItem["Rotate"].asString();
			transcodeJobListItemObject.outFileMeta.videoStreamInfoList.push_back(videoStreamInfoListItemObject);
		}
		auto fileBasicInfoNode = outFileMetaNode["FileBasicInfo"];
		if(!fileBasicInfoNode["MediaId"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.mediaId = fileBasicInfoNode["MediaId"].asString();
		if(!fileBasicInfoNode["FileName"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.fileName = fileBasicInfoNode["FileName"].asString();
		if(!fileBasicInfoNode["FileStatus"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.fileStatus = fileBasicInfoNode["FileStatus"].asString();
		if(!fileBasicInfoNode["FileType"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.fileType = fileBasicInfoNode["FileType"].asString();
		if(!fileBasicInfoNode["FileSize"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.fileSize = fileBasicInfoNode["FileSize"].asString();
		if(!fileBasicInfoNode["FileUrl"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.fileUrl = fileBasicInfoNode["FileUrl"].asString();
		if(!fileBasicInfoNode["Region"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.region = fileBasicInfoNode["Region"].asString();
		if(!fileBasicInfoNode["FormatName"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.formatName = fileBasicInfoNode["FormatName"].asString();
		if(!fileBasicInfoNode["Duration"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.duration = fileBasicInfoNode["Duration"].asString();
		if(!fileBasicInfoNode["Bitrate"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.bitrate = fileBasicInfoNode["Bitrate"].asString();
		if(!fileBasicInfoNode["Width"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.width = fileBasicInfoNode["Width"].asString();
		if(!fileBasicInfoNode["Height"].isNull())
			transcodeJobListItemObject.outFileMeta.fileBasicInfo.height = fileBasicInfoNode["Height"].asString();
		transcodeParentJob_.transcodeJobList.push_back(transcodeJobListItemObject);
	}
	auto allInputGroupNode = transcodeParentJobNode["InputGroup"]["InputGroupItem"];
	for (auto transcodeParentJobNodeInputGroupInputGroupItem : allInputGroupNode)
	{
		TranscodeParentJob::InputGroupItem7 inputGroupItem7Object;
		if(!transcodeParentJobNodeInputGroupInputGroupItem["Type"].isNull())
			inputGroupItem7Object.type = transcodeParentJobNodeInputGroupInputGroupItem["Type"].asString();
		if(!transcodeParentJobNodeInputGroupInputGroupItem["Media"].isNull())
			inputGroupItem7Object.media = transcodeParentJobNodeInputGroupInputGroupItem["Media"].asString();
		transcodeParentJob_.inputGroup.push_back(inputGroupItem7Object);
	}
	auto allOutputGroupNode = transcodeParentJobNode["OutputGroup"]["OutputGroupItem"];
	for (auto transcodeParentJobNodeOutputGroupOutputGroupItem : allOutputGroupNode)
	{
		TranscodeParentJob::OutputGroupItem outputGroupItemObject;
		auto output8Node = value["Output"];
		if(!output8Node["Type"].isNull())
			outputGroupItemObject.output8.type = output8Node["Type"].asString();
		if(!output8Node["Media"].isNull())
			outputGroupItemObject.output8.media = output8Node["Media"].asString();
		if(!output8Node["OutputUrl"].isNull())
			outputGroupItemObject.output8.outputUrl = output8Node["OutputUrl"].asString();
		auto processConfig9Node = value["ProcessConfig"];
		auto allImageWatermarks12Node = processConfig9Node["ImageWatermarks"]["ImageWatermark"];
		for (auto processConfig9NodeImageWatermarksImageWatermark : allImageWatermarks12Node)
		{
			TranscodeParentJob::OutputGroupItem::ProcessConfig9::ImageWatermark16 imageWatermark16Object;
			if(!processConfig9NodeImageWatermarksImageWatermark["TemplateId"].isNull())
				imageWatermark16Object.templateId = processConfig9NodeImageWatermarksImageWatermark["TemplateId"].asString();
			auto overwriteParams17Node = value["OverwriteParams"];
			if(!overwriteParams17Node["Width"].isNull())
				imageWatermark16Object.overwriteParams17.width = overwriteParams17Node["Width"].asString();
			if(!overwriteParams17Node["Height"].isNull())
				imageWatermark16Object.overwriteParams17.height = overwriteParams17Node["Height"].asString();
			if(!overwriteParams17Node["Dx"].isNull())
				imageWatermark16Object.overwriteParams17.dx = overwriteParams17Node["Dx"].asString();
			if(!overwriteParams17Node["Dy"].isNull())
				imageWatermark16Object.overwriteParams17.dy = overwriteParams17Node["Dy"].asString();
			if(!overwriteParams17Node["ReferPos"].isNull())
				imageWatermark16Object.overwriteParams17.referPos = overwriteParams17Node["ReferPos"].asString();
			auto timeline18Node = overwriteParams17Node["Timeline"];
			if(!timeline18Node["Start"].isNull())
				imageWatermark16Object.overwriteParams17.timeline18.start = timeline18Node["Start"].asString();
			if(!timeline18Node["Duration"].isNull())
				imageWatermark16Object.overwriteParams17.timeline18.duration = timeline18Node["Duration"].asString();
			auto file19Node = overwriteParams17Node["File"];
			if(!file19Node["Type"].isNull())
				imageWatermark16Object.overwriteParams17.file19.type = file19Node["Type"].asString();
			if(!file19Node["Media"].isNull())
				imageWatermark16Object.overwriteParams17.file19.media = file19Node["Media"].asString();
			outputGroupItemObject.processConfig9.imageWatermarks12.push_back(imageWatermark16Object);
		}
		auto allTextWatermarks13Node = processConfig9Node["TextWatermarks"]["TextWatermark"];
		for (auto processConfig9NodeTextWatermarksTextWatermark : allTextWatermarks13Node)
		{
			TranscodeParentJob::OutputGroupItem::ProcessConfig9::TextWatermark20 textWatermark20Object;
			if(!processConfig9NodeTextWatermarksTextWatermark["TemplateId"].isNull())
				textWatermark20Object.templateId = processConfig9NodeTextWatermarksTextWatermark["TemplateId"].asString();
			auto overwriteParams21Node = value["OverwriteParams"];
			if(!overwriteParams21Node["Content"].isNull())
				textWatermark20Object.overwriteParams21.content = overwriteParams21Node["Content"].asString();
			if(!overwriteParams21Node["FontName"].isNull())
				textWatermark20Object.overwriteParams21.fontName = overwriteParams21Node["FontName"].asString();
			if(!overwriteParams21Node["FontColor"].isNull())
				textWatermark20Object.overwriteParams21.fontColor = overwriteParams21Node["FontColor"].asString();
			if(!overwriteParams21Node["FontAlpha"].isNull())
				textWatermark20Object.overwriteParams21.fontAlpha = overwriteParams21Node["FontAlpha"].asString();
			if(!overwriteParams21Node["Top"].isNull())
				textWatermark20Object.overwriteParams21.top = overwriteParams21Node["Top"].asString();
			if(!overwriteParams21Node["Left"].isNull())
				textWatermark20Object.overwriteParams21.left = overwriteParams21Node["Left"].asString();
			if(!overwriteParams21Node["FontSize"].isNull())
				textWatermark20Object.overwriteParams21.fontSize = std::stoi(overwriteParams21Node["FontSize"].asString());
			if(!overwriteParams21Node["BorderWidth"].isNull())
				textWatermark20Object.overwriteParams21.borderWidth = std::stoi(overwriteParams21Node["BorderWidth"].asString());
			if(!overwriteParams21Node["BorderColor"].isNull())
				textWatermark20Object.overwriteParams21.borderColor = overwriteParams21Node["BorderColor"].asString();
			if(!overwriteParams21Node["Adaptive"].isNull())
				textWatermark20Object.overwriteParams21.adaptive = overwriteParams21Node["Adaptive"].asString();
			outputGroupItemObject.processConfig9.textWatermarks13.push_back(textWatermark20Object);
		}
		auto allSubtitles14Node = processConfig9Node["Subtitles"]["Subtitle"];
		for (auto processConfig9NodeSubtitlesSubtitle : allSubtitles14Node)
		{
			TranscodeParentJob::OutputGroupItem::ProcessConfig9::Subtitle22 subtitle22Object;
			if(!processConfig9NodeSubtitlesSubtitle["TemplateId"].isNull())
				subtitle22Object.templateId = processConfig9NodeSubtitlesSubtitle["TemplateId"].asString();
			auto overwriteParams23Node = value["OverwriteParams"];
			if(!overwriteParams23Node["Format"].isNull())
				subtitle22Object.overwriteParams23.format = overwriteParams23Node["Format"].asString();
			if(!overwriteParams23Node["CharEnc"].isNull())
				subtitle22Object.overwriteParams23.charEnc = overwriteParams23Node["CharEnc"].asString();
			auto file24Node = overwriteParams23Node["File"];
			if(!file24Node["Type"].isNull())
				subtitle22Object.overwriteParams23.file24.type = file24Node["Type"].asString();
			if(!file24Node["Media"].isNull())
				subtitle22Object.overwriteParams23.file24.media = file24Node["Media"].asString();
			outputGroupItemObject.processConfig9.subtitles14.push_back(subtitle22Object);
		}
		auto allCombineConfigs15Node = processConfig9Node["CombineConfigs"]["CombineConfig"];
		for (auto processConfig9NodeCombineConfigsCombineConfig : allCombineConfigs15Node)
		{
			TranscodeParentJob::OutputGroupItem::ProcessConfig9::CombineConfig25 combineConfig25Object;
			if(!processConfig9NodeCombineConfigsCombineConfig["AudioIndex"].isNull())
				combineConfig25Object.audioIndex = processConfig9NodeCombineConfigsCombineConfig["AudioIndex"].asString();
			if(!processConfig9NodeCombineConfigsCombineConfig["VideoIndex"].isNull())
				combineConfig25Object.videoIndex = processConfig9NodeCombineConfigsCombineConfig["VideoIndex"].asString();
			if(!processConfig9NodeCombineConfigsCombineConfig["Start"].isNull())
				combineConfig25Object.start = processConfig9NodeCombineConfigsCombineConfig["Start"].asString();
			if(!processConfig9NodeCombineConfigsCombineConfig["Duration"].isNull())
				combineConfig25Object.duration = processConfig9NodeCombineConfigsCombineConfig["Duration"].asString();
			outputGroupItemObject.processConfig9.combineConfigs15.push_back(combineConfig25Object);
		}
		auto transcode10Node = processConfig9Node["Transcode"];
		if(!transcode10Node["TemplateId"].isNull())
			outputGroupItemObject.processConfig9.transcode10.templateId = transcode10Node["TemplateId"].asString();
		auto overwriteParams26Node = transcode10Node["OverwriteParams"];
		auto video27Node = overwriteParams26Node["Video"];
		if(!video27Node["Codec"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.codec = video27Node["Codec"].asString();
		if(!video27Node["Profile"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.profile = video27Node["Profile"].asString();
		if(!video27Node["Bitrate"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.bitrate = video27Node["Bitrate"].asString();
		if(!video27Node["Crf"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.crf = video27Node["Crf"].asString();
		if(!video27Node["Width"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.width = video27Node["Width"].asString();
		if(!video27Node["Height"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.height = video27Node["Height"].asString();
		if(!video27Node["Fps"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.fps = video27Node["Fps"].asString();
		if(!video27Node["Gop"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.gop = video27Node["Gop"].asString();
		if(!video27Node["Preset"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.preset = video27Node["Preset"].asString();
		if(!video27Node["ScanMode"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.scanMode = video27Node["ScanMode"].asString();
		if(!video27Node["PixFmt"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.pixFmt = video27Node["PixFmt"].asString();
		if(!video27Node["Remove"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.remove = video27Node["Remove"].asString();
		if(!video27Node["Crop"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.crop = video27Node["Crop"].asString();
		if(!video27Node["Pad"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.pad = video27Node["Pad"].asString();
		if(!video27Node["LongShortMode"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.longShortMode = video27Node["LongShortMode"].asString();
		if(!video27Node["Bufsize"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.bufsize = video27Node["Bufsize"].asString();
		if(!video27Node["Maxrate"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.maxrate = video27Node["Maxrate"].asString();
		if(!video27Node["AbrMax"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.video27.abrMax = video27Node["AbrMax"].asString();
		auto audio28Node = overwriteParams26Node["Audio"];
		if(!audio28Node["Codec"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.codec = audio28Node["Codec"].asString();
		if(!audio28Node["Profile"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.profile = audio28Node["Profile"].asString();
		if(!audio28Node["Samplerate"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.samplerate = audio28Node["Samplerate"].asString();
		if(!audio28Node["Bitrate"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.bitrate = audio28Node["Bitrate"].asString();
		if(!audio28Node["Channels"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.channels = audio28Node["Channels"].asString();
		if(!audio28Node["Remove"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.remove = audio28Node["Remove"].asString();
		auto volume31Node = audio28Node["Volume"];
		if(!volume31Node["Method"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.volume31.method = volume31Node["Method"].asString();
		if(!volume31Node["IntegratedLoudnessTarget"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.volume31.integratedLoudnessTarget = volume31Node["IntegratedLoudnessTarget"].asString();
		if(!volume31Node["TruePeak"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.volume31.truePeak = volume31Node["TruePeak"].asString();
		if(!volume31Node["LoudnessRangeTarget"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.audio28.volume31.loudnessRangeTarget = volume31Node["LoudnessRangeTarget"].asString();
		auto container29Node = overwriteParams26Node["Container"];
		if(!container29Node["Format"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.container29.format = container29Node["Format"].asString();
		auto muxConfig30Node = overwriteParams26Node["MuxConfig"];
		auto segment32Node = muxConfig30Node["Segment"];
		if(!segment32Node["Duration"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.muxConfig30.segment32.duration = segment32Node["Duration"].asString();
		if(!segment32Node["ForceSegTime"].isNull())
			outputGroupItemObject.processConfig9.transcode10.overwriteParams26.muxConfig30.segment32.forceSegTime = segment32Node["ForceSegTime"].asString();
		auto encryption11Node = processConfig9Node["Encryption"];
		if(!encryption11Node["EncryptType"].isNull())
			outputGroupItemObject.processConfig9.encryption11.encryptType = encryption11Node["EncryptType"].asString();
		if(!encryption11Node["CipherText"].isNull())
			outputGroupItemObject.processConfig9.encryption11.cipherText = encryption11Node["CipherText"].asString();
		if(!encryption11Node["DecryptKeyUri"].isNull())
			outputGroupItemObject.processConfig9.encryption11.decryptKeyUri = encryption11Node["DecryptKeyUri"].asString();
		transcodeParentJob_.outputGroup.push_back(outputGroupItemObject);
	}
	auto scheduleConfigNode = transcodeParentJobNode["ScheduleConfig"];
	if(!scheduleConfigNode["PipelineId"].isNull())
		transcodeParentJob_.scheduleConfig.pipelineId = scheduleConfigNode["PipelineId"].asString();
	if(!scheduleConfigNode["Priority"].isNull())
		transcodeParentJob_.scheduleConfig.priority = std::stoi(scheduleConfigNode["Priority"].asString());

}

GetTranscodeJobResult::TranscodeParentJob GetTranscodeJobResult::getTranscodeParentJob()const
{
	return transcodeParentJob_;
}

