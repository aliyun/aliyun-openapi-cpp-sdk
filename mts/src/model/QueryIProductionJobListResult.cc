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

#include <alibabacloud/mts/model/QueryIProductionJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryIProductionJobListResult::QueryIProductionJobListResult() :
	ServiceResult()
{}

QueryIProductionJobListResult::QueryIProductionJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryIProductionJobListResult::~QueryIProductionJobListResult()
{}

void QueryIProductionJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());
	auto allJobs = value["Jobs"]["String"];
	for (const auto &item : allJobs)
		jobs_.push_back(item.asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<std::string> QueryIProductionJobListResult::getJobs()const
{
	return jobs_;
}

std::string QueryIProductionJobListResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<std::string> QueryIProductionJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

