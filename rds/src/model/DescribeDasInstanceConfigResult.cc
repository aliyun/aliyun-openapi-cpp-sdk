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

#include <alibabacloud/rds/model/DescribeDasInstanceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDasInstanceConfigResult::DescribeDasInstanceConfigResult() :
	ServiceResult()
{}

DescribeDasInstanceConfigResult::DescribeDasInstanceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDasInstanceConfigResult::~DescribeDasInstanceConfigResult()
{}

void DescribeDasInstanceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["StorageUpperBound"].isNull())
		storageUpperBound_ = std::stoi(value["StorageUpperBound"].asString());
	if(!value["MaxStorageUpperBound"].isNull())
		maxStorageUpperBound_ = std::stoi(value["MaxStorageUpperBound"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["StorageThreshold"].isNull())
		storageThreshold_ = std::stoi(value["StorageThreshold"].asString());
	if(!value["StorageAutoScale"].isNull())
		storageAutoScale_ = value["StorageAutoScale"].asString() == "true";
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();

}

int DescribeDasInstanceConfigResult::getStorageUpperBound()const
{
	return storageUpperBound_;
}

std::string DescribeDasInstanceConfigResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeDasInstanceConfigResult::getMaxStorageUpperBound()const
{
	return maxStorageUpperBound_;
}

std::string DescribeDasInstanceConfigResult::getData()const
{
	return data_;
}

int DescribeDasInstanceConfigResult::getStorageThreshold()const
{
	return storageThreshold_;
}

std::string DescribeDasInstanceConfigResult::getDBType()const
{
	return dBType_;
}

bool DescribeDasInstanceConfigResult::getStorageAutoScale()const
{
	return storageAutoScale_;
}

