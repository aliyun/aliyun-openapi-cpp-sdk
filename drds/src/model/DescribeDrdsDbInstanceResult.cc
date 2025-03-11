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

#include <alibabacloud/drds/model/DescribeDrdsDbInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsDbInstanceResult::DescribeDrdsDbInstanceResult() :
	ServiceResult()
{}

DescribeDrdsDbInstanceResult::DescribeDrdsDbInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsDbInstanceResult::~DescribeDrdsDbInstanceResult()
{}

void DescribeDrdsDbInstanceResult::parse(const std::string &payload)
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
	if(!dbInstanceNode["DmInstanceId"].isNull())
		dbInstance_.dmInstanceId = dbInstanceNode["DmInstanceId"].asString();
	if(!dbInstanceNode["ConnectUrl"].isNull())
		dbInstance_.connectUrl = dbInstanceNode["ConnectUrl"].asString();
	if(!dbInstanceNode["ReadWeight"].isNull())
		dbInstance_.readWeight = std::stoi(dbInstanceNode["ReadWeight"].asString());
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
	auto allReadOnlyInstancesNode = dbInstanceNode["ReadOnlyInstances"]["ReadOnlyInstance"];
	for (auto dbInstanceNodeReadOnlyInstancesReadOnlyInstance : allReadOnlyInstancesNode)
	{
		DbInstance::ReadOnlyInstance readOnlyInstanceObject;
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["ExpireTime"].isNull())
			readOnlyInstanceObject.expireTime = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["ExpireTime"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["PayType"].isNull())
			readOnlyInstanceObject.payType = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["PayType"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["VersionAction"].isNull())
			readOnlyInstanceObject.versionAction = std::stoi(dbInstanceNodeReadOnlyInstancesReadOnlyInstance["VersionAction"].asString());
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["DBInstanceStatus"].isNull())
			readOnlyInstanceObject.dBInstanceStatus = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["DBInstanceStatus"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["NetworkType"].isNull())
			readOnlyInstanceObject.networkType = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["NetworkType"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["Port"].isNull())
			readOnlyInstanceObject.port = std::stoi(dbInstanceNodeReadOnlyInstancesReadOnlyInstance["Port"].asString());
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["EngineVersion"].isNull())
			readOnlyInstanceObject.engineVersion = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["EngineVersion"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["DmInstanceId"].isNull())
			readOnlyInstanceObject.dmInstanceId = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["DmInstanceId"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["ConnectUrl"].isNull())
			readOnlyInstanceObject.connectUrl = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["ConnectUrl"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["ReadWeight"].isNull())
			readOnlyInstanceObject.readWeight = std::stoi(dbInstanceNodeReadOnlyInstancesReadOnlyInstance["ReadWeight"].asString());
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["RdsInstType"].isNull())
			readOnlyInstanceObject.rdsInstType = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["RdsInstType"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["RemainDays"].isNull())
			readOnlyInstanceObject.remainDays = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["RemainDays"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["DBInstanceId"].isNull())
			readOnlyInstanceObject.dBInstanceId = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["DBInstanceId"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["DbInstType"].isNull())
			readOnlyInstanceObject.dbInstType = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["DbInstType"].asString();
		if(!dbInstanceNodeReadOnlyInstancesReadOnlyInstance["Engine"].isNull())
			readOnlyInstanceObject.engine = dbInstanceNodeReadOnlyInstancesReadOnlyInstance["Engine"].asString();
		dbInstance_.readOnlyInstances.push_back(readOnlyInstanceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeDrdsDbInstanceResult::DbInstance DescribeDrdsDbInstanceResult::getDbInstance()const
{
	return dbInstance_;
}

bool DescribeDrdsDbInstanceResult::getSuccess()const
{
	return success_;
}

