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

#include <alibabacloud/ice/model/ListLiveTranscodeJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListLiveTranscodeJobsResult::ListLiveTranscodeJobsResult() :
	ServiceResult()
{}

ListLiveTranscodeJobsResult::ListLiveTranscodeJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveTranscodeJobsResult::~ListLiveTranscodeJobsResult()
{}

void ListLiveTranscodeJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobListNode = value["JobList"]["job"];
	for (auto valueJobListjob : allJobListNode)
	{
		Job jobListObject;
		if(!valueJobListjob["Name"].isNull())
			jobListObject.name = valueJobListjob["Name"].asString();
		if(!valueJobListjob["JobId"].isNull())
			jobListObject.jobId = valueJobListjob["JobId"].asString();
		if(!valueJobListjob["TemplateType"].isNull())
			jobListObject.templateType = valueJobListjob["TemplateType"].asString();
		if(!valueJobListjob["TemplateId"].isNull())
			jobListObject.templateId = valueJobListjob["TemplateId"].asString();
		if(!valueJobListjob["TemplateName"].isNull())
			jobListObject.templateName = valueJobListjob["TemplateName"].asString();
		if(!valueJobListjob["StartMode"].isNull())
			jobListObject.startMode = std::stoi(valueJobListjob["StartMode"].asString());
		if(!valueJobListjob["Status"].isNull())
			jobListObject.status = std::stoi(valueJobListjob["Status"].asString());
		if(!valueJobListjob["CreateTime"].isNull())
			jobListObject.createTime = valueJobListjob["CreateTime"].asString();
		auto streamInputNode = value["StreamInput"];
		if(!streamInputNode["Type"].isNull())
			jobListObject.streamInput.type = streamInputNode["Type"].asString();
		if(!streamInputNode["InputUrl"].isNull())
			jobListObject.streamInput.inputUrl = streamInputNode["InputUrl"].asString();
		auto outputStreamNode = value["OutputStream"];
		auto allStreamInfosNode = outputStreamNode["StreamInfos"]["streamInfo"];
		for (auto outputStreamNodeStreamInfosstreamInfo : allStreamInfosNode)
		{
			Job::OutputStream::StreamInfo streamInfoObject;
			if(!outputStreamNodeStreamInfosstreamInfo["Type"].isNull())
				streamInfoObject.type = outputStreamNodeStreamInfosstreamInfo["Type"].asString();
			if(!outputStreamNodeStreamInfosstreamInfo["OutputUrl"].isNull())
				streamInfoObject.outputUrl = outputStreamNodeStreamInfosstreamInfo["OutputUrl"].asString();
			jobListObject.outputStream.streamInfos.push_back(streamInfoObject);
		}
		jobList_.push_back(jobListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListLiveTranscodeJobsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListLiveTranscodeJobsResult::Job> ListLiveTranscodeJobsResult::getJobList()const
{
	return jobList_;
}

