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

#include <alibabacloud/gpdb/model/DeleteDBInstancePlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DeleteDBInstancePlanResult::DeleteDBInstancePlanResult() :
	ServiceResult()
{}

DeleteDBInstancePlanResult::DeleteDBInstancePlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteDBInstancePlanResult::~DeleteDBInstancePlanResult()
{}

void DeleteDBInstancePlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PlanId"].isNull())
		planId_ = value["PlanId"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();

}

std::string DeleteDBInstancePlanResult::getStatus()const
{
	return status_;
}

std::string DeleteDBInstancePlanResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DeleteDBInstancePlanResult::getPlanId()const
{
	return planId_;
}

std::string DeleteDBInstancePlanResult::getErrorMessage()const
{
	return errorMessage_;
}

