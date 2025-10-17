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

#include <alibabacloud/polardb/model/DescribeColdStorageInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeColdStorageInstanceResult::DescribeColdStorageInstanceResult() :
	ServiceResult()
{}

DescribeColdStorageInstanceResult::DescribeColdStorageInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeColdStorageInstanceResult::~DescribeColdStorageInstanceResult()
{}

void DescribeColdStorageInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTablesNode = value["Tables"]["TablesItem"];
	for (auto valueTablesTablesItem : allTablesNode)
	{
		TablesItem tablesObject;
		if(!valueTablesTablesItem["OssClusterId"].isNull())
			tablesObject.ossClusterId = valueTablesTablesItem["OssClusterId"].asString();
		if(!valueTablesTablesItem["Partion"].isNull())
			tablesObject.partion = valueTablesTablesItem["Partion"].asString();
		if(!valueTablesTablesItem["Size"].isNull())
			tablesObject.size = valueTablesTablesItem["Size"].asString();
		if(!valueTablesTablesItem["DB"].isNull())
			tablesObject.dB = valueTablesTablesItem["DB"].asString();
		if(!valueTablesTablesItem["Table"].isNull())
			tablesObject.table = valueTablesTablesItem["Table"].asString();
		if(!valueTablesTablesItem["TableName"].isNull())
			tablesObject.tableName = valueTablesTablesItem["TableName"].asString();
		if(!valueTablesTablesItem["DBName"].isNull())
			tablesObject.dBName = valueTablesTablesItem["DBName"].asString();
		if(!valueTablesTablesItem["Status"].isNull())
			tablesObject.status = valueTablesTablesItem["Status"].asString();
		if(!valueTablesTablesItem["FieldName"].isNull())
			tablesObject.fieldName = valueTablesTablesItem["FieldName"].asString();
		auto allChildObjectsNode = valueTablesTablesItem["ChildObjects"]["ChildObjectsItem"];
		for (auto valueTablesTablesItemChildObjectsChildObjectsItem : allChildObjectsNode)
		{
			TablesItem::ChildObjectsItem childObjectsObject;
			if(!valueTablesTablesItemChildObjectsChildObjectsItem["ObjectName"].isNull())
				childObjectsObject.objectName = valueTablesTablesItemChildObjectsChildObjectsItem["ObjectName"].asString();
			if(!valueTablesTablesItemChildObjectsChildObjectsItem["ObjectType"].isNull())
				childObjectsObject.objectType = valueTablesTablesItemChildObjectsChildObjectsItem["ObjectType"].asString();
			if(!valueTablesTablesItemChildObjectsChildObjectsItem["Size"].isNull())
				childObjectsObject.size = valueTablesTablesItemChildObjectsChildObjectsItem["Size"].asString();
			if(!valueTablesTablesItemChildObjectsChildObjectsItem["Status"].isNull())
				childObjectsObject.status = valueTablesTablesItemChildObjectsChildObjectsItem["Status"].asString();
			tablesObject.childObjects.push_back(childObjectsObject);
		}
		tables_.push_back(tablesObject);
	}
	auto allOssClusterInfoListNode = value["OssClusterInfoList"]["OssClusterInfoListItem"];
	for (auto valueOssClusterInfoListOssClusterInfoListItem : allOssClusterInfoListNode)
	{
		OssClusterInfoListItem ossClusterInfoListObject;
		if(!valueOssClusterInfoListOssClusterInfoListItem["OssClusterId"].isNull())
			ossClusterInfoListObject.ossClusterId = valueOssClusterInfoListOssClusterInfoListItem["OssClusterId"].asString();
		if(!valueOssClusterInfoListOssClusterInfoListItem["Region"].isNull())
			ossClusterInfoListObject.region = valueOssClusterInfoListOssClusterInfoListItem["Region"].asString();
		if(!valueOssClusterInfoListOssClusterInfoListItem["Size"].isNull())
			ossClusterInfoListObject.size = valueOssClusterInfoListOssClusterInfoListItem["Size"].asString();
		if(!valueOssClusterInfoListOssClusterInfoListItem["CreatedTime"].isNull())
			ossClusterInfoListObject.createdTime = valueOssClusterInfoListOssClusterInfoListItem["CreatedTime"].asString();
		ossClusterInfoList_.push_back(ossClusterInfoListObject);
	}
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["DownLoadUrl"].isNull())
		downLoadUrl_ = value["DownLoadUrl"].asString();
	if(!value["OssClusterEnabled"].isNull())
		ossClusterEnabled_ = value["OssClusterEnabled"].asString();
	if(!value["SupportOssCluster"].isNull())
		supportOssCluster_ = value["SupportOssCluster"].asString();
	if(!value["ObjectType"].isNull())
		objectType_ = value["ObjectType"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecord"].isNull())
		totalRecord_ = std::stoi(value["TotalRecord"].asString());

}

std::string DescribeColdStorageInstanceResult::getOssClusterEnabled()const
{
	return ossClusterEnabled_;
}

std::string DescribeColdStorageInstanceResult::getObjectType()const
{
	return objectType_;
}

int DescribeColdStorageInstanceResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeColdStorageInstanceResult::getNextToken()const
{
	return nextToken_;
}

int DescribeColdStorageInstanceResult::getPageSize()const
{
	return pageSize_;
}

int DescribeColdStorageInstanceResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeColdStorageInstanceResult::getDownLoadUrl()const
{
	return downLoadUrl_;
}

int DescribeColdStorageInstanceResult::getTotalRecord()const
{
	return totalRecord_;
}

int DescribeColdStorageInstanceResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeColdStorageInstanceResult::TablesItem> DescribeColdStorageInstanceResult::getTables()const
{
	return tables_;
}

std::string DescribeColdStorageInstanceResult::getSupportOssCluster()const
{
	return supportOssCluster_;
}

std::vector<DescribeColdStorageInstanceResult::OssClusterInfoListItem> DescribeColdStorageInstanceResult::getOssClusterInfoList()const
{
	return ossClusterInfoList_;
}

