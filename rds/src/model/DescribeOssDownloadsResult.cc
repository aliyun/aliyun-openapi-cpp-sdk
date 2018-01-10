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
	auto allItems = value["Items"]["OssDownload"];
	for (auto value : allItems)
	{
		OssDownload ossDownloadObject;
		ossDownloadObject.fileName = value["FileName"].asString();
		ossDownloadObject.createTime = value["CreateTime"].asString();
		ossDownloadObject.backupMode = value["BackupMode"].asString();
		ossDownloadObject.fileSize = value["FileSize"].asString();
		ossDownloadObject.status = value["Status"].asString();
		ossDownloadObject.isAvailable = value["IsAvailable"].asString();
		ossDownloadObject.description = value["Description"].asString();
		items_.push_back(ossDownloadObject);
	}
	dBInstanceId_ = value["DBInstanceId"].asString();
	migrateTaskId_ = value["MigrateTaskId"].asString();

}

std::string DescribeOssDownloadsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeOssDownloadsResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string DescribeOssDownloadsResult::getMigrateTaskId()const
{
	return migrateTaskId_;
}

void DescribeOssDownloadsResult::setMigrateTaskId(const std::string& migrateTaskId)
{
	migrateTaskId_ = migrateTaskId;
}

