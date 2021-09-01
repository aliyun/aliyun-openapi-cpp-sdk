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

#include <alibabacloud/mts/model/SubmitAnalysisJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SubmitAnalysisJobResult::SubmitAnalysisJobResult() :
	ServiceResult()
{}

SubmitAnalysisJobResult::SubmitAnalysisJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitAnalysisJobResult::~SubmitAnalysisJobResult()
{}

void SubmitAnalysisJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto analysisJobNode = value["AnalysisJob"];
	if(!analysisJobNode["CreationTime"].isNull())
		analysisJob_.creationTime = analysisJobNode["CreationTime"].asString();
	if(!analysisJobNode["Percent"].isNull())
		analysisJob_.percent = std::stol(analysisJobNode["Percent"].asString());
	if(!analysisJobNode["State"].isNull())
		analysisJob_.state = analysisJobNode["State"].asString();
	if(!analysisJobNode["Message"].isNull())
		analysisJob_.message = analysisJobNode["Message"].asString();
	if(!analysisJobNode["Priority"].isNull())
		analysisJob_.priority = analysisJobNode["Priority"].asString();
	if(!analysisJobNode["UserData"].isNull())
		analysisJob_.userData = analysisJobNode["UserData"].asString();
	if(!analysisJobNode["Code"].isNull())
		analysisJob_.code = analysisJobNode["Code"].asString();
	if(!analysisJobNode["PipelineId"].isNull())
		analysisJob_.pipelineId = analysisJobNode["PipelineId"].asString();
	if(!analysisJobNode["Id"].isNull())
		analysisJob_.id = analysisJobNode["Id"].asString();
	auto allTemplateListNode = analysisJobNode["TemplateList"]["Template"];
	for (auto analysisJobNodeTemplateListTemplate : allTemplateListNode)
	{
		AnalysisJob::_Template _templateObject;
		if(!analysisJobNodeTemplateListTemplate["State"].isNull())
			_templateObject.state = analysisJobNodeTemplateListTemplate["State"].asString();
		if(!analysisJobNodeTemplateListTemplate["Name"].isNull())
			_templateObject.name = analysisJobNodeTemplateListTemplate["Name"].asString();
		if(!analysisJobNodeTemplateListTemplate["Id"].isNull())
			_templateObject.id = analysisJobNodeTemplateListTemplate["Id"].asString();
		auto videoNode = value["Video"];
		if(!videoNode["Bufsize"].isNull())
			_templateObject.video.bufsize = videoNode["Bufsize"].asString();
		if(!videoNode["Degrain"].isNull())
			_templateObject.video.degrain = videoNode["Degrain"].asString();
		if(!videoNode["PixFmt"].isNull())
			_templateObject.video.pixFmt = videoNode["PixFmt"].asString();
		if(!videoNode["Codec"].isNull())
			_templateObject.video.codec = videoNode["Codec"].asString();
		if(!videoNode["Height"].isNull())
			_templateObject.video.height = videoNode["Height"].asString();
		if(!videoNode["Qscale"].isNull())
			_templateObject.video.qscale = videoNode["Qscale"].asString();
		if(!videoNode["Bitrate"].isNull())
			_templateObject.video.bitrate = videoNode["Bitrate"].asString();
		if(!videoNode["Maxrate"].isNull())
			_templateObject.video.maxrate = videoNode["Maxrate"].asString();
		if(!videoNode["Profile"].isNull())
			_templateObject.video.profile = videoNode["Profile"].asString();
		if(!videoNode["Crf"].isNull())
			_templateObject.video.crf = videoNode["Crf"].asString();
		if(!videoNode["Gop"].isNull())
			_templateObject.video.gop = videoNode["Gop"].asString();
		if(!videoNode["Width"].isNull())
			_templateObject.video.width = videoNode["Width"].asString();
		if(!videoNode["Fps"].isNull())
			_templateObject.video.fps = videoNode["Fps"].asString();
		if(!videoNode["Preset"].isNull())
			_templateObject.video.preset = videoNode["Preset"].asString();
		if(!videoNode["ScanMode"].isNull())
			_templateObject.video.scanMode = videoNode["ScanMode"].asString();
		auto bitrateBndNode = videoNode["BitrateBnd"];
		if(!bitrateBndNode["Max"].isNull())
			_templateObject.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
		if(!bitrateBndNode["Min"].isNull())
			_templateObject.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
		auto transConfigNode = value["TransConfig"];
		if(!transConfigNode["TransMode"].isNull())
			_templateObject.transConfig.transMode = transConfigNode["TransMode"].asString();
		auto muxConfigNode = value["MuxConfig"];
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["FinalDelay"].isNull())
			_templateObject.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["Loop"].isNull())
			_templateObject.muxConfig.gif.loop = gifNode["Loop"].asString();
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			_templateObject.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto audioNode = value["Audio"];
		if(!audioNode["Profile"].isNull())
			_templateObject.audio.profile = audioNode["Profile"].asString();
		if(!audioNode["Codec"].isNull())
			_templateObject.audio.codec = audioNode["Codec"].asString();
		if(!audioNode["Samplerate"].isNull())
			_templateObject.audio.samplerate = audioNode["Samplerate"].asString();
		if(!audioNode["Qscale"].isNull())
			_templateObject.audio.qscale = audioNode["Qscale"].asString();
		if(!audioNode["Channels"].isNull())
			_templateObject.audio.channels = audioNode["Channels"].asString();
		if(!audioNode["Bitrate"].isNull())
			_templateObject.audio.bitrate = audioNode["Bitrate"].asString();
		auto containerNode = value["Container"];
		if(!containerNode["Format"].isNull())
			_templateObject.container.format = containerNode["Format"].asString();
		analysisJob_.templateList.push_back(_templateObject);
	}
	auto analysisConfigNode = analysisJobNode["AnalysisConfig"];
	auto qualityControlNode = analysisConfigNode["QualityControl"];
	if(!qualityControlNode["MethodStreaming"].isNull())
		analysisJob_.analysisConfig.qualityControl.methodStreaming = qualityControlNode["MethodStreaming"].asString();
	if(!qualityControlNode["RateQuality"].isNull())
		analysisJob_.analysisConfig.qualityControl.rateQuality = qualityControlNode["RateQuality"].asString();
	auto propertiesControlNode = analysisConfigNode["PropertiesControl"];
	if(!propertiesControlNode["Deinterlace"].isNull())
		analysisJob_.analysisConfig.propertiesControl.deinterlace = propertiesControlNode["Deinterlace"].asString();
	auto cropNode = propertiesControlNode["Crop"];
	if(!cropNode["Top"].isNull())
		analysisJob_.analysisConfig.propertiesControl.crop.top = cropNode["Top"].asString();
	if(!cropNode["Width"].isNull())
		analysisJob_.analysisConfig.propertiesControl.crop.width = cropNode["Width"].asString();
	if(!cropNode["Height"].isNull())
		analysisJob_.analysisConfig.propertiesControl.crop.height = cropNode["Height"].asString();
	if(!cropNode["Left"].isNull())
		analysisJob_.analysisConfig.propertiesControl.crop.left = cropNode["Left"].asString();
	if(!cropNode["Mode"].isNull())
		analysisJob_.analysisConfig.propertiesControl.crop.mode = cropNode["Mode"].asString();
	auto mNSMessageResultNode = analysisJobNode["MNSMessageResult"];
	if(!mNSMessageResultNode["MessageId"].isNull())
		analysisJob_.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
	if(!mNSMessageResultNode["ErrorMessage"].isNull())
		analysisJob_.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
	if(!mNSMessageResultNode["ErrorCode"].isNull())
		analysisJob_.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
	auto inputFileNode = analysisJobNode["InputFile"];
	if(!inputFileNode["Object"].isNull())
		analysisJob_.inputFile.object = inputFileNode["Object"].asString();
	if(!inputFileNode["Location"].isNull())
		analysisJob_.inputFile.location = inputFileNode["Location"].asString();
	if(!inputFileNode["Bucket"].isNull())
		analysisJob_.inputFile.bucket = inputFileNode["Bucket"].asString();

}

SubmitAnalysisJobResult::AnalysisJob SubmitAnalysisJobResult::getAnalysisJob()const
{
	return analysisJob_;
}

