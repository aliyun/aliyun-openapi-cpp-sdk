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

#include <alibabacloud/polardb/model/CancelCronJobPolicyServerlessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

CancelCronJobPolicyServerlessResult::CancelCronJobPolicyServerlessResult() :
	ServiceResult()
{}

CancelCronJobPolicyServerlessResult::CancelCronJobPolicyServerlessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CancelCronJobPolicyServerlessResult::~CancelCronJobPolicyServerlessResult()
{}

void CancelCronJobPolicyServerlessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string CancelCronJobPolicyServerlessResult::getStatus()const
{
	return status_;
}

std::string CancelCronJobPolicyServerlessResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string CancelCronJobPolicyServerlessResult::getRegionId()const
{
	return regionId_;
}

std::string CancelCronJobPolicyServerlessResult::getJobId()const
{
	return jobId_;
}

