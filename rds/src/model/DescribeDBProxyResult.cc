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

#include <alibabacloud/rds/model/DescribeDBProxyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBProxyResult::DescribeDBProxyResult() :
	ServiceResult()
{}

DescribeDBProxyResult::DescribeDBProxyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBProxyResult::~DescribeDBProxyResult()
{}

void DescribeDBProxyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBProxyConnectStringItemsNode = value["DBProxyConnectStringItems"]["DBProxyConnectStringItemsItem"];
	for (auto valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem : allDBProxyConnectStringItemsNode)
	{
		DBProxyConnectStringItemsItem dBProxyConnectStringItemsObject;
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectString"].isNull())
			dBProxyConnectStringItemsObject.dBProxyConnectString = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectString"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringNetType"].isNull())
			dBProxyConnectStringItemsObject.dBProxyConnectStringNetType = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringNetType"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringNetWorkType"].isNull())
			dBProxyConnectStringItemsObject.dBProxyConnectStringNetWorkType = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringNetWorkType"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringPort"].isNull())
			dBProxyConnectStringItemsObject.dBProxyConnectStringPort = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyConnectStringPort"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyEndpointId"].isNull())
			dBProxyConnectStringItemsObject.dBProxyEndpointId = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyEndpointId"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyEndpointName"].isNull())
			dBProxyConnectStringItemsObject.dBProxyEndpointName = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyEndpointName"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyVpcId"].isNull())
			dBProxyConnectStringItemsObject.dBProxyVpcId = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyVpcId"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyVpcInstanceId"].isNull())
			dBProxyConnectStringItemsObject.dBProxyVpcInstanceId = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyVpcInstanceId"].asString();
		if(!valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyVswitchId"].isNull())
			dBProxyConnectStringItemsObject.dBProxyVswitchId = valueDBProxyConnectStringItemsDBProxyConnectStringItemsItem["DBProxyVswitchId"].asString();
		dBProxyConnectStringItems_.push_back(dBProxyConnectStringItemsObject);
	}
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
	auto allDbProxyEndpointItemsNode = value["DbProxyEndpointItems"]["DbProxyEndpointItemsItem"];
	for (auto valueDbProxyEndpointItemsDbProxyEndpointItemsItem : allDbProxyEndpointItemsNode)
	{
		DbProxyEndpointItemsItem dbProxyEndpointItemsObject;
		if(!valueDbProxyEndpointItemsDbProxyEndpointItemsItem["DbProxyEndpointAliases"].isNull())
			dbProxyEndpointItemsObject.dbProxyEndpointAliases = valueDbProxyEndpointItemsDbProxyEndpointItemsItem["DbProxyEndpointAliases"].asString();
		if(!valueDbProxyEndpointItemsDbProxyEndpointItemsItem["DbProxyEndpointName"].isNull())
			dbProxyEndpointItemsObject.dbProxyEndpointName = valueDbProxyEndpointItemsDbProxyEndpointItemsItem["DbProxyEndpointName"].asString();
		if(!valueDbProxyEndpointItemsDbProxyEndpointItemsItem["DbProxyEndpointType"].isNull())
			dbProxyEndpointItemsObject.dbProxyEndpointType = valueDbProxyEndpointItemsDbProxyEndpointItemsItem["DbProxyEndpointType"].asString();
		if(!valueDbProxyEndpointItemsDbProxyEndpointItemsItem["DbProxyReadWriteMode"].isNull())
			dbProxyEndpointItemsObject.dbProxyReadWriteMode = valueDbProxyEndpointItemsDbProxyEndpointItemsItem["DbProxyReadWriteMode"].asString();
		dbProxyEndpointItems_.push_back(dbProxyEndpointItemsObject);
	}
	auto allDBProxyAVZones = value["DBProxyAVZones"]["DBProxyAVZones"];
	for (const auto &item : allDBProxyAVZones)
		dBProxyAVZones_.push_back(item.asString());
	if(!value["AccountName"].isNull())
		accountName_ = value["AccountName"].asString();
	if(!value["DBProxyEngineType"].isNull())
		dBProxyEngineType_ = value["DBProxyEngineType"].asString();
	if(!value["DBProxyInstanceCurrentMinorVersion"].isNull())
		dBProxyInstanceCurrentMinorVersion_ = value["DBProxyInstanceCurrentMinorVersion"].asString();
	if(!value["DBProxyInstanceLatestMinorVersion"].isNull())
		dBProxyInstanceLatestMinorVersion_ = value["DBProxyInstanceLatestMinorVersion"].asString();
	if(!value["DBProxyInstanceName"].isNull())
		dBProxyInstanceName_ = value["DBProxyInstanceName"].asString();
	if(!value["DBProxyInstanceNum"].isNull())
		dBProxyInstanceNum_ = std::stoi(value["DBProxyInstanceNum"].asString());
	if(!value["DBProxyInstanceSize"].isNull())
		dBProxyInstanceSize_ = value["DBProxyInstanceSize"].asString();
	if(!value["DBProxyInstanceStatus"].isNull())
		dBProxyInstanceStatus_ = value["DBProxyInstanceStatus"].asString();
	if(!value["DBProxyInstanceType"].isNull())
		dBProxyInstanceType_ = value["DBProxyInstanceType"].asString();
	if(!value["DBProxyKindCode"].isNull())
		dBProxyKindCode_ = value["DBProxyKindCode"].asString();
	if(!value["DBProxyPersistentConnectionStatus"].isNull())
		dBProxyPersistentConnectionStatus_ = value["DBProxyPersistentConnectionStatus"].asString();
	if(!value["DBProxyServiceStatus"].isNull())
		dBProxyServiceStatus_ = value["DBProxyServiceStatus"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string DescribeDBProxyResult::getDBProxyInstanceCurrentMinorVersion()const
{
	return dBProxyInstanceCurrentMinorVersion_;
}

std::string DescribeDBProxyResult::getDBProxyPersistentConnectionStatus()const
{
	return dBProxyPersistentConnectionStatus_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceLatestMinorVersion()const
{
	return dBProxyInstanceLatestMinorVersion_;
}

int DescribeDBProxyResult::getDBProxyInstanceNum()const
{
	return dBProxyInstanceNum_;
}

std::string DescribeDBProxyResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::vector<DescribeDBProxyResult::DbProxyEndpointItemsItem> DescribeDBProxyResult::getDbProxyEndpointItems()const
{
	return dbProxyEndpointItems_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceSize()const
{
	return dBProxyInstanceSize_;
}

std::vector<std::string> DescribeDBProxyResult::getDBProxyAVZones()const
{
	return dBProxyAVZones_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceStatus()const
{
	return dBProxyInstanceStatus_;
}

std::string DescribeDBProxyResult::getDBProxyEngineType()const
{
	return dBProxyEngineType_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceName()const
{
	return dBProxyInstanceName_;
}

std::string DescribeDBProxyResult::getDBProxyServiceStatus()const
{
	return dBProxyServiceStatus_;
}

std::vector<DescribeDBProxyResult::DBProxyConnectStringItemsItem> DescribeDBProxyResult::getDBProxyConnectStringItems()const
{
	return dBProxyConnectStringItems_;
}

std::vector<DescribeDBProxyResult::DBProxyNodesItem> DescribeDBProxyResult::getDBProxyNodes()const
{
	return dBProxyNodes_;
}

std::string DescribeDBProxyResult::getDBProxyInstanceType()const
{
	return dBProxyInstanceType_;
}

std::string DescribeDBProxyResult::getDBProxyKindCode()const
{
	return dBProxyKindCode_;
}

std::string DescribeDBProxyResult::getAccountName()const
{
	return accountName_;
}

