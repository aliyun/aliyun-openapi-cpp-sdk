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

#include <alibabacloud/selectdb/model/DescribeAllDBInstanceClassResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

DescribeAllDBInstanceClassResult::DescribeAllDBInstanceClassResult() :
	ServiceResult()
{}

DescribeAllDBInstanceClassResult::DescribeAllDBInstanceClassResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAllDBInstanceClassResult::~DescribeAllDBInstanceClassResult()
{}

void DescribeAllDBInstanceClassResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClassCodeListNode = value["ClassCodeList"]["classCodeListItem"];
	for (auto valueClassCodeListclassCodeListItem : allClassCodeListNode)
	{
		ClassCodeListItem classCodeListObject;
		if(!valueClassCodeListclassCodeListItem["ClassCode"].isNull())
			classCodeListObject.classCode = valueClassCodeListclassCodeListItem["ClassCode"].asString();
		if(!valueClassCodeListclassCodeListItem["CpuCores"].isNull())
			classCodeListObject.cpuCores = std::stol(valueClassCodeListclassCodeListItem["CpuCores"].asString());
		if(!valueClassCodeListclassCodeListItem["MemoryInGB"].isNull())
			classCodeListObject.memoryInGB = std::stol(valueClassCodeListclassCodeListItem["MemoryInGB"].asString());
		if(!valueClassCodeListclassCodeListItem["DefaultStorageInGB"].isNull())
			classCodeListObject.defaultStorageInGB = std::stol(valueClassCodeListclassCodeListItem["DefaultStorageInGB"].asString());
		if(!valueClassCodeListclassCodeListItem["MinStorageInGB"].isNull())
			classCodeListObject.minStorageInGB = std::stol(valueClassCodeListclassCodeListItem["MinStorageInGB"].asString());
		if(!valueClassCodeListclassCodeListItem["MaxStorageInGB"].isNull())
			classCodeListObject.maxStorageInGB = std::stol(valueClassCodeListclassCodeListItem["MaxStorageInGB"].asString());
		if(!valueClassCodeListclassCodeListItem["StepStorageInGB"].isNull())
			classCodeListObject.stepStorageInGB = std::stol(valueClassCodeListclassCodeListItem["StepStorageInGB"].asString());
		classCodeList_.push_back(classCodeListObject);
	}

}

std::vector<DescribeAllDBInstanceClassResult::ClassCodeListItem> DescribeAllDBInstanceClassResult::getClassCodeList()const
{
	return classCodeList_;
}

