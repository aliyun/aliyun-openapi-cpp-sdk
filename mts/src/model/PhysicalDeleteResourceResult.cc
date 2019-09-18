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

#include <alibabacloud/mts/model/PhysicalDeleteResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

PhysicalDeleteResourceResult::PhysicalDeleteResourceResult() :
	ServiceResult()
{}

PhysicalDeleteResourceResult::PhysicalDeleteResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PhysicalDeleteResourceResult::~PhysicalDeleteResourceResult()
{}

void PhysicalDeleteResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Interrupt"].isNull())
		interrupt_ = value["Interrupt"].asString() == "true";
	if(!value["Invoker"].isNull())
		invoker_ = value["Invoker"].asString();
	if(!value["Pk"].isNull())
		pk_ = value["Pk"].asString();
	if(!value["Bid"].isNull())
		bid_ = value["Bid"].asString();
	if(!value["Hid"].isNull())
		hid_ = std::stol(value["Hid"].asString());
	if(!value["Country"].isNull())
		country_ = value["Country"].asString();
	if(!value["TaskIdentifier"].isNull())
		taskIdentifier_ = value["TaskIdentifier"].asString();
	if(!value["TaskExtraData"].isNull())
		taskExtraData_ = value["TaskExtraData"].asString();
	if(!value["GmtWakeup"].isNull())
		gmtWakeup_ = value["GmtWakeup"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string PhysicalDeleteResourceResult::getGmtWakeup()const
{
	return gmtWakeup_;
}

long PhysicalDeleteResourceResult::getHid()const
{
	return hid_;
}

std::string PhysicalDeleteResourceResult::getInvoker()const
{
	return invoker_;
}

std::string PhysicalDeleteResourceResult::getTaskIdentifier()const
{
	return taskIdentifier_;
}

std::string PhysicalDeleteResourceResult::getMessage()const
{
	return message_;
}

std::string PhysicalDeleteResourceResult::getTaskExtraData()const
{
	return taskExtraData_;
}

std::string PhysicalDeleteResourceResult::getCountry()const
{
	return country_;
}

std::string PhysicalDeleteResourceResult::getPk()const
{
	return pk_;
}

std::string PhysicalDeleteResourceResult::getBid()const
{
	return bid_;
}

bool PhysicalDeleteResourceResult::getInterrupt()const
{
	return interrupt_;
}

bool PhysicalDeleteResourceResult::getSuccess()const
{
	return success_;
}

