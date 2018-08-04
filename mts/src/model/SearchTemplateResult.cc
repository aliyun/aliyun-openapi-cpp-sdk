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

#include <alibabacloud/mts/model/SearchTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

SearchTemplateResult::SearchTemplateResult() :
	ServiceResult()
{}

SearchTemplateResult::SearchTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTemplateResult::~SearchTemplateResult()
{}

void SearchTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTemplateList = value["TemplateList"]["Template"];
	for (auto value : allTemplateList)
	{
		_Template templateListObject;
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
		if(!videoNode["Remove"].isNull())
			templateListObject.video.remove = videoNode["Remove"].asString();
		if(!videoNode["Crop"].isNull())
			templateListObject.video.crop = videoNode["Crop"].asString();
		if(!videoNode["Pad"].isNull())
			templateListObject.video.pad = videoNode["Pad"].asString();
		if(!videoNode["MaxFps"].isNull())
			templateListObject.video.maxFps = videoNode["MaxFps"].asString();
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
		if(!audioNode["Remove"].isNull())
			templateListObject.audio.remove = audioNode["Remove"].asString();
		auto transConfigNode = value["TransConfig"];
		if(!transConfigNode["TransMode"].isNull())
			templateListObject.transConfig.transMode = transConfigNode["TransMode"].asString();
		if(!transConfigNode["IsCheckReso"].isNull())
			templateListObject.transConfig.isCheckReso = transConfigNode["IsCheckReso"].asString();
		if(!transConfigNode["IsCheckResoFail"].isNull())
			templateListObject.transConfig.isCheckResoFail = transConfigNode["IsCheckResoFail"].asString();
		if(!transConfigNode["IsCheckVideoBitrate"].isNull())
			templateListObject.transConfig.isCheckVideoBitrate = transConfigNode["IsCheckVideoBitrate"].asString();
		if(!transConfigNode["IsCheckAudioBitrate"].isNull())
			templateListObject.transConfig.isCheckAudioBitrate = transConfigNode["IsCheckAudioBitrate"].asString();
		if(!transConfigNode["AdjDarMethod"].isNull())
			templateListObject.transConfig.adjDarMethod = transConfigNode["AdjDarMethod"].asString();
		if(!transConfigNode["IsCheckVideoBitrateFail"].isNull())
			templateListObject.transConfig.isCheckVideoBitrateFail = transConfigNode["IsCheckVideoBitrateFail"].asString();
		if(!transConfigNode["IsCheckAudioBitrateFail"].isNull())
			templateListObject.transConfig.isCheckAudioBitrateFail = transConfigNode["IsCheckAudioBitrateFail"].asString();
		auto muxConfigNode = value["MuxConfig"];
		auto segmentNode = muxConfigNode["Segment"];
		if(!segmentNode["Duration"].isNull())
			templateListObject.muxConfig.segment.duration = segmentNode["Duration"].asString();
		auto gifNode = muxConfigNode["Gif"];
		if(!gifNode["Loop"].isNull())
			templateListObject.muxConfig.gif.loop = gifNode["Loop"].asString();
		if(!gifNode["FinalDelay"].isNull())
			templateListObject.muxConfig.gif.finalDelay = gifNode["FinalDelay"].asString();
		if(!gifNode["IsCustomPalette"].isNull())
			templateListObject.muxConfig.gif.isCustomPalette = gifNode["IsCustomPalette"].asString();
		if(!gifNode["DitherMode"].isNull())
			templateListObject.muxConfig.gif.ditherMode = gifNode["DitherMode"].asString();
		templateList_.push_back(templateListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long SearchTemplateResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<SearchTemplateResult::_Template> SearchTemplateResult::getTemplateList()const
{
	return templateList_;
}

long SearchTemplateResult::getPageSize()const
{
	return pageSize_;
}

long SearchTemplateResult::getPageNumber()const
{
	return pageNumber_;
}

