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

#include <alibabacloud/imm/model/ListPornBatchDetectJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListPornBatchDetectJobsResult::ListPornBatchDetectJobsResult() :
	ServiceResult()
{}

ListPornBatchDetectJobsResult::ListPornBatchDetectJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPornBatchDetectJobsResult::~ListPornBatchDetectJobsResult()
{}

void ListPornBatchDetectJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobsNode = value["Jobs"]["JobsItem"];
	for (auto valueJobsJobsItem : allJobsNode)
	{
		JobsItem jobsObject;
		if(!valueJobsJobsItem["JobId"].isNull())
			jobsObject.jobId = valueJobsJobsItem["JobId"].asString();
		if(!valueJobsJobsItem["SrcUri"].isNull())
			jobsObject.srcUri = valueJobsJobsItem["SrcUri"].asString();
		if(!valueJobsJobsItem["Status"].isNull())
			jobsObject.status = valueJobsJobsItem["Status"].asString();
		if(!valueJobsJobsItem["TgtUri"].isNull())
			jobsObject.tgtUri = valueJobsJobsItem["TgtUri"].asString();
		if(!valueJobsJobsItem["NotifyTopicName"].isNull())
			jobsObject.notifyTopicName = std::stoi(valueJobsJobsItem["NotifyTopicName"].asString());
		if(!valueJobsJobsItem["NotifyEndpoint"].isNull())
			jobsObject.notifyEndpoint = valueJobsJobsItem["NotifyEndpoint"].asString();
		if(!valueJobsJobsItem["ExternalID"].isNull())
			jobsObject.externalID = valueJobsJobsItem["ExternalID"].asString();
		if(!valueJobsJobsItem["CreateTime"].isNull())
			jobsObject.createTime = valueJobsJobsItem["CreateTime"].asString();
		if(!valueJobsJobsItem["FinishTime"].isNull())
			jobsObject.finishTime = valueJobsJobsItem["FinishTime"].asString();
		if(!valueJobsJobsItem["Percent"].isNull())
			jobsObject.percent = std::stoi(valueJobsJobsItem["Percent"].asString());
		jobs_.push_back(jobsObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListPornBatchDetectJobsResult::JobsItem> ListPornBatchDetectJobsResult::getJobs()const
{
	return jobs_;
}

std::string ListPornBatchDetectJobsResult::getNextMarker()const
{
	return nextMarker_;
}

