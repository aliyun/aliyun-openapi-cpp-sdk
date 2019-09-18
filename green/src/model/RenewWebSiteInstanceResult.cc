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

#include <alibabacloud/green/model/RenewWebSiteInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

RenewWebSiteInstanceResult::RenewWebSiteInstanceResult() :
	ServiceResult()
{}

RenewWebSiteInstanceResult::RenewWebSiteInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RenewWebSiteInstanceResult::~RenewWebSiteInstanceResult()
{}

void RenewWebSiteInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceIds = value["InstanceIds"]["String"];
	for (const auto &item : allInstanceIds)
		instanceIds_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string RenewWebSiteInstanceResult::getMessage()const
{
	return message_;
}

std::string RenewWebSiteInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::vector<std::string> RenewWebSiteInstanceResult::getInstanceIds()const
{
	return instanceIds_;
}

std::string RenewWebSiteInstanceResult::getOrderId()const
{
	return orderId_;
}

std::string RenewWebSiteInstanceResult::getCode()const
{
	return code_;
}

