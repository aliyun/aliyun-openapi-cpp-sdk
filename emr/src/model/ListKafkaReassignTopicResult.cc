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

#include <alibabacloud/emr/model/ListKafkaReassignTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListKafkaReassignTopicResult::ListKafkaReassignTopicResult() :
	ServiceResult()
{}

ListKafkaReassignTopicResult::ListKafkaReassignTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKafkaReassignTopicResult::~ListKafkaReassignTopicResult()
{}

void ListKafkaReassignTopicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allReassignTopicList = value["ReassignTopicList"]["ReassignTopic"];
	for (auto value : allReassignTopicList)
	{
		ReassignTopic reassignTopicListObject;
		if(!value["TopicId"].isNull())
			reassignTopicListObject.topicId = value["TopicId"].asString();
		if(!value["TopicName"].isNull())
			reassignTopicListObject.topicName = value["TopicName"].asString();
		if(!value["NumPartition"].isNull())
			reassignTopicListObject.numPartition = std::stoi(value["NumPartition"].asString());
		if(!value["FinishedPartition"].isNull())
			reassignTopicListObject.finishedPartition = std::stoi(value["FinishedPartition"].asString());
		if(!value["Process"].isNull())
			reassignTopicListObject.process = value["Process"].asString();
		if(!value["Status"].isNull())
			reassignTopicListObject.status = value["Status"].asString();
		reassignTopicList_.push_back(reassignTopicListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListKafkaReassignTopicResult::ReassignTopic> ListKafkaReassignTopicResult::getReassignTopicList()const
{
	return reassignTopicList_;
}

int ListKafkaReassignTopicResult::getPageSize()const
{
	return pageSize_;
}

int ListKafkaReassignTopicResult::getPageNumber()const
{
	return pageNumber_;
}

int ListKafkaReassignTopicResult::getTotal()const
{
	return total_;
}

