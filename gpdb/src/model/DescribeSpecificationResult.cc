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

#include <alibabacloud/gpdb/model/DescribeSpecificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeSpecificationResult::DescribeSpecificationResult() :
	ServiceResult()
{}

DescribeSpecificationResult::DescribeSpecificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSpecificationResult::~DescribeSpecificationResult()
{}

void DescribeSpecificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStorageNoticeNode = value["StorageNotice"]["StorageNoticeItem"];
	for (auto valueStorageNoticeStorageNoticeItem : allStorageNoticeNode)
	{
		StorageNoticeItem storageNoticeObject;
		if(!valueStorageNoticeStorageNoticeItem["Value"].isNull())
			storageNoticeObject.value = valueStorageNoticeStorageNoticeItem["Value"].asString();
		if(!valueStorageNoticeStorageNoticeItem["Text"].isNull())
			storageNoticeObject.text = valueStorageNoticeStorageNoticeItem["Text"].asString();
		storageNotice_.push_back(storageNoticeObject);
	}
	auto allDBInstanceClassNode = value["DBInstanceClass"]["DBInstanceClassItem"];
	for (auto valueDBInstanceClassDBInstanceClassItem : allDBInstanceClassNode)
	{
		DBInstanceClassItem dBInstanceClassObject;
		if(!valueDBInstanceClassDBInstanceClassItem["Value"].isNull())
			dBInstanceClassObject.value = valueDBInstanceClassDBInstanceClassItem["Value"].asString();
		if(!valueDBInstanceClassDBInstanceClassItem["Text"].isNull())
			dBInstanceClassObject.text = valueDBInstanceClassDBInstanceClassItem["Text"].asString();
		dBInstanceClass_.push_back(dBInstanceClassObject);
	}
	auto allDBInstanceGroupCountNode = value["DBInstanceGroupCount"]["DBInstanceGroupCountItem"];
	for (auto valueDBInstanceGroupCountDBInstanceGroupCountItem : allDBInstanceGroupCountNode)
	{
		DBInstanceGroupCountItem dBInstanceGroupCountObject;
		if(!valueDBInstanceGroupCountDBInstanceGroupCountItem["Value"].isNull())
			dBInstanceGroupCountObject.value = valueDBInstanceGroupCountDBInstanceGroupCountItem["Value"].asString();
		if(!valueDBInstanceGroupCountDBInstanceGroupCountItem["Text"].isNull())
			dBInstanceGroupCountObject.text = valueDBInstanceGroupCountDBInstanceGroupCountItem["Text"].asString();
		dBInstanceGroupCount_.push_back(dBInstanceGroupCountObject);
	}

}

std::vector<DescribeSpecificationResult::StorageNoticeItem> DescribeSpecificationResult::getStorageNotice()const
{
	return storageNotice_;
}

std::vector<DescribeSpecificationResult::DBInstanceClassItem> DescribeSpecificationResult::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

std::vector<DescribeSpecificationResult::DBInstanceGroupCountItem> DescribeSpecificationResult::getDBInstanceGroupCount()const
{
	return dBInstanceGroupCount_;
}

