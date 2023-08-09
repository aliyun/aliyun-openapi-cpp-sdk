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

#include <alibabacloud/config/model/GetAggregateResourceInventoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetAggregateResourceInventoryResult::GetAggregateResourceInventoryResult() :
	ServiceResult()
{}

GetAggregateResourceInventoryResult::GetAggregateResourceInventoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAggregateResourceInventoryResult::~GetAggregateResourceInventoryResult()
{}

void GetAggregateResourceInventoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceInventoryNode = value["ResourceInventory"];
	if(!resourceInventoryNode["DownloadUrl"].isNull())
		resourceInventory_.downloadUrl = resourceInventoryNode["DownloadUrl"].asString();
	if(!resourceInventoryNode["Status"].isNull())
		resourceInventory_.status = resourceInventoryNode["Status"].asString();
	if(!resourceInventoryNode["AccountId"].isNull())
		resourceInventory_.accountId = std::stol(resourceInventoryNode["AccountId"].asString());
	if(!resourceInventoryNode["ResourceInventoryGenerateTime"].isNull())
		resourceInventory_.resourceInventoryGenerateTime = std::stol(resourceInventoryNode["ResourceInventoryGenerateTime"].asString());

}

GetAggregateResourceInventoryResult::ResourceInventory GetAggregateResourceInventoryResult::getResourceInventory()const
{
	return resourceInventory_;
}

