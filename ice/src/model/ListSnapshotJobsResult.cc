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

#include <alibabacloud/ice/model/ListSnapshotJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListSnapshotJobsResult::ListSnapshotJobsResult() :
	ServiceResult()
{}

ListSnapshotJobsResult::ListSnapshotJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSnapshotJobsResult::~ListSnapshotJobsResult()
{}

void ListSnapshotJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["Job"];
	for (auto valueJobsJob : allJobsNode)
	{
		Job jobsObject;
		if(!valueJobsJob["JobId"].isNull())
			jobsObject.jobId = valueJobsJob["JobId"].asString();
		if(!valueJobsJob["TriggerSource"].isNull())
			jobsObject.triggerSource = valueJobsJob["TriggerSource"].asString();
		if(!valueJobsJob["Name"].isNull())
			jobsObject.name = valueJobsJob["Name"].asString();
		if(!valueJobsJob["Type"].isNull())
			jobsObject.type = valueJobsJob["Type"].asString();
		if(!valueJobsJob["Count"].isNull())
			jobsObject.count = std::stoi(valueJobsJob["Count"].asString());
		if(!valueJobsJob["Async"].isNull())
			jobsObject.async = valueJobsJob["Async"].asString() == "true";
		if(!valueJobsJob["TemplateId"].isNull())
			jobsObject.templateId = valueJobsJob["TemplateId"].asString();
		if(!valueJobsJob["PipelineId"].isNull())
			jobsObject.pipelineId = valueJobsJob["PipelineId"].asString();
		if(!valueJobsJob["Status"].isNull())
			jobsObject.status = valueJobsJob["Status"].asString();
		if(!valueJobsJob["SubmitTime"].isNull())
			jobsObject.submitTime = valueJobsJob["SubmitTime"].asString();
		if(!valueJobsJob["FinishTime"].isNull())
			jobsObject.finishTime = valueJobsJob["FinishTime"].asString();
		if(!valueJobsJob["CreateTime"].isNull())
			jobsObject.createTime = valueJobsJob["CreateTime"].asString();
		if(!valueJobsJob["ModifiedTime"].isNull())
			jobsObject.modifiedTime = valueJobsJob["ModifiedTime"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Type"].isNull())
			jobsObject.input.type = inputNode["Type"].asString();
		if(!inputNode["Media"].isNull())
			jobsObject.input.media = inputNode["Media"].asString();
		auto outputNode = value["Output"];
		if(!outputNode["Type"].isNull())
			jobsObject.output.type = outputNode["Type"].asString();
		if(!outputNode["Media"].isNull())
			jobsObject.output.media = outputNode["Media"].asString();
		jobs_.push_back(jobsObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<ListSnapshotJobsResult::Job> ListSnapshotJobsResult::getJobs()const
{
	return jobs_;
}

std::string ListSnapshotJobsResult::getNextPageToken()const
{
	return nextPageToken_;
}

