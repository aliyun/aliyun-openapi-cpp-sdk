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

#include <alibabacloud/rds/model/DescribeDBProxyEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBProxyEndpointResult::DescribeDBProxyEndpointResult() :
	ServiceResult()
{}

DescribeDBProxyEndpointResult::DescribeDBProxyEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBProxyEndpointResult::~DescribeDBProxyEndpointResult()
{}

void DescribeDBProxyEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBProxyNodesNode = value["DBProxyNodes"]["DBProxyNodesItem"];
	for (auto valueDBProxyNodesDBProxyNodesItem : allDBProxyNodesNode)
	{
		DBProxyNodesItem dBProxyNodesObject;
		if(!valueDBProxyNodesDBProxyNodesItem["cpuCores"].isNull())
			dBProxyNodesObject.cpuCores = valueDBProxyNodesDBProxyNodesItem["cpuCores"].asString();
		if(!valueDBProxyNodesDBProxyNodesItem["nodeId"].isNull())
			dBProxyNodesObject.nodeId = valueDBProxyNodesDBProxyNodesItem["nodeId"].asString();
		if(!valueDBProxyNodesDBProxyNodesItem["zoneId"].isNull())
			dBProxyNodesObject.zoneId = valueDBProxyNodesDBProxyNodesItem["zoneId"].asString();
		dBProxyNodes_.push_back(dBProxyNodesObject);
	}
	auto allEndpointConnectItemsNode = value["EndpointConnectItems"]["EndpointConnectItemsItem"];
	for (auto valueEndpointConnectItemsEndpointConnectItemsItem : allEndpointConnectItemsNode)
	{
		EndpointConnectItemsItem endpointConnectItemsObject;
		if(!valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointConnectString"].isNull())
			endpointConnectItemsObject.dbProxyEndpointConnectString = valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointConnectString"].asString();
		if(!valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointNetType"].isNull())
			endpointConnectItemsObject.dbProxyEndpointNetType = valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointNetType"].asString();
		if(!valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointPort"].isNull())
			endpointConnectItemsObject.dbProxyEndpointPort = valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointPort"].asString();
		endpointConnectItems_.push_back(endpointConnectItemsObject);
	}
	if(!value["DBProxyConnectString"].isNull())
		dBProxyConnectString_ = value["DBProxyConnectString"].asString();
	if(!value["DBProxyConnectStringNetType"].isNull())
		dBProxyConnectStringNetType_ = value["DBProxyConnectStringNetType"].asString();
	if(!value["DBProxyConnectStringPort"].isNull())
		dBProxyConnectStringPort_ = value["DBProxyConnectStringPort"].asString();
	if(!value["DBProxyEndpointId"].isNull())
		dBProxyEndpointId_ = value["DBProxyEndpointId"].asString();
	if(!value["DBProxyEngineType"].isNull())
		dBProxyEngineType_ = value["DBProxyEngineType"].asString();
	if(!value["DBProxyFeatures"].isNull())
		dBProxyFeatures_ = value["DBProxyFeatures"].asString();
	if(!value["DbProxyEndpointAliases"].isNull())
		dbProxyEndpointAliases_ = value["DbProxyEndpointAliases"].asString();
	if(!value["DbProxyEndpointReadWriteMode"].isNull())
		dbProxyEndpointReadWriteMode_ = value["DbProxyEndpointReadWriteMode"].asString();
	if(!value["DbProxyEndpointVswitchId"].isNull())
		dbProxyEndpointVswitchId_ = value["DbProxyEndpointVswitchId"].asString();
	if(!value["DbProxyEndpointVpcId"].isNull())
		dbProxyEndpointVpcId_ = value["DbProxyEndpointVpcId"].asString();
	if(!value["DbProxyEndpointZoneId"].isNull())
		dbProxyEndpointZoneId_ = value["DbProxyEndpointZoneId"].asString();
	if(!value["ReadOnlyInstanceDistributionType"].isNull())
		readOnlyInstanceDistributionType_ = value["ReadOnlyInstanceDistributionType"].asString();
	if(!value["ReadOnlyInstanceMaxDelayTime"].isNull())
		readOnlyInstanceMaxDelayTime_ = value["ReadOnlyInstanceMaxDelayTime"].asString();
	if(!value["CausalConsistReadTimeout"].isNull())
		causalConsistReadTimeout_ = value["CausalConsistReadTimeout"].asString();
	if(!value["ReadOnlyInstanceWeight"].isNull())
		readOnlyInstanceWeight_ = value["ReadOnlyInstanceWeight"].asString();
	if(!value["DBProxyEndpointMinSlaveCount"].isNull())
		dBProxyEndpointMinSlaveCount_ = value["DBProxyEndpointMinSlaveCount"].asString();

}

std::string DescribeDBProxyEndpointResult::getDbProxyEndpointVswitchId()const
{
	return dbProxyEndpointVswitchId_;
}

std::string DescribeDBProxyEndpointResult::getDbProxyEndpointReadWriteMode()const
{
	return dbProxyEndpointReadWriteMode_;
}

std::string DescribeDBProxyEndpointResult::getDbProxyEndpointZoneId()const
{
	return dbProxyEndpointZoneId_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyEndpointId()const
{
	return dBProxyEndpointId_;
}

std::string DescribeDBProxyEndpointResult::getDbProxyEndpointAliases()const
{
	return dbProxyEndpointAliases_;
}

std::string DescribeDBProxyEndpointResult::getReadOnlyInstanceWeight()const
{
	return readOnlyInstanceWeight_;
}

std::string DescribeDBProxyEndpointResult::getReadOnlyInstanceMaxDelayTime()const
{
	return readOnlyInstanceMaxDelayTime_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyConnectStringNetType()const
{
	return dBProxyConnectStringNetType_;
}

std::string DescribeDBProxyEndpointResult::getDbProxyEndpointVpcId()const
{
	return dbProxyEndpointVpcId_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyEngineType()const
{
	return dBProxyEngineType_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyEndpointMinSlaveCount()const
{
	return dBProxyEndpointMinSlaveCount_;
}

std::string DescribeDBProxyEndpointResult::getReadOnlyInstanceDistributionType()const
{
	return readOnlyInstanceDistributionType_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyConnectString()const
{
	return dBProxyConnectString_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyFeatures()const
{
	return dBProxyFeatures_;
}

std::vector<DescribeDBProxyEndpointResult::DBProxyNodesItem> DescribeDBProxyEndpointResult::getDBProxyNodes()const
{
	return dBProxyNodes_;
}

std::vector<DescribeDBProxyEndpointResult::EndpointConnectItemsItem> DescribeDBProxyEndpointResult::getEndpointConnectItems()const
{
	return endpointConnectItems_;
}

std::string DescribeDBProxyEndpointResult::getCausalConsistReadTimeout()const
{
	return causalConsistReadTimeout_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyConnectStringPort()const
{
	return dBProxyConnectStringPort_;
}

