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

#include <alibabacloud/ehpc/model/GetJobLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetJobLogResult::GetJobLogResult() :
	ServiceResult()
{}

GetJobLogResult::GetJobLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobLogResult::~GetJobLogResult()
{}

void GetJobLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["OutputLog"].isNull())
		outputLog_ = value["OutputLog"].asString();
	if(!value["ErrorLog"].isNull())
		errorLog_ = value["ErrorLog"].asString();

}

std::string GetJobLogResult::getOutputLog()const
{
	return outputLog_;
}

std::string GetJobLogResult::getErrorLog()const
{
	return errorLog_;
}

std::string GetJobLogResult::getJobId()const
{
	return jobId_;
}

