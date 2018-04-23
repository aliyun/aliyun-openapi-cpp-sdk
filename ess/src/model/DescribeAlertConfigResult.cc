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

#include <alibabacloud/ess/model/DescribeAlertConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeAlertConfigResult::DescribeAlertConfigResult() :
	ServiceResult()
{}

DescribeAlertConfigResult::DescribeAlertConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertConfigResult::~DescribeAlertConfigResult()
{}

void DescribeAlertConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["SuccessConfig"].isNull())
		successConfig_ = std::stoi(value["SuccessConfig"].asString());
	if(!value["FailConfig"].isNull())
		failConfig_ = std::stoi(value["FailConfig"].asString());
	if(!value["RejectConfig"].isNull())
		rejectConfig_ = std::stoi(value["RejectConfig"].asString());

}

int DescribeAlertConfigResult::getFailConfig()const
{
	return failConfig_;
}

int DescribeAlertConfigResult::getRejectConfig()const
{
	return rejectConfig_;
}

int DescribeAlertConfigResult::getSuccessConfig()const
{
	return successConfig_;
}

