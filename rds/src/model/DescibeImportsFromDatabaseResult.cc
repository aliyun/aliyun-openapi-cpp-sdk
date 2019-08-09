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

#include <alibabacloud/rds/model/DescibeImportsFromDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescibeImportsFromDatabaseResult::DescibeImportsFromDatabaseResult() :
	ServiceResult()
{}

DescibeImportsFromDatabaseResult::DescibeImportsFromDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescibeImportsFromDatabaseResult::~DescibeImportsFromDatabaseResult()
{}

void DescibeImportsFromDatabaseResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["ImportResultFromDB"];
	for (auto value : allItems)
	{
		ImportResultFromDB itemsObject;
		if(!value["ImportId"].isNull())
			itemsObject.importId = std::stoi(value["ImportId"].asString());
		if(!value["ImportDataType"].isNull())
			itemsObject.importDataType = value["ImportDataType"].asString();
		if(!value["ImportDataStatus"].isNull())
			itemsObject.importDataStatus = value["ImportDataStatus"].asString();
		if(!value["ImportDataStatusDescription"].isNull())
			itemsObject.importDataStatusDescription = value["ImportDataStatusDescription"].asString();
		if(!value["IncrementalImportingTime"].isNull())
			itemsObject.incrementalImportingTime = value["IncrementalImportingTime"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescibeImportsFromDatabaseResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescibeImportsFromDatabaseResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescibeImportsFromDatabaseResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescibeImportsFromDatabaseResult::ImportResultFromDB> DescibeImportsFromDatabaseResult::getItems()const
{
	return items_;
}

