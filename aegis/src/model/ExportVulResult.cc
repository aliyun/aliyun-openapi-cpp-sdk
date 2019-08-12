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

#include <alibabacloud/aegis/model/ExportVulResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

ExportVulResult::ExportVulResult() :
	ServiceResult()
{}

ExportVulResult::ExportVulResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExportVulResult::~ExportVulResult()
{}

void ExportVulResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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

int ExportVulResult::getTotalCount()const
{
	return totalCount_;
}

int ExportVulResult::getProgress()const
{
	return progress_;
}

std::string ExportVulResult::getMessage()const
{
	return message_;
}

std::string ExportVulResult::getFileName()const
{
	return fileName_;
}

std::string ExportVulResult::getExportStatus()const
{
	return exportStatus_;
}

int ExportVulResult::getCurrentCount()const
{
	return currentCount_;
}

long ExportVulResult::getId()const
{
	return id_;
}

std::string ExportVulResult::getLink()const
{
	return link_;
}

