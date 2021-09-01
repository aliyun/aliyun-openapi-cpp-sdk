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

#include <alibabacloud/mts/model/QueryMediaWorkflowExecutionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMediaWorkflowExecutionListResult::QueryMediaWorkflowExecutionListResult() :
	ServiceResult()
{}

QueryMediaWorkflowExecutionListResult::QueryMediaWorkflowExecutionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMediaWorkflowExecutionListResult::~QueryMediaWorkflowExecutionListResult()
{}

void QueryMediaWorkflowExecutionListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaWorkflowExecutionListNode = value["MediaWorkflowExecutionList"]["MediaWorkflowExecution"];
	for (auto valueMediaWorkflowExecutionListMediaWorkflowExecution : allMediaWorkflowExecutionListNode)
	{
		MediaWorkflowExecution mediaWorkflowExecutionListObject;
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["CreationTime"].isNull())
			mediaWorkflowExecutionListObject.creationTime = valueMediaWorkflowExecutionListMediaWorkflowExecution["CreationTime"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["MediaWorkflowId"].isNull())
			mediaWorkflowExecutionListObject.mediaWorkflowId = valueMediaWorkflowExecutionListMediaWorkflowExecution["MediaWorkflowId"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["State"].isNull())
			mediaWorkflowExecutionListObject.state = valueMediaWorkflowExecutionListMediaWorkflowExecution["State"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["Name"].isNull())
			mediaWorkflowExecutionListObject.name = valueMediaWorkflowExecutionListMediaWorkflowExecution["Name"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["MediaId"].isNull())
			mediaWorkflowExecutionListObject.mediaId = valueMediaWorkflowExecutionListMediaWorkflowExecution["MediaId"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["RunId"].isNull())
			mediaWorkflowExecutionListObject.runId = valueMediaWorkflowExecutionListMediaWorkflowExecution["RunId"].asString();
		auto allActivityListNode = valueMediaWorkflowExecutionListMediaWorkflowExecution["ActivityList"]["Activity"];
		for (auto valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity : allActivityListNode)
		{
			MediaWorkflowExecution::Activity activityListObject;
			if(!valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["EndTime"].isNull())
				activityListObject.endTime = valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["EndTime"].asString();
			if(!valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["Type"].isNull())
				activityListObject.type = valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["Type"].asString();
			if(!valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["StartTime"].isNull())
				activityListObject.startTime = valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["StartTime"].asString();
			if(!valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["State"].isNull())
				activityListObject.state = valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["State"].asString();
			if(!valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["JobId"].isNull())
				activityListObject.jobId = valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["JobId"].asString();
			if(!valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["Code"].isNull())
				activityListObject.code = valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["Code"].asString();
			if(!valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["Message"].isNull())
				activityListObject.message = valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["Message"].asString();
			if(!valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["Name"].isNull())
				activityListObject.name = valueMediaWorkflowExecutionListMediaWorkflowExecutionActivityListActivity["Name"].asString();
			auto mNSMessageResultNode = value["MNSMessageResult"];
			if(!mNSMessageResultNode["MessageId"].isNull())
				activityListObject.mNSMessageResult.messageId = mNSMessageResultNode["MessageId"].asString();
			if(!mNSMessageResultNode["ErrorMessage"].isNull())
				activityListObject.mNSMessageResult.errorMessage = mNSMessageResultNode["ErrorMessage"].asString();
			if(!mNSMessageResultNode["ErrorCode"].isNull())
				activityListObject.mNSMessageResult.errorCode = mNSMessageResultNode["ErrorCode"].asString();
			mediaWorkflowExecutionListObject.activityList.push_back(activityListObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["UserData"].isNull())
			mediaWorkflowExecutionListObject.input.userData = inputNode["UserData"].asString();
		auto inputFileNode = inputNode["InputFile"];
		if(!inputFileNode["Object"].isNull())
			mediaWorkflowExecutionListObject.input.inputFile.object = inputFileNode["Object"].asString();
		if(!inputFileNode["Location"].isNull())
			mediaWorkflowExecutionListObject.input.inputFile.location = inputFileNode["Location"].asString();
		if(!inputFileNode["Bucket"].isNull())
			mediaWorkflowExecutionListObject.input.inputFile.bucket = inputFileNode["Bucket"].asString();
		mediaWorkflowExecutionList_.push_back(mediaWorkflowExecutionListObject);
	}
	auto allNonExistRunIds = value["NonExistRunIds"]["RunId"];
	for (const auto &item : allNonExistRunIds)
		nonExistRunIds_.push_back(item.asString());

}

std::vector<std::string> QueryMediaWorkflowExecutionListResult::getNonExistRunIds()const
{
	return nonExistRunIds_;
}

std::vector<QueryMediaWorkflowExecutionListResult::MediaWorkflowExecution> QueryMediaWorkflowExecutionListResult::getMediaWorkflowExecutionList()const
{
	return mediaWorkflowExecutionList_;
}

