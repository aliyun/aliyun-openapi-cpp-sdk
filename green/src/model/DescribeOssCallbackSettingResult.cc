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

#include <alibabacloud/green/model/DescribeOssCallbackSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOssCallbackSettingResult::DescribeOssCallbackSettingResult() :
	ServiceResult()
{}

DescribeOssCallbackSettingResult::DescribeOssCallbackSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssCallbackSettingResult::~DescribeOssCallbackSettingResult()
{}

void DescribeOssCallbackSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScanCallbackSuggestions = value["ScanCallbackSuggestions"]["ScanCallbackSuggestion"];
	for (const auto &item : allScanCallbackSuggestions)
		scanCallbackSuggestions_.push_back(item.asString());
	auto allServiceModules = value["ServiceModules"]["ServiceModule"];
	for (const auto &item : allServiceModules)
		serviceModules_.push_back(item.asString());
	if(!value["CallbackUrl"].isNull())
		callbackUrl_ = value["CallbackUrl"].asString();
	if(!value["ScanCallback"].isNull())
		scanCallback_ = value["ScanCallback"].asString() == "true";
	if(!value["AuditCallback"].isNull())
		auditCallback_ = value["AuditCallback"].asString() == "true";
	if(!value["CallbackSeed"].isNull())
		callbackSeed_ = value["CallbackSeed"].asString();

}

std::string DescribeOssCallbackSettingResult::getCallbackUrl()const
{
	return callbackUrl_;
}

std::vector<std::string> DescribeOssCallbackSettingResult::getScanCallbackSuggestions()const
{
	return scanCallbackSuggestions_;
}

bool DescribeOssCallbackSettingResult::getAuditCallback()const
{
	return auditCallback_;
}

bool DescribeOssCallbackSettingResult::getScanCallback()const
{
	return scanCallback_;
}

std::vector<std::string> DescribeOssCallbackSettingResult::getServiceModules()const
{
	return serviceModules_;
}

std::string DescribeOssCallbackSettingResult::getCallbackSeed()const
{
	return callbackSeed_;
}

