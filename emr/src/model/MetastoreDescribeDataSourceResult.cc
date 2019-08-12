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

#include <alibabacloud/emr/model/MetastoreDescribeDataSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreDescribeDataSourceResult::MetastoreDescribeDataSourceResult() :
	ServiceResult()
{}

MetastoreDescribeDataSourceResult::MetastoreDescribeDataSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreDescribeDataSourceResult::~MetastoreDescribeDataSourceResult()
{}

void MetastoreDescribeDataSourceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataSourceNode = value["DataSource"];
	if(!dataSourceNode["Id"].isNull())
		dataSource_.id = dataSourceNode["Id"].asString();
	if(!dataSourceNode["Name"].isNull())
		dataSource_.name = dataSourceNode["Name"].asString();
	if(!dataSourceNode["SourceType"].isNull())
		dataSource_.sourceType = dataSourceNode["SourceType"].asString();
	if(!dataSourceNode["Description"].isNull())
		dataSource_.description = dataSourceNode["Description"].asString();
	if(!dataSourceNode["ConnectionInfo"].isNull())
		dataSource_.connectionInfo = dataSourceNode["ConnectionInfo"].asString();
	if(!dataSourceNode["ClusterBizId"].isNull())
		dataSource_.clusterBizId = dataSourceNode["ClusterBizId"].asString();
	if(!dataSourceNode["ClusterName"].isNull())
		dataSource_.clusterName = dataSourceNode["ClusterName"].asString();
	if(!dataSourceNode["UserId"].isNull())
		dataSource_.userId = dataSourceNode["UserId"].asString();
	if(!dataSourceNode["GmtCreate"].isNull())
		dataSource_.gmtCreate = std::stol(dataSourceNode["GmtCreate"].asString());
	if(!dataSourceNode["GmtModified"].isNull())
		dataSource_.gmtModified = std::stol(dataSourceNode["GmtModified"].asString());
	if(!dataSourceNode["Capacity"].isNull())
		dataSource_.capacity = std::stol(dataSourceNode["Capacity"].asString());
	if(!dataSourceNode["UsedSize"].isNull())
		dataSource_.usedSize = std::stol(dataSourceNode["UsedSize"].asString());
	auto allConfigList = value["ConfigList"]["Config"];
	for (auto value : allConfigList)
	{
		DataSource::Config configObject;
		if(!value["ConfigName"].isNull())
			configObject.configName = value["ConfigName"].asString();
		if(!value["Value"].isNull())
			configObject.value = value["Value"].asString();
		dataSource_.configList.push_back(configObject);
	}

}

MetastoreDescribeDataSourceResult::DataSource MetastoreDescribeDataSourceResult::getDataSource()const
{
	return dataSource_;
}

