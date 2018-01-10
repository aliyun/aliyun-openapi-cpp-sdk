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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allResults = value["Results"]["Result"];
	for (auto value : allResults)
	{
		Result resultObject;
		resultObject.instanceId = value["InstanceId"].asString();
		resultObject.success = value["Success"].asString();
		resultObject.code = value["Code"].asString();
		resultObject.message = value["Message"].asString();
		results_.push_back(resultObject);
	}
	totalCount_ = value["TotalCount"].asString();
	failCount_ = value["FailCount"].asString();
	keyPairName_ = value["KeyPairName"].asString();

}

std::string AttachKeyPairResult::getKeyPairName()const
{
	return keyPairName_;
}

void AttachKeyPairResult::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
}

std::string AttachKeyPairResult::getTotalCount()const
{
	return totalCount_;
}

void AttachKeyPairResult::setTotalCount(const std::string& totalCount)
{
	totalCount_ = totalCount;
}

std::string AttachKeyPairResult::getFailCount()const
{
	return failCount_;
}

void AttachKeyPairResult::setFailCount(const std::string& failCount)
{
	failCount_ = failCount;
}

