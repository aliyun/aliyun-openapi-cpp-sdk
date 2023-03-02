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

#include <alibabacloud/swas-open/model/DescribeDatabaseInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeDatabaseInstancesResult::DescribeDatabaseInstancesResult() :
	ServiceResult()
{}

DescribeDatabaseInstancesResult::DescribeDatabaseInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatabaseInstancesResult::~DescribeDatabaseInstancesResult()
{}

void DescribeDatabaseInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatabaseInstancesNode = value["DatabaseInstances"]["DatabaseInstance"];
	for (auto valueDatabaseInstancesDatabaseInstance : allDatabaseInstancesNode)
	{
		DatabaseInstance databaseInstancesObject;
		if(!valueDatabaseInstancesDatabaseInstance["RegionId"].isNull())
			databaseInstancesObject.regionId = valueDatabaseInstancesDatabaseInstance["RegionId"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["DatabaseInstanceId"].isNull())
			databaseInstancesObject.databaseInstanceId = valueDatabaseInstancesDatabaseInstance["DatabaseInstanceId"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["DatabaseInstanceName"].isNull())
			databaseInstancesObject.databaseInstanceName = valueDatabaseInstancesDatabaseInstance["DatabaseInstanceName"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["DatabaseInstanceEdition"].isNull())
			databaseInstancesObject.databaseInstanceEdition = valueDatabaseInstancesDatabaseInstance["DatabaseInstanceEdition"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["DatabaseVersion"].isNull())
			databaseInstancesObject.databaseVersion = valueDatabaseInstancesDatabaseInstance["DatabaseVersion"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["Cpu"].isNull())
			databaseInstancesObject.cpu = valueDatabaseInstancesDatabaseInstance["Cpu"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["Memory"].isNull())
			databaseInstancesObject.memory = valueDatabaseInstancesDatabaseInstance["Memory"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["Storage"].isNull())
			databaseInstancesObject.storage = std::stoi(valueDatabaseInstancesDatabaseInstance["Storage"].asString());
		if(!valueDatabaseInstancesDatabaseInstance["PrivateConnection"].isNull())
			databaseInstancesObject.privateConnection = valueDatabaseInstancesDatabaseInstance["PrivateConnection"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["PublicConnection"].isNull())
			databaseInstancesObject.publicConnection = valueDatabaseInstancesDatabaseInstance["PublicConnection"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["DatabaseInstanceStatus"].isNull())
			databaseInstancesObject.databaseInstanceStatus = valueDatabaseInstancesDatabaseInstance["DatabaseInstanceStatus"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["BusinessStatus"].isNull())
			databaseInstancesObject.businessStatus = valueDatabaseInstancesDatabaseInstance["BusinessStatus"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["CreationTime"].isNull())
			databaseInstancesObject.creationTime = valueDatabaseInstancesDatabaseInstance["CreationTime"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["ExpiredTime"].isNull())
			databaseInstancesObject.expiredTime = valueDatabaseInstancesDatabaseInstance["ExpiredTime"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["ChargeType"].isNull())
			databaseInstancesObject.chargeType = valueDatabaseInstancesDatabaseInstance["ChargeType"].asString();
		if(!valueDatabaseInstancesDatabaseInstance["SuperAccountName"].isNull())
			databaseInstancesObject.superAccountName = valueDatabaseInstancesDatabaseInstance["SuperAccountName"].asString();
		databaseInstances_.push_back(databaseInstancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDatabaseInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDatabaseInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDatabaseInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDatabaseInstancesResult::DatabaseInstance> DescribeDatabaseInstancesResult::getDatabaseInstances()const
{
	return databaseInstances_;
}

