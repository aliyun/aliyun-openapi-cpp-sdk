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

#include <alibabacloud/rtc/model/DescribeRecordTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRecordTemplatesResult::DescribeRecordTemplatesResult() :
	ServiceResult()
{}

DescribeRecordTemplatesResult::DescribeRecordTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecordTemplatesResult::~DescribeRecordTemplatesResult()
{}

void DescribeRecordTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesNode = value["Templates"]["Template"];
	for (auto valueTemplatesTemplate : allTemplatesNode)
	{
		_Template templatesObject;
		if(!valueTemplatesTemplate["MnsQueue"].isNull())
			templatesObject.mnsQueue = valueTemplatesTemplate["MnsQueue"].asString();
		if(!valueTemplatesTemplate["OssFilePrefix"].isNull())
			templatesObject.ossFilePrefix = valueTemplatesTemplate["OssFilePrefix"].asString();
		if(!valueTemplatesTemplate["CreateTime"].isNull())
			templatesObject.createTime = valueTemplatesTemplate["CreateTime"].asString();
		if(!valueTemplatesTemplate["OssBucket"].isNull())
			templatesObject.ossBucket = valueTemplatesTemplate["OssBucket"].asString();
		if(!valueTemplatesTemplate["DelayStopTime"].isNull())
			templatesObject.delayStopTime = std::stoi(valueTemplatesTemplate["DelayStopTime"].asString());
		if(!valueTemplatesTemplate["MediaEncode"].isNull())
			templatesObject.mediaEncode = std::stoi(valueTemplatesTemplate["MediaEncode"].asString());
		if(!valueTemplatesTemplate["FileSplitInterval"].isNull())
			templatesObject.fileSplitInterval = std::stoi(valueTemplatesTemplate["FileSplitInterval"].asString());
		if(!valueTemplatesTemplate["HttpCallbackUrl"].isNull())
			templatesObject.httpCallbackUrl = valueTemplatesTemplate["HttpCallbackUrl"].asString();
		if(!valueTemplatesTemplate["EnableM3u8DateTime"].isNull())
			templatesObject.enableM3u8DateTime = valueTemplatesTemplate["EnableM3u8DateTime"].asString() == "true";
		if(!valueTemplatesTemplate["BackgroundColor"].isNull())
			templatesObject.backgroundColor = std::stoi(valueTemplatesTemplate["BackgroundColor"].asString());
		if(!valueTemplatesTemplate["Name"].isNull())
			templatesObject.name = valueTemplatesTemplate["Name"].asString();
		if(!valueTemplatesTemplate["TemplateId"].isNull())
			templatesObject.templateId = valueTemplatesTemplate["TemplateId"].asString();
		if(!valueTemplatesTemplate["TaskProfile"].isNull())
			templatesObject.taskProfile = valueTemplatesTemplate["TaskProfile"].asString();
		auto allBackgroundsNode = valueTemplatesTemplate["Backgrounds"]["Background"];
		for (auto valueTemplatesTemplateBackgroundsBackground : allBackgroundsNode)
		{
			_Template::Background backgroundsObject;
			if(!valueTemplatesTemplateBackgroundsBackground["Width"].isNull())
				backgroundsObject.width = std::stof(valueTemplatesTemplateBackgroundsBackground["Width"].asString());
			if(!valueTemplatesTemplateBackgroundsBackground["Height"].isNull())
				backgroundsObject.height = std::stof(valueTemplatesTemplateBackgroundsBackground["Height"].asString());
			if(!valueTemplatesTemplateBackgroundsBackground["Y"].isNull())
				backgroundsObject.y = std::stof(valueTemplatesTemplateBackgroundsBackground["Y"].asString());
			if(!valueTemplatesTemplateBackgroundsBackground["Url"].isNull())
				backgroundsObject.url = valueTemplatesTemplateBackgroundsBackground["Url"].asString();
			if(!valueTemplatesTemplateBackgroundsBackground["Display"].isNull())
				backgroundsObject.display = std::stoi(valueTemplatesTemplateBackgroundsBackground["Display"].asString());
			if(!valueTemplatesTemplateBackgroundsBackground["ZOrder"].isNull())
				backgroundsObject.zOrder = std::stoi(valueTemplatesTemplateBackgroundsBackground["ZOrder"].asString());
			if(!valueTemplatesTemplateBackgroundsBackground["X"].isNull())
				backgroundsObject.x = std::stof(valueTemplatesTemplateBackgroundsBackground["X"].asString());
			templatesObject.backgrounds.push_back(backgroundsObject);
		}
		auto allWatermarksNode = valueTemplatesTemplate["Watermarks"]["Watermark"];
		for (auto valueTemplatesTemplateWatermarksWatermark : allWatermarksNode)
		{
			_Template::Watermark watermarksObject;
			if(!valueTemplatesTemplateWatermarksWatermark["Alpha"].isNull())
				watermarksObject.alpha = std::stof(valueTemplatesTemplateWatermarksWatermark["Alpha"].asString());
			if(!valueTemplatesTemplateWatermarksWatermark["Width"].isNull())
				watermarksObject.width = std::stof(valueTemplatesTemplateWatermarksWatermark["Width"].asString());
			if(!valueTemplatesTemplateWatermarksWatermark["Height"].isNull())
				watermarksObject.height = std::stof(valueTemplatesTemplateWatermarksWatermark["Height"].asString());
			if(!valueTemplatesTemplateWatermarksWatermark["Y"].isNull())
				watermarksObject.y = std::stof(valueTemplatesTemplateWatermarksWatermark["Y"].asString());
			if(!valueTemplatesTemplateWatermarksWatermark["Url"].isNull())
				watermarksObject.url = valueTemplatesTemplateWatermarksWatermark["Url"].asString();
			if(!valueTemplatesTemplateWatermarksWatermark["Display"].isNull())
				watermarksObject.display = std::stoi(valueTemplatesTemplateWatermarksWatermark["Display"].asString());
			if(!valueTemplatesTemplateWatermarksWatermark["ZOrder"].isNull())
				watermarksObject.zOrder = std::stoi(valueTemplatesTemplateWatermarksWatermark["ZOrder"].asString());
			if(!valueTemplatesTemplateWatermarksWatermark["X"].isNull())
				watermarksObject.x = std::stof(valueTemplatesTemplateWatermarksWatermark["X"].asString());
			templatesObject.watermarks.push_back(watermarksObject);
		}
		auto allClockWidgetsNode = valueTemplatesTemplate["ClockWidgets"]["Watermark"];
		for (auto valueTemplatesTemplateClockWidgetsWatermark : allClockWidgetsNode)
		{
			_Template::Watermark1 clockWidgetsObject;
			if(!valueTemplatesTemplateClockWidgetsWatermark["FontType"].isNull())
				clockWidgetsObject.fontType = std::stoi(valueTemplatesTemplateClockWidgetsWatermark["FontType"].asString());
			if(!valueTemplatesTemplateClockWidgetsWatermark["FontColor"].isNull())
				clockWidgetsObject.fontColor = std::stoi(valueTemplatesTemplateClockWidgetsWatermark["FontColor"].asString());
			if(!valueTemplatesTemplateClockWidgetsWatermark["Y"].isNull())
				clockWidgetsObject.y = std::stof(valueTemplatesTemplateClockWidgetsWatermark["Y"].asString());
			if(!valueTemplatesTemplateClockWidgetsWatermark["ZOrder"].isNull())
				clockWidgetsObject.zOrder = std::stoi(valueTemplatesTemplateClockWidgetsWatermark["ZOrder"].asString());
			if(!valueTemplatesTemplateClockWidgetsWatermark["X"].isNull())
				clockWidgetsObject.x = std::stof(valueTemplatesTemplateClockWidgetsWatermark["X"].asString());
			if(!valueTemplatesTemplateClockWidgetsWatermark["FontSize"].isNull())
				clockWidgetsObject.fontSize = std::stoi(valueTemplatesTemplateClockWidgetsWatermark["FontSize"].asString());
			templatesObject.clockWidgets.push_back(clockWidgetsObject);
		}
		auto allLayoutIds = value["LayoutIds"]["LayoutId"];
		for (auto value : allLayoutIds)
			templatesObject.layoutIds.push_back(value.asString());
		auto allFormats = value["Formats"]["Format"];
		for (auto value : allFormats)
			templatesObject.formats.push_back(value.asString());
		templates_.push_back(templatesObject);
	}
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stol(value["TotalPage"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

long DescribeRecordTemplatesResult::getTotalNum()const
{
	return totalNum_;
}

long DescribeRecordTemplatesResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeRecordTemplatesResult::_Template> DescribeRecordTemplatesResult::getTemplates()const
{
	return templates_;
}

