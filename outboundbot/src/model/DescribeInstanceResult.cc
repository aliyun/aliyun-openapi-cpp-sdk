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

#include <alibabacloud/outboundbot/model/DescribeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeInstanceResult::DescribeInstanceResult() :
	ServiceResult()
{}

DescribeInstanceResult::DescribeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceResult::~DescribeInstanceResult()
{}

void DescribeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["CallCenterInstanceId"].isNull())
		instance_.callCenterInstanceId = instanceNode["CallCenterInstanceId"].asString();
	if(!instanceNode["CreationTime"].isNull())
		instance_.creationTime = std::stol(instanceNode["CreationTime"].asString());
	if(!instanceNode["InstanceDescription"].isNull())
		instance_.instanceDescription = instanceNode["InstanceDescription"].asString();
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["InstanceName"].isNull())
		instance_.instanceName = instanceNode["InstanceName"].asString();
	if(!instanceNode["MaxConcurrentConversation"].isNull())
		instance_.maxConcurrentConversation = std::stoi(instanceNode["MaxConcurrentConversation"].asString());
	if(!instanceNode["Owner"].isNull())
		instance_.owner = instanceNode["Owner"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeInstanceResult::getMessage()const
{
	return message_;
}

DescribeInstanceResult::Instance DescribeInstanceResult::getInstance()const
{
	return instance_;
}

int DescribeInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeInstanceResult::getCode()const
{
	return code_;
}

bool DescribeInstanceResult::getSuccess()const
{
	return success_;
}

