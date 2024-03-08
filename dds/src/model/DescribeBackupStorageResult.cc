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

#include <alibabacloud/dds/model/DescribeBackupStorageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeBackupStorageResult::DescribeBackupStorageResult() :
	ServiceResult()
{}

DescribeBackupStorageResult::DescribeBackupStorageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupStorageResult::~DescribeBackupStorageResult()
{}

void DescribeBackupStorageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["FullStorageSize"].isNull())
		fullStorageSize_ = std::stol(value["FullStorageSize"].asString());
	if(!value["LogStorageSize"].isNull())
		logStorageSize_ = std::stol(value["LogStorageSize"].asString());
	if(!value["FreeSize"].isNull())
		freeSize_ = std::stol(value["FreeSize"].asString());

}

long DescribeBackupStorageResult::getFreeSize()const
{
	return freeSize_;
}

long DescribeBackupStorageResult::getFullStorageSize()const
{
	return fullStorageSize_;
}

long DescribeBackupStorageResult::getLogStorageSize()const
{
	return logStorageSize_;
}

