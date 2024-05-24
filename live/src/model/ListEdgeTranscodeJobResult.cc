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

#include <alibabacloud/live/model/ListEdgeTranscodeJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListEdgeTranscodeJobResult::ListEdgeTranscodeJobResult() :
	ServiceResult()
{}

ListEdgeTranscodeJobResult::ListEdgeTranscodeJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEdgeTranscodeJobResult::~ListEdgeTranscodeJobResult()
{}

void ListEdgeTranscodeJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["Job"];
	for (auto valueJobListJob : allJobListNode)
	{
		Job jobListObject;
		if(!valueJobListJob["CreateTime"].isNull())
			jobListObject.createTime = valueJobListJob["CreateTime"].asString();
		if(!valueJobListJob["JobId"].isNull())
			jobListObject.jobId = valueJobListJob["JobId"].asString();
		if(!valueJobListJob["LastStartAt"].isNull())
			jobListObject.lastStartAt = valueJobListJob["LastStartAt"].asString();
		if(!valueJobListJob["LastStopAt"].isNull())
			jobListObject.lastStopAt = valueJobListJob["LastStopAt"].asString();
		if(!valueJobListJob["Name"].isNull())
			jobListObject.name = valueJobListJob["Name"].asString();
		if(!valueJobListJob["Status"].isNull())
			jobListObject.status = valueJobListJob["Status"].asString();
		if(!valueJobListJob["StreamInput"].isNull())
			jobListObject.streamInput = valueJobListJob["StreamInput"].asString();
		if(!valueJobListJob["StreamOutput"].isNull())
			jobListObject.streamOutput = valueJobListJob["StreamOutput"].asString();
		if(!valueJobListJob["TemplateId"].isNull())
			jobListObject.templateId = valueJobListJob["TemplateId"].asString();
		if(!valueJobListJob["TemplateName"].isNull())
			jobListObject.templateName = valueJobListJob["TemplateName"].asString();
		if(!valueJobListJob["Type"].isNull())
			jobListObject.type = valueJobListJob["Type"].asString();
		jobList_.push_back(jobListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListEdgeTranscodeJobResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListEdgeTranscodeJobResult::Job> ListEdgeTranscodeJobResult::getJobList()const
{
	return jobList_;
}

