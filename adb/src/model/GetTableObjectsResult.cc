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

#include <alibabacloud/adb/model/GetTableObjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetTableObjectsResult::GetTableObjectsResult() :
	ServiceResult()
{}

GetTableObjectsResult::GetTableObjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableObjectsResult::~GetTableObjectsResult()
{}

void GetTableObjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allTableSummaryModelsNode = dataNode["TableSummaryModels"]["dataObject"];
	for (auto dataNodeTableSummaryModelsdataObject : allTableSummaryModelsNode)
	{
		Data::DataObject dataObjectObject;
		if(!dataNodeTableSummaryModelsdataObject["SchemaName"].isNull())
			dataObjectObject.schemaName = dataNodeTableSummaryModelsdataObject["SchemaName"].asString();
		if(!dataNodeTableSummaryModelsdataObject["TableName"].isNull())
			dataObjectObject.tableName = dataNodeTableSummaryModelsdataObject["TableName"].asString();
		if(!dataNodeTableSummaryModelsdataObject["TableType"].isNull())
			dataObjectObject.tableType = dataNodeTableSummaryModelsdataObject["TableType"].asString();
		if(!dataNodeTableSummaryModelsdataObject["TableSize"].isNull())
			dataObjectObject.tableSize = std::stol(dataNodeTableSummaryModelsdataObject["TableSize"].asString());
		if(!dataNodeTableSummaryModelsdataObject["CreateTime"].isNull())
			dataObjectObject.createTime = dataNodeTableSummaryModelsdataObject["CreateTime"].asString();
		if(!dataNodeTableSummaryModelsdataObject["UpdateTime"].isNull())
			dataObjectObject.updateTime = dataNodeTableSummaryModelsdataObject["UpdateTime"].asString();
		if(!dataNodeTableSummaryModelsdataObject["SQL"].isNull())
			dataObjectObject.sQL = dataNodeTableSummaryModelsdataObject["SQL"].asString();
		if(!dataNodeTableSummaryModelsdataObject["Description"].isNull())
			dataObjectObject.description = dataNodeTableSummaryModelsdataObject["Description"].asString();
		if(!dataNodeTableSummaryModelsdataObject["Owner"].isNull())
			dataObjectObject.owner = dataNodeTableSummaryModelsdataObject["Owner"].asString();
		data_.tableSummaryModels.push_back(dataObjectObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long GetTableObjectsResult::getTotalCount()const
{
	return totalCount_;
}

long GetTableObjectsResult::getPageSize()const
{
	return pageSize_;
}

long GetTableObjectsResult::getPageNumber()const
{
	return pageNumber_;
}

GetTableObjectsResult::Data GetTableObjectsResult::getData()const
{
	return data_;
}

