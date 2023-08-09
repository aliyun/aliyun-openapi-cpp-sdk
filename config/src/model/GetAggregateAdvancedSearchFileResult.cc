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

#include <alibabacloud/config/model/GetAggregateAdvancedSearchFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetAggregateAdvancedSearchFileResult::GetAggregateAdvancedSearchFileResult() :
	ServiceResult()
{}

GetAggregateAdvancedSearchFileResult::GetAggregateAdvancedSearchFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAggregateAdvancedSearchFileResult::~GetAggregateAdvancedSearchFileResult()
{}

void GetAggregateAdvancedSearchFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceSearchNode = value["ResourceSearch"];
	if(!resourceSearchNode["DownloadUrl"].isNull())
		resourceSearch_.downloadUrl = resourceSearchNode["DownloadUrl"].asString();
	if(!resourceSearchNode["Status"].isNull())
		resourceSearch_.status = resourceSearchNode["Status"].asString();
	if(!resourceSearchNode["AccountId"].isNull())
		resourceSearch_.accountId = std::stol(resourceSearchNode["AccountId"].asString());
	if(!resourceSearchNode["ResourceInventoryGenerateTime"].isNull())
		resourceSearch_.resourceInventoryGenerateTime = std::stol(resourceSearchNode["ResourceInventoryGenerateTime"].asString());

}

GetAggregateAdvancedSearchFileResult::ResourceSearch GetAggregateAdvancedSearchFileResult::getResourceSearch()const
{
	return resourceSearch_;
}

