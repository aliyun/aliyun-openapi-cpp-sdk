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

#include <alibabacloud/drds/model/DescribeDrdsDBClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsDBClusterResult::DescribeDrdsDBClusterResult() :
	ServiceResult()
{}

DescribeDrdsDBClusterResult::DescribeDrdsDBClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsDBClusterResult::~DescribeDrdsDBClusterResult()
{}

void DescribeDrdsDBClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dbInstanceNode = value["DbInstance"];
	if(!dbInstanceNode["ExpireTime"].isNull())
		dbInstance_.expireTime = dbInstanceNode["ExpireTime"].asString();
	if(!dbInstanceNode["PayType"].isNull())
		dbInstance_.payType = dbInstanceNode["PayType"].asString();
	if(!dbInstanceNode["DBInstanceStatus"].isNull())
		dbInstance_.dBInstanceStatus = dbInstanceNode["DBInstanceStatus"].asString();
	if(!dbInstanceNode["NetworkType"].isNull())
		dbInstance_.networkType = dbInstanceNode["NetworkType"].asString();
	if(!dbInstanceNode["Port"].isNull())
		dbInstance_.port = std::stoi(dbInstanceNode["Port"].asString());
	if(!dbInstanceNode["EngineVersion"].isNull())
		dbInstance_.engineVersion = dbInstanceNode["EngineVersion"].asString();
	if(!dbInstanceNode["RdsInstType"].isNull())
		dbInstance_.rdsInstType = dbInstanceNode["RdsInstType"].asString();
	if(!dbInstanceNode["RemainDays"].isNull())
		dbInstance_.remainDays = dbInstanceNode["RemainDays"].asString();
	if(!dbInstanceNode["DBInstanceId"].isNull())
		dbInstance_.dBInstanceId = dbInstanceNode["DBInstanceId"].asString();
	if(!dbInstanceNode["DbInstType"].isNull())
		dbInstance_.dbInstType = dbInstanceNode["DbInstType"].asString();
	if(!dbInstanceNode["Engine"].isNull())
		dbInstance_.engine = dbInstanceNode["Engine"].asString();
	if(!dbInstanceNode["ReadMode"].isNull())
		dbInstance_.readMode = dbInstanceNode["ReadMode"].asString();
	auto allEndpointsNode = dbInstanceNode["Endpoints"]["Endpoint"];
	for (auto dbInstanceNodeEndpointsEndpoint : allEndpointsNode)
	{
		DbInstance::Endpoint endpointObject;
		if(!dbInstanceNodeEndpointsEndpoint["ReadWeight"].isNull())
			endpointObject.readWeight = std::stoi(dbInstanceNodeEndpointsEndpoint["ReadWeight"].asString());
		if(!dbInstanceNodeEndpointsEndpoint["EndpointId"].isNull())
			endpointObject.endpointId = dbInstanceNodeEndpointsEndpoint["EndpointId"].asString();
		if(!dbInstanceNodeEndpointsEndpoint["NodeIds"].isNull())
			endpointObject.nodeIds = dbInstanceNodeEndpointsEndpoint["NodeIds"].asString();
		dbInstance_.endpoints.push_back(endpointObject);
	}
	auto allDBNodesNode = dbInstanceNode["DBNodes"]["DBNode"];
	for (auto dbInstanceNodeDBNodesDBNode : allDBNodesNode)
	{
		DbInstance::DBNode dBNodeObject;
		if(!dbInstanceNodeDBNodesDBNode["DBNodeRole"].isNull())
			dBNodeObject.dBNodeRole = dbInstanceNodeDBNodesDBNode["DBNodeRole"].asString();
		if(!dbInstanceNodeDBNodesDBNode["ZoneId"].isNull())
			dBNodeObject.zoneId = dbInstanceNodeDBNodesDBNode["ZoneId"].asString();
		if(!dbInstanceNodeDBNodesDBNode["DBNodeId"].isNull())
			dBNodeObject.dBNodeId = dbInstanceNodeDBNodesDBNode["DBNodeId"].asString();
		if(!dbInstanceNodeDBNodesDBNode["DBNodeStatus"].isNull())
			dBNodeObject.dBNodeStatus = dbInstanceNodeDBNodesDBNode["DBNodeStatus"].asString();
		dbInstance_.dBNodes.push_back(dBNodeObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeDrdsDBClusterResult::DbInstance DescribeDrdsDBClusterResult::getDbInstance()const
{
	return dbInstance_;
}

bool DescribeDrdsDBClusterResult::getSuccess()const
{
	return success_;
}

