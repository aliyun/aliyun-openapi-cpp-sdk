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

#include <alibabacloud/oceanbasepro/model/DescribeDataBackupSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeDataBackupSetResult::DescribeDataBackupSetResult() :
	ServiceResult()
{}

DescribeDataBackupSetResult::DescribeDataBackupSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataBackupSetResult::~DescribeDataBackupSetResult()
{}

void DescribeDataBackupSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["EndTime"].isNull())
			dataObject.endTime = valueDataDataItem["EndTime"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = valueDataDataItem["Type"].asString();
		if(!valueDataDataItem["StartTime"].isNull())
			dataObject.startTime = valueDataDataItem["StartTime"].asString();
		if(!valueDataDataItem["DataSize"].isNull())
			dataObject.dataSize = std::stoi(valueDataDataItem["DataSize"].asString());
		if(!valueDataDataItem["Policy"].isNull())
			dataObject.policy = valueDataDataItem["Policy"].asString();
		if(!valueDataDataItem["SetId"].isNull())
			dataObject.setId = valueDataDataItem["SetId"].asString();
		if(!valueDataDataItem["Method"].isNull())
			dataObject.method = valueDataDataItem["Method"].asString();
		if(!valueDataDataItem["Checkpoint"].isNull())
			dataObject.checkpoint = valueDataDataItem["Checkpoint"].asString();
		if(!valueDataDataItem["DataVersion"].isNull())
			dataObject.dataVersion = std::stoi(valueDataDataItem["DataVersion"].asString());
		if(!valueDataDataItem["BackupObjectType"].isNull())
			dataObject.backupObjectType = valueDataDataItem["BackupObjectType"].asString();
		if(!valueDataDataItem["DownloadTaskStatus"].isNull())
			dataObject.downloadTaskStatus = valueDataDataItem["DownloadTaskStatus"].asString();
		if(!valueDataDataItem["DownloadTaskId"].isNull())
			dataObject.downloadTaskId = std::stol(valueDataDataItem["DownloadTaskId"].asString());
		if(!valueDataDataItem["Validity"].isNull())
			dataObject.validity = valueDataDataItem["Validity"].asString();
		if(!valueDataDataItem["Progress"].isNull())
			dataObject.progress = valueDataDataItem["Progress"].asString();
		if(!valueDataDataItem["StorageClass"].isNull())
			dataObject.storageClass = valueDataDataItem["StorageClass"].asString();
		auto allBackupObjectsNode = valueDataDataItem["BackupObjects"]["BackupObjectsItem"];
		for (auto valueDataDataItemBackupObjectsBackupObjectsItem : allBackupObjectsNode)
		{
			DataItem::BackupObjectsItem backupObjectsObject;
			if(!valueDataDataItemBackupObjectsBackupObjectsItem["ClusterName"].isNull())
				backupObjectsObject.clusterName = valueDataDataItemBackupObjectsBackupObjectsItem["ClusterName"].asString();
			if(!valueDataDataItemBackupObjectsBackupObjectsItem["TenantName"].isNull())
				backupObjectsObject.tenantName = valueDataDataItemBackupObjectsBackupObjectsItem["TenantName"].asString();
			auto allDatabaseTablesListNode = valueDataDataItemBackupObjectsBackupObjectsItem["DatabaseTablesList"]["DatabaseTablesListItem"];
			for (auto valueDataDataItemBackupObjectsBackupObjectsItemDatabaseTablesListDatabaseTablesListItem : allDatabaseTablesListNode)
			{
				DataItem::BackupObjectsItem::DatabaseTablesListItem databaseTablesListObject;
				if(!valueDataDataItemBackupObjectsBackupObjectsItemDatabaseTablesListDatabaseTablesListItem["Database"].isNull())
					databaseTablesListObject.database = valueDataDataItemBackupObjectsBackupObjectsItemDatabaseTablesListDatabaseTablesListItem["Database"].asString();
				auto allTables = value["Tables"]["Tables"];
				for (auto value : allTables)
					databaseTablesListObject.tables.push_back(value.asString());
				backupObjectsObject.databaseTablesList.push_back(databaseTablesListObject);
			}
			dataObject.backupObjects.push_back(backupObjectsObject);
		}
		auto allBackupResultsNode = valueDataDataItem["BackupResults"]["BackupResultsItem"];
		for (auto valueDataDataItemBackupResultsBackupResultsItem : allBackupResultsNode)
		{
			DataItem::BackupResultsItem backupResultsObject;
			if(!valueDataDataItemBackupResultsBackupResultsItem["ClusterName"].isNull())
				backupResultsObject.clusterName = valueDataDataItemBackupResultsBackupResultsItem["ClusterName"].asString();
			if(!valueDataDataItemBackupResultsBackupResultsItem["TenantName"].isNull())
				backupResultsObject.tenantName = valueDataDataItemBackupResultsBackupResultsItem["TenantName"].asString();
			auto allTableBackupResultsNode = valueDataDataItemBackupResultsBackupResultsItem["TableBackupResults"]["TableBackupResultsItem"];
			for (auto valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem : allTableBackupResultsNode)
			{
				DataItem::BackupResultsItem::TableBackupResultsItem tableBackupResultsObject;
				if(!valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem["Database"].isNull())
					tableBackupResultsObject.database = valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem["Database"].asString();
				if(!valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem["Table"].isNull())
					tableBackupResultsObject.table = valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem["Table"].asString();
				if(!valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem["Status"].isNull())
					tableBackupResultsObject.status = valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem["Status"].asString();
				if(!valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem["Message"].isNull())
					tableBackupResultsObject.message = valueDataDataItemBackupResultsBackupResultsItemTableBackupResultsTableBackupResultsItem["Message"].asString();
				backupResultsObject.tableBackupResults.push_back(tableBackupResultsObject);
			}
			dataObject.backupResults.push_back(backupResultsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataBackupSetResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDataBackupSetResult::DataItem> DescribeDataBackupSetResult::getData()const
{
	return data_;
}

