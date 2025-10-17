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

#include <alibabacloud/polardb/model/CreateCronJobPolicyServerlessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

CreateCronJobPolicyServerlessResult::CreateCronJobPolicyServerlessResult() :
	ServiceResult()
{}

CreateCronJobPolicyServerlessResult::CreateCronJobPolicyServerlessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCronJobPolicyServerlessResult::~CreateCronJobPolicyServerlessResult()
{}

void CreateCronJobPolicyServerlessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Args"].isNull())
		args_ = value["Args"].asString();
	if(!value["CronExpression"].isNull())
		cronExpression_ = value["CronExpression"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string CreateCronJobPolicyServerlessResult::getStatus()const
{
	return status_;
}

std::string CreateCronJobPolicyServerlessResult::getArgs()const
{
	return args_;
}

std::string CreateCronJobPolicyServerlessResult::getAction()const
{
	return action_;
}

std::string CreateCronJobPolicyServerlessResult::getEndTime()const
{
	return endTime_;
}

std::string CreateCronJobPolicyServerlessResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string CreateCronJobPolicyServerlessResult::getStartTime()const
{
	return startTime_;
}

std::string CreateCronJobPolicyServerlessResult::getRegionId()const
{
	return regionId_;
}

std::string CreateCronJobPolicyServerlessResult::getCronExpression()const
{
	return cronExpression_;
}

std::string CreateCronJobPolicyServerlessResult::getJobId()const
{
	return jobId_;
}

