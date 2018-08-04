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
	auto allMediaWorkflowExecutionList = value["MediaWorkflowExecutionList"]["MediaWorkflowExecution"];
	for (auto value : allMediaWorkflowExecutionList)
	{
		MediaWorkflowExecution mediaWorkflowExecutionListObject;
		if(!value["RunId"].isNull())
			mediaWorkflowExecutionListObject.runId = value["RunId"].asString();
		if(!value["MediaWorkflowId"].isNull())
			mediaWorkflowExecutionListObject.mediaWorkflowId = value["MediaWorkflowId"].asString();
		if(!value["Name"].isNull())
			mediaWorkflowExecutionListObject.name = value["Name"].asString();
		if(!value["State"].isNull())
			mediaWorkflowExecutionListObject.state = value["State"].asString();
		if(!value["MediaId"].isNull())
			mediaWorkflowExecutionListObject.mediaId = value["MediaId"].asString();
		if(!value["CreationTime"].isNull())
			mediaWorkflowExecutionListObject.creationTime = value["CreationTime"].asString();
		auto allActivityList = value["ActivityList"]["Activity"];
		for (auto value : allActivityList)
		{
			MediaWorkflowExecution::Activity activityListObject;
			if(!value["Name"].isNull())
				activityListObject.name = value["Name"].asString();
			if(!value["Type"].isNull())
				activityListObject.type = value["Type"].asString();
			if(!value["JobId"].isNull())
				activityListObject.jobId = value["JobId"].asString();
			if(!value["State"].isNull())
				activityListObject.state = value["State"].asString();
			if(!value["Code"].isNull())
				activityListObject.code = value["Code"].asString();
			if(!value["Message"].isNull())
				activityListObject.message = value["Message"].asString();
			if(!value["StartTime"].isNull())
				activityListObject.startTime = value["StartTime"].asString();
			if(!value["EndTime"].isNull())
				activityListObject.endTime = value["EndTime"].asString();
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

