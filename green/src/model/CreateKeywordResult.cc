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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInvalidKeywordList = value["InvalidKeywordList"]["StringItem"];
	for (const auto &item : allInvalidKeywordList)
		invalidKeywordList_.push_back(item.asString());
	auto allvalidKeywordList = value["validKeywordList"]["StringItem"];
	for (const auto &item : allvalidKeywordList)
		validKeywordList_.push_back(item.asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());

}

std::vector<std::string> CreateKeywordResult::getInvalidKeywordList()const
{
	return invalidKeywordList_;
}

int CreateKeywordResult::getSuccessCount()const
{
	return successCount_;
}

std::vector<std::string> CreateKeywordResult::getValidKeywordList()const
{
	return validKeywordList_;
}

