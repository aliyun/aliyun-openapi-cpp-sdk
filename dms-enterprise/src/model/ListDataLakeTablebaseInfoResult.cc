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

#include <alibabacloud/dms-enterprise/model/ListDataLakeTablebaseInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDataLakeTablebaseInfoResult::ListDataLakeTablebaseInfoResult() :
	ServiceResult()
{}

ListDataLakeTablebaseInfoResult::ListDataLakeTablebaseInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataLakeTablebaseInfoResult::~ListDataLakeTablebaseInfoResult()
{}

void ListDataLakeTablebaseInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTablebaseInfoListNode = value["TablebaseInfoList"]["TablebaseInfo"];
	for (auto valueTablebaseInfoListTablebaseInfo : allTablebaseInfoListNode)
	{
		TablebaseInfo tablebaseInfoListObject;
		if(!valueTablebaseInfoListTablebaseInfo["Owner"].isNull())
			tablebaseInfoListObject.owner = valueTablebaseInfoListTablebaseInfo["Owner"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["ViewOriginalText"].isNull())
			tablebaseInfoListObject.viewOriginalText = valueTablebaseInfoListTablebaseInfo["ViewOriginalText"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["TableType"].isNull())
			tablebaseInfoListObject.tableType = valueTablebaseInfoListTablebaseInfo["TableType"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["Parameters"].isNull())
			tablebaseInfoListObject.parameters = valueTablebaseInfoListTablebaseInfo["Parameters"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["Description"].isNull())
			tablebaseInfoListObject.description = valueTablebaseInfoListTablebaseInfo["Description"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["CreatorId"].isNull())
			tablebaseInfoListObject.creatorId = std::stol(valueTablebaseInfoListTablebaseInfo["CreatorId"].asString());
		if(!valueTablebaseInfoListTablebaseInfo["CreateTime"].isNull())
			tablebaseInfoListObject.createTime = std::stoi(valueTablebaseInfoListTablebaseInfo["CreateTime"].asString());
		if(!valueTablebaseInfoListTablebaseInfo["LastAccessTime"].isNull())
			tablebaseInfoListObject.lastAccessTime = std::stoi(valueTablebaseInfoListTablebaseInfo["LastAccessTime"].asString());
		if(!valueTablebaseInfoListTablebaseInfo["Retention"].isNull())
			tablebaseInfoListObject.retention = std::stoi(valueTablebaseInfoListTablebaseInfo["Retention"].asString());
		if(!valueTablebaseInfoListTablebaseInfo["Name"].isNull())
			tablebaseInfoListObject.name = valueTablebaseInfoListTablebaseInfo["Name"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["OwnerType"].isNull())
			tablebaseInfoListObject.ownerType = valueTablebaseInfoListTablebaseInfo["OwnerType"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["ViewExpandedText"].isNull())
			tablebaseInfoListObject.viewExpandedText = valueTablebaseInfoListTablebaseInfo["ViewExpandedText"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["DbId"].isNull())
			tablebaseInfoListObject.dbId = std::stol(valueTablebaseInfoListTablebaseInfo["DbId"].asString());
		if(!valueTablebaseInfoListTablebaseInfo["DbName"].isNull())
			tablebaseInfoListObject.dbName = valueTablebaseInfoListTablebaseInfo["DbName"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["CatalogName"].isNull())
			tablebaseInfoListObject.catalogName = valueTablebaseInfoListTablebaseInfo["CatalogName"].asString();
		if(!valueTablebaseInfoListTablebaseInfo["ModifierId"].isNull())
			tablebaseInfoListObject.modifierId = std::stol(valueTablebaseInfoListTablebaseInfo["ModifierId"].asString());
		if(!valueTablebaseInfoListTablebaseInfo["Location"].isNull())
			tablebaseInfoListObject.location = valueTablebaseInfoListTablebaseInfo["Location"].asString();
		auto allPartitionKeysNode = valueTablebaseInfoListTablebaseInfo["PartitionKeys"]["Column"];
		for (auto valueTablebaseInfoListTablebaseInfoPartitionKeysColumn : allPartitionKeysNode)
		{
			TablebaseInfo::Column partitionKeysObject;
			if(!valueTablebaseInfoListTablebaseInfoPartitionKeysColumn["Comment"].isNull())
				partitionKeysObject.comment = valueTablebaseInfoListTablebaseInfoPartitionKeysColumn["Comment"].asString();
			if(!valueTablebaseInfoListTablebaseInfoPartitionKeysColumn["Type"].isNull())
				partitionKeysObject.type = valueTablebaseInfoListTablebaseInfoPartitionKeysColumn["Type"].asString();
			if(!valueTablebaseInfoListTablebaseInfoPartitionKeysColumn["Name"].isNull())
				partitionKeysObject.name = valueTablebaseInfoListTablebaseInfoPartitionKeysColumn["Name"].asString();
			tablebaseInfoListObject.partitionKeys.push_back(partitionKeysObject);
		}
		tablebaseInfoList_.push_back(tablebaseInfoListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::vector<ListDataLakeTablebaseInfoResult::TablebaseInfo> ListDataLakeTablebaseInfoResult::getTablebaseInfoList()const
{
	return tablebaseInfoList_;
}

std::string ListDataLakeTablebaseInfoResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDataLakeTablebaseInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataLakeTablebaseInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataLakeTablebaseInfoResult::getSuccess()const
{
	return success_;
}

