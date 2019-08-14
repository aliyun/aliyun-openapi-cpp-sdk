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

#include <alibabacloud/gpdb/model/DescribeSQLLogFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeSQLLogFilesResult::DescribeSQLLogFilesResult() :
	ServiceResult()
{}

DescribeSQLLogFilesResult::DescribeSQLLogFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogFilesResult::~DescribeSQLLogFilesResult()
{}

void DescribeSQLLogFilesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["LogFile"];
	for (auto value : allItems)
	{
		LogFile itemsObject;
		if(!value["FileID"].isNull())
			itemsObject.fileID = value["FileID"].asString();
		if(!value["LogStatus"].isNull())
			itemsObject.logStatus = value["LogStatus"].asString();
		if(!value["LogDownloadURL"].isNull())
			itemsObject.logDownloadURL = value["LogDownloadURL"].asString();
		if(!value["LogSize"].isNull())
			itemsObject.logSize = value["LogSize"].asString();
		if(!value["LogStartTime"].isNull())
			itemsObject.logStartTime = value["LogStartTime"].asString();
		if(!value["LogEndTime"].isNull())
			itemsObject.logEndTime = value["LogEndTime"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSQLLogFilesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSQLLogFilesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSQLLogFilesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLLogFilesResult::LogFile> DescribeSQLLogFilesResult::getItems()const
{
	return items_;
}

