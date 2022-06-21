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

#include <alibabacloud/amptest/model/HuichengetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AmpTest;
using namespace AlibabaCloud::AmpTest::Model;

HuichengetResult::HuichengetResult() :
	ServiceResult()
{}

HuichengetResult::HuichengetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

HuichengetResult::~HuichengetResult()
{}

void HuichengetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId4"].isNull())
		instanceId4_ = value["InstanceId4"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Age"].isNull())
		age_ = value["Age"].asString();
	if(!value["Apple"].isNull())
		apple_ = value["Apple"].asString();
	if(!value["Five"].isNull())
		five_ = value["Five"].asString();
	if(!value["Six"].isNull())
		six_ = value["Six"].asString();
	if(!value["Seven"].isNull())
		seven_ = value["Seven"].asString();

}

std::string HuichengetResult::getApple()const
{
	return apple_;
}

std::string HuichengetResult::getFive()const
{
	return five_;
}

std::string HuichengetResult::getSix()const
{
	return six_;
}

std::string HuichengetResult::getMessage()const
{
	return message_;
}

std::string HuichengetResult::getInstanceId4()const
{
	return instanceId4_;
}

std::string HuichengetResult::getSeven()const
{
	return seven_;
}

std::string HuichengetResult::getCode()const
{
	return code_;
}

std::string HuichengetResult::getAge()const
{
	return age_;
}

