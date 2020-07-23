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

#include <alibabacloud/retailcloud/model/ListJobHistoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListJobHistoriesResult::ListJobHistoriesResult() :
	ServiceResult()
{}

ListJobHistoriesResult::ListJobHistoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobHistoriesResult::~ListJobHistoriesResult()
{}

void ListJobHistoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["JobDetail"];
	for (auto valueDataJobDetail : allDataNode)
	{
		JobDetail dataObject;
		if(!valueDataJobDetail["Name"].isNull())
			dataObject.name = valueDataJobDetail["Name"].asString();
		if(!valueDataJobDetail["CompletionTime"].isNull())
			dataObject.completionTime = valueDataJobDetail["CompletionTime"].asString();
		if(!valueDataJobDetail["StartTime"].isNull())
			dataObject.startTime = valueDataJobDetail["StartTime"].asString();
		if(!valueDataJobDetail["Succeeded"].isNull())
			dataObject.succeeded = std::stoi(valueDataJobDetail["Succeeded"].asString());
		if(!valueDataJobDetail["Failed"].isNull())
			dataObject.failed = std::stoi(valueDataJobDetail["Failed"].asString());
		if(!valueDataJobDetail["Message"].isNull())
			dataObject.message = valueDataJobDetail["Message"].asString();
		if(!valueDataJobDetail["ActiveDeadlineSeconds"].isNull())
			dataObject.activeDeadlineSeconds = std::stoi(valueDataJobDetail["ActiveDeadlineSeconds"].asString());
		if(!valueDataJobDetail["BackoffLimit"].isNull())
			dataObject.backoffLimit = std::stoi(valueDataJobDetail["BackoffLimit"].asString());
		if(!valueDataJobDetail["Completions"].isNull())
			dataObject.completions = std::stoi(valueDataJobDetail["Completions"].asString());
		if(!valueDataJobDetail["Parallelism"].isNull())
			dataObject.parallelism = std::stoi(valueDataJobDetail["Parallelism"].asString());
		auto allPodList = value["PodList"]["PodName"];
		for (auto value : allPodList)
			dataObject.podList.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

long ListJobHistoriesResult::getTotalCount()const
{
	return totalCount_;
}

int ListJobHistoriesResult::getPageSize()const
{
	return pageSize_;
}

int ListJobHistoriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListJobHistoriesResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListJobHistoriesResult::JobDetail> ListJobHistoriesResult::getData()const
{
	return data_;
}

int ListJobHistoriesResult::getCode()const
{
	return code_;
}

