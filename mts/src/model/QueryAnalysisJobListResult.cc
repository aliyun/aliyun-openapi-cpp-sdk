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

#include <alibabacloud/mts/model/QueryAnalysisJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryAnalysisJobListResult::QueryAnalysisJobListResult() :
	ServiceResult()
{}

QueryAnalysisJobListResult::QueryAnalysisJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAnalysisJobListResult::~QueryAnalysisJobListResult()
{}

void QueryAnalysisJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAnalysisJobList = value["AnalysisJobList"]["AnalysisJob"];
	for (auto value : allAnalysisJobList)
	{
		AnalysisJob analysisJobListObject;
		if(!value["Id"].isNull())
			analysisJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			analysisJobListObject.userData = value["UserData"].asString();
		if(!value["State"].isNull())
			analysisJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			analysisJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			analysisJobListObject.message = value["Message"].asString();
		if(!value["Percent"].isNull())
			analysisJobListObject.percent = std::stol(value["Percent"].asString());
		if(!value["CreationTime"].isNull())
			analysisJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["PipelineId"].isNull())
			analysisJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["Priority"].isNull())
			analysisJobListObject.priority = value["Priority"].asString();
		auto allTemplateList = value["TemplateList"]["Template"];
		for (auto value : allTemplateList)
		{
			AnalysisJob::_Template templateListObject;
			if(!value["Id"].isNull())
				templateListObject.id = value["Id"].asString();
			if(!value["Name"].isNull())
				templateListObject.name = value["Name"].asString();
			if(!value["State"].isNull())
				templateListObject.state = value["State"].asString();
			auto containerNode = value["Container"];
			if(!containerNode["Format"].isNull())
				templateListObject.container.format = containerNode["Format"].asString();
			auto videoNode = value["Video"];
			if(!videoNode["Codec"].isNull())
				templateListObject.video.codec = videoNode["Codec"].asString();
			if(!videoNode["Profile"].isNull())
				templateListObject.video.profile = videoNode["Profile"].asString();
			if(!videoNode["Bitrate"].isNull())
				templateListObject.video.bitrate = videoNode["Bitrate"].asString();
			if(!videoNode["Crf"].isNull())
				templateListObject.video.crf = videoNode["Crf"].asString();
			if(!videoNode["Width"].isNull())
				templateListObject.video.width = videoNode["Width"].asString();
			if(!videoNode["Height"].isNull())
				templateListObject.video.height = videoNode["Height"].asString();
			if(!videoNode["Fps"].isNull())
				templateListObject.video.fps = videoNode["Fps"].asString();
			if(!videoNode["Gop"].isNull())
				templateListObject.video.gop = videoNode["Gop"].asString();
			if(!videoNode["Preset"].isNull())
				templateListObject.video.preset = videoNode["Preset"].asString();
			if(!videoNode["ScanMode"].isNull())
				templateListObject.video.scanMode = videoNode["ScanMode"].asString();
			if(!videoNode["Bufsize"].isNull())
				templateListObject.video.bufsize = videoNode["Bufsize"].asString();
			if(!videoNode["Maxrate"].isNull())
				templateListObject.video.maxrate = videoNode["Maxrate"].asString();
			if(!videoNode["PixFmt"].isNull())
				templateListObject.video.pixFmt = videoNode["PixFmt"].asString();
			if(!videoNode["Degrain"].isNull())
				templateListObject.video.degrain = videoNode["Degrain"].asString();
			if(!videoNode["Qscale"].isNull())
				templateListObject.video.qscale = videoNode["Qscale"].asString();
			auto bitrateBndNode = videoNode["BitrateBnd"];
			if(!bitrateBndNode["Max"].isNull())
				templateListObject.video.bitrateBnd.max = bitrateBndNode["Max"].asString();
			if(!bitrateBndNode["Min"].isNull())
				templateListObject.video.bitrateBnd.min = bitrateBndNode["Min"].asString();
			auto audioNode = value["Audio"];
			if(!audioNode["Codec"].isNull())
				templateListObject.audio.codec = audioNode["Codec"].asString();
			if(!audioNode["Profile"].isNull())
				templateListObject.audio.profile = audioNode["Profile"].asString();
			if(!audioNode["Samplerate"].isNull())
				templateListObject.audio.samplerate = audioNode["Samplerate"].asString();
			if(!audioNode["Bitrate"].isNull())
				templateListObject.audio.bitrate = audioNode["Bitrate"].asString();
			if(!audioNode["Channels"].isNull())
				templateListObject.audio.channels = audioNode["Channels"].asString();
			if(!audioNode["Qscale"].isNull())
				templateListObject.audio.qscale = audioNode["Qscale"].asString();
			auto transConfigNode = value["TransConfig"];
			if(!transConfigNode["TransMode"].isNull())
				templateListObject.transConfig.transMode = transConfigNode["TransMode"].asString();
			auto muxConfigNode = value["MuxConfig"];
			auto segmentNode = muxConfigNode["Segment"];
			if(!segmentNode["Duration"].isNull())
				templateListObject.muxConfig.segment.duration = segmentNode["Duration"].asString();
			auto gifNode = muxConfigNode["Gif"];
			if(!gifNode["Loop"].isNull())
				templateListObject.muxConfig.gif.loop = gifNode["Loop"].asString();
			if(!gifNode["FinalDelay"].isNull())
				templateListObject.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
			analysisJobListObject.templateList.push_back(templateListObject);
		}
		auto inputFileNode = value["InputFile"];
		if(!inputFileNode["Bucket"].isNull())
			analysisJobListObject.inputFile.bucket = inputFileNode["Bucket"].asString();
		if(!inputFileNode["Location"].isNull())
			analysisJobListObject.inputFile.location = inputFileNode["Location"].asString();
		if(!inputFileNode["Object"].isNull())
			analysisJobListObject.inputFile.object = inputFileNode["Object"].asString();
		auto analysisConfigNode = value["AnalysisConfig"];
		auto qualityControlNode = analysisConfigNode["QualityControl"];
		if(!qualityControlNode["RateQuality"].isNull())
			analysisJobListObject.analysisConfig.qualityControl.rateQuality = qualityControlNode["RateQuality"].asString();
		if(!qualityControlNode["MethodStreaming"].isNull())
			analysisJobListObject.analysisConfig.qualityControl.methodStreaming = qualityControlNode["MethodStreaming"].asString();
		auto propertiesControlNode = analysisConfigNode["PropertiesControl"];
		if(!propertiesControlNode["Deinterlace"].isNull())
			analysisJobListObject.analysisConfig.propertiesControl.deinterlace = propertiesControlNode["Deinterlace"].asString();
		auto cropNode = propertiesControlNode["Crop"];
		if(!cropNode["Mode"].isNull())
			analysisJobListObject.analysisConfig.propertiesControl.crop.mode = cropNode["Mode"].asString();
		if(!cropNode["Width"].isNull())
			analysisJobListObject.analysisConfig.propertiesControl.crop.width = cropNode["Width"].asString();
		if(!cropNode["Height"].isNull())
			analysisJobListObject.analysisConfig.propertiesControl.crop.height = cropNode["Height"].asString();
		if(!cropNode["Top"].isNull())
			analysisJobListObject.analysisConfig.propertiesControl.crop.top = cropNode["Top"].asString();
		if(!cropNode["Left"].isNull())
			analysisJobListObject.analysisConfig.propertiesControl.crop.left = cropNode["Left"].asString();
		auto mNSMessageResultNode = value["MNSMessageResult"];
		if(!mNSMessageResultNode["MessageId"].isNull())
			analysisJobListObject.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
		if(!mNSMessageResultNode["ErrorMessage"].isNull())
			analysisJobListObject.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
		if(!mNSMessageResultNode["ErrorCode"].isNull())
			analysisJobListObject.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
		analysisJobList_.push_back(analysisJobListObject);
	}
	auto allNonExistAnalysisJobIds = value["NonExistAnalysisJobIds"]["String"];
	for (const auto &item : allNonExistAnalysisJobIds)
		nonExistAnalysisJobIds_.push_back(item.asString());

}

std::vector<QueryAnalysisJobListResult::AnalysisJob> QueryAnalysisJobListResult::getAnalysisJobList()const
{
	return analysisJobList_;
}

std::vector<std::string> QueryAnalysisJobListResult::getNonExistAnalysisJobIds()const
{
	return nonExistAnalysisJobIds_;
}

