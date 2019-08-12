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

#include <alibabacloud/ecs/model/AttachKeyPairResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

AttachKeyPairResult::AttachKeyPairResult() :
	ServiceResult()
{}

AttachKeyPairResult::AttachKeyPairResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AttachKeyPairResult::~AttachKeyPairResult()
{}

void AttachKeyPairResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allResults = value["Results"]["Result"];
	for (auto value : allResults)
	{
		Result resultsObject;
		if(!value["InstanceId"].isNull())
			resultsObject.instanceId = value["InstanceId"].asString();
		if(!value["Success"].isNull())
			resultsObject.success = value["Success"].asString();
		if(!value["Code"].isNull())
			resultsObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			resultsObject.message = value["Message"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["FailCount"].isNull())
		failCount_ = value["FailCount"].asString();
	if(!value["KeyPairName"].isNull())
		keyPairName_ = value["KeyPairName"].asString();

}

std::string AttachKeyPairResult::getKeyPairName()const
{
	return keyPairName_;
}

std::string AttachKeyPairResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<AttachKeyPairResult::Result> AttachKeyPairResult::getResults()const
{
	return results_;
}

std::string AttachKeyPairResult::getFailCount()const
{
	return failCount_;
}

