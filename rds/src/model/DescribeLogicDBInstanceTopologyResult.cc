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
		LogicDBInstanceParameter logicDBInstanceParameterObject;
		logicDBInstanceParameterObject.dBInstanceID = std::stoi(value["DBInstanceID"].asString());
		logicDBInstanceParameterObject.dBInstanceName = value["DBInstanceName"].asString();
		logicDBInstanceParameterObject.dBInstanceStatus = std::stoi(value["DBInstanceStatus"].asString());
		logicDBInstanceParameterObject.dBInstanceStatusDesc = value["DBInstanceStatusDesc"].asString();
		logicDBInstanceParameterObject.dBInstanceConnType = value["DBInstanceConnType"].asString();
		logicDBInstanceParameterObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		logicDBInstanceParameterObject.engine = value["Engine"].asString();
		logicDBInstanceParameterObject.engineVersion = value["EngineVersion"].asString();
		logicDBInstanceParameterObject.characterType = value["CharacterType"].asString();
		items_.push_back(logicDBInstanceParameterObject);
	}
	dBInstanceId_ = std::stoi(value["DBInstanceId"].asString());
	dBInstanceName_ = value["DBInstanceName"].asString();
	dBInstanceStatus_ = std::stoi(value["DBInstanceStatus"].asString());
	dBInstanceStatusDesc_ = value["DBInstanceStatusDesc"].asString();
	dBInstanceConnType_ = value["DBInstanceConnType"].asString();
	dBInstanceDescription_ = value["DBInstanceDescription"].asString();
	engine_ = value["Engine"].asString();
	engineVersion_ = value["EngineVersion"].asString();

}

std::string DescribeLogicDBInstanceTopologyResult::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeLogicDBInstanceTopologyResult::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
}

int DescribeLogicDBInstanceTopologyResult::getDBInstanceStatus()const
{
	return dBInstanceStatus_;
}

void DescribeLogicDBInstanceTopologyResult::setDBInstanceStatus(int dBInstanceStatus)
{
	dBInstanceStatus_ = dBInstanceStatus;
}

int DescribeLogicDBInstanceTopologyResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeLogicDBInstanceTopologyResult::setDBInstanceId(int dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string DescribeLogicDBInstanceTopologyResult::getDBInstanceStatusDesc()const
{
	return dBInstanceStatusDesc_;
}

void DescribeLogicDBInstanceTopologyResult::setDBInstanceStatusDesc(const std::string& dBInstanceStatusDesc)
{
	dBInstanceStatusDesc_ = dBInstanceStatusDesc;
}

std::string DescribeLogicDBInstanceTopologyResult::getDBInstanceConnType()const
{
	return dBInstanceConnType_;
}

void DescribeLogicDBInstanceTopologyResult::setDBInstanceConnType(const std::string& dBInstanceConnType)
{
	dBInstanceConnType_ = dBInstanceConnType;
}

std::string DescribeLogicDBInstanceTopologyResult::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void DescribeLogicDBInstanceTopologyResult::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
}

std::string DescribeLogicDBInstanceTopologyResult::getEngine()const
{
	return engine_;
}

void DescribeLogicDBInstanceTopologyResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

std::string DescribeLogicDBInstanceTopologyResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DescribeLogicDBInstanceTopologyResult::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
}

