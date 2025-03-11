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
		if(!valueDbInstancesDbInstance["ExpireTime"].isNull())
			dbInstancesObject.expireTime = valueDbInstancesDbInstance["ExpireTime"].asString();
		if(!valueDbInstancesDbInstance["PayType"].isNull())
			dbInstancesObject.payType = valueDbInstancesDbInstance["PayType"].asString();
		if(!valueDbInstancesDbInstance["DBInstanceStatus"].isNull())
			dbInstancesObject.dBInstanceStatus = valueDbInstancesDbInstance["DBInstanceStatus"].asString();
		if(!valueDbInstancesDbInstance["NetworkType"].isNull())
			dbInstancesObject.networkType = valueDbInstancesDbInstance["NetworkType"].asString();
		if(!valueDbInstancesDbInstance["Port"].isNull())
			dbInstancesObject.port = std::stoi(valueDbInstancesDbInstance["Port"].asString());
		if(!valueDbInstancesDbInstance["EngineVersion"].isNull())
			dbInstancesObject.engineVersion = valueDbInstancesDbInstance["EngineVersion"].asString();
		if(!valueDbInstancesDbInstance["DmInstanceId"].isNull())
			dbInstancesObject.dmInstanceId = valueDbInstancesDbInstance["DmInstanceId"].asString();
		if(!valueDbInstancesDbInstance["ConnectUrl"].isNull())
			dbInstancesObject.connectUrl = valueDbInstancesDbInstance["ConnectUrl"].asString();
		if(!valueDbInstancesDbInstance["ReadWeight"].isNull())
			dbInstancesObject.readWeight = std::stoi(valueDbInstancesDbInstance["ReadWeight"].asString());
		if(!valueDbInstancesDbInstance["RdsInstType"].isNull())
			dbInstancesObject.rdsInstType = valueDbInstancesDbInstance["RdsInstType"].asString();
		if(!valueDbInstancesDbInstance["RemainDays"].isNull())
			dbInstancesObject.remainDays = std::stoi(valueDbInstancesDbInstance["RemainDays"].asString());
		if(!valueDbInstancesDbInstance["DBInstanceId"].isNull())
			dbInstancesObject.dBInstanceId = valueDbInstancesDbInstance["DBInstanceId"].asString();
		if(!valueDbInstancesDbInstance["DbInstType"].isNull())
			dbInstancesObject.dbInstType = valueDbInstancesDbInstance["DbInstType"].asString();
		if(!valueDbInstancesDbInstance["Engine"].isNull())
			dbInstancesObject.engine = valueDbInstancesDbInstance["Engine"].asString();
		auto allReadOnlyInstancesNode = valueDbInstancesDbInstance["ReadOnlyInstances"]["ReadOnlyInstance"];
		for (auto valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance : allReadOnlyInstancesNode)
		{
			DbInstance::ReadOnlyInstance readOnlyInstancesObject;
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["ExpireTime"].isNull())
				readOnlyInstancesObject.expireTime = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["ExpireTime"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["PayType"].isNull())
				readOnlyInstancesObject.payType = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["PayType"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["DBInstanceStatus"].isNull())
				readOnlyInstancesObject.dBInstanceStatus = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["DBInstanceStatus"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["NetworkType"].isNull())
				readOnlyInstancesObject.networkType = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["NetworkType"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["Port"].isNull())
				readOnlyInstancesObject.port = std::stoi(valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["Port"].asString());
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["EngineVersion"].isNull())
				readOnlyInstancesObject.engineVersion = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["EngineVersion"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["DmInstanceId"].isNull())
				readOnlyInstancesObject.dmInstanceId = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["DmInstanceId"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["ConnectUrl"].isNull())
				readOnlyInstancesObject.connectUrl = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["ConnectUrl"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["ReadWeight"].isNull())
				readOnlyInstancesObject.readWeight = std::stoi(valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["ReadWeight"].asString());
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["RdsInstType"].isNull())
				readOnlyInstancesObject.rdsInstType = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["RdsInstType"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["InstanceName"].isNull())
				readOnlyInstancesObject.instanceName = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["InstanceName"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["RemainDays"].isNull())
				readOnlyInstancesObject.remainDays = std::stoi(valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["RemainDays"].asString());
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["DbInstType"].isNull())
				readOnlyInstancesObject.dbInstType = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["DbInstType"].asString();
			if(!valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["Engine"].isNull())
				readOnlyInstancesObject.engine = valueDbInstancesDbInstanceReadOnlyInstancesReadOnlyInstance["Engine"].asString();
			dbInstancesObject.readOnlyInstances.push_back(readOnlyInstancesObject);
		}
		dbInstances_.push_back(dbInstancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

