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

#include <alibabacloud/mts/model/ListMediaWorkflowExecutionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListMediaWorkflowExecutionsResult::ListMediaWorkflowExecutionsResult() :
	ServiceResult()
{}

ListMediaWorkflowExecutionsResult::ListMediaWorkflowExecutionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMediaWorkflowExecutionsResult::~ListMediaWorkflowExecutionsResult()
{}

void ListMediaWorkflowExecutionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaWorkflowExecutionListNode = value["MediaWorkflowExecutionList"]["MediaWorkflowExecution"];
	for (auto valueMediaWorkflowExecutionListMediaWorkflowExecution : allMediaWorkflowExecutionListNode)
	{
		MediaWorkflowExecution mediaWorkflowExecutionListObject;
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["RunId"].isNull())
			mediaWorkflowExecutionListObject.runId = valueMediaWorkflowExecutionListMediaWorkflowExecution["RunId"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["MediaWorkflowId"].isNull())
			mediaWorkflowExecutionListObject.mediaWorkflowId = valueMediaWorkflowExecutionListMediaWorkflowExecution["MediaWorkflowId"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["Name"].isNull())
			mediaWorkflowExecutionListObject.name = valueMediaWorkflowExecutionListMediaWorkflowExecution["Name"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["State"].isNull())
			mediaWorkflowExecutionListObject.state = valueMediaWorkflowExecutionListMediaWorkflowExecution["State"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["MediaId"].isNull())
			mediaWorkflowExecutionListObject.mediaId = valueMediaWorkflowExecutionListMediaWorkflowExecution["MediaId"].asString();
		if(!valueMediaWorkflowExecutionListMediaWorkflowExecution["CreationTime"].isNull())
			mediaWorkflowExecutionListObject.creationTime = valueMediaWorkflowExecutionListMediaWorkflowExecution["CreationTime"].asString();
		auto allActivityListNode = allMediaWorkflowExecutionListNode["ActivityList"]["Activity"];
		for (auto allMediaWorkflowExecutionListNodeActivityListActivity : allActivityListNode)
		{
			MediaWorkflowExecution::Activity activityListObject;
			if(!allMediaWorkflowExecutionListNodeActivityListActivity["Name"].isNull())
				activityListObject.name = allMediaWorkflowExecutionListNodeActivityListActivity["Name"].asString();
			if(!allMediaWorkflowExecutionListNodeActivityListActivity["Type"].isNull())
				activityListObject.type = allMediaWorkflowExecutionListNodeActivityListActivity["Type"].asString();
			if(!allMediaWorkflowExecutionListNodeActivityListActivity["JobId"].isNull())
				activityListObject.jobId = allMediaWorkflowExecutionListNodeActivityListActivity["JobId"].asString();
			if(!allMediaWorkflowExecutionListNodeActivityListActivity["State"].isNull())
				activityListObject.state = allMediaWorkflowExecutionListNodeActivityListActivity["State"].asString();
			if(!allMediaWorkflowExecutionListNodeActivityListActivity["Code"].isNull())
				activityListObject.code = allMediaWorkflowExecutionListNodeActivityListActivity["Code"].asString();
			if(!allMediaWorkflowExecutionListNodeActivityListActivity["Message"].isNull())
				activityListObject.message = allMediaWorkflowExecutionListNodeActivityListActivity["Message"].asString();
			if(!allMediaWorkflowExecutionListNodeActivityListActivity["StartTime"].isNull())
				activityListObject.startTime = allMediaWorkflowExecutionListNodeActivityListActivity["StartTime"].asString();
			if(!allMediaWorkflowExecutionListNodeActivityListActivity["EndTime"].isNull())
				activityListObject.endTime = allMediaWorkflowExecutionListNodeActivityListActivity["EndTime"].asString();
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
		if(!inputFileNode["Bucket"].isNull())
			mediaWorkflowExecutionListObject.input.inputFile.bucket = inputFileNode["Bucket"].asString();
		if(!inputFileNode["Location"].isNull())
			mediaWorkflowExecutionListObject.input.inputFile.location = inputFileNode["Location"].asString();
		if(!inputFileNode["Object"].isNull())
			mediaWorkflowExecutionListObject.input.inputFile.object = inputFileNode["Object"].asString();
		mediaWorkflowExecutionList_.push_back(mediaWorkflowExecutionListObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<ListMediaWorkflowExecutionsResult::MediaWorkflowExecution> ListMediaWorkflowExecutionsResult::getMediaWorkflowExecutionList()const
{
	return mediaWorkflowExecutionList_;
}

std::string ListMediaWorkflowExecutionsResult::getNextPageToken()const
{
	return nextPageToken_;
}

