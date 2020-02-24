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

#include <alibabacloud/outboundbot/model/CreateInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

CreateInstanceResult::CreateInstanceResult() :
	ServiceResult()
{}

CreateInstanceResult::CreateInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateInstanceResult::~CreateInstanceResult()
{}

void CreateInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["InstanceName"].isNull())
		instance_.instanceName = instanceNode["InstanceName"].asString();
	if(!instanceNode["InstanceDescription"].isNull())
		instance_.instanceDescription = instanceNode["InstanceDescription"].asString();
	if(!instanceNode["MaxConcurrentConversation"].isNull())
		instance_.maxConcurrentConversation = std::stoi(instanceNode["MaxConcurrentConversation"].asString());
	if(!instanceNode["Owner"].isNull())
		instance_.owner = instanceNode["Owner"].asString();
	if(!instanceNode["CreationTime"].isNull())
		instance_.creationTime = std::stol(instanceNode["CreationTime"].asString());
	if(!instanceNode["CallCenterInstanceId"].isNull())
		instance_.callCenterInstanceId = instanceNode["CallCenterInstanceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateInstanceResult::getMessage()const
{
	return message_;
}

CreateInstanceResult::Instance CreateInstanceResult::getInstance()const
{
	return instance_;
}

int CreateInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateInstanceResult::getCode()const
{
	return code_;
}

bool CreateInstanceResult::getSuccess()const
{
	return success_;
}

