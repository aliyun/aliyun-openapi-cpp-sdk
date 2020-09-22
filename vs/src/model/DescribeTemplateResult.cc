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

#include <alibabacloud/vs/model/DescribeTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeTemplateResult::DescribeTemplateResult() :
	ServiceResult()
{}

DescribeTemplateResult::DescribeTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTemplateResult::~DescribeTemplateResult()
{}

void DescribeTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransConfigsNode = value["TransConfigs"]["TransConfig"];
	for (auto valueTransConfigsTransConfig : allTransConfigsNode)
	{
		TransConfig transConfigsObject;
		if(!valueTransConfigsTransConfig["Id"].isNull())
			transConfigsObject.id = valueTransConfigsTransConfig["Id"].asString();
		if(!valueTransConfigsTransConfig["Name"].isNull())
			transConfigsObject.name = valueTransConfigsTransConfig["Name"].asString();
		if(!valueTransConfigsTransConfig["VideoCodec"].isNull())
			transConfigsObject.videoCodec = valueTransConfigsTransConfig["VideoCodec"].asString();
		if(!valueTransConfigsTransConfig["VideoBitrate"].isNull())
			transConfigsObject.videoBitrate = std::stol(valueTransConfigsTransConfig["VideoBitrate"].asString());
		if(!valueTransConfigsTransConfig["Fps"].isNull())
			transConfigsObject.fps = std::stol(valueTransConfigsTransConfig["Fps"].asString());
		if(!valueTransConfigsTransConfig["Gop"].isNull())
			transConfigsObject.gop = std::stol(valueTransConfigsTransConfig["Gop"].asString());
		if(!valueTransConfigsTransConfig["Height"].isNull())
			transConfigsObject.height = std::stol(valueTransConfigsTransConfig["Height"].asString());
		if(!valueTransConfigsTransConfig["Width"].isNull())
			transConfigsObject.width = std::stol(valueTransConfigsTransConfig["Width"].asString());
		transConfigs_.push_back(transConfigsObject);
	}
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["OssBucket"].isNull())
		ossBucket_ = value["OssBucket"].asString();
	if(!value["OssEndpoint"].isNull())
		ossEndpoint_ = value["OssEndpoint"].asString();
	if(!value["OssFilePrefix"].isNull())
		ossFilePrefix_ = value["OssFilePrefix"].asString();
	if(!value["Trigger"].isNull())
		trigger_ = value["Trigger"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["Interval"].isNull())
		interval_ = std::stol(value["Interval"].asString());
	if(!value["Retention"].isNull())
		retention_ = std::stol(value["Retention"].asString());
	if(!value["FileFormat"].isNull())
		fileFormat_ = value["FileFormat"].asString();
	if(!value["JpgOverwrite"].isNull())
		jpgOverwrite_ = value["JpgOverwrite"].asString();
	if(!value["JpgSequence"].isNull())
		jpgSequence_ = value["JpgSequence"].asString();
	if(!value["JpgOnDemand"].isNull())
		jpgOnDemand_ = value["JpgOnDemand"].asString();
	if(!value["Mp4"].isNull())
		mp4_ = value["Mp4"].asString();
	if(!value["Flv"].isNull())
		flv_ = value["Flv"].asString();
	if(!value["HlsM3u8"].isNull())
		hlsM3u8_ = value["HlsM3u8"].asString();
	if(!value["HlsTs"].isNull())
		hlsTs_ = value["HlsTs"].asString();
	if(!value["Callback"].isNull())
		callback_ = value["Callback"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();

}

std::string DescribeTemplateResult::getDescription()const
{
	return description_;
}

std::string DescribeTemplateResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeTemplateResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeTemplateResult::TransConfig> DescribeTemplateResult::getTransConfigs()const
{
	return transConfigs_;
}

std::string DescribeTemplateResult::getHlsTs()const
{
	return hlsTs_;
}

std::string DescribeTemplateResult::getOssBucket()const
{
	return ossBucket_;
}

std::string DescribeTemplateResult::getStartTime()const
{
	return startTime_;
}

long DescribeTemplateResult::getRetention()const
{
	return retention_;
}

std::string DescribeTemplateResult::getFileFormat()const
{
	return fileFormat_;
}

std::string DescribeTemplateResult::getName()const
{
	return name_;
}

std::string DescribeTemplateResult::getJpgOnDemand()const
{
	return jpgOnDemand_;
}

std::string DescribeTemplateResult::getMp4()const
{
	return mp4_;
}

std::string DescribeTemplateResult::getOssFilePrefix()const
{
	return ossFilePrefix_;
}

std::string DescribeTemplateResult::getFlv()const
{
	return flv_;
}

std::string DescribeTemplateResult::getType()const
{
	return type_;
}

std::string DescribeTemplateResult::getJpgSequence()const
{
	return jpgSequence_;
}

std::string DescribeTemplateResult::getTrigger()const
{
	return trigger_;
}

std::string DescribeTemplateResult::getCallback()const
{
	return callback_;
}

std::string DescribeTemplateResult::getOssEndpoint()const
{
	return ossEndpoint_;
}

std::string DescribeTemplateResult::getJpgOverwrite()const
{
	return jpgOverwrite_;
}

std::string DescribeTemplateResult::getRegion()const
{
	return region_;
}

std::string DescribeTemplateResult::getId()const
{
	return id_;
}

std::string DescribeTemplateResult::getHlsM3u8()const
{
	return hlsM3u8_;
}

long DescribeTemplateResult::getInterval()const
{
	return interval_;
}

