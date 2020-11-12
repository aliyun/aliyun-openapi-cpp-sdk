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

#include <alibabacloud/openanalytics-open/model/GetTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

GetTableResult::GetTableResult() :
	ServiceResult()
{}

GetTableResult::GetTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableResult::~GetTableResult()
{}

void GetTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tableNode = value["Table"];
	if(!tableNode["TableName"].isNull())
		table_.tableName = tableNode["TableName"].asString();
	if(!tableNode["ViewOriginalText"].isNull())
		table_.viewOriginalText = tableNode["ViewOriginalText"].asString();
	if(!tableNode["Owner"].isNull())
		table_.owner = tableNode["Owner"].asString();
	if(!tableNode["TableType"].isNull())
		table_.tableType = tableNode["TableType"].asString();
	if(!tableNode["Parameters"].isNull())
		table_.parameters = tableNode["Parameters"].asString();
	if(!tableNode["ViewExpandedText"].isNull())
		table_.viewExpandedText = tableNode["ViewExpandedText"].asString();
	if(!tableNode["CreateTime"].isNull())
		table_.createTime = std::stol(tableNode["CreateTime"].asString());
	if(!tableNode["DbName"].isNull())
		table_.dbName = tableNode["DbName"].asString();
	if(!tableNode["LastAccessTime"].isNull())
		table_.lastAccessTime = std::stol(tableNode["LastAccessTime"].asString());
	auto allPartitionKeysNode = tableNode["PartitionKeys"]["PartitionKeysItem"];
	for (auto tableNodePartitionKeysPartitionKeysItem : allPartitionKeysNode)
	{
		Table::PartitionKeysItem partitionKeysItemObject;
		if(!tableNodePartitionKeysPartitionKeysItem["Comment"].isNull())
			partitionKeysItemObject.comment = tableNodePartitionKeysPartitionKeysItem["Comment"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Type"].isNull())
			partitionKeysItemObject.type = tableNodePartitionKeysPartitionKeysItem["Type"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Name"].isNull())
			partitionKeysItemObject.name = tableNodePartitionKeysPartitionKeysItem["Name"].asString();
		table_.partitionKeys.push_back(partitionKeysItemObject);
	}
	auto storageDescriptorNode = tableNode["StorageDescriptor"];
	if(!storageDescriptorNode["Parameters"].isNull())
		table_.storageDescriptor.parameters = storageDescriptorNode["Parameters"].asString();
	if(!storageDescriptorNode["InputFormat"].isNull())
		table_.storageDescriptor.inputFormat = storageDescriptorNode["InputFormat"].asString();
	if(!storageDescriptorNode["OutputFormat"].isNull())
		table_.storageDescriptor.outputFormat = storageDescriptorNode["OutputFormat"].asString();
	if(!storageDescriptorNode["Location"].isNull())
		table_.storageDescriptor.location = storageDescriptorNode["Location"].asString();
	auto allColsNode = storageDescriptorNode["Cols"]["ColsItem"];
	for (auto storageDescriptorNodeColsColsItem : allColsNode)
	{
		Table::StorageDescriptor::ColsItem colsItemObject;
		if(!storageDescriptorNodeColsColsItem["Comment"].isNull())
			colsItemObject.comment = storageDescriptorNodeColsColsItem["Comment"].asString();
		if(!storageDescriptorNodeColsColsItem["Type"].isNull())
			colsItemObject.type = storageDescriptorNodeColsColsItem["Type"].asString();
		if(!storageDescriptorNodeColsColsItem["Name"].isNull())
			colsItemObject.name = storageDescriptorNodeColsColsItem["Name"].asString();
		table_.storageDescriptor.cols.push_back(colsItemObject);
	}
	auto serDeInfoNode = storageDescriptorNode["SerDeInfo"];
	if(!serDeInfoNode["SerializationLib"].isNull())
		table_.storageDescriptor.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
	if(!serDeInfoNode["Parameters"].isNull())
		table_.storageDescriptor.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
	if(!serDeInfoNode["Name"].isNull())
		table_.storageDescriptor.serDeInfo.name = serDeInfoNode["Name"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetTableResult::Table GetTableResult::getTable()const
{
	return table_;
}

std::string GetTableResult::getMessage()const
{
	return message_;
}

std::string GetTableResult::getCode()const
{
	return code_;
}

bool GetTableResult::getSuccess()const
{
	return success_;
}

