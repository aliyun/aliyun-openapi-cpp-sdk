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

#include <alibabacloud/mts/model/RefreshCdnDomainConfigsCacheResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

RefreshCdnDomainConfigsCacheResult::RefreshCdnDomainConfigsCacheResult() :
	ServiceResult()
{}

RefreshCdnDomainConfigsCacheResult::RefreshCdnDomainConfigsCacheResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RefreshCdnDomainConfigsCacheResult::~RefreshCdnDomainConfigsCacheResult()
{}

void RefreshCdnDomainConfigsCacheResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSucessDomains = value["SucessDomains"]["String"];
	for (const auto &item : allSucessDomains)
		sucessDomains_.push_back(item.asString());
	auto allFailedDomains = value["FailedDomains"]["String"];
	for (const auto &item : allFailedDomains)
		failedDomains_.push_back(item.asString());

}

std::vector<std::string> RefreshCdnDomainConfigsCacheResult::getSucessDomains()const
{
	return sucessDomains_;
}

std::vector<std::string> RefreshCdnDomainConfigsCacheResult::getFailedDomains()const
{
	return failedDomains_;
}

