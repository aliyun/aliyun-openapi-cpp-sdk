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

#include <alibabacloud/aegis/model/DescribeSuspEventExportInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSuspEventExportInfoResult::DescribeSuspEventExportInfoResult() :
	ServiceResult()
{}

DescribeSuspEventExportInfoResult::DescribeSuspEventExportInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspEventExportInfoResult::~DescribeSuspEventExportInfoResult()
{}

void DescribeSuspEventExportInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["FileName"].isNull())
		fileName_ = value["FileName"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["Progress"].isNull())
		progress_ = std::stoi(value["Progress"].asString());
	if(!value["Id"].isNull())
		id_ = std::stoi(value["Id"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["Properties"].isNull())
		properties_ = value["Properties"].asString();
	if(!value["ExportStatus"].isNull())
		exportStatus_ = value["ExportStatus"].asString();
	if(!value["Link"].isNull())
		link_ = value["Link"].asString();

}

int DescribeSuspEventExportInfoResult::getProgress()const
{
	return progress_;
}

std::string DescribeSuspEventExportInfoResult::getType()const
{
	return type_;
}

int DescribeSuspEventExportInfoResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeSuspEventExportInfoResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeSuspEventExportInfoResult::getFileName()const
{
	return fileName_;
}

long DescribeSuspEventExportInfoResult::getGmtModified()const
{
	return gmtModified_;
}

std::string DescribeSuspEventExportInfoResult::getExportStatus()const
{
	return exportStatus_;
}

int DescribeSuspEventExportInfoResult::getId()const
{
	return id_;
}

std::string DescribeSuspEventExportInfoResult::getProperties()const
{
	return properties_;
}

std::string DescribeSuspEventExportInfoResult::getLink()const
{
	return link_;
}

