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

#include <alibabacloud/adb/model/DescribeDiagnosisDimensionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDiagnosisDimensionsResult::DescribeDiagnosisDimensionsResult() :
	ServiceResult()
{}

DescribeDiagnosisDimensionsResult::DescribeDiagnosisDimensionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiagnosisDimensionsResult::~DescribeDiagnosisDimensionsResult()
{}

void DescribeDiagnosisDimensionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClientIps = value["ClientIps"]["ClientIps"];
	for (const auto &item : allClientIps)
		clientIps_.push_back(item.asString());
	auto allResourceGroups = value["ResourceGroups"]["ResourceGroups"];
	for (const auto &item : allResourceGroups)
		resourceGroups_.push_back(item.asString());
	auto allUserNames = value["UserNames"]["UserNames"];
	for (const auto &item : allUserNames)
		userNames_.push_back(item.asString());
	auto allDatabases = value["Databases"]["Databases"];
	for (const auto &item : allDatabases)
		databases_.push_back(item.asString());

}

std::vector<std::string> DescribeDiagnosisDimensionsResult::getClientIps()const
{
	return clientIps_;
}

std::vector<std::string> DescribeDiagnosisDimensionsResult::getDatabases()const
{
	return databases_;
}

std::vector<std::string> DescribeDiagnosisDimensionsResult::getResourceGroups()const
{
	return resourceGroups_;
}

std::vector<std::string> DescribeDiagnosisDimensionsResult::getUserNames()const
{
	return userNames_;
}

