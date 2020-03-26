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

#include <alibabacloud/green/model/CreateKeywordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

CreateKeywordResult::CreateKeywordResult() :
	ServiceResult()
{}

CreateKeywordResult::CreateKeywordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateKeywordResult::~CreateKeywordResult()
{}

void CreateKeywordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allvalidKeywordListNode = value["validKeywordList"]["validKeyword"];
	for (auto valuevalidKeywordListvalidKeyword : allvalidKeywordListNode)
	{
		ValidKeyword validKeywordListObject;
		if(!valuevalidKeywordListvalidKeyword["id"].isNull())
			validKeywordListObject.id = std::stoi(valuevalidKeywordListvalidKeyword["id"].asString());
		if(!valuevalidKeywordListvalidKeyword["keyword"].isNull())
			validKeywordListObject.keyword = valuevalidKeywordListvalidKeyword["keyword"].asString();
		validKeywordList_.push_back(validKeywordListObject);
	}
	auto allInvalidKeywordList = value["InvalidKeywordList"]["StringItem"];
	for (const auto &item : allInvalidKeywordList)
		invalidKeywordList_.push_back(item.asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());

}

std::vector<CreateKeywordResult::ValidKeyword> CreateKeywordResult::getvalidKeywordList()const
{
	return validKeywordList_;
}

std::vector<std::string> CreateKeywordResult::getInvalidKeywordList()const
{
	return invalidKeywordList_;
}

int CreateKeywordResult::getSuccessCount()const
{
	return successCount_;
}

