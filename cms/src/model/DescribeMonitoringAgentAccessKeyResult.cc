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

#include <alibabacloud/cms/model/DescribeMonitoringAgentAccessKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitoringAgentAccessKeyResult::DescribeMonitoringAgentAccessKeyResult() :
	ServiceResult()
{}

DescribeMonitoringAgentAccessKeyResult::DescribeMonitoringAgentAccessKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitoringAgentAccessKeyResult::~DescribeMonitoringAgentAccessKeyResult()
{}

void DescribeMonitoringAgentAccessKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AccessKey"].isNull())
		accessKey_ = value["AccessKey"].asString();
	if(!value["SecretKey"].isNull())
		secretKey_ = value["SecretKey"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeMonitoringAgentAccessKeyResult::getSecretKey()const
{
	return secretKey_;
}

std::string DescribeMonitoringAgentAccessKeyResult::getMessage()const
{
	return message_;
}

std::string DescribeMonitoringAgentAccessKeyResult::getAccessKey()const
{
	return accessKey_;
}

int DescribeMonitoringAgentAccessKeyResult::getCode()const
{
	return code_;
}

bool DescribeMonitoringAgentAccessKeyResult::getSuccess()const
{
	return success_;
}

