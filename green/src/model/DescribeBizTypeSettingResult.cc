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

#include <alibabacloud/green/model/DescribeBizTypeSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeBizTypeSettingResult::DescribeBizTypeSettingResult() :
	ServiceResult()
{}

DescribeBizTypeSettingResult::DescribeBizTypeSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBizTypeSettingResult::~DescribeBizTypeSettingResult()
{}

void DescribeBizTypeSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto terrorismNode = value["Terrorism"];
		auto allCategories = terrorismNode["Categories"]["liveCategory"];
		for (auto value : allCategories)
			terrorism_.categories.push_back(value.asString());
	auto pornNode = value["Porn"];
		auto allCategories1 = pornNode["Categories"]["liveCategory"];
		for (auto value : allCategories1)
			porn_.categories1.push_back(value.asString());
	auto antispamNode = value["Antispam"];
		auto allCategories2 = antispamNode["Categories"]["liveCategory"];
		for (auto value : allCategories2)
			antispam_.categories2.push_back(value.asString());
	auto adNode = value["Ad"];
		auto allCategories3 = adNode["Categories"]["liveCategory"];
		for (auto value : allCategories3)
			ad_.categories3.push_back(value.asString());
	auto liveNode = value["Live"];
		auto allCategories4 = liveNode["Categories"]["liveCategory"];
		for (auto value : allCategories4)
			live_.categories4.push_back(value.asString());

}

DescribeBizTypeSettingResult::Antispam DescribeBizTypeSettingResult::getAntispam()const
{
	return antispam_;
}

DescribeBizTypeSettingResult::Ad DescribeBizTypeSettingResult::getAd()const
{
	return ad_;
}

DescribeBizTypeSettingResult::Terrorism DescribeBizTypeSettingResult::getTerrorism()const
{
	return terrorism_;
}

DescribeBizTypeSettingResult::Live DescribeBizTypeSettingResult::getLive()const
{
	return live_;
}

DescribeBizTypeSettingResult::Porn DescribeBizTypeSettingResult::getPorn()const
{
	return porn_;
}

