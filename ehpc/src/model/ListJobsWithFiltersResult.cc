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

#include <alibabacloud/ehpc/model/ListJobsWithFiltersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListJobsWithFiltersResult::ListJobsWithFiltersResult() :
	ServiceResult()
{}

ListJobsWithFiltersResult::ListJobsWithFiltersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobsWithFiltersResult::~ListJobsWithFiltersResult()
{}

void ListJobsWithFiltersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["JobInfo"];
	for (auto valueJobsJobInfo : allJobsNode)
	{
		JobInfo jobsObject;
		if(!valueJobsJobInfo["Owner"].isNull())
			jobsObject.owner = valueJobsJobInfo["Owner"].asString();
		if(!valueJobsJobInfo["Comment"].isNull())
			jobsObject.comment = valueJobsJobInfo["Comment"].asString();
		if(!valueJobsJobInfo["State"].isNull())
			jobsObject.state = valueJobsJobInfo["State"].asString();
		if(!valueJobsJobInfo["Stderr"].isNull())
			jobsObject._stderr = valueJobsJobInfo["Stderr"].asString();
		if(!valueJobsJobInfo["Priority"].isNull())
			jobsObject.priority = valueJobsJobInfo["Priority"].asString();
		if(!valueJobsJobInfo["ShellPath"].isNull())
			jobsObject.shellPath = valueJobsJobInfo["ShellPath"].asString();
		if(!valueJobsJobInfo["Stdout"].isNull())
			jobsObject._stdout = valueJobsJobInfo["Stdout"].asString();
		if(!valueJobsJobInfo["ArrayRequest"].isNull())
			jobsObject.arrayRequest = valueJobsJobInfo["ArrayRequest"].asString();
		if(!valueJobsJobInfo["StartTime"].isNull())
			jobsObject.startTime = valueJobsJobInfo["StartTime"].asString();
		if(!valueJobsJobInfo["LastModifyTime"].isNull())
			jobsObject.lastModifyTime = valueJobsJobInfo["LastModifyTime"].asString();
		if(!valueJobsJobInfo["NodeList"].isNull())
			jobsObject.nodeList = valueJobsJobInfo["NodeList"].asString();
		if(!valueJobsJobInfo["Name"].isNull())
			jobsObject.name = valueJobsJobInfo["Name"].asString();
		if(!valueJobsJobInfo["Id"].isNull())
			jobsObject.id = valueJobsJobInfo["Id"].asString();
		if(!valueJobsJobInfo["SubmitTime"].isNull())
			jobsObject.submitTime = valueJobsJobInfo["SubmitTime"].asString();
		if(!valueJobsJobInfo["Queue"].isNull())
			jobsObject.queue = valueJobsJobInfo["Queue"].asString();
		if(!valueJobsJobInfo["Rerunable"].isNull())
			jobsObject.rerunable = valueJobsJobInfo["Rerunable"].asString() == "true";
		if(!valueJobsJobInfo["VariableList"].isNull())
			jobsObject.variableList = valueJobsJobInfo["VariableList"].asString();
		auto resourcesNode = value["Resources"];
		if(!resourcesNode["Nodes"].isNull())
			jobsObject.resources.nodes = std::stol(resourcesNode["Nodes"].asString());
		if(!resourcesNode["Cores"].isNull())
			jobsObject.resources.cores = std::stol(resourcesNode["Cores"].asString());
		jobs_.push_back(jobsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListJobsWithFiltersResult::getTotalCount()const
{
	return totalCount_;
}

long ListJobsWithFiltersResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListJobsWithFiltersResult::JobInfo> ListJobsWithFiltersResult::getJobs()const
{
	return jobs_;
}

long ListJobsWithFiltersResult::getPageNumber()const
{
	return pageNumber_;
}

bool ListJobsWithFiltersResult::getSuccess()const
{
	return success_;
}

