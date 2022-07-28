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

#include <alibabacloud/eas/model/DescribeResourceLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeResourceLogResult::DescribeResourceLogResult() :
	ServiceResult()
{}

DescribeResourceLogResult::DescribeResourceLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceLogResult::~DescribeResourceLogResult()
{}

void DescribeResourceLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["LogStore"].isNull())
		logStore_ = value["LogStore"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeResourceLogResult::getStatus()const
{
	return status_;
}

std::string DescribeResourceLogResult::getMessage()const
{
	return message_;
}

std::string DescribeResourceLogResult::getProjectName()const
{
	return projectName_;
}

std::string DescribeResourceLogResult::getLogStore()const
{
	return logStore_;
}

