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

#include <alibabacloud/rds/model/DescribeOssDownloadsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOssDownloadsResult::DescribeOssDownloadsResult() :
	ServiceResult()
{}

DescribeOssDownloadsResult::DescribeOssDownloadsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssDownloadsResult::~DescribeOssDownloadsResult()
{}

void DescribeOssDownloadsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["OssDownload"];
	for (auto valueItemsOssDownload : allItemsNode)
	{
		OssDownload itemsObject;
		if(!valueItemsOssDownload["BackupMode"].isNull())
			itemsObject.backupMode = valueItemsOssDownload["BackupMode"].asString();
		if(!valueItemsOssDownload["CreateTime"].isNull())
			itemsObject.createTime = valueItemsOssDownload["CreateTime"].asString();
		if(!valueItemsOssDownload["Description"].isNull())
			itemsObject.description = valueItemsOssDownload["Description"].asString();
		if(!valueItemsOssDownload["EndTime"].isNull())
			itemsObject.endTime = valueItemsOssDownload["EndTime"].asString();
		if(!valueItemsOssDownload["FileName"].isNull())
			itemsObject.fileName = valueItemsOssDownload["FileName"].asString();
		if(!valueItemsOssDownload["FileSize"].isNull())
			itemsObject.fileSize = valueItemsOssDownload["FileSize"].asString();
		if(!valueItemsOssDownload["IsAvailable"].isNull())
			itemsObject.isAvailable = valueItemsOssDownload["IsAvailable"].asString();
		if(!valueItemsOssDownload["Status"].isNull())
			itemsObject.status = valueItemsOssDownload["Status"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["MigrateTaskId"].isNull())
		migrateTaskId_ = value["MigrateTaskId"].asString();

}

std::string DescribeOssDownloadsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeOssDownloadsResult::getMigrateTaskId()const
{
	return migrateTaskId_;
}

std::vector<DescribeOssDownloadsResult::OssDownload> DescribeOssDownloadsResult::getItems()const
{
	return items_;
}

