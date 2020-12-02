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

#include <alibabacloud/idrsservice/model/GetServiceConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

GetServiceConfigurationResult::GetServiceConfigurationResult() :
	ServiceResult()
{}

GetServiceConfigurationResult::GetServiceConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceConfigurationResult::~GetServiceConfigurationResult()
{}

void GetServiceConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ClientQueueSize"].isNull())
		data_.clientQueueSize = std::stoi(dataNode["ClientQueueSize"].asString());
	if(!dataNode["LiveRecordAll"].isNull())
		data_.liveRecordAll = dataNode["LiveRecordAll"].asString() == "true";
	if(!dataNode["LiveRecordEveryOne"].isNull())
		data_.liveRecordEveryOne = dataNode["LiveRecordEveryOne"].asString() == "true";
	if(!dataNode["LiveRecordLayout"].isNull())
		data_.liveRecordLayout = std::stoi(dataNode["LiveRecordLayout"].asString());
	if(!dataNode["LiveRecordTaskProfile"].isNull())
		data_.liveRecordTaskProfile = dataNode["LiveRecordTaskProfile"].asString();
	if(!dataNode["TaskItemQueueSize"].isNull())
		data_.taskItemQueueSize = std::stoi(dataNode["TaskItemQueueSize"].asString());
	if(!dataNode["LiveRecordMaxClient"].isNull())
		data_.liveRecordMaxClient = std::stoi(dataNode["LiveRecordMaxClient"].asString());
	if(!dataNode["LiveRecordVideoResolution"].isNull())
		data_.liveRecordVideoResolution = std::stoi(dataNode["LiveRecordVideoResolution"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetServiceConfigurationResult::getMessage()const
{
	return message_;
}

GetServiceConfigurationResult::Data GetServiceConfigurationResult::getData()const
{
	return data_;
}

std::string GetServiceConfigurationResult::getCode()const
{
	return code_;
}

