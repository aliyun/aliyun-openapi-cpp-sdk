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

#include <alibabacloud/ice/model/ListTranscodeJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListTranscodeJobsResult::ListTranscodeJobsResult() :
	ServiceResult()
{}

ListTranscodeJobsResult::ListTranscodeJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTranscodeJobsResult::~ListTranscodeJobsResult()
{}

void ListTranscodeJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["Job"];
	for (auto valueJobsJob : allJobsNode)
	{
		Job jobsObject;
		if(!valueJobsJob["CreateTime"].isNull())
			jobsObject.createTime = valueJobsJob["CreateTime"].asString();
		if(!valueJobsJob["Name"].isNull())
			jobsObject.name = valueJobsJob["Name"].asString();
		if(!valueJobsJob["RequestId"].isNull())
			jobsObject.requestId = valueJobsJob["RequestId"].asString();
		if(!valueJobsJob["ParentJobId"].isNull())
			jobsObject.parentJobId = valueJobsJob["ParentJobId"].asString();
		if(!valueJobsJob["JobCount"].isNull())
			jobsObject.jobCount = std::stoi(valueJobsJob["JobCount"].asString());
		if(!valueJobsJob["Status"].isNull())
			jobsObject.status = valueJobsJob["Status"].asString();
		if(!valueJobsJob["TriggerSource"].isNull())
			jobsObject.triggerSource = valueJobsJob["TriggerSource"].asString();
		if(!valueJobsJob["Percent"].isNull())
			jobsObject.percent = std::stoi(valueJobsJob["Percent"].asString());
		if(!valueJobsJob["SubmitTime"].isNull())
			jobsObject.submitTime = valueJobsJob["SubmitTime"].asString();
		if(!valueJobsJob["FinishTime"].isNull())
			jobsObject.finishTime = valueJobsJob["FinishTime"].asString();
		if(!valueJobsJob["UserData"].isNull())
			jobsObject.userData = valueJobsJob["UserData"].asString();
		auto allInputGroupNode = valueJobsJob["InputGroup"]["InputGroupItem"];
		for (auto valueJobsJobInputGroupInputGroupItem : allInputGroupNode)
		{
			Job::InputGroupItem inputGroupObject;
			if(!valueJobsJobInputGroupInputGroupItem["Type"].isNull())
				inputGroupObject.type = valueJobsJobInputGroupInputGroupItem["Type"].asString();
			if(!valueJobsJobInputGroupInputGroupItem["Media"].isNull())
				inputGroupObject.media = valueJobsJobInputGroupInputGroupItem["Media"].asString();
			if(!valueJobsJobInputGroupInputGroupItem["InputUrl"].isNull())
				inputGroupObject.inputUrl = valueJobsJobInputGroupInputGroupItem["InputUrl"].asString();
			jobsObject.inputGroup.push_back(inputGroupObject);
		}
		auto allOutputGroupNode = valueJobsJob["OutputGroup"]["OutputGroupItem"];
		for (auto valueJobsJobOutputGroupOutputGroupItem : allOutputGroupNode)
		{
			Job::OutputGroupItem outputGroupObject;
			auto outputNode = value["Output"];
			if(!outputNode["Type"].isNull())
				outputGroupObject.output.type = outputNode["Type"].asString();
			if(!outputNode["Media"].isNull())
				outputGroupObject.output.media = outputNode["Media"].asString();
			if(!outputNode["OutputUrl"].isNull())
				outputGroupObject.output.outputUrl = outputNode["OutputUrl"].asString();
			auto processConfigNode = value["ProcessConfig"];
			if(!processConfigNode["IsInheritTags"].isNull())
				outputGroupObject.processConfig.isInheritTags = processConfigNode["IsInheritTags"].asString() == "true";
			auto allImageWatermarksNode = processConfigNode["ImageWatermarks"]["ImageWatermark"];
			for (auto processConfigNodeImageWatermarksImageWatermark : allImageWatermarksNode)
			{
				Job::OutputGroupItem::ProcessConfig::ImageWatermark imageWatermarkObject;
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
				outputGroupObject.processConfig.imageWatermarks.push_back(imageWatermarkObject);
			}
			auto allTextWatermarksNode = processConfigNode["TextWatermarks"]["TextWatermark"];
			for (auto processConfigNodeTextWatermarksTextWatermark : allTextWatermarksNode)
			{
				Job::OutputGroupItem::ProcessConfig::TextWatermark textWatermarkObject;
				if(!processConfigNodeTextWatermarksTextWatermark["TemplateId"].isNull())
					textWatermarkObject.templateId = processConfigNodeTextWatermarksTextWatermark["TemplateId"].asString();
				auto overwriteParams1Node = value["OverwriteParams"];
				if(!overwriteParams1Node["Content"].isNull())
					textWatermarkObject.overwriteParams1.content = overwriteParams1Node["Content"].asString();
				if(!overwriteParams1Node["FontName"].isNull())
					textWatermarkObject.overwriteParams1.fontName = overwriteParams1Node["FontName"].asString();
				if(!overwriteParams1Node["FontColor"].isNull())
					textWatermarkObject.overwriteParams1.fontColor = overwriteParams1Node["FontColor"].asString();
				if(!overwriteParams1Node["FontAlpha"].isNull())
					textWatermarkObject.overwriteParams1.fontAlpha = overwriteParams1Node["FontAlpha"].asString();
				if(!overwriteParams1Node["Top"].isNull())
					textWatermarkObject.overwriteParams1.top = overwriteParams1Node["Top"].asString();
				if(!overwriteParams1Node["Left"].isNull())
					textWatermarkObject.overwriteParams1.left = overwriteParams1Node["Left"].asString();
				if(!overwriteParams1Node["FontSize"].isNull())
					textWatermarkObject.overwriteParams1.fontSize = std::stoi(overwriteParams1Node["FontSize"].asString());
				if(!overwriteParams1Node["BorderWidth"].isNull())
					textWatermarkObject.overwriteParams1.borderWidth = std::stoi(overwriteParams1Node["BorderWidth"].asString());
				if(!overwriteParams1Node["BorderColor"].isNull())
					textWatermarkObject.overwriteParams1.borderColor = overwriteParams1Node["BorderColor"].asString();
				if(!overwriteParams1Node["Adaptive"].isNull())
					textWatermarkObject.overwriteParams1.adaptive = overwriteParams1Node["Adaptive"].asString();
				outputGroupObject.processConfig.textWatermarks.push_back(textWatermarkObject);
			}
			auto allSubtitlesNode = processConfigNode["Subtitles"]["Subtitle"];
			for (auto processConfigNodeSubtitlesSubtitle : allSubtitlesNode)
			{
				Job::OutputGroupItem::ProcessConfig::Subtitle subtitleObject;
				if(!processConfigNodeSubtitlesSubtitle["TemplateId"].isNull())
					subtitleObject.templateId = processConfigNodeSubtitlesSubtitle["TemplateId"].asString();
				auto overwriteParams2Node = value["OverwriteParams"];
				if(!overwriteParams2Node["Format"].isNull())
					subtitleObject.overwriteParams2.format = overwriteParams2Node["Format"].asString();
				if(!overwriteParams2Node["CharEnc"].isNull())
					subtitleObject.overwriteParams2.charEnc = overwriteParams2Node["CharEnc"].asString();
				auto file3Node = overwriteParams2Node["File"];
				if(!file3Node["Type"].isNull())
					subtitleObject.overwriteParams2.file3.type = file3Node["Type"].asString();
				if(!file3Node["Media"].isNull())
					subtitleObject.overwriteParams2.file3.media = file3Node["Media"].asString();
				outputGroupObject.processConfig.subtitles.push_back(subtitleObject);
			}
			auto allCombineConfigsNode = processConfigNode["CombineConfigs"]["CombineConfig"];
			for (auto processConfigNodeCombineConfigsCombineConfig : allCombineConfigsNode)
			{
				Job::OutputGroupItem::ProcessConfig::CombineConfig combineConfigObject;
				if(!processConfigNodeCombineConfigsCombineConfig["AudioIndex"].isNull())
					combineConfigObject.audioIndex = processConfigNodeCombineConfigsCombineConfig["AudioIndex"].asString();
				if(!processConfigNodeCombineConfigsCombineConfig["VideoIndex"].isNull())
					combineConfigObject.videoIndex = processConfigNodeCombineConfigsCombineConfig["VideoIndex"].asString();
				if(!processConfigNodeCombineConfigsCombineConfig["Start"].isNull())
					combineConfigObject.start = processConfigNodeCombineConfigsCombineConfig["Start"].asString();
				if(!processConfigNodeCombineConfigsCombineConfig["Duration"].isNull())
					combineConfigObject.duration = processConfigNodeCombineConfigsCombineConfig["Duration"].asString();
				outputGroupObject.processConfig.combineConfigs.push_back(combineConfigObject);
			}
			auto transcodeNode = processConfigNode["Transcode"];
			if(!transcodeNode["TemplateId"].isNull())
				outputGroupObject.processConfig.transcode.templateId = transcodeNode["TemplateId"].asString();
			auto overwriteParams4Node = transcodeNode["OverwriteParams"];
			if(!overwriteParams4Node["Tags"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.tags = overwriteParams4Node["Tags"].asString();
			auto videoNode = overwriteParams4Node["Video"];
			if(!videoNode["Codec"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.codec = videoNode["Codec"].asString();
			if(!videoNode["Profile"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.profile = videoNode["Profile"].asString();
			if(!videoNode["Bitrate"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.bitrate = videoNode["Bitrate"].asString();
			if(!videoNode["Crf"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.crf = videoNode["Crf"].asString();
			if(!videoNode["Width"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.width = videoNode["Width"].asString();
			if(!videoNode["Height"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.height = videoNode["Height"].asString();
			if(!videoNode["Fps"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.fps = videoNode["Fps"].asString();
			if(!videoNode["Gop"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.gop = videoNode["Gop"].asString();
			if(!videoNode["Preset"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.preset = videoNode["Preset"].asString();
			if(!videoNode["ScanMode"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.scanMode = videoNode["ScanMode"].asString();
			if(!videoNode["PixFmt"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.pixFmt = videoNode["PixFmt"].asString();
			if(!videoNode["Remove"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.remove = videoNode["Remove"].asString();
			if(!videoNode["Crop"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.crop = videoNode["Crop"].asString();
			if(!videoNode["Pad"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.pad = videoNode["Pad"].asString();
			if(!videoNode["LongShortMode"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.longShortMode = videoNode["LongShortMode"].asString();
			if(!videoNode["Bufsize"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.bufsize = videoNode["Bufsize"].asString();
			if(!videoNode["Maxrate"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.maxrate = videoNode["Maxrate"].asString();
			if(!videoNode["AbrMax"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.video.abrMax = videoNode["AbrMax"].asString();
			auto audioNode = overwriteParams4Node["Audio"];
			if(!audioNode["Codec"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.codec = audioNode["Codec"].asString();
			if(!audioNode["Profile"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.profile = audioNode["Profile"].asString();
			if(!audioNode["Samplerate"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.samplerate = audioNode["Samplerate"].asString();
			if(!audioNode["Bitrate"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.bitrate = audioNode["Bitrate"].asString();
			if(!audioNode["Channels"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.channels = audioNode["Channels"].asString();
			if(!audioNode["Remove"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.remove = audioNode["Remove"].asString();
			auto volumeNode = audioNode["Volume"];
			if(!volumeNode["Method"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.volume.method = volumeNode["Method"].asString();
			if(!volumeNode["IntegratedLoudnessTarget"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.volume.integratedLoudnessTarget = volumeNode["IntegratedLoudnessTarget"].asString();
			if(!volumeNode["TruePeak"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.volume.truePeak = volumeNode["TruePeak"].asString();
			if(!volumeNode["LoudnessRangeTarget"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.audio.volume.loudnessRangeTarget = volumeNode["LoudnessRangeTarget"].asString();
			auto containerNode = overwriteParams4Node["Container"];
			if(!containerNode["Format"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.container.format = containerNode["Format"].asString();
			auto muxConfigNode = overwriteParams4Node["MuxConfig"];
			auto segmentNode = muxConfigNode["Segment"];
			if(!segmentNode["Duration"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.muxConfig.segment.duration = segmentNode["Duration"].asString();
			if(!segmentNode["ForceSegTime"].isNull())
				outputGroupObject.processConfig.transcode.overwriteParams4.muxConfig.segment.forceSegTime = segmentNode["ForceSegTime"].asString();
			auto encryptionNode = processConfigNode["Encryption"];
			if(!encryptionNode["EncryptType"].isNull())
				outputGroupObject.processConfig.encryption.encryptType = encryptionNode["EncryptType"].asString();
			if(!encryptionNode["CipherText"].isNull())
				outputGroupObject.processConfig.encryption.cipherText = encryptionNode["CipherText"].asString();
			if(!encryptionNode["DecryptKeyUri"].isNull())
				outputGroupObject.processConfig.encryption.decryptKeyUri = encryptionNode["DecryptKeyUri"].asString();
			jobsObject.outputGroup.push_back(outputGroupObject);
		}
		auto scheduleConfigNode = value["ScheduleConfig"];
		if(!scheduleConfigNode["PipelineId"].isNull())
			jobsObject.scheduleConfig.pipelineId = scheduleConfigNode["PipelineId"].asString();
		if(!scheduleConfigNode["Priority"].isNull())
			jobsObject.scheduleConfig.priority = std::stoi(scheduleConfigNode["Priority"].asString());
		jobs_.push_back(jobsObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<ListTranscodeJobsResult::Job> ListTranscodeJobsResult::getJobs()const
{
	return jobs_;
}

std::string ListTranscodeJobsResult::getNextPageToken()const
{
	return nextPageToken_;
}

