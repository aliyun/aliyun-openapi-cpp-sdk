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
	auto allJobs = value["Jobs"]["JobsItem"];
	for (auto value : allJobs)
	{
		JobsItem jobsObject;
		if(!value["JobId"].isNull())
			jobsObject.jobId = value["JobId"].asString();
		if(!value["SrcUri"].isNull())
			jobsObject.srcUri = value["SrcUri"].asString();
		if(!value["Status"].isNull())
			jobsObject.status = value["Status"].asString();
		if(!value["TgtUri"].isNull())
			jobsObject.tgtUri = value["TgtUri"].asString();
		if(!value["NotifyTopicName"].isNull())
			jobsObject.notifyTopicName = std::stoi(value["NotifyTopicName"].asString());
		if(!value["NotifyEndpoint"].isNull())
			jobsObject.notifyEndpoint = value["NotifyEndpoint"].asString();
		if(!value["ExternalID"].isNull())
			jobsObject.externalID = value["ExternalID"].asString();
		if(!value["CreateTime"].isNull())
			jobsObject.createTime = value["CreateTime"].asString();
		if(!value["FinishTime"].isNull())
			jobsObject.finishTime = value["FinishTime"].asString();
		if(!value["Percent"].isNull())
			jobsObject.percent = std::stoi(value["Percent"].asString());
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

