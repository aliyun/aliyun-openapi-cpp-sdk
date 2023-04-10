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

#include <alibabacloud/datalake/model/BatchCreatePartitionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

BatchCreatePartitionsResult::BatchCreatePartitionsResult() :
	ServiceResult()
{}

BatchCreatePartitionsResult::BatchCreatePartitionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchCreatePartitionsResult::~BatchCreatePartitionsResult()
{}

void BatchCreatePartitionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPartitionErrorsNode = value["PartitionErrors"]["PartitionError"];
	for (auto valuePartitionErrorsPartitionError : allPartitionErrorsNode)
	{
		PartitionError partitionErrorsObject;
		auto errorDetailNode = value["ErrorDetail"];
		if(!errorDetailNode["Code"].isNull())
			partitionErrorsObject.errorDetail.code = errorDetailNode["Code"].asString();
		if(!errorDetailNode["Message"].isNull())
			partitionErrorsObject.errorDetail.message = errorDetailNode["Message"].asString();
		auto allPartitionValues = value["PartitionValues"]["null"];
		for (auto value : allPartitionValues)
			partitionErrorsObject.partitionValues.push_back(value.asString());
		partitionErrors_.push_back(partitionErrorsObject);
	}
	auto allPartitionsNode = value["Partitions"]["PartitionsItem"];
	for (auto valuePartitionsPartitionsItem : allPartitionsNode)
	{
		PartitionsItem partitionsObject;
		if(!valuePartitionsPartitionsItem["CreateTime"].isNull())
			partitionsObject.createTime = std::stoi(valuePartitionsPartitionsItem["CreateTime"].asString());
		if(!valuePartitionsPartitionsItem["DatabaseName"].isNull())
			partitionsObject.databaseName = valuePartitionsPartitionsItem["DatabaseName"].asString();
		if(!valuePartitionsPartitionsItem["LastAccessTime"].isNull())
			partitionsObject.lastAccessTime = std::stoi(valuePartitionsPartitionsItem["LastAccessTime"].asString());
		if(!valuePartitionsPartitionsItem["LastAnalyzedTime"].isNull())
			partitionsObject.lastAnalyzedTime = std::stoi(valuePartitionsPartitionsItem["LastAnalyzedTime"].asString());
		if(!valuePartitionsPartitionsItem["Parameters"].isNull())
			partitionsObject.parameters = valuePartitionsPartitionsItem["Parameters"].asString();
		if(!valuePartitionsPartitionsItem["TableName"].isNull())
			partitionsObject.tableName = valuePartitionsPartitionsItem["TableName"].asString();
		auto privilegesNode = value["Privileges"];
		if(!privilegesNode["GroupPrivileges"].isNull())
			partitionsObject.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
		if(!privilegesNode["RolePrivileges"].isNull())
			partitionsObject.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
		if(!privilegesNode["UserPrivileges"].isNull())
			partitionsObject.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
		auto sdNode = value["Sd"];
		if(!sdNode["Compressed"].isNull())
			partitionsObject.sd.compressed = sdNode["Compressed"].asString() == "true";
		if(!sdNode["InputFormat"].isNull())
			partitionsObject.sd.inputFormat = sdNode["InputFormat"].asString();
		if(!sdNode["Location"].isNull())
			partitionsObject.sd.location = sdNode["Location"].asString();
		if(!sdNode["NumBuckets"].isNull())
			partitionsObject.sd.numBuckets = std::stoi(sdNode["NumBuckets"].asString());
		if(!sdNode["OutputFormat"].isNull())
			partitionsObject.sd.outputFormat = sdNode["OutputFormat"].asString();
		if(!sdNode["Parameters"].isNull())
			partitionsObject.sd.parameters = sdNode["Parameters"].asString();
		if(!sdNode["StoredAsSubDirectories"].isNull())
			partitionsObject.sd.storedAsSubDirectories = sdNode["StoredAsSubDirectories"].asString() == "true";
		auto allColsNode = sdNode["Cols"]["ColsItem"];
		for (auto sdNodeColsColsItem : allColsNode)
		{
			PartitionsItem::Sd::ColsItem colsItemObject;
			if(!sdNodeColsColsItem["Comment"].isNull())
				colsItemObject.comment = sdNodeColsColsItem["Comment"].asString();
			if(!sdNodeColsColsItem["Name"].isNull())
				colsItemObject.name = sdNodeColsColsItem["Name"].asString();
			if(!sdNodeColsColsItem["Parameters"].isNull())
				colsItemObject.parameters = sdNodeColsColsItem["Parameters"].asString();
			if(!sdNodeColsColsItem["Type"].isNull())
				colsItemObject.type = sdNodeColsColsItem["Type"].asString();
			partitionsObject.sd.cols.push_back(colsItemObject);
		}
		auto allSortColsNode = sdNode["SortCols"]["SortColsItem"];
		for (auto sdNodeSortColsSortColsItem : allSortColsNode)
		{
			PartitionsItem::Sd::SortColsItem sortColsItemObject;
			if(!sdNodeSortColsSortColsItem["Col"].isNull())
				sortColsItemObject.col = sdNodeSortColsSortColsItem["Col"].asString();
			if(!sdNodeSortColsSortColsItem["Order"].isNull())
				sortColsItemObject.order = std::stoi(sdNodeSortColsSortColsItem["Order"].asString());
			partitionsObject.sd.sortCols.push_back(sortColsItemObject);
		}
		auto serDeInfoNode = sdNode["SerDeInfo"];
		if(!serDeInfoNode["Name"].isNull())
			partitionsObject.sd.serDeInfo.name = serDeInfoNode["Name"].asString();
		if(!serDeInfoNode["Parameters"].isNull())
			partitionsObject.sd.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
		if(!serDeInfoNode["SerializationLib"].isNull())
			partitionsObject.sd.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
		auto skewedInfoNode = sdNode["SkewedInfo"];
		if(!skewedInfoNode["SkewedColValueLocationMaps"].isNull())
			partitionsObject.sd.skewedInfo.skewedColValueLocationMaps = skewedInfoNode["SkewedColValueLocationMaps"].asString();
			auto allSkewedColNames = skewedInfoNode["SkewedColNames"]["null"];
			for (auto value : allSkewedColNames)
				partitionsObject.sd.skewedInfo.skewedColNames.push_back(value.asString());
			auto allSkewedColValues = skewedInfoNode["SkewedColValues"]["null"];
			for (auto value : allSkewedColValues)
				partitionsObject.sd.skewedInfo.skewedColValues.push_back(value.asString());
			auto allBucketCols = sdNode["BucketCols"]["null"];
			for (auto value : allBucketCols)
				partitionsObject.sd.bucketCols.push_back(value.asString());
		auto allValues = value["Values"]["null"];
		for (auto value : allValues)
			partitionsObject.values.push_back(value.asString());
		partitions_.push_back(partitionsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<BatchCreatePartitionsResult::PartitionsItem> BatchCreatePartitionsResult::getPartitions()const
{
	return partitions_;
}

std::string BatchCreatePartitionsResult::getMessage()const
{
	return message_;
}

std::vector<BatchCreatePartitionsResult::PartitionError> BatchCreatePartitionsResult::getPartitionErrors()const
{
	return partitionErrors_;
}

std::string BatchCreatePartitionsResult::getCode()const
{
	return code_;
}

bool BatchCreatePartitionsResult::getSuccess()const
{
	return success_;
}

