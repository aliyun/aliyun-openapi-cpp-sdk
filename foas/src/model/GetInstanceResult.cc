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

#include <alibabacloud/foas/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["Id"].isNull())
		instance_.id = std::stol(instanceNode["Id"].asString());
	if(!instanceNode["ProjectName"].isNull())
		instance_.projectName = instanceNode["ProjectName"].asString();
	if(!instanceNode["JobName"].isNull())
		instance_.jobName = instanceNode["JobName"].asString();
	if(!instanceNode["ActualState"].isNull())
		instance_.actualState = instanceNode["ActualState"].asString();
	if(!instanceNode["ExpectState"].isNull())
		instance_.expectState = instanceNode["ExpectState"].asString();
	if(!instanceNode["JobType"].isNull())
		instance_.jobType = instanceNode["JobType"].asString();
	if(!instanceNode["ApiType"].isNull())
		instance_.apiType = instanceNode["ApiType"].asString();
	if(!instanceNode["Code"].isNull())
		instance_.code = instanceNode["Code"].asString();
	if(!instanceNode["Properties"].isNull())
		instance_.properties = instanceNode["Properties"].asString();
	if(!instanceNode["Packages"].isNull())
		instance_.packages = instanceNode["Packages"].asString();
	if(!instanceNode["Starter"].isNull())
		instance_.starter = instanceNode["Starter"].asString();
	if(!instanceNode["StartTime"].isNull())
		instance_.startTime = std::stol(instanceNode["StartTime"].asString());
	if(!instanceNode["LastErrorTime"].isNull())
		instance_.lastErrorTime = std::stol(instanceNode["LastErrorTime"].asString());
	if(!instanceNode["LastErrorMessage"].isNull())
		instance_.lastErrorMessage = instanceNode["LastErrorMessage"].asString();
	if(!instanceNode["LastOperator"].isNull())
		instance_.lastOperator = instanceNode["LastOperator"].asString();
	if(!instanceNode["LastOperateTime"].isNull())
		instance_.lastOperateTime = std::stol(instanceNode["LastOperateTime"].asString());
	if(!instanceNode["PlanJson"].isNull())
		instance_.planJson = instanceNode["PlanJson"].asString();
	if(!instanceNode["EngineVersion"].isNull())
		instance_.engineVersion = instanceNode["EngineVersion"].asString();
	if(!instanceNode["EngineJobHandler"].isNull())
		instance_.engineJobHandler = instanceNode["EngineJobHandler"].asString();
	if(!instanceNode["InputDelay"].isNull())
		instance_.inputDelay = std::stol(instanceNode["InputDelay"].asString());
	if(!instanceNode["ClusterId"].isNull())
		instance_.clusterId = instanceNode["ClusterId"].asString();
	if(!instanceNode["QueueName"].isNull())
		instance_.queueName = instanceNode["QueueName"].asString();
	if(!instanceNode["EndTime"].isNull())
		instance_.endTime = std::stol(instanceNode["EndTime"].asString());
	if(!instanceNode["AutoScaleParams"].isNull())
		instance_.autoScaleParams = instanceNode["AutoScaleParams"].asString();
	if(!instanceNode["Priority"].isNull())
		instance_.priority = std::stoi(instanceNode["Priority"].asString());

}

GetInstanceResult::Instance GetInstanceResult::getInstance()const
{
	return instance_;
}

