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

#include <alibabacloud/openanalytics-open/model/GetJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

GetJobDetailResult::GetJobDetailResult() :
	ServiceResult()
{}

GetJobDetailResult::GetJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobDetailResult::~GetJobDetailResult()
{}

void GetJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobDetailNode = value["JobDetail"];
	if(!jobDetailNode["JobId"].isNull())
		jobDetail_.jobId = jobDetailNode["JobId"].asString();
	if(!jobDetailNode["JobName"].isNull())
		jobDetail_.jobName = jobDetailNode["JobName"].asString();
	if(!jobDetailNode["Status"].isNull())
		jobDetail_.status = jobDetailNode["Status"].asString();
	if(!jobDetailNode["Detail"].isNull())
		jobDetail_.detail = jobDetailNode["Detail"].asString();
	if(!jobDetailNode["SparkUI"].isNull())
		jobDetail_.sparkUI = jobDetailNode["SparkUI"].asString();
	if(!jobDetailNode["CreateTime"].isNull())
		jobDetail_.createTime = jobDetailNode["CreateTime"].asString();
	if(!jobDetailNode["UpdateTime"].isNull())
		jobDetail_.updateTime = jobDetailNode["UpdateTime"].asString();
	if(!jobDetailNode["SubmitTime"].isNull())
		jobDetail_.submitTime = jobDetailNode["SubmitTime"].asString();
	if(!jobDetailNode["CreateTimeValue"].isNull())
		jobDetail_.createTimeValue = jobDetailNode["CreateTimeValue"].asString();
	if(!jobDetailNode["UpdateTimeValue"].isNull())
		jobDetail_.updateTimeValue = jobDetailNode["UpdateTimeValue"].asString();
	if(!jobDetailNode["SubmitTimeValue"].isNull())
		jobDetail_.submitTimeValue = jobDetailNode["SubmitTimeValue"].asString();
	if(!jobDetailNode["VcName"].isNull())
		jobDetail_.vcName = jobDetailNode["VcName"].asString();
	if(!jobDetailNode["DriverResourceSpec"].isNull())
		jobDetail_.driverResourceSpec = jobDetailNode["DriverResourceSpec"].asString();
	if(!jobDetailNode["ExecutorResourceSpec"].isNull())
		jobDetail_.executorResourceSpec = jobDetailNode["ExecutorResourceSpec"].asString();
	if(!jobDetailNode["ExecutorInstances"].isNull())
		jobDetail_.executorInstances = jobDetailNode["ExecutorInstances"].asString();

}

GetJobDetailResult::JobDetail GetJobDetailResult::getJobDetail()const
{
	return jobDetail_;
}

