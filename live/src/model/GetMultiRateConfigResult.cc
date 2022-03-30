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

#include <alibabacloud/live/model/GetMultiRateConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

GetMultiRateConfigResult::GetMultiRateConfigResult() :
	ServiceResult()
{}

GetMultiRateConfigResult::GetMultiRateConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMultiRateConfigResult::~GetMultiRateConfigResult()
{}

void GetMultiRateConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesInfoNode = value["TemplatesInfo"]["Detail"];
	for (auto valueTemplatesInfoDetail : allTemplatesInfoNode)
	{
		Detail templatesInfoObject;
		if(!valueTemplatesInfoDetail["AudioBitrate"].isNull())
			templatesInfoObject.audioBitrate = std::stoi(valueTemplatesInfoDetail["AudioBitrate"].asString());
		if(!valueTemplatesInfoDetail["Template"].isNull())
			templatesInfoObject._template = valueTemplatesInfoDetail["Template"].asString();
		if(!valueTemplatesInfoDetail["Height"].isNull())
			templatesInfoObject.height = std::stoi(valueTemplatesInfoDetail["Height"].asString());
		if(!valueTemplatesInfoDetail["TemplateType"].isNull())
			templatesInfoObject.templateType = valueTemplatesInfoDetail["TemplateType"].asString();
		if(!valueTemplatesInfoDetail["BandWidth"].isNull())
			templatesInfoObject.bandWidth = std::stoi(valueTemplatesInfoDetail["BandWidth"].asString());
		if(!valueTemplatesInfoDetail["Profile"].isNull())
			templatesInfoObject.profile = std::stoi(valueTemplatesInfoDetail["Profile"].asString());
		if(!valueTemplatesInfoDetail["AudioRate"].isNull())
			templatesInfoObject.audioRate = std::stoi(valueTemplatesInfoDetail["AudioRate"].asString());
		if(!valueTemplatesInfoDetail["AudioCodec"].isNull())
			templatesInfoObject.audioCodec = valueTemplatesInfoDetail["AudioCodec"].asString();
		if(!valueTemplatesInfoDetail["Gop"].isNull())
			templatesInfoObject.gop = valueTemplatesInfoDetail["Gop"].asString();
		if(!valueTemplatesInfoDetail["Width"].isNull())
			templatesInfoObject.width = std::stoi(valueTemplatesInfoDetail["Width"].asString());
		if(!valueTemplatesInfoDetail["VideoBitrate"].isNull())
			templatesInfoObject.videoBitrate = std::stoi(valueTemplatesInfoDetail["VideoBitrate"].asString());
		if(!valueTemplatesInfoDetail["AudioChannelNum"].isNull())
			templatesInfoObject.audioChannelNum = std::stoi(valueTemplatesInfoDetail["AudioChannelNum"].asString());
		if(!valueTemplatesInfoDetail["Fps"].isNull())
			templatesInfoObject.fps = std::stoi(valueTemplatesInfoDetail["Fps"].asString());
		if(!valueTemplatesInfoDetail["AudioProfile"].isNull())
			templatesInfoObject.audioProfile = valueTemplatesInfoDetail["AudioProfile"].asString();
		templatesInfo_.push_back(templatesInfoObject);
	}
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["App"].isNull())
		app_ = value["App"].asString();
	if(!value["AvFormat"].isNull())
		avFormat_ = value["AvFormat"].asString();
	if(!value["Stream"].isNull())
		stream_ = value["Stream"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["IsLazy"].isNull())
		isLazy_ = value["IsLazy"].asString();
	if(!value["IsTimeAlign"].isNull())
		isTimeAlign_ = value["IsTimeAlign"].asString();

}

std::string GetMultiRateConfigResult::getApp()const
{
	return app_;
}

std::string GetMultiRateConfigResult::getMessage()const
{
	return message_;
}

std::string GetMultiRateConfigResult::getIsLazy()const
{
	return isLazy_;
}

std::string GetMultiRateConfigResult::getIsTimeAlign()const
{
	return isTimeAlign_;
}

std::string GetMultiRateConfigResult::getStream()const
{
	return stream_;
}

std::string GetMultiRateConfigResult::getDomain()const
{
	return domain_;
}

std::string GetMultiRateConfigResult::getAvFormat()const
{
	return avFormat_;
}

std::vector<GetMultiRateConfigResult::Detail> GetMultiRateConfigResult::getTemplatesInfo()const
{
	return templatesInfo_;
}

int GetMultiRateConfigResult::getCode()const
{
	return code_;
}

std::string GetMultiRateConfigResult::getGroupId()const
{
	return groupId_;
}

