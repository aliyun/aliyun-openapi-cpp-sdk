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

#include <alibabacloud/rds/model/AddBuDBInstanceRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

AddBuDBInstanceRelationResult::AddBuDBInstanceRelationResult() :
	ServiceResult()
{}

AddBuDBInstanceRelationResult::AddBuDBInstanceRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddBuDBInstanceRelationResult::~AddBuDBInstanceRelationResult()
{}

void AddBuDBInstanceRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["BusinessUnit"].isNull())
		businessUnit_ = value["BusinessUnit"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::string AddBuDBInstanceRelationResult::getBusinessUnit()const
{
	return businessUnit_;
}

std::string AddBuDBInstanceRelationResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

