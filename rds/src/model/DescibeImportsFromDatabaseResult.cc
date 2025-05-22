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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ImportResultFromDB"];
	for (auto valueItemsImportResultFromDB : allItemsNode)
	{
		ImportResultFromDB itemsObject;
		if(!valueItemsImportResultFromDB["ImportDataStatus"].isNull())
			itemsObject.importDataStatus = valueItemsImportResultFromDB["ImportDataStatus"].asString();
		if(!valueItemsImportResultFromDB["ImportDataStatusDescription"].isNull())
			itemsObject.importDataStatusDescription = valueItemsImportResultFromDB["ImportDataStatusDescription"].asString();
		if(!valueItemsImportResultFromDB["ImportDataType"].isNull())
			itemsObject.importDataType = valueItemsImportResultFromDB["ImportDataType"].asString();
		if(!valueItemsImportResultFromDB["ImportId"].isNull())
			itemsObject.importId = std::stoi(valueItemsImportResultFromDB["ImportId"].asString());
		if(!valueItemsImportResultFromDB["IncrementalImportingTime"].isNull())
			itemsObject.incrementalImportingTime = valueItemsImportResultFromDB["IncrementalImportingTime"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

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

