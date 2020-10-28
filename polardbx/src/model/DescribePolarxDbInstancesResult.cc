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

#include <alibabacloud/polardbx/model/DescribePolarxDbInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribePolarxDbInstancesResult::DescribePolarxDbInstancesResult() :
	ServiceResult()
{}

DescribePolarxDbInstancesResult::DescribePolarxDbInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePolarxDbInstancesResult::~DescribePolarxDbInstancesResult()
{}

void DescribePolarxDbInstancesResult::parse(const std::string &payload)
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
		if(!valueDbInstancesDbInstance["Description"].isNull())
			dbInstancesObject.description = valueDbInstancesDbInstance["Description"].asString();
		if(!valueDbInstancesDbInstance["PayType"].isNull())
			dbInstancesObject.payType = valueDbInstancesDbInstance["PayType"].asString();
		if(!valueDbInstancesDbInstance["CreateTime"].isNull())
			dbInstancesObject.createTime = valueDbInstancesDbInstance["CreateTime"].asString();
		if(!valueDbInstancesDbInstance["ExpireTime"].isNull())
			dbInstancesObject.expireTime = valueDbInstancesDbInstance["ExpireTime"].asString();
		if(!valueDbInstancesDbInstance["RegionId"].isNull())
			dbInstancesObject.regionId = valueDbInstancesDbInstance["RegionId"].asString();
		if(!valueDbInstancesDbInstance["ZoneId"].isNull())
			dbInstancesObject.zoneId = valueDbInstancesDbInstance["ZoneId"].asString();
		if(!valueDbInstancesDbInstance["Network"].isNull())
			dbInstancesObject.network = valueDbInstancesDbInstance["Network"].asString();
		if(!valueDbInstancesDbInstance["VPCId"].isNull())
			dbInstancesObject.vPCId = valueDbInstancesDbInstance["VPCId"].asString();
		if(!valueDbInstancesDbInstance["Engine"].isNull())
			dbInstancesObject.engine = valueDbInstancesDbInstance["Engine"].asString();
		if(!valueDbInstancesDbInstance["DBType"].isNull())
			dbInstancesObject.dBType = valueDbInstancesDbInstance["DBType"].asString();
		if(!valueDbInstancesDbInstance["DBVersion"].isNull())
			dbInstancesObject.dBVersion = valueDbInstancesDbInstance["DBVersion"].asString();
		if(!valueDbInstancesDbInstance["Status"].isNull())
			dbInstancesObject.status = valueDbInstancesDbInstance["Status"].asString();
		if(!valueDbInstancesDbInstance["StatusDesc"].isNull())
			dbInstancesObject.statusDesc = valueDbInstancesDbInstance["StatusDesc"].asString();
		if(!valueDbInstancesDbInstance["LockMode"].isNull())
			dbInstancesObject.lockMode = valueDbInstancesDbInstance["LockMode"].asString();
		if(!valueDbInstancesDbInstance["lockReason"].isNull())
			dbInstancesObject.lockReason = valueDbInstancesDbInstance["lockReason"].asString();
		if(!valueDbInstancesDbInstance["NodeCount"].isNull())
			dbInstancesObject.nodeCount = std::stoi(valueDbInstancesDbInstance["NodeCount"].asString());
		if(!valueDbInstancesDbInstance["NodeClass"].isNull())
			dbInstancesObject.nodeClass = valueDbInstancesDbInstance["NodeClass"].asString();
		if(!valueDbInstancesDbInstance["StorageUsed"].isNull())
			dbInstancesObject.storageUsed = std::stoi(valueDbInstancesDbInstance["StorageUsed"].asString());
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

std::string DescribePolarxDbInstancesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribePolarxDbInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribePolarxDbInstancesResult::getTotal()const
{
	return total_;
}

std::vector<DescribePolarxDbInstancesResult::DbInstance> DescribePolarxDbInstancesResult::getDbInstances()const
{
	return dbInstances_;
}

bool DescribePolarxDbInstancesResult::getSuccess()const
{
	return success_;
}

