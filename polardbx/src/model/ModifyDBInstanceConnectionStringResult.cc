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

#include <alibabacloud/polardbx/model/ModifyDBInstanceConnectionStringResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

ModifyDBInstanceConnectionStringResult::ModifyDBInstanceConnectionStringResult() :
	ServiceResult()
{}

ModifyDBInstanceConnectionStringResult::ModifyDBInstanceConnectionStringResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyDBInstanceConnectionStringResult::~ModifyDBInstanceConnectionStringResult()
{}

void ModifyDBInstanceConnectionStringResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ConnectionString"].isNull())
		data_.connectionString = dataNode["ConnectionString"].asString();
	if(!dataNode["DBInstanceName"].isNull())
		data_.dBInstanceName = dataNode["DBInstanceName"].asString();
	if(!dataNode["DBInstanceNetType"].isNull())
		data_.dBInstanceNetType = dataNode["DBInstanceNetType"].asString();
	if(!dataNode["Port"].isNull())
		data_.port = dataNode["Port"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());

}

std::string ModifyDBInstanceConnectionStringResult::getMessage()const
{
	return message_;
}

ModifyDBInstanceConnectionStringResult::Data ModifyDBInstanceConnectionStringResult::getData()const
{
	return data_;
}

long ModifyDBInstanceConnectionStringResult::getCode()const
{
	return code_;
}

