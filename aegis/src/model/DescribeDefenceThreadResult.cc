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

#include <alibabacloud/aegis/model/DescribeDefenceThreadResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeDefenceThreadResult::DescribeDefenceThreadResult() :
	ServiceResult()
{}

DescribeDefenceThreadResult::DescribeDefenceThreadResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDefenceThreadResult::~DescribeDefenceThreadResult()
{}

void DescribeDefenceThreadResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDefenceAaggregatCountArray = value["DefenceAaggregatCountArray"]["IntegerItem"];
	for (const auto &item : allDefenceAaggregatCountArray)
		defenceAaggregatCountArray_.push_back(item.asString());
	auto allTamperProofArray = value["TamperProofArray"]["IntegerItem"];
	for (const auto &item : allTamperProofArray)
		tamperProofArray_.push_back(item.asString());
	auto allDateArray = value["DateArray"]["StringItem"];
	for (const auto &item : allDateArray)
		dateArray_.push_back(item.asString());
	auto allTamperProofAaggregateArray = value["TamperProofAaggregateArray"]["IntegerItem"];
	for (const auto &item : allTamperProofAaggregateArray)
		tamperProofAaggregateArray_.push_back(item.asString());
	auto allDefenceCountArray = value["DefenceCountArray"]["IntegerItem"];
	for (const auto &item : allDefenceCountArray)
		defenceCountArray_.push_back(item.asString());
	if(!value["DefenceCountTotal"].isNull())
		defenceCountTotal_ = std::stoi(value["DefenceCountTotal"].asString());
	if(!value["TamperProofTotal"].isNull())
		tamperProofTotal_ = std::stoi(value["TamperProofTotal"].asString());

}

std::vector<std::string> DescribeDefenceThreadResult::getTamperProofAaggregateArray()const
{
	return tamperProofAaggregateArray_;
}

std::vector<std::string> DescribeDefenceThreadResult::getDefenceCountArray()const
{
	return defenceCountArray_;
}

int DescribeDefenceThreadResult::getDefenceCountTotal()const
{
	return defenceCountTotal_;
}

std::vector<std::string> DescribeDefenceThreadResult::getDefenceAaggregatCountArray()const
{
	return defenceAaggregatCountArray_;
}

std::vector<std::string> DescribeDefenceThreadResult::getTamperProofArray()const
{
	return tamperProofArray_;
}

int DescribeDefenceThreadResult::getTamperProofTotal()const
{
	return tamperProofTotal_;
}

std::vector<std::string> DescribeDefenceThreadResult::getDateArray()const
{
	return dateArray_;
}

