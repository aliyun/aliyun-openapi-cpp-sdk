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

#include <alibabacloud/rds/model/DescribeLogicDBInstanceTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeLogicDBInstanceTopologyResult::DescribeLogicDBInstanceTopologyResult() :
	ServiceResult()
{}

DescribeLogicDBInstanceTopologyResult::DescribeLogicDBInstanceTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogicDBInstanceTopologyResult::~DescribeLogicDBInstanceTopologyResult()
{}

void DescribeLogicDBInstanceTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["LogicDBInstanceParameter"];
	for (auto value : allItems)
	{
		LogicDBInstanceParameter itemsObject;
		if(!value["DBInstanceID"].isNull())
			itemsObject.dBInstanceID = std::stoi(value["DBInstanceID"].asString());
		if(!value["DBInstanceName"].isNull())
			itemsObject.dBInstanceName = value["DBInstanceName"].asString();
		if(!value["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = std::stoi(value["DBInstanceStatus"].asString());
		if(!value["DBInstanceStatusDesc"].isNull())
			itemsObject.dBInstanceStatusDesc = value["DBInstanceStatusDesc"].asString();
		if(!value["DBInstanceConnType"].isNull())
			itemsObject.dBInstanceConnType = value["DBInstanceConnType"].asString();
		if(!value["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["Engine"].isNull())
			itemsObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			itemsObject.engineVersion = value["EngineVersion"].asString();
		if(!value["CharacterType"].isNull())
			itemsObject.characterType = value["CharacterType"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = std::stoi(value["DBInstanceId"].asString());
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["DBInstanceStatus"].isNull())
		dBInstanceStatus_ = std::stoi(value["DBInstanceStatus"].asString());
	if(!value["DBInstanceStatusDesc"].isNull())
		dBInstanceStatusDesc_ = value["DBInstanceStatusDesc"].asString();
	if(!value["DBInstanceConnType"].isNull())
		dBInstanceConnType_ = value["DBInstanceConnType"].asString();
	if(!value["DBInstanceDescription"].isNull())
		dBInstanceDescription_ = value["DBInstanceDescription"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();

}

std::string DescribeLogicDBInstanceTopologyResult::getEngineVersion()const
{
	return engineVersion_;
}

int DescribeLogicDBInstanceTopologyResult::getDBInstanceStatus()const
{
	return dBInstanceStatus_;
}

int DescribeLogicDBInstanceTopologyResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::vector<DescribeLogicDBInstanceTopologyResult::LogicDBInstanceParameter> DescribeLogicDBInstanceTopologyResult::getItems()const
{
	return items_;
}

std::string DescribeLogicDBInstanceTopologyResult::getDBInstanceStatusDesc()const
{
	return dBInstanceStatusDesc_;
}

std::string DescribeLogicDBInstanceTopologyResult::getDBInstanceConnType()const
{
	return dBInstanceConnType_;
}

std::string DescribeLogicDBInstanceTopologyResult::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

std::string DescribeLogicDBInstanceTopologyResult::getEngine()const
{
	return engine_;
}

std::string DescribeLogicDBInstanceTopologyResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

