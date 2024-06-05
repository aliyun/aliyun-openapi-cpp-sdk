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

#include <alibabacloud/dms-dg/model/AddDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_dg;
using namespace AlibabaCloud::Dms_dg::Model;

AddDatabaseResult::AddDatabaseResult() :
	ServiceResult()
{}

AddDatabaseResult::AddDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddDatabaseResult::~AddDatabaseResult()
{}

void AddDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dbInstanceNode = value["DbInstance"];
	if(!dbInstanceNode["Port"].isNull())
		dbInstance_.port = std::stoi(dbInstanceNode["Port"].asString());
	if(!dbInstanceNode["Host"].isNull())
		dbInstance_.host = dbInstanceNode["Host"].asString();
	if(!dbInstanceNode["GatewayId"].isNull())
		dbInstance_.gatewayId = dbInstanceNode["GatewayId"].asString();
	if(!dbInstanceNode["DbType"].isNull())
		dbInstance_.dbType = dbInstanceNode["DbType"].asString();
	if(!dbInstanceNode["RegionId"].isNull())
		dbInstance_.regionId = dbInstanceNode["RegionId"].asString();
	if(!dbInstanceNode["ConnectHost"].isNull())
		dbInstance_.connectHost = dbInstanceNode["ConnectHost"].asString();
	if(!dbInstanceNode["ConnectPort"].isNull())
		dbInstance_.connectPort = std::stoi(dbInstanceNode["ConnectPort"].asString());
	if(!dbInstanceNode["ServiceType"].isNull())
		dbInstance_.serviceType = dbInstanceNode["ServiceType"].asString();
	if(!dbInstanceNode["NetworkType"].isNull())
		dbInstance_.networkType = dbInstanceNode["NetworkType"].asString();
	if(!dbInstanceNode["NodeId"].isNull())
		dbInstance_.nodeId = dbInstanceNode["NodeId"].asString();
	if(!dbInstanceNode["InstanceStatus"].isNull())
		dbInstance_.instanceStatus = dbInstanceNode["InstanceStatus"].asString();
	if(!dbInstanceNode["DbDescription"].isNull())
		dbInstance_.dbDescription = dbInstanceNode["DbDescription"].asString();
	if(!dbInstanceNode["InstanceId"].isNull())
		dbInstance_.instanceId = dbInstanceNode["InstanceId"].asString();
	if(!dbInstanceNode["GatewayName"].isNull())
		dbInstance_.gatewayName = dbInstanceNode["GatewayName"].asString();
	if(!dbInstanceNode["UserId"].isNull())
		dbInstance_.userId = dbInstanceNode["UserId"].asString();
	if(!dbInstanceNode["ParentId"].isNull())
		dbInstance_.parentId = dbInstanceNode["ParentId"].asString();
	if(!dbInstanceNode["VpcId"].isNull())
		dbInstance_.vpcId = dbInstanceNode["VpcId"].asString();
	if(!dbInstanceNode["VpcInstanceId"].isNull())
		dbInstance_.vpcInstanceId = dbInstanceNode["VpcInstanceId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

AddDatabaseResult::DbInstance AddDatabaseResult::getDbInstance()const
{
	return dbInstance_;
}

std::string AddDatabaseResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string AddDatabaseResult::getCode()const
{
	return code_;
}

bool AddDatabaseResult::getSuccess()const
{
	return success_;
}

