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
	auto allDBInstanceClass = value["DBInstanceClass"]["DBInstanceClassItem"];
	for (auto value : allDBInstanceClass)
	{
		DBInstanceClassItem dBInstanceClassObject;
		if(!value["Text"].isNull())
			dBInstanceClassObject.text = value["Text"].asString();
		if(!value["Value"].isNull())
			dBInstanceClassObject.value = value["Value"].asString();
		dBInstanceClass_.push_back(dBInstanceClassObject);
	}
	auto allDBInstanceGroupCount = value["DBInstanceGroupCount"]["DBInstanceGroupCountItem"];
	for (auto value : allDBInstanceGroupCount)
	{
		DBInstanceGroupCountItem dBInstanceGroupCountObject;
		if(!value["Text"].isNull())
			dBInstanceGroupCountObject.text = value["Text"].asString();
		if(!value["Value"].isNull())
			dBInstanceGroupCountObject.value = value["Value"].asString();
		dBInstanceGroupCount_.push_back(dBInstanceGroupCountObject);
	}
	auto allStorageNotice = value["StorageNotice"]["StorageNoticeItem"];
	for (auto value : allStorageNotice)
	{
		StorageNoticeItem storageNoticeObject;
		if(!value["Text"].isNull())
			storageNoticeObject.text = value["Text"].asString();
		if(!value["Value"].isNull())
			storageNoticeObject.value = value["Value"].asString();
		storageNotice_.push_back(storageNoticeObject);
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

