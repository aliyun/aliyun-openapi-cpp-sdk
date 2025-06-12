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

#include <alibabacloud/clickhouse/model/ModifyDBClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

ModifyDBClusterResult::ModifyDBClusterResult() :
	ServiceResult()
{}

ModifyDBClusterResult::ModifyDBClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyDBClusterResult::~ModifyDBClusterResult()
{}

void ModifyDBClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dBClusterNode = value["DBCluster"];
	if(!dBClusterNode["dbClusterId"].isNull())
		dBCluster_.dbClusterId = dBClusterNode["dbClusterId"].asString();
	if(!dBClusterNode["orderId"].isNull())
		dBCluster_.orderId = dBClusterNode["orderId"].asString();

}

ModifyDBClusterResult::DBCluster ModifyDBClusterResult::getDBCluster()const
{
	return dBCluster_;
}

