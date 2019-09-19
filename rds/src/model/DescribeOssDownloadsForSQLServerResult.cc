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

#include <alibabacloud/rds/model/DescribeOssDownloadsForSQLServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOssDownloadsForSQLServerResult::DescribeOssDownloadsForSQLServerResult() :
	ServiceResult()
{}

DescribeOssDownloadsForSQLServerResult::DescribeOssDownloadsForSQLServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssDownloadsForSQLServerResult::~DescribeOssDownloadsForSQLServerResult()
{}

void DescribeOssDownloadsForSQLServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["OssDownload"];
	for (auto valueItemsOssDownload : allItemsNode)
	{
		OssDownload itemsObject;
		if(!valueItemsOssDownload["FileName"].isNull())
			itemsObject.fileName = valueItemsOssDownload["FileName"].asString();
		if(!valueItemsOssDownload["CreateTime"].isNull())
			itemsObject.createTime = valueItemsOssDownload["CreateTime"].asString();
		if(!valueItemsOssDownload["CreateTime"].isNull())
			itemsObject.createTime1 = valueItemsOssDownload["CreateTime"].asString();
		if(!valueItemsOssDownload["BakType"].isNull())
			itemsObject.bakType = valueItemsOssDownload["BakType"].asString();
		if(!valueItemsOssDownload["FileSize"].isNull())
			itemsObject.fileSize = valueItemsOssDownload["FileSize"].asString();
		if(!valueItemsOssDownload["Status"].isNull())
			itemsObject.status = valueItemsOssDownload["Status"].asString();
		if(!valueItemsOssDownload["IsAvail"].isNull())
			itemsObject.isAvail = valueItemsOssDownload["IsAvail"].asString();
		if(!valueItemsOssDownload["Desc"].isNull())
			itemsObject.desc = valueItemsOssDownload["Desc"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["MigrateIaskId"].isNull())
		migrateIaskId_ = value["MigrateIaskId"].asString();

}

std::vector<DescribeOssDownloadsForSQLServerResult::OssDownload> DescribeOssDownloadsForSQLServerResult::getItems()const
{
	return items_;
}

std::string DescribeOssDownloadsForSQLServerResult::getMigrateIaskId()const
{
	return migrateIaskId_;
}

std::string DescribeOssDownloadsForSQLServerResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

