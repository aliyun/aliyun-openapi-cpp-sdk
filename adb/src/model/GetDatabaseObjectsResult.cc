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

#include <alibabacloud/adb/model/GetDatabaseObjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetDatabaseObjectsResult::GetDatabaseObjectsResult() :
	ServiceResult()
{}

GetDatabaseObjectsResult::GetDatabaseObjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDatabaseObjectsResult::~GetDatabaseObjectsResult()
{}

void GetDatabaseObjectsResult::parse(const std::string &payload)
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
	auto allDatabaseSummaryModelsNode = dataNode["DatabaseSummaryModels"]["dataObject"];
	for (auto dataNodeDatabaseSummaryModelsdataObject : allDatabaseSummaryModelsNode)
	{
		Data::DataObject dataObjectObject;
		if(!dataNodeDatabaseSummaryModelsdataObject["Owner"].isNull())
			dataObjectObject.owner = dataNodeDatabaseSummaryModelsdataObject["Owner"].asString();
		if(!dataNodeDatabaseSummaryModelsdataObject["SchemaName"].isNull())
			dataObjectObject.schemaName = dataNodeDatabaseSummaryModelsdataObject["SchemaName"].asString();
		if(!dataNodeDatabaseSummaryModelsdataObject["Description"].isNull())
			dataObjectObject.description = dataNodeDatabaseSummaryModelsdataObject["Description"].asString();
		if(!dataNodeDatabaseSummaryModelsdataObject["CreateTime"].isNull())
			dataObjectObject.createTime = dataNodeDatabaseSummaryModelsdataObject["CreateTime"].asString();
		if(!dataNodeDatabaseSummaryModelsdataObject["UpdateTime"].isNull())
			dataObjectObject.updateTime = dataNodeDatabaseSummaryModelsdataObject["UpdateTime"].asString();
		data_.databaseSummaryModels.push_back(dataObjectObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long GetDatabaseObjectsResult::getTotalCount()const
{
	return totalCount_;
}

long GetDatabaseObjectsResult::getPageSize()const
{
	return pageSize_;
}

long GetDatabaseObjectsResult::getPageNumber()const
{
	return pageNumber_;
}

GetDatabaseObjectsResult::Data GetDatabaseObjectsResult::getData()const
{
	return data_;
}

