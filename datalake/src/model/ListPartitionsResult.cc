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

#include <alibabacloud/datalake/model/ListPartitionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListPartitionsResult::ListPartitionsResult() :
	ServiceResult()
{}

ListPartitionsResult::ListPartitionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPartitionsResult::~ListPartitionsResult()
{}

void ListPartitionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
	auto allPartitionSpecsNode = value["PartitionSpecs"]["PartitionSpecsItem"];
	for (auto valuePartitionSpecsPartitionSpecsItem : allPartitionSpecsNode)
	{
		PartitionSpecsItem partitionSpecsObject;
		auto allSharedSDPartitionsNode = valuePartitionSpecsPartitionSpecsItem["SharedSDPartitions"]["SharedSDPartitionsItem"];
		for (auto valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem : allSharedSDPartitionsNode)
		{
			PartitionSpecsItem::SharedSDPartitionsItem sharedSDPartitionsObject;
			if(!valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["CreateTime"].isNull())
				sharedSDPartitionsObject.createTime = std::stoi(valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["CreateTime"].asString());
			if(!valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["DatabaseName"].isNull())
				sharedSDPartitionsObject.databaseName = valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["DatabaseName"].asString();
			if(!valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["LastAccessTime"].isNull())
				sharedSDPartitionsObject.lastAccessTime = std::stoi(valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["LastAccessTime"].asString());
			if(!valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["LastAnalyzedTime"].isNull())
				sharedSDPartitionsObject.lastAnalyzedTime = std::stoi(valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["LastAnalyzedTime"].asString());
			if(!valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["Parameters"].isNull())
				sharedSDPartitionsObject.parameters = valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["Parameters"].asString();
			if(!valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["TableName"].isNull())
				sharedSDPartitionsObject.tableName = valuePartitionSpecsPartitionSpecsItemSharedSDPartitionsSharedSDPartitionsItem["TableName"].asString();
			auto privileges2Node = value["Privileges"];
			if(!privileges2Node["GroupPrivileges"].isNull())
				sharedSDPartitionsObject.privileges2.groupPrivileges = privileges2Node["GroupPrivileges"].asString();
			if(!privileges2Node["RolePrivileges"].isNull())
				sharedSDPartitionsObject.privileges2.rolePrivileges = privileges2Node["RolePrivileges"].asString();
			if(!privileges2Node["UserPrivileges"].isNull())
				sharedSDPartitionsObject.privileges2.userPrivileges = privileges2Node["UserPrivileges"].asString();
			auto sd3Node = value["Sd"];
			if(!sd3Node["Compressed"].isNull())
				sharedSDPartitionsObject.sd3.compressed = sd3Node["Compressed"].asString() == "true";
			if(!sd3Node["InputFormat"].isNull())
				sharedSDPartitionsObject.sd3.inputFormat = sd3Node["InputFormat"].asString();
			if(!sd3Node["Location"].isNull())
				sharedSDPartitionsObject.sd3.location = sd3Node["Location"].asString();
			if(!sd3Node["NumBuckets"].isNull())
				sharedSDPartitionsObject.sd3.numBuckets = std::stoi(sd3Node["NumBuckets"].asString());
			if(!sd3Node["OutputFormat"].isNull())
				sharedSDPartitionsObject.sd3.outputFormat = sd3Node["OutputFormat"].asString();
			if(!sd3Node["Parameters"].isNull())
				sharedSDPartitionsObject.sd3.parameters = sd3Node["Parameters"].asString();
			if(!sd3Node["StoredAsSubDirectories"].isNull())
				sharedSDPartitionsObject.sd3.storedAsSubDirectories = sd3Node["StoredAsSubDirectories"].asString() == "true";
			auto allCols7Node = sd3Node["Cols"]["ColsItem"];
			for (auto sd3NodeColsColsItem : allCols7Node)
			{
				PartitionSpecsItem::SharedSDPartitionsItem::Sd3::ColsItem9 colsItem9Object;
				if(!sd3NodeColsColsItem["Comment"].isNull())
					colsItem9Object.comment = sd3NodeColsColsItem["Comment"].asString();
				if(!sd3NodeColsColsItem["Name"].isNull())
					colsItem9Object.name = sd3NodeColsColsItem["Name"].asString();
				if(!sd3NodeColsColsItem["Parameters"].isNull())
					colsItem9Object.parameters = sd3NodeColsColsItem["Parameters"].asString();
				if(!sd3NodeColsColsItem["Type"].isNull())
					colsItem9Object.type = sd3NodeColsColsItem["Type"].asString();
				sharedSDPartitionsObject.sd3.cols7.push_back(colsItem9Object);
			}
			auto allSortCols8Node = sd3Node["SortCols"]["SortColsItem"];
			for (auto sd3NodeSortColsSortColsItem : allSortCols8Node)
			{
				PartitionSpecsItem::SharedSDPartitionsItem::Sd3::SortColsItem10 sortColsItem10Object;
				if(!sd3NodeSortColsSortColsItem["Col"].isNull())
					sortColsItem10Object.col = sd3NodeSortColsSortColsItem["Col"].asString();
				if(!sd3NodeSortColsSortColsItem["Order"].isNull())
					sortColsItem10Object.order = std::stoi(sd3NodeSortColsSortColsItem["Order"].asString());
				sharedSDPartitionsObject.sd3.sortCols8.push_back(sortColsItem10Object);
			}
			auto serDeInfo5Node = sd3Node["SerDeInfo"];
			if(!serDeInfo5Node["Name"].isNull())
				sharedSDPartitionsObject.sd3.serDeInfo5.name = serDeInfo5Node["Name"].asString();
			if(!serDeInfo5Node["Parameters"].isNull())
				sharedSDPartitionsObject.sd3.serDeInfo5.parameters = serDeInfo5Node["Parameters"].asString();
			if(!serDeInfo5Node["SerializationLib"].isNull())
				sharedSDPartitionsObject.sd3.serDeInfo5.serializationLib = serDeInfo5Node["SerializationLib"].asString();
			auto skewedInfo6Node = sd3Node["SkewedInfo"];
			if(!skewedInfo6Node["SkewedColValueLocationMaps"].isNull())
				sharedSDPartitionsObject.sd3.skewedInfo6.skewedColValueLocationMaps = skewedInfo6Node["SkewedColValueLocationMaps"].asString();
				auto allSkewedColNames11 = skewedInfo6Node["SkewedColNames"]["null"];
				for (auto value : allSkewedColNames11)
					sharedSDPartitionsObject.sd3.skewedInfo6.skewedColNames11.push_back(value.asString());
				auto allSkewedColValues12 = skewedInfo6Node["SkewedColValues"]["null"];
				for (auto value : allSkewedColValues12)
					sharedSDPartitionsObject.sd3.skewedInfo6.skewedColValues12.push_back(value.asString());
				auto allBucketCols4 = sd3Node["BucketCols"]["null"];
				for (auto value : allBucketCols4)
					sharedSDPartitionsObject.sd3.bucketCols4.push_back(value.asString());
			auto allValues1 = value["Values"]["null"];
			for (auto value : allValues1)
				sharedSDPartitionsObject.values1.push_back(value.asString());
			partitionSpecsObject.sharedSDPartitions.push_back(sharedSDPartitionsObject);
		}
		auto sharedStorageDescriptorNode = value["SharedStorageDescriptor"];
		if(!sharedStorageDescriptorNode["Location"].isNull())
			partitionSpecsObject.sharedStorageDescriptor.location = sharedStorageDescriptorNode["Location"].asString();
		auto allCols13Node = sharedStorageDescriptorNode["Cols"]["ColsItem"];
		for (auto sharedStorageDescriptorNodeColsColsItem : allCols13Node)
		{
			PartitionSpecsItem::SharedStorageDescriptor::ColsItem14 colsItem14Object;
			if(!sharedStorageDescriptorNodeColsColsItem["Comment"].isNull())
				colsItem14Object.comment = sharedStorageDescriptorNodeColsColsItem["Comment"].asString();
			if(!sharedStorageDescriptorNodeColsColsItem["Name"].isNull())
				colsItem14Object.name = sharedStorageDescriptorNodeColsColsItem["Name"].asString();
			if(!sharedStorageDescriptorNodeColsColsItem["Parameters"].isNull())
				colsItem14Object.parameters = sharedStorageDescriptorNodeColsColsItem["Parameters"].asString();
			if(!sharedStorageDescriptorNodeColsColsItem["Type"].isNull())
				colsItem14Object.type = sharedStorageDescriptorNodeColsColsItem["Type"].asString();
			partitionSpecsObject.sharedStorageDescriptor.cols13.push_back(colsItem14Object);
		}
		partitionSpecs_.push_back(partitionSpecsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListPartitionsResult::PartitionsItem> ListPartitionsResult::getPartitions()const
{
	return partitions_;
}

std::vector<ListPartitionsResult::PartitionSpecsItem> ListPartitionsResult::getPartitionSpecs()const
{
	return partitionSpecs_;
}

std::string ListPartitionsResult::getMessage()const
{
	return message_;
}

std::string ListPartitionsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::string ListPartitionsResult::getCode()const
{
	return code_;
}

bool ListPartitionsResult::getSuccess()const
{
	return success_;
}

