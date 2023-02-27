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

#include <alibabacloud/ice/model/ListDynamicImageJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListDynamicImageJobsResult::ListDynamicImageJobsResult() :
	ServiceResult()
{}

ListDynamicImageJobsResult::ListDynamicImageJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDynamicImageJobsResult::~ListDynamicImageJobsResult()
{}

void ListDynamicImageJobsResult::parse(const std::string &payload)
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

std::vector<ListDynamicImageJobsResult::Job> ListDynamicImageJobsResult::getJobs()const
{
	return jobs_;
}

std::string ListDynamicImageJobsResult::getNextPageToken()const
{
	return nextPageToken_;
}

