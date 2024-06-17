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

#include <alibabacloud/swas-open/model/DetachKeyPairResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DetachKeyPairResult::DetachKeyPairResult() :
	ServiceResult()
{}

DetachKeyPairResult::DetachKeyPairResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetachKeyPairResult::~DetachKeyPairResult()
{}

void DetachKeyPairResult::parse(const std::string &payload)
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
		if(!valueResultsResult["Success"].isNull())
			resultsObject.success = valueResultsResult["Success"].asString();
		if(!valueResultsResult["InstanceId"].isNull())
			resultsObject.instanceId = valueResultsResult["InstanceId"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["FailCount"].isNull())
		failCount_ = std::stoi(value["FailCount"].asString());

}

int DetachKeyPairResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DetachKeyPairResult::Result> DetachKeyPairResult::getResults()const
{
	return results_;
}

int DetachKeyPairResult::getFailCount()const
{
	return failCount_;
}

