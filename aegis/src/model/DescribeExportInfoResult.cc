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

#include <alibabacloud/aegis/model/DescribeExportInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeExportInfoResult::DescribeExportInfoResult() :
	ServiceResult()
{}

DescribeExportInfoResult::DescribeExportInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExportInfoResult::~DescribeExportInfoResult()
{}

void DescribeExportInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["FileName"].isNull())
		fileName_ = value["FileName"].asString();
	if(!value["CurrentCount"].isNull())
		currentCount_ = std::stoi(value["CurrentCount"].asString());
	if(!value["Link"].isNull())
		link_ = value["Link"].asString();
	if(!value["Progress"].isNull())
		progress_ = std::stoi(value["Progress"].asString());
	if(!value["Id"].isNull())
		id_ = std::stoi(value["Id"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["ResultStatus"].isNull())
		resultStatus_ = value["ResultStatus"].asString();

}

int DescribeExportInfoResult::getProgress()const
{
	return progress_;
}

int DescribeExportInfoResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeExportInfoResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeExportInfoResult::getMessage()const
{
	return message_;
}

std::string DescribeExportInfoResult::getResultStatus()const
{
	return resultStatus_;
}

std::string DescribeExportInfoResult::getFileName()const
{
	return fileName_;
}

int DescribeExportInfoResult::getCurrentCount()const
{
	return currentCount_;
}

int DescribeExportInfoResult::getId()const
{
	return id_;
}

std::string DescribeExportInfoResult::getLink()const
{
	return link_;
}

