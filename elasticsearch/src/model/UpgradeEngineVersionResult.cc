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

#include <alibabacloud/elasticsearch/model/UpgradeEngineVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

UpgradeEngineVersionResult::UpgradeEngineVersionResult() :
	ServiceResult()
{}

UpgradeEngineVersionResult::UpgradeEngineVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpgradeEngineVersionResult::~UpgradeEngineVersionResult()
{}

void UpgradeEngineVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["validateType"].isNull())
			resultObject.validateType = valueResultResultItem["validateType"].asString();
		if(!valueResultResultItem["status"].isNull())
			resultObject.status = valueResultResultItem["status"].asString();
		auto allvalidateResultNode = valueResultResultItem["validateResult"]["validateResultItem"];
		for (auto valueResultResultItemvalidateResultvalidateResultItem : allvalidateResultNode)
		{
			ResultItem::ValidateResultItem validateResultObject;
			if(!valueResultResultItemvalidateResultvalidateResultItem["errorType"].isNull())
				validateResultObject.errorType = valueResultResultItemvalidateResultvalidateResultItem["errorType"].asString();
			if(!valueResultResultItemvalidateResultvalidateResultItem["errorCode"].isNull())
				validateResultObject.errorCode = valueResultResultItemvalidateResultvalidateResultItem["errorCode"].asString();
			if(!valueResultResultItemvalidateResultvalidateResultItem["errorMsg"].isNull())
				validateResultObject.errorMsg = valueResultResultItemvalidateResultvalidateResultItem["errorMsg"].asString();
			resultObject.validateResult.push_back(validateResultObject);
		}
		result_.push_back(resultObject);
	}

}

std::vector<UpgradeEngineVersionResult::ResultItem> UpgradeEngineVersionResult::getResult()const
{
	return result_;
}

