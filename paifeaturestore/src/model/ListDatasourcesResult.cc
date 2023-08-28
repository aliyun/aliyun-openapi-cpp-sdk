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

#include <alibabacloud/paifeaturestore/model/ListDatasourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListDatasourcesResult::ListDatasourcesResult() :
	ServiceResult()
{}

ListDatasourcesResult::ListDatasourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDatasourcesResult::~ListDatasourcesResult()
{}

void ListDatasourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatasourcesNode = value["Datasources"]["DatasourcesItem"];
	for (auto valueDatasourcesDatasourcesItem : allDatasourcesNode)
	{
		DatasourcesItem datasourcesObject;
		if(!valueDatasourcesDatasourcesItem["DatasourceId"].isNull())
			datasourcesObject.datasourceId = valueDatasourcesDatasourcesItem["DatasourceId"].asString();
		if(!valueDatasourcesDatasourcesItem["Name"].isNull())
			datasourcesObject.name = valueDatasourcesDatasourcesItem["Name"].asString();
		if(!valueDatasourcesDatasourcesItem["Type"].isNull())
			datasourcesObject.type = valueDatasourcesDatasourcesItem["Type"].asString();
		if(!valueDatasourcesDatasourcesItem["Uri"].isNull())
			datasourcesObject.uri = valueDatasourcesDatasourcesItem["Uri"].asString();
		if(!valueDatasourcesDatasourcesItem["Config"].isNull())
			datasourcesObject.config = valueDatasourcesDatasourcesItem["Config"].asString();
		if(!valueDatasourcesDatasourcesItem["GmtCreateTime"].isNull())
			datasourcesObject.gmtCreateTime = valueDatasourcesDatasourcesItem["GmtCreateTime"].asString();
		if(!valueDatasourcesDatasourcesItem["GmtModifiedTime"].isNull())
			datasourcesObject.gmtModifiedTime = valueDatasourcesDatasourcesItem["GmtModifiedTime"].asString();
		if(!valueDatasourcesDatasourcesItem["WorkspaceId"].isNull())
			datasourcesObject.workspaceId = valueDatasourcesDatasourcesItem["WorkspaceId"].asString();
		datasources_.push_back(datasourcesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListDatasourcesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListDatasourcesResult::DatasourcesItem> ListDatasourcesResult::getDatasources()const
{
	return datasources_;
}

