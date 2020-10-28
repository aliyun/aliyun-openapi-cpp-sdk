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

#include <alibabacloud/drds/model/DescribeDrdsDbInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsDbInstancesResult::DescribeDrdsDbInstancesResult() :
	ServiceResult()
{}

DescribeDrdsDbInstancesResult::DescribeDrdsDbInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsDbInstancesResult::~DescribeDrdsDbInstancesResult()
{}

void DescribeDrdsDbInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDbInstancesNode = value["DbInstances"]["DbInstance"];
	for (auto valueDbInstancesDbInstance : allDbInstancesNode)
	{
		DbInstance dbInstancesObject;
		if(!valueDbInstancesDbInstance["DBInstanceId"].isNull())
			dbInstancesObject.dBInstanceId = valueDbInstancesDbInstance["DBInstanceId"].asString();
		if(!valueDbInstancesDbInstance["DmInstanceId"].isNull())
			dbInstancesObject.dmInstanceId = valueDbInstancesDbInstance["DmInstanceId"].asString();
		if(!valueDbInstancesDbInstance["ConnectUrl"].isNull())
			dbInstancesObject.connectUrl = valueDbInstancesDbInstance["ConnectUrl"].asString();
		if(!valueDbInstancesDbInstance["Port"].isNull())
			dbInstancesObject.port = std::stoi(valueDbInstancesDbInstance["Port"].asString());
		if(!valueDbInstancesDbInstance["DBInstanceStatus"].isNull())
			dbInstancesObject.dBInstanceStatus = valueDbInstancesDbInstance["DBInstanceStatus"].asString();
		if(!valueDbInstancesDbInstance["DbInstType"].isNull())
			dbInstancesObject.dbInstType = valueDbInstancesDbInstance["DbInstType"].asString();
		if(!valueDbInstancesDbInstance["ReadWeight"].isNull())
			dbInstancesObject.readWeight = std::stoi(valueDbInstancesDbInstance["ReadWeight"].asString());
		if(!valueDbInstancesDbInstance["NetworkType"].isNull())
			dbInstancesObject.networkType = valueDbInstancesDbInstance["NetworkType"].asString();
		if(!valueDbInstancesDbInstance["Engine"].isNull())
			dbInstancesObject.engine = valueDbInstancesDbInstance["Engine"].asString();
		if(!valueDbInstancesDbInstance["EngineVersion"].isNull())
			dbInstancesObject.engineVersion = valueDbInstancesDbInstance["EngineVersion"].asString();
		if(!valueDbInstancesDbInstance["RdsInstType"].isNull())
			dbInstancesObject.rdsInstType = valueDbInstancesDbInstance["RdsInstType"].asString();
		if(!valueDbInstancesDbInstance["PayType"].isNull())
			dbInstancesObject.payType = valueDbInstancesDbInstance["PayType"].asString();
		if(!valueDbInstancesDbInstance["ExpireTime"].isNull())
			dbInstancesObject.expireTime = valueDbInstancesDbInstance["ExpireTime"].asString();
		if(!valueDbInstancesDbInstance["RemainDays"].isNull())
			dbInstancesObject.remainDays = std::stoi(valueDbInstancesDbInstance["RemainDays"].asString());
		auto allReadOnlyInstancesNode = allDbInstancesNode["ReadOnlyInstances"]["ReadOnlyInstance"];
		for (auto allDbInstancesNodeReadOnlyInstancesReadOnlyInstance : allReadOnlyInstancesNode)
		{
			DbInstance::ReadOnlyInstance readOnlyInstancesObject;
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["InstanceName"].isNull())
				readOnlyInstancesObject.instanceName = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["InstanceName"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["DmInstanceId"].isNull())
				readOnlyInstancesObject.dmInstanceId = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["DmInstanceId"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["ConnectUrl"].isNull())
				readOnlyInstancesObject.connectUrl = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["ConnectUrl"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["Port"].isNull())
				readOnlyInstancesObject.port = std::stoi(allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["Port"].asString());
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["DBInstanceStatus"].isNull())
				readOnlyInstancesObject.dBInstanceStatus = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["DBInstanceStatus"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["DbInstType"].isNull())
				readOnlyInstancesObject.dbInstType = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["DbInstType"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["ReadWeight"].isNull())
				readOnlyInstancesObject.readWeight = std::stoi(allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["ReadWeight"].asString());
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["NetworkType"].isNull())
				readOnlyInstancesObject.networkType = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["NetworkType"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["Engine"].isNull())
				readOnlyInstancesObject.engine = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["Engine"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["EngineVersion"].isNull())
				readOnlyInstancesObject.engineVersion = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["EngineVersion"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["RdsInstType"].isNull())
				readOnlyInstancesObject.rdsInstType = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["RdsInstType"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["PayType"].isNull())
				readOnlyInstancesObject.payType = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["PayType"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["ExpireTime"].isNull())
				readOnlyInstancesObject.expireTime = allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["ExpireTime"].asString();
			if(!allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["RemainDays"].isNull())
				readOnlyInstancesObject.remainDays = std::stoi(allDbInstancesNodeReadOnlyInstancesReadOnlyInstance["RemainDays"].asString());
			dbInstancesObject.readOnlyInstances.push_back(readOnlyInstancesObject);
		}
		dbInstances_.push_back(dbInstancesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::string DescribeDrdsDbInstancesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDrdsDbInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeDrdsDbInstancesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDrdsDbInstancesResult::DbInstance> DescribeDrdsDbInstancesResult::getDbInstances()const
{
	return dbInstances_;
}

bool DescribeDrdsDbInstancesResult::getSuccess()const
{
	return success_;
}

