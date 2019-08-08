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

#include <alibabacloud/emr/model/ListKafkaReassignResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListKafkaReassignResult::ListKafkaReassignResult() :
	ServiceResult()
{}

ListKafkaReassignResult::ListKafkaReassignResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKafkaReassignResult::~ListKafkaReassignResult()
{}

void ListKafkaReassignResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allReassignList = value["ReassignList"]["Reassign"];
	for (auto value : allReassignList)
	{
		Reassign reassignListObject;
		if(!value["Id"].isNull())
			reassignListObject.id = value["Id"].asString();
		if(!value["Status"].isNull())
			reassignListObject.status = value["Status"].asString();
		if(!value["AssignProcess"].isNull())
			reassignListObject.assignProcess = std::stoi(value["AssignProcess"].asString());
		if(!value["StartTime"].isNull())
			reassignListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			reassignListObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["TopicCount"].isNull())
			reassignListObject.topicCount = std::stoi(value["TopicCount"].asString());
		if(!value["PartitionCount"].isNull())
			reassignListObject.partitionCount = std::stoi(value["PartitionCount"].asString());
		if(!value["Throttle"].isNull())
			reassignListObject.throttle = std::stol(value["Throttle"].asString());
		reassignList_.push_back(reassignListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListKafkaReassignResult::getPageSize()const
{
	return pageSize_;
}

int ListKafkaReassignResult::getPageNumber()const
{
	return pageNumber_;
}

int ListKafkaReassignResult::getTotal()const
{
	return total_;
}

std::vector<ListKafkaReassignResult::Reassign> ListKafkaReassignResult::getReassignList()const
{
	return reassignList_;
}

