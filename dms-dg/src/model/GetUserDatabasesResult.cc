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

#include <alibabacloud/dms-dg/model/GetUserDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_dg;
using namespace AlibabaCloud::Dms_dg::Model;

GetUserDatabasesResult::GetUserDatabasesResult() :
	ServiceResult()
{}

GetUserDatabasesResult::GetUserDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserDatabasesResult::~GetUserDatabasesResult()
{}

void GetUserDatabasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDbInstanceListNode = value["DbInstanceList"]["DbInstance"];
	for (auto valueDbInstanceListDbInstance : allDbInstanceListNode)
	{
		DbInstance dbInstanceListObject;
		if(!valueDbInstanceListDbInstance["Port"].isNull())
			dbInstanceListObject.port = std::stoi(valueDbInstanceListDbInstance["Port"].asString());
		if(!valueDbInstanceListDbInstance["Host"].isNull())
			dbInstanceListObject.host = valueDbInstanceListDbInstance["Host"].asString();
		if(!valueDbInstanceListDbInstance["GatewayId"].isNull())
			dbInstanceListObject.gatewayId = valueDbInstanceListDbInstance["GatewayId"].asString();
		if(!valueDbInstanceListDbInstance["DbType"].isNull())
			dbInstanceListObject.dbType = valueDbInstanceListDbInstance["DbType"].asString();
		if(!valueDbInstanceListDbInstance["RegionId"].isNull())
			dbInstanceListObject.regionId = valueDbInstanceListDbInstance["RegionId"].asString();
		if(!valueDbInstanceListDbInstance["ConnectHost"].isNull())
			dbInstanceListObject.connectHost = valueDbInstanceListDbInstance["ConnectHost"].asString();
		if(!valueDbInstanceListDbInstance["ConnectPort"].isNull())
			dbInstanceListObject.connectPort = std::stoi(valueDbInstanceListDbInstance["ConnectPort"].asString());
		if(!valueDbInstanceListDbInstance["ServiceType"].isNull())
			dbInstanceListObject.serviceType = valueDbInstanceListDbInstance["ServiceType"].asString();
		if(!valueDbInstanceListDbInstance["NetworkType"].isNull())
			dbInstanceListObject.networkType = valueDbInstanceListDbInstance["NetworkType"].asString();
		if(!valueDbInstanceListDbInstance["NodeId"].isNull())
			dbInstanceListObject.nodeId = valueDbInstanceListDbInstance["NodeId"].asString();
		if(!valueDbInstanceListDbInstance["InstanceStatus"].isNull())
			dbInstanceListObject.instanceStatus = valueDbInstanceListDbInstance["InstanceStatus"].asString();
		if(!valueDbInstanceListDbInstance["DbDescription"].isNull())
			dbInstanceListObject.dbDescription = valueDbInstanceListDbInstance["DbDescription"].asString();
		if(!valueDbInstanceListDbInstance["InstanceId"].isNull())
			dbInstanceListObject.instanceId = valueDbInstanceListDbInstance["InstanceId"].asString();
		if(!valueDbInstanceListDbInstance["GatewayName"].isNull())
			dbInstanceListObject.gatewayName = valueDbInstanceListDbInstance["GatewayName"].asString();
		if(!valueDbInstanceListDbInstance["GmtCreate"].isNull())
			dbInstanceListObject.gmtCreate = std::stol(valueDbInstanceListDbInstance["GmtCreate"].asString());
		if(!valueDbInstanceListDbInstance["UserId"].isNull())
			dbInstanceListObject.userId = valueDbInstanceListDbInstance["UserId"].asString();
		if(!valueDbInstanceListDbInstance["ParentId"].isNull())
			dbInstanceListObject.parentId = valueDbInstanceListDbInstance["ParentId"].asString();
		if(!valueDbInstanceListDbInstance["VpcId"].isNull())
			dbInstanceListObject.vpcId = valueDbInstanceListDbInstance["VpcId"].asString();
		if(!valueDbInstanceListDbInstance["VpcInstanceId"].isNull())
			dbInstanceListObject.vpcInstanceId = valueDbInstanceListDbInstance["VpcInstanceId"].asString();
		dbInstanceList_.push_back(dbInstanceListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<GetUserDatabasesResult::DbInstance> GetUserDatabasesResult::getDbInstanceList()const
{
	return dbInstanceList_;
}

std::string GetUserDatabasesResult::getErrorMsg()const
{
	return errorMsg_;
}

int GetUserDatabasesResult::getCount()const
{
	return count_;
}

std::string GetUserDatabasesResult::getCode()const
{
	return code_;
}

std::string GetUserDatabasesResult::getSuccess()const
{
	return success_;
}

