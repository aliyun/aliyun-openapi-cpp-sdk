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

#include <alibabacloud/live/model/AddMultiRateConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

AddMultiRateConfigResult::AddMultiRateConfigResult() :
	ServiceResult()
{}

AddMultiRateConfigResult::AddMultiRateConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddMultiRateConfigResult::~AddMultiRateConfigResult()
{}

void AddMultiRateConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBodyNode = value["Body"]["FailedTemplates"];
	for (auto valueBodyFailedTemplates : allBodyNode)
	{
		FailedTemplates bodyObject;
		if(!valueBodyFailedTemplates["AudioBitrate"].isNull())
			bodyObject.audioBitrate = std::stoi(valueBodyFailedTemplates["AudioBitrate"].asString());
		if(!valueBodyFailedTemplates["Template"].isNull())
			bodyObject._template = valueBodyFailedTemplates["Template"].asString();
		if(!valueBodyFailedTemplates["Height"].isNull())
			bodyObject.height = std::stoi(valueBodyFailedTemplates["Height"].asString());
		if(!valueBodyFailedTemplates["TemplateType"].isNull())
			bodyObject.templateType = valueBodyFailedTemplates["TemplateType"].asString();
		if(!valueBodyFailedTemplates["BandWidth"].isNull())
			bodyObject.bandWidth = std::stoi(valueBodyFailedTemplates["BandWidth"].asString());
		if(!valueBodyFailedTemplates["Profile"].isNull())
			bodyObject.profile = std::stoi(valueBodyFailedTemplates["Profile"].asString());
		if(!valueBodyFailedTemplates["AudioRate"].isNull())
			bodyObject.audioRate = std::stoi(valueBodyFailedTemplates["AudioRate"].asString());
		if(!valueBodyFailedTemplates["AudioCodec"].isNull())
			bodyObject.audioCodec = valueBodyFailedTemplates["AudioCodec"].asString();
		if(!valueBodyFailedTemplates["Gop"].isNull())
			bodyObject.gop = valueBodyFailedTemplates["Gop"].asString();
		if(!valueBodyFailedTemplates["Width"].isNull())
			bodyObject.width = std::stoi(valueBodyFailedTemplates["Width"].asString());
		if(!valueBodyFailedTemplates["VideoBitrate"].isNull())
			bodyObject.videoBitrate = std::stoi(valueBodyFailedTemplates["VideoBitrate"].asString());
		if(!valueBodyFailedTemplates["AudioChannelNum"].isNull())
			bodyObject.audioChannelNum = std::stoi(valueBodyFailedTemplates["AudioChannelNum"].asString());
		if(!valueBodyFailedTemplates["Fps"].isNull())
			bodyObject.fps = std::stoi(valueBodyFailedTemplates["Fps"].asString());
		if(!valueBodyFailedTemplates["AudioProfile"].isNull())
			bodyObject.audioProfile = valueBodyFailedTemplates["AudioProfile"].asString();
		body_.push_back(bodyObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AddMultiRateConfigResult::getMessage()const
{
	return message_;
}

std::vector<AddMultiRateConfigResult::FailedTemplates> AddMultiRateConfigResult::getBody()const
{
	return body_;
}

int AddMultiRateConfigResult::getCode()const
{
	return code_;
}

