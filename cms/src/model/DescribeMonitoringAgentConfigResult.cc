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

#include <alibabacloud/cms/model/DescribeMonitoringAgentConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitoringAgentConfigResult::DescribeMonitoringAgentConfigResult() :
	ServiceResult()
{}

DescribeMonitoringAgentConfigResult::DescribeMonitoringAgentConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitoringAgentConfigResult::~DescribeMonitoringAgentConfigResult()
{}

void DescribeMonitoringAgentConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EnableActiveAlert"].isNull())
		enableActiveAlert_ = value["EnableActiveAlert"].asString();
	if(!value["AutoInstall"].isNull())
		autoInstall_ = value["AutoInstall"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["EnableInstallAgentNewECS"].isNull())
		enableInstallAgentNewECS_ = value["EnableInstallAgentNewECS"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeMonitoringAgentConfigResult::getEnableActiveAlert()const
{
	return enableActiveAlert_;
}

bool DescribeMonitoringAgentConfigResult::getAutoInstall()const
{
	return autoInstall_;
}

bool DescribeMonitoringAgentConfigResult::getEnableInstallAgentNewECS()const
{
	return enableInstallAgentNewECS_;
}

std::string DescribeMonitoringAgentConfigResult::getMessage()const
{
	return message_;
}

std::string DescribeMonitoringAgentConfigResult::getCode()const
{
	return code_;
}

bool DescribeMonitoringAgentConfigResult::getSuccess()const
{
	return success_;
}

