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

#include <alibabacloud/arms/model/CreateEnvServiceMonitorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateEnvServiceMonitorResult::CreateEnvServiceMonitorResult() :
	ServiceResult()
{}

CreateEnvServiceMonitorResult::CreateEnvServiceMonitorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateEnvServiceMonitorResult::~CreateEnvServiceMonitorResult()
{}

void CreateEnvServiceMonitorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MatchedMsg"].isNull())
		data_.matchedMsg = dataNode["MatchedMsg"].asString();
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["ServiceMonitorName"].isNull())
		data_.serviceMonitorName = dataNode["ServiceMonitorName"].asString();
	if(!dataNode["MatchedTargetCount"].isNull())
		data_.matchedTargetCount = std::stoi(dataNode["MatchedTargetCount"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateEnvServiceMonitorResult::getMessage()const
{
	return message_;
}

CreateEnvServiceMonitorResult::Data CreateEnvServiceMonitorResult::getData()const
{
	return data_;
}

int CreateEnvServiceMonitorResult::getCode()const
{
	return code_;
}

