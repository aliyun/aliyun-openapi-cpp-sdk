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

#include <alibabacloud/aegis/model/DescribeVulExportInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeVulExportInfoResult::DescribeVulExportInfoResult() :
	ServiceResult()
{}

DescribeVulExportInfoResult::DescribeVulExportInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulExportInfoResult::~DescribeVulExportInfoResult()
{}

void DescribeVulExportInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["FileName"].isNull())
		fileName_ = value["FileName"].asString();
	if(!value["CurrentCount"].isNull())
		currentCount_ = std::stoi(value["CurrentCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Progress"].isNull())
		progress_ = std::stoi(value["Progress"].asString());
	if(!value["ExportStatus"].isNull())
		exportStatus_ = value["ExportStatus"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Link"].isNull())
		link_ = value["Link"].asString();

}

int DescribeVulExportInfoResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVulExportInfoResult::getProgress()const
{
	return progress_;
}

std::string DescribeVulExportInfoResult::getMessage()const
{
	return message_;
}

std::string DescribeVulExportInfoResult::getFileName()const
{
	return fileName_;
}

std::string DescribeVulExportInfoResult::getExportStatus()const
{
	return exportStatus_;
}

int DescribeVulExportInfoResult::getCurrentCount()const
{
	return currentCount_;
}

long DescribeVulExportInfoResult::getId()const
{
	return id_;
}

std::string DescribeVulExportInfoResult::getLink()const
{
	return link_;
}

