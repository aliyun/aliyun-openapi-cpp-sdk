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

#include <alibabacloud/eas/model/DescribeBenchmarkTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeBenchmarkTaskResult::DescribeBenchmarkTaskResult() :
	ServiceResult()
{}

DescribeBenchmarkTaskResult::DescribeBenchmarkTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBenchmarkTaskResult::~DescribeBenchmarkTaskResult()
{}

void DescribeBenchmarkTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TaskName"].isNull())
		taskName_ = value["TaskName"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["Token"].isNull())
		token_ = value["Token"].asString();
	if(!value["CallerUid"].isNull())
		callerUid_ = value["CallerUid"].asString();
	if(!value["ParentUid"].isNull())
		parentUid_ = value["ParentUid"].asString();
	if(!value["DesiredAgent"].isNull())
		desiredAgent_ = std::stol(value["DesiredAgent"].asString());
	if(!value["AvailableAgent"].isNull())
		availableAgent_ = std::stol(value["AvailableAgent"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Reason"].isNull())
		reason_ = value["Reason"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Endpoint"].isNull())
		endpoint_ = value["Endpoint"].asString();

}

std::string DescribeBenchmarkTaskResult::getStatus()const
{
	return status_;
}

long DescribeBenchmarkTaskResult::getAvailableAgent()const
{
	return availableAgent_;
}

std::string DescribeBenchmarkTaskResult::getTaskId()const
{
	return taskId_;
}

std::string DescribeBenchmarkTaskResult::getMessage()const
{
	return message_;
}

std::string DescribeBenchmarkTaskResult::getEndpoint()const
{
	return endpoint_;
}

std::string DescribeBenchmarkTaskResult::getTaskName()const
{
	return taskName_;
}

std::string DescribeBenchmarkTaskResult::getServiceName()const
{
	return serviceName_;
}

long DescribeBenchmarkTaskResult::getDesiredAgent()const
{
	return desiredAgent_;
}

std::string DescribeBenchmarkTaskResult::getToken()const
{
	return token_;
}

std::string DescribeBenchmarkTaskResult::getCallerUid()const
{
	return callerUid_;
}

std::string DescribeBenchmarkTaskResult::getParentUid()const
{
	return parentUid_;
}

std::string DescribeBenchmarkTaskResult::getReason()const
{
	return reason_;
}

