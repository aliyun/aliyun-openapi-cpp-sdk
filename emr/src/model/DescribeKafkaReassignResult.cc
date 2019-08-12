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

#include <alibabacloud/emr/model/DescribeKafkaReassignResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeKafkaReassignResult::DescribeKafkaReassignResult() :
	ServiceResult()
{}

DescribeKafkaReassignResult::DescribeKafkaReassignResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKafkaReassignResult::~DescribeKafkaReassignResult()
{}

void DescribeKafkaReassignResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["AssignProcess"].isNull())
		assignProcess_ = std::stoi(value["AssignProcess"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["TopicCount"].isNull())
		topicCount_ = std::stoi(value["TopicCount"].asString());
	if(!value["PartitionCount"].isNull())
		partitionCount_ = std::stoi(value["PartitionCount"].asString());
	if(!value["Throttle"].isNull())
		throttle_ = std::stol(value["Throttle"].asString());

}

std::string DescribeKafkaReassignResult::getStatus()const
{
	return status_;
}

long DescribeKafkaReassignResult::getEndTime()const
{
	return endTime_;
}

long DescribeKafkaReassignResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeKafkaReassignResult::getId()const
{
	return id_;
}

int DescribeKafkaReassignResult::getTopicCount()const
{
	return topicCount_;
}

int DescribeKafkaReassignResult::getAssignProcess()const
{
	return assignProcess_;
}

int DescribeKafkaReassignResult::getPartitionCount()const
{
	return partitionCount_;
}

long DescribeKafkaReassignResult::getThrottle()const
{
	return throttle_;
}

