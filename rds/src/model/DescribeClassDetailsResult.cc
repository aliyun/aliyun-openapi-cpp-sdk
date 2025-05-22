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

#include <alibabacloud/rds/model/DescribeClassDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeClassDetailsResult::DescribeClassDetailsResult() :
	ServiceResult()
{}

DescribeClassDetailsResult::DescribeClassDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClassDetailsResult::~DescribeClassDetailsResult()
{}

void DescribeClassDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Category"].isNull())
		category_ = value["Category"].asString();
	if(!value["ClassCode"].isNull())
		classCode_ = value["ClassCode"].asString();
	if(!value["ClassGroup"].isNull())
		classGroup_ = value["ClassGroup"].asString();
	if(!value["Cpu"].isNull())
		cpu_ = value["Cpu"].asString();
	if(!value["DBInstanceStorageType"].isNull())
		dBInstanceStorageType_ = value["DBInstanceStorageType"].asString();
	if(!value["InstructionSetArch"].isNull())
		instructionSetArch_ = value["InstructionSetArch"].asString();
	if(!value["MaxConnections"].isNull())
		maxConnections_ = value["MaxConnections"].asString();
	if(!value["MaxIOMBPS"].isNull())
		maxIOMBPS_ = value["MaxIOMBPS"].asString();
	if(!value["MaxIOPS"].isNull())
		maxIOPS_ = value["MaxIOPS"].asString();
	if(!value["MemoryClass"].isNull())
		memoryClass_ = value["MemoryClass"].asString();
	if(!value["ReferencePrice"].isNull())
		referencePrice_ = value["ReferencePrice"].asString();

}

std::string DescribeClassDetailsResult::getMaxIOMBPS()const
{
	return maxIOMBPS_;
}

std::string DescribeClassDetailsResult::getCategory()const
{
	return category_;
}

std::string DescribeClassDetailsResult::getClassCode()const
{
	return classCode_;
}

std::string DescribeClassDetailsResult::getMaxConnections()const
{
	return maxConnections_;
}

std::string DescribeClassDetailsResult::getClassGroup()const
{
	return classGroup_;
}

std::string DescribeClassDetailsResult::getCpu()const
{
	return cpu_;
}

std::string DescribeClassDetailsResult::getInstructionSetArch()const
{
	return instructionSetArch_;
}

std::string DescribeClassDetailsResult::getMemoryClass()const
{
	return memoryClass_;
}

std::string DescribeClassDetailsResult::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

std::string DescribeClassDetailsResult::getReferencePrice()const
{
	return referencePrice_;
}

std::string DescribeClassDetailsResult::getMaxIOPS()const
{
	return maxIOPS_;
}

