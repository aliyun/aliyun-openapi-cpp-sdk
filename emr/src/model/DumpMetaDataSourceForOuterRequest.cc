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

#include <alibabacloud/emr/model/DumpMetaDataSourceForOuterRequest.h>

using AlibabaCloud::Emr::Model::DumpMetaDataSourceForOuterRequest;

DumpMetaDataSourceForOuterRequest::DumpMetaDataSourceForOuterRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DumpMetaDataSourceForOuter")
{
	setMethod(HttpRequest::Method::Post);
}

DumpMetaDataSourceForOuterRequest::~DumpMetaDataSourceForOuterRequest()
{}

long DumpMetaDataSourceForOuterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DumpMetaDataSourceForOuterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool DumpMetaDataSourceForOuterRequest::getDumpAllDatabase()const
{
	return dumpAllDatabase_;
}

void DumpMetaDataSourceForOuterRequest::setDumpAllDatabase(bool dumpAllDatabase)
{
	dumpAllDatabase_ = dumpAllDatabase;
	setParameter("DumpAllDatabase", dumpAllDatabase ? "true" : "false");
}

int DumpMetaDataSourceForOuterRequest::getDumpLimit()const
{
	return dumpLimit_;
}

void DumpMetaDataSourceForOuterRequest::setDumpLimit(int dumpLimit)
{
	dumpLimit_ = dumpLimit;
	setParameter("DumpLimit", std::to_string(dumpLimit));
}

std::string DumpMetaDataSourceForOuterRequest::getClusterId()const
{
	return clusterId_;
}

void DumpMetaDataSourceForOuterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DumpMetaDataSourceForOuterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DumpMetaDataSourceForOuterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DumpMetaDataSourceForOuterRequest::getDumpAllTable()const
{
	return dumpAllTable_;
}

void DumpMetaDataSourceForOuterRequest::setDumpAllTable(bool dumpAllTable)
{
	dumpAllTable_ = dumpAllTable;
	setParameter("DumpAllTable", dumpAllTable ? "true" : "false");
}

std::string DumpMetaDataSourceForOuterRequest::getRegionId()const
{
	return regionId_;
}

void DumpMetaDataSourceForOuterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> DumpMetaDataSourceForOuterRequest::getPartitionValues()const
{
	return partitionValues_;
}

void DumpMetaDataSourceForOuterRequest::setPartitionValues(const std::vector<std::string>& partitionValues)
{
	partitionValues_ = partitionValues;
	for(int dep1 = 0; dep1!= partitionValues.size(); dep1++) {
		setParameter("PartitionValues."+ std::to_string(dep1), partitionValues.at(dep1));
	}
}

std::string DumpMetaDataSourceForOuterRequest::getTableId()const
{
	return tableId_;
}

void DumpMetaDataSourceForOuterRequest::setTableId(const std::string& tableId)
{
	tableId_ = tableId;
	setParameter("TableId", tableId);
}

std::string DumpMetaDataSourceForOuterRequest::getDatabaseId()const
{
	return databaseId_;
}

void DumpMetaDataSourceForOuterRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setParameter("DatabaseId", databaseId);
}

bool DumpMetaDataSourceForOuterRequest::getDumpAllPartition()const
{
	return dumpAllPartition_;
}

void DumpMetaDataSourceForOuterRequest::setDumpAllPartition(bool dumpAllPartition)
{
	dumpAllPartition_ = dumpAllPartition;
	setParameter("DumpAllPartition", dumpAllPartition ? "true" : "false");
}

