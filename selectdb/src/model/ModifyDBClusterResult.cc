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

#include <alibabacloud/selectdb/model/ModifyDBClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

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
	auto dataNode = value["Data"];
	if(!dataNode["DBInstanceId"].isNull())
		data_.dBInstanceId = dataNode["DBInstanceId"].asString();
	if(!dataNode["DBClusterId"].isNull())
		data_.dBClusterId = dataNode["DBClusterId"].asString();
	if(!dataNode["OrderId"].isNull())
		data_.orderId = std::stol(dataNode["OrderId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();

}

std::string ModifyDBClusterResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

ModifyDBClusterResult::Data ModifyDBClusterResult::getData()const
{
	return data_;
}

