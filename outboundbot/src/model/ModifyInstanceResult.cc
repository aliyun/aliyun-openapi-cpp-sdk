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

#include <alibabacloud/outboundbot/model/ModifyInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ModifyInstanceResult::ModifyInstanceResult() :
	ServiceResult()
{}

ModifyInstanceResult::ModifyInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyInstanceResult::~ModifyInstanceResult()
{}

void ModifyInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["CreationTime"].isNull())
		instance_.creationTime = std::stol(instanceNode["CreationTime"].asString());
	if(!instanceNode["Owner"].isNull())
		instance_.owner = instanceNode["Owner"].asString();
	if(!instanceNode["CallCenterInstanceId"].isNull())
		instance_.callCenterInstanceId = instanceNode["CallCenterInstanceId"].asString();
	if(!instanceNode["NluServiceType"].isNull())
		instance_.nluServiceType = instanceNode["NluServiceType"].asString();
	if(!instanceNode["InstanceName"].isNull())
		instance_.instanceName = instanceNode["InstanceName"].asString();
	if(!instanceNode["CreatorName"].isNull())
		instance_.creatorName = instanceNode["CreatorName"].asString();
	if(!instanceNode["MaxConcurrentConversation"].isNull())
		instance_.maxConcurrentConversation = std::stoi(instanceNode["MaxConcurrentConversation"].asString());
	if(!instanceNode["OwnerName"].isNull())
		instance_.ownerName = instanceNode["OwnerName"].asString();
	if(!instanceNode["CreatorId"].isNull())
		instance_.creatorId = std::stol(instanceNode["CreatorId"].asString());
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["InstanceDescription"].isNull())
		instance_.instanceDescription = instanceNode["InstanceDescription"].asString();
	auto nluProfileNode = instanceNode["NluProfile"];
	if(!nluProfileNode["AccessKey"].isNull())
		instance_.nluProfile.accessKey = nluProfileNode["AccessKey"].asString();
	if(!nluProfileNode["SecretKey"].isNull())
		instance_.nluProfile.secretKey = nluProfileNode["SecretKey"].asString();
	if(!nluProfileNode["Endpoint"].isNull())
		instance_.nluProfile.endpoint = nluProfileNode["Endpoint"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ModifyInstanceResult::getMessage()const
{
	return message_;
}

ModifyInstanceResult::Instance ModifyInstanceResult::getInstance()const
{
	return instance_;
}

int ModifyInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ModifyInstanceResult::getCode()const
{
	return code_;
}

bool ModifyInstanceResult::getSuccess()const
{
	return success_;
}

