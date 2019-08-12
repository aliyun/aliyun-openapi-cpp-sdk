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

#include <alibabacloud/smartag/model/DescribeNetworkOptimizationSettingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeNetworkOptimizationSettingsResult::DescribeNetworkOptimizationSettingsResult() :
	ServiceResult()
{}

DescribeNetworkOptimizationSettingsResult::DescribeNetworkOptimizationSettingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkOptimizationSettingsResult::~DescribeNetworkOptimizationSettingsResult()
{}

void DescribeNetworkOptimizationSettingsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSettings = value["Settings"]["Setting"];
	for (auto value : allSettings)
	{
		Setting settingsObject;
		if(!value["Domain"].isNull())
			settingsObject.domain = value["Domain"].asString();
		if(!value["Type"].isNull())
			settingsObject.type = value["Type"].asString();
		settings_.push_back(settingsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNetworkOptimizationSettingsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNetworkOptimizationSettingsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNetworkOptimizationSettingsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNetworkOptimizationSettingsResult::Setting> DescribeNetworkOptimizationSettingsResult::getSettings()const
{
	return settings_;
}

