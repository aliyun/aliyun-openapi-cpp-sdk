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

#include <alibabacloud/dms-enterprise/model/GetSparkJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetSparkJobDetailResult::GetSparkJobDetailResult() :
	ServiceResult()
{}

GetSparkJobDetailResult::GetSparkJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSparkJobDetailResult::~GetSparkJobDetailResult()
{}

void GetSparkJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobDetailNode = value["JobDetail"];
	if(!jobDetailNode["JobId"].isNull())
		jobDetail_.jobId = jobDetailNode["JobId"].asString();
	if(!jobDetailNode["Name"].isNull())
		jobDetail_.name = jobDetailNode["Name"].asString();
	if(!jobDetailNode["Status"].isNull())
		jobDetail_.status = jobDetailNode["Status"].asString();
	if(!jobDetailNode["MainClass"].isNull())
		jobDetail_.mainClass = jobDetailNode["MainClass"].asString();
	if(!jobDetailNode["MainFile"].isNull())
		jobDetail_.mainFile = jobDetailNode["MainFile"].asString();
	if(!jobDetailNode["Arguments"].isNull())
		jobDetail_.arguments = jobDetailNode["Arguments"].asString();
	if(!jobDetailNode["Configuration"].isNull())
		jobDetail_.configuration = jobDetailNode["Configuration"].asString();
	if(!jobDetailNode["SubmitTime"].isNull())
		jobDetail_.submitTime = jobDetailNode["SubmitTime"].asString();
	if(!jobDetailNode["BeginTime"].isNull())
		jobDetail_.beginTime = jobDetailNode["BeginTime"].asString();
	if(!jobDetailNode["EndTime"].isNull())
		jobDetail_.endTime = jobDetailNode["EndTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetSparkJobDetailResult::JobDetail GetSparkJobDetailResult::getJobDetail()const
{
	return jobDetail_;
}

std::string GetSparkJobDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetSparkJobDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetSparkJobDetailResult::getSuccess()const
{
	return success_;
}

