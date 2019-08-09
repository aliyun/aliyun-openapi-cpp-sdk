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

#include <alibabacloud/polardb/model/DescribeBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeBackupsResult::DescribeBackupsResult() :
	ServiceResult()
{}

DescribeBackupsResult::DescribeBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupsResult::~DescribeBackupsResult()
{}

void DescribeBackupsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["Backup"];
	for (auto value : allItems)
	{
		Backup itemsObject;
		if(!value["BackupId"].isNull())
			itemsObject.backupId = value["BackupId"].asString();
		if(!value["DBClusterId"].isNull())
			itemsObject.dBClusterId = value["DBClusterId"].asString();
		if(!value["BackupStatus"].isNull())
			itemsObject.backupStatus = value["BackupStatus"].asString();
		if(!value["BackupStartTime"].isNull())
			itemsObject.backupStartTime = value["BackupStartTime"].asString();
		if(!value["BackupEndTime"].isNull())
			itemsObject.backupEndTime = value["BackupEndTime"].asString();
		if(!value["BackupType"].isNull())
			itemsObject.backupType = value["BackupType"].asString();
		if(!value["BackupMode"].isNull())
			itemsObject.backupMode = value["BackupMode"].asString();
		if(!value["BackupMethod"].isNull())
			itemsObject.backupMethod = value["BackupMethod"].asString();
		if(!value["StoreStatus"].isNull())
			itemsObject.storeStatus = value["StoreStatus"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = value["TotalRecordCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = value["PageRecordCount"].asString();

}

std::string DescribeBackupsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeBackupsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBackupsResult::Backup> DescribeBackupsResult::getItems()const
{
	return items_;
}

