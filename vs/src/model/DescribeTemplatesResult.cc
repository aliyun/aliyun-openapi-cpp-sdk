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

#include <alibabacloud/vs/model/DescribeTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeTemplatesResult::DescribeTemplatesResult() :
	ServiceResult()
{}

DescribeTemplatesResult::DescribeTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTemplatesResult::~DescribeTemplatesResult()
{}

void DescribeTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesNode = value["Templates"]["Template"];
	for (auto valueTemplatesTemplate : allTemplatesNode)
	{
		_Template templatesObject;
		if(!valueTemplatesTemplate["Id"].isNull())
			templatesObject.id = valueTemplatesTemplate["Id"].asString();
		if(!valueTemplatesTemplate["Name"].isNull())
			templatesObject.name = valueTemplatesTemplate["Name"].asString();
		if(!valueTemplatesTemplate["Description"].isNull())
			templatesObject.description = valueTemplatesTemplate["Description"].asString();
		if(!valueTemplatesTemplate["Type"].isNull())
			templatesObject.type = valueTemplatesTemplate["Type"].asString();
		if(!valueTemplatesTemplate["Region"].isNull())
			templatesObject.region = valueTemplatesTemplate["Region"].asString();
		if(!valueTemplatesTemplate["OssBucket"].isNull())
			templatesObject.ossBucket = valueTemplatesTemplate["OssBucket"].asString();
		if(!valueTemplatesTemplate["OssEndpoint"].isNull())
			templatesObject.ossEndpoint = valueTemplatesTemplate["OssEndpoint"].asString();
		if(!valueTemplatesTemplate["OssFilePrefix"].isNull())
			templatesObject.ossFilePrefix = valueTemplatesTemplate["OssFilePrefix"].asString();
		if(!valueTemplatesTemplate["Trigger"].isNull())
			templatesObject.trigger = valueTemplatesTemplate["Trigger"].asString();
		if(!valueTemplatesTemplate["StartTime"].isNull())
			templatesObject.startTime = valueTemplatesTemplate["StartTime"].asString();
		if(!valueTemplatesTemplate["EndTime"].isNull())
			templatesObject.endTime = valueTemplatesTemplate["EndTime"].asString();
		if(!valueTemplatesTemplate["Interval"].isNull())
			templatesObject.interval = std::stol(valueTemplatesTemplate["Interval"].asString());
		if(!valueTemplatesTemplate["Retention"].isNull())
			templatesObject.retention = std::stol(valueTemplatesTemplate["Retention"].asString());
		if(!valueTemplatesTemplate["FileFormat"].isNull())
			templatesObject.fileFormat = valueTemplatesTemplate["FileFormat"].asString();
		if(!valueTemplatesTemplate["JpgOverwrite"].isNull())
			templatesObject.jpgOverwrite = valueTemplatesTemplate["JpgOverwrite"].asString();
		if(!valueTemplatesTemplate["JpgSequence"].isNull())
			templatesObject.jpgSequence = valueTemplatesTemplate["JpgSequence"].asString();
		if(!valueTemplatesTemplate["JpgOnDemand"].isNull())
			templatesObject.jpgOnDemand = valueTemplatesTemplate["JpgOnDemand"].asString();
		if(!valueTemplatesTemplate["Mp4"].isNull())
			templatesObject.mp4 = valueTemplatesTemplate["Mp4"].asString();
		if(!valueTemplatesTemplate["Flv"].isNull())
			templatesObject.flv = valueTemplatesTemplate["Flv"].asString();
		if(!valueTemplatesTemplate["HlsM3u8"].isNull())
			templatesObject.hlsM3u8 = valueTemplatesTemplate["HlsM3u8"].asString();
		if(!valueTemplatesTemplate["HlsTs"].isNull())
			templatesObject.hlsTs = valueTemplatesTemplate["HlsTs"].asString();
		if(!valueTemplatesTemplate["Callback"].isNull())
			templatesObject.callback = valueTemplatesTemplate["Callback"].asString();
		if(!valueTemplatesTemplate["CreatedTime"].isNull())
			templatesObject.createdTime = valueTemplatesTemplate["CreatedTime"].asString();
		auto allTransConfigsNode = valueTemplatesTemplate["TransConfigs"]["TransConfig"];
		for (auto valueTemplatesTemplateTransConfigsTransConfig : allTransConfigsNode)
		{
			_Template::TransConfig transConfigsObject;
			if(!valueTemplatesTemplateTransConfigsTransConfig["id"].isNull())
				transConfigsObject.id = valueTemplatesTemplateTransConfigsTransConfig["id"].asString();
			if(!valueTemplatesTemplateTransConfigsTransConfig["Name"].isNull())
				transConfigsObject.name = valueTemplatesTemplateTransConfigsTransConfig["Name"].asString();
			if(!valueTemplatesTemplateTransConfigsTransConfig["VideoCodec"].isNull())
				transConfigsObject.videoCodec = valueTemplatesTemplateTransConfigsTransConfig["VideoCodec"].asString();
			if(!valueTemplatesTemplateTransConfigsTransConfig["VideoBitrate"].isNull())
				transConfigsObject.videoBitrate = std::stol(valueTemplatesTemplateTransConfigsTransConfig["VideoBitrate"].asString());
			if(!valueTemplatesTemplateTransConfigsTransConfig["Fps"].isNull())
				transConfigsObject.fps = std::stol(valueTemplatesTemplateTransConfigsTransConfig["Fps"].asString());
			if(!valueTemplatesTemplateTransConfigsTransConfig["Gop"].isNull())
				transConfigsObject.gop = std::stol(valueTemplatesTemplateTransConfigsTransConfig["Gop"].asString());
			if(!valueTemplatesTemplateTransConfigsTransConfig["Height"].isNull())
				transConfigsObject.height = std::stol(valueTemplatesTemplateTransConfigsTransConfig["Height"].asString());
			if(!valueTemplatesTemplateTransConfigsTransConfig["Width"].isNull())
				transConfigsObject.width = std::stol(valueTemplatesTemplateTransConfigsTransConfig["Width"].asString());
			templatesObject.transConfigs.push_back(transConfigsObject);
		}
		templates_.push_back(templatesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stol(value["PageCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeTemplatesResult::getPageSize()const
{
	return pageSize_;
}

long DescribeTemplatesResult::getPageNum()const
{
	return pageNum_;
}

long DescribeTemplatesResult::getPageCount()const
{
	return pageCount_;
}

std::vector<DescribeTemplatesResult::_Template> DescribeTemplatesResult::getTemplates()const
{
	return templates_;
}

