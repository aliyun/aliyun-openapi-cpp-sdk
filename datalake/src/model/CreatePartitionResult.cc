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

#include <alibabacloud/datalake/model/CreatePartitionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

CreatePartitionResult::CreatePartitionResult() :
	ServiceResult()
{}

CreatePartitionResult::CreatePartitionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePartitionResult::~CreatePartitionResult()
{}

void CreatePartitionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto partitionNode = value["Partition"];
	if(!partitionNode["CreateTime"].isNull())
		partition_.createTime = std::stoi(partitionNode["CreateTime"].asString());
	if(!partitionNode["DatabaseName"].isNull())
		partition_.databaseName = partitionNode["DatabaseName"].asString();
	if(!partitionNode["LastAccessTime"].isNull())
		partition_.lastAccessTime = std::stoi(partitionNode["LastAccessTime"].asString());
	if(!partitionNode["LastAnalyzedTime"].isNull())
		partition_.lastAnalyzedTime = std::stoi(partitionNode["LastAnalyzedTime"].asString());
	if(!partitionNode["Parameters"].isNull())
		partition_.parameters = partitionNode["Parameters"].asString();
	if(!partitionNode["TableName"].isNull())
		partition_.tableName = partitionNode["TableName"].asString();
	auto privilegesNode = partitionNode["Privileges"];
	if(!privilegesNode["GroupPrivileges"].isNull())
		partition_.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
	if(!privilegesNode["RolePrivileges"].isNull())
		partition_.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
	if(!privilegesNode["UserPrivileges"].isNull())
		partition_.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
	auto sdNode = partitionNode["Sd"];
	if(!sdNode["Compressed"].isNull())
		partition_.sd.compressed = sdNode["Compressed"].asString() == "true";
	if(!sdNode["InputFormat"].isNull())
		partition_.sd.inputFormat = sdNode["InputFormat"].asString();
	if(!sdNode["Location"].isNull())
		partition_.sd.location = sdNode["Location"].asString();
	if(!sdNode["NumBuckets"].isNull())
		partition_.sd.numBuckets = std::stoi(sdNode["NumBuckets"].asString());
	if(!sdNode["OutputFormat"].isNull())
		partition_.sd.outputFormat = sdNode["OutputFormat"].asString();
	if(!sdNode["Parameters"].isNull())
		partition_.sd.parameters = sdNode["Parameters"].asString();
	if(!sdNode["StoredAsSubDirectories"].isNull())
		partition_.sd.storedAsSubDirectories = sdNode["StoredAsSubDirectories"].asString() == "true";
	auto allColsNode = sdNode["Cols"]["ColsItem"];
	for (auto sdNodeColsColsItem : allColsNode)
	{
		Partition::Sd::ColsItem colsItemObject;
		if(!sdNodeColsColsItem["Comment"].isNull())
			colsItemObject.comment = sdNodeColsColsItem["Comment"].asString();
		if(!sdNodeColsColsItem["Name"].isNull())
			colsItemObject.name = sdNodeColsColsItem["Name"].asString();
		if(!sdNodeColsColsItem["Parameters"].isNull())
			colsItemObject.parameters = sdNodeColsColsItem["Parameters"].asString();
		if(!sdNodeColsColsItem["Type"].isNull())
			colsItemObject.type = sdNodeColsColsItem["Type"].asString();
		partition_.sd.cols.push_back(colsItemObject);
	}
	auto allSortColsNode = sdNode["SortCols"]["SortColsItem"];
	for (auto sdNodeSortColsSortColsItem : allSortColsNode)
	{
		Partition::Sd::SortColsItem sortColsItemObject;
		if(!sdNodeSortColsSortColsItem["Col"].isNull())
			sortColsItemObject.col = sdNodeSortColsSortColsItem["Col"].asString();
		if(!sdNodeSortColsSortColsItem["Order"].isNull())
			sortColsItemObject.order = std::stoi(sdNodeSortColsSortColsItem["Order"].asString());
		partition_.sd.sortCols.push_back(sortColsItemObject);
	}
	auto serDeInfoNode = sdNode["SerDeInfo"];
	if(!serDeInfoNode["Name"].isNull())
		partition_.sd.serDeInfo.name = serDeInfoNode["Name"].asString();
	if(!serDeInfoNode["Parameters"].isNull())
		partition_.sd.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
	if(!serDeInfoNode["SerializationLib"].isNull())
		partition_.sd.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
	auto skewedInfoNode = sdNode["SkewedInfo"];
	if(!skewedInfoNode["SkewedColValueLocationMaps"].isNull())
		partition_.sd.skewedInfo.skewedColValueLocationMaps = skewedInfoNode["SkewedColValueLocationMaps"].asString();
		auto allSkewedColNames = skewedInfoNode["SkewedColNames"]["null"];
		for (auto value : allSkewedColNames)
			partition_.sd.skewedInfo.skewedColNames.push_back(value.asString());
		auto allSkewedColValues = skewedInfoNode["SkewedColValues"]["null"];
		for (auto value : allSkewedColValues)
			partition_.sd.skewedInfo.skewedColValues.push_back(value.asString());
		auto allBucketCols = sdNode["BucketCols"]["null"];
		for (auto value : allBucketCols)
			partition_.sd.bucketCols.push_back(value.asString());
		auto allValues = partitionNode["Values"]["null"];
		for (auto value : allValues)
			partition_.values.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

CreatePartitionResult::Partition CreatePartitionResult::getPartition()const
{
	return partition_;
}

std::string CreatePartitionResult::getMessage()const
{
	return message_;
}

std::string CreatePartitionResult::getCode()const
{
	return code_;
}

bool CreatePartitionResult::getSuccess()const
{
	return success_;
}

