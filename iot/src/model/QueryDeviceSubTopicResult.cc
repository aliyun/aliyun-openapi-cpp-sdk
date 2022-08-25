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

#include <alibabacloud/iot/model/QueryDeviceSubTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryDeviceSubTopicResult::QueryDeviceSubTopicResult() :
	ServiceResult()
{}

QueryDeviceSubTopicResult::QueryDeviceSubTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDeviceSubTopicResult::~QueryDeviceSubTopicResult()
{}

void QueryDeviceSubTopicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopicListNode = value["TopicList"]["topic"];
	for (auto valueTopicListtopic : allTopicListNode)
	{
		Topic topicListObject;
		if(!valueTopicListtopic["TopicName"].isNull())
			topicListObject.topicName = valueTopicListtopic["TopicName"].asString();
		if(!valueTopicListtopic["Timestamp"].isNull())
			topicListObject.timestamp = std::stol(valueTopicListtopic["Timestamp"].asString());
		topicList_.push_back(topicListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<QueryDeviceSubTopicResult::Topic> QueryDeviceSubTopicResult::getTopicList()const
{
	return topicList_;
}

std::string QueryDeviceSubTopicResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryDeviceSubTopicResult::getCode()const
{
	return code_;
}

bool QueryDeviceSubTopicResult::getSuccess()const
{
	return success_;
}

