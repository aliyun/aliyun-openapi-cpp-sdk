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

#include <alibabacloud/emr/model/MetastoreDescribeDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreDescribeDatabaseResult::MetastoreDescribeDatabaseResult() :
	ServiceResult()
{}

MetastoreDescribeDatabaseResult::MetastoreDescribeDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreDescribeDatabaseResult::~MetastoreDescribeDatabaseResult()
{}

void MetastoreDescribeDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allParameters = value["Parameters"]["Parameter"];
	for (auto value : allParameters)
	{
		Parameter parametersObject;
		if(!value["Key"].isNull())
			parametersObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			parametersObject.value = value["Value"].asString();
		parameters_.push_back(parametersObject);
	}
	auto databaseNode = value["Database"];
	if(!databaseNode["Id"].isNull())
		database_.id = databaseNode["Id"].asString();
	if(!databaseNode["ClusterBizId"].isNull())
		database_.clusterBizId = databaseNode["ClusterBizId"].asString();
	if(!databaseNode["ClusterName"].isNull())
		database_.clusterName = databaseNode["ClusterName"].asString();
	if(!databaseNode["DatabaseName"].isNull())
		database_.databaseName = databaseNode["DatabaseName"].asString();
	if(!databaseNode["DatabaseType"].isNull())
		database_.databaseType = databaseNode["DatabaseType"].asString();
	if(!databaseNode["Owner"].isNull())
		database_.owner = databaseNode["Owner"].asString();
	if(!databaseNode["OwnerType"].isNull())
		database_.ownerType = databaseNode["OwnerType"].asString();
	if(!databaseNode["Location"].isNull())
		database_.location = databaseNode["Location"].asString();
	if(!databaseNode["Status"].isNull())
		database_.status = databaseNode["Status"].asString();
	if(!databaseNode["DatabaseParameters"].isNull())
		database_.databaseParameters = databaseNode["DatabaseParameters"].asString();
	if(!databaseNode["GmtCreate"].isNull())
		database_.gmtCreate = std::stol(databaseNode["GmtCreate"].asString());
	if(!databaseNode["GmtModified"].isNull())
		database_.gmtModified = std::stol(databaseNode["GmtModified"].asString());
	if(!databaseNode["DataSourceId"].isNull())
		database_.dataSourceId = databaseNode["DataSourceId"].asString();
	if(!databaseNode["DataSourceType"].isNull())
		database_.dataSourceType = databaseNode["DataSourceType"].asString();
	if(!databaseNode["LocationType"].isNull())
		database_.locationType = databaseNode["LocationType"].asString();
	if(!databaseNode["DatabaseComment"].isNull())
		database_.databaseComment = databaseNode["DatabaseComment"].asString();
	if(!databaseNode["ProjectId"].isNull())
		database_.projectId = databaseNode["ProjectId"].asString();
	if(!databaseNode["ProjectName"].isNull())
		database_.projectName = databaseNode["ProjectName"].asString();
	if(!value["DbName"].isNull())
		dbName_ = value["DbName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["LocationUri"].isNull())
		locationUri_ = value["LocationUri"].asString();

}

std::string MetastoreDescribeDatabaseResult::getLocationUri()const
{
	return locationUri_;
}

std::vector<MetastoreDescribeDatabaseResult::Parameter> MetastoreDescribeDatabaseResult::getParameters()const
{
	return parameters_;
}

std::string MetastoreDescribeDatabaseResult::getDescription()const
{
	return description_;
}

MetastoreDescribeDatabaseResult::Database MetastoreDescribeDatabaseResult::getDatabase()const
{
	return database_;
}

std::string MetastoreDescribeDatabaseResult::getDbName()const
{
	return dbName_;
}

