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

#include <alibabacloud/polardb/model/DescribeSqlLogDetailArchiveStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeSqlLogDetailArchiveStatusResult::DescribeSqlLogDetailArchiveStatusResult() :
	ServiceResult()
{}

DescribeSqlLogDetailArchiveStatusResult::DescribeSqlLogDetailArchiveStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSqlLogDetailArchiveStatusResult::~DescribeSqlLogDetailArchiveStatusResult()
{}

void DescribeSqlLogDetailArchiveStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ArchiveSQLLog"];
	for (auto valueItemsArchiveSQLLog : allItemsNode)
	{
		ArchiveSQLLog itemsObject;
		if(!valueItemsArchiveSQLLog["UpdateTime"].isNull())
			itemsObject.updateTime = valueItemsArchiveSQLLog["UpdateTime"].asString();
		if(!valueItemsArchiveSQLLog["JobStatus"].isNull())
			itemsObject.jobStatus = valueItemsArchiveSQLLog["JobStatus"].asString();
		if(!valueItemsArchiveSQLLog["JobName"].isNull())
			itemsObject.jobName = valueItemsArchiveSQLLog["JobName"].asString();
		if(!valueItemsArchiveSQLLog["LinkExpiredTime"].isNull())
			itemsObject.linkExpiredTime = valueItemsArchiveSQLLog["LinkExpiredTime"].asString();
		if(!valueItemsArchiveSQLLog["CreateTime"].isNull())
			itemsObject.createTime = valueItemsArchiveSQLLog["CreateTime"].asString();
		if(!valueItemsArchiveSQLLog["DownloadLink"].isNull())
			itemsObject.downloadLink = valueItemsArchiveSQLLog["DownloadLink"].asString();
		if(!valueItemsArchiveSQLLog["TotalRows"].isNull())
			itemsObject.totalRows = std::stol(valueItemsArchiveSQLLog["TotalRows"].asString());
		if(!valueItemsArchiveSQLLog["ProcessRows"].isNull())
			itemsObject.processRows = std::stol(valueItemsArchiveSQLLog["ProcessRows"].asString());
		if(!valueItemsArchiveSQLLog["FailMsg"].isNull())
			itemsObject.failMsg = valueItemsArchiveSQLLog["FailMsg"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

int DescribeSqlLogDetailArchiveStatusResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

int DescribeSqlLogDetailArchiveStatusResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::vector<DescribeSqlLogDetailArchiveStatusResult::ArchiveSQLLog> DescribeSqlLogDetailArchiveStatusResult::getItems()const
{
	return items_;
}

std::string DescribeSqlLogDetailArchiveStatusResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

