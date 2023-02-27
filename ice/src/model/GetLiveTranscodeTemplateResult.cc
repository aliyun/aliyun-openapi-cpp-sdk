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

#include <alibabacloud/ice/model/GetLiveTranscodeTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetLiveTranscodeTemplateResult::GetLiveTranscodeTemplateResult() :
	ServiceResult()
{}

GetLiveTranscodeTemplateResult::GetLiveTranscodeTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLiveTranscodeTemplateResult::~GetLiveTranscodeTemplateResult()
{}

void GetLiveTranscodeTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto templateContentNode = value["TemplateContent"];
	if(!templateContentNode["Name"].isNull())
		templateContent_.name = templateContentNode["Name"].asString();
	if(!templateContentNode["TemplateId"].isNull())
		templateContent_.templateId = templateContentNode["TemplateId"].asString();
	if(!templateContentNode["Type"].isNull())
		templateContent_.type = templateContentNode["Type"].asString();
	if(!templateContentNode["Category"].isNull())
		templateContent_.category = templateContentNode["Category"].asString();
	if(!templateContentNode["CreateTime"].isNull())
		templateContent_.createTime = templateContentNode["CreateTime"].asString();
	auto templateConfigNode = templateContentNode["TemplateConfig"];
	auto videoParamsNode = templateConfigNode["VideoParams"];
	if(!videoParamsNode["Codec"].isNull())
		templateContent_.templateConfig.videoParams.codec = videoParamsNode["Codec"].asString();
	if(!videoParamsNode["Height"].isNull())
		templateContent_.templateConfig.videoParams.height = videoParamsNode["Height"].asString();
	if(!videoParamsNode["Width"].isNull())
		templateContent_.templateConfig.videoParams.width = videoParamsNode["Width"].asString();
	if(!videoParamsNode["Fps"].isNull())
		templateContent_.templateConfig.videoParams.fps = videoParamsNode["Fps"].asString();
	if(!videoParamsNode["Bitrate"].isNull())
		templateContent_.templateConfig.videoParams.bitrate = videoParamsNode["Bitrate"].asString();
	if(!videoParamsNode["Gop"].isNull())
		templateContent_.templateConfig.videoParams.gop = videoParamsNode["Gop"].asString();
	if(!videoParamsNode["Profile"].isNull())
		templateContent_.templateConfig.videoParams.profile = videoParamsNode["Profile"].asString();
	auto audioParamsNode = templateConfigNode["AudioParams"];
	if(!audioParamsNode["Codec"].isNull())
		templateContent_.templateConfig.audioParams.codec = audioParamsNode["Codec"].asString();
	if(!audioParamsNode["Bitrate"].isNull())
		templateContent_.templateConfig.audioParams.bitrate = audioParamsNode["Bitrate"].asString();
	if(!audioParamsNode["Samplerate"].isNull())
		templateContent_.templateConfig.audioParams.samplerate = audioParamsNode["Samplerate"].asString();
	if(!audioParamsNode["Channels"].isNull())
		templateContent_.templateConfig.audioParams.channels = audioParamsNode["Channels"].asString();
	if(!audioParamsNode["Profile"].isNull())
		templateContent_.templateConfig.audioParams.profile = audioParamsNode["Profile"].asString();

}

GetLiveTranscodeTemplateResult::TemplateContent GetLiveTranscodeTemplateResult::getTemplateContent()const
{
	return templateContent_;
}

