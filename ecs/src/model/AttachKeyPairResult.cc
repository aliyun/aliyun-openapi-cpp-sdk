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
	auto allResultsNode = value["Results"]["Result"];
	for (auto valueResultsResult : allResultsNode)
	{
		Result resultsObject;
		if(!valueResultsResult["Code"].isNull())
			resultsObject.code = valueResultsResult["Code"].asString();
		if(!valueResultsResult["Message"].isNull())
			resultsObject.message = valueResultsResult["Message"].asString();
		if(!valueResultsResult["InstanceId"].isNull())
			resultsObject.instanceId = valueResultsResult["InstanceId"].asString();
		if(!valueResultsResult["Success"].isNull())
			resultsObject.success = valueResultsResult["Success"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["KeyPairName"].isNull())
		keyPairName_ = value["KeyPairName"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["FailCount"].isNull())
		failCount_ = value["FailCount"].asString();

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

