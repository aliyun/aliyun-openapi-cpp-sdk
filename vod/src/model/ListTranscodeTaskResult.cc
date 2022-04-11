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

#include <alibabacloud/vod/model/ListTranscodeTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListTranscodeTaskResult::ListTranscodeTaskResult() :
	ServiceResult()
{}

ListTranscodeTaskResult::ListTranscodeTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTranscodeTaskResult::~ListTranscodeTaskResult()
{}

void ListTranscodeTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTranscodeTaskListNode = value["TranscodeTaskList"]["TranscodeTask"];
	for (auto valueTranscodeTaskListTranscodeTask : allTranscodeTaskListNode)
	{
		TranscodeTask transcodeTaskListObject;
		if(!valueTranscodeTaskListTranscodeTask["CreationTime"].isNull())
			transcodeTaskListObject.creationTime = valueTranscodeTaskListTranscodeTask["CreationTime"].asString();
		if(!valueTranscodeTaskListTranscodeTask["Trigger"].isNull())
			transcodeTaskListObject.trigger = valueTranscodeTaskListTranscodeTask["Trigger"].asString();
		if(!valueTranscodeTaskListTranscodeTask["TaskStatus"].isNull())
			transcodeTaskListObject.taskStatus = valueTranscodeTaskListTranscodeTask["TaskStatus"].asString();
		if(!valueTranscodeTaskListTranscodeTask["VideoId"].isNull())
			transcodeTaskListObject.videoId = valueTranscodeTaskListTranscodeTask["VideoId"].asString();
		if(!valueTranscodeTaskListTranscodeTask["CompleteTime"].isNull())
			transcodeTaskListObject.completeTime = valueTranscodeTaskListTranscodeTask["CompleteTime"].asString();
		if(!valueTranscodeTaskListTranscodeTask["TranscodeTemplateGroupId"].isNull())
			transcodeTaskListObject.transcodeTemplateGroupId = valueTranscodeTaskListTranscodeTask["TranscodeTemplateGroupId"].asString();
		if(!valueTranscodeTaskListTranscodeTask["TranscodeTaskId"].isNull())
			transcodeTaskListObject.transcodeTaskId = valueTranscodeTaskListTranscodeTask["TranscodeTaskId"].asString();
		transcodeTaskList_.push_back(transcodeTaskListObject);
	}

}

std::vector<ListTranscodeTaskResult::TranscodeTask> ListTranscodeTaskResult::getTranscodeTaskList()const
{
	return transcodeTaskList_;
}

