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

#include <alibabacloud/amqp-open/model/ListQueuesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Amqp_open;
using namespace AlibabaCloud::Amqp_open::Model;

ListQueuesResult::ListQueuesResult() :
	ServiceResult()
{}

ListQueuesResult::ListQueuesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQueuesResult::~ListQueuesResult()
{}

void ListQueuesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allQueuesNode = dataNode["Queues"]["QueueVO"];
	for (auto dataNodeQueuesQueueVO : allQueuesNode)
	{
		Data::QueueVO queueVOObject;
		if(!dataNodeQueuesQueueVO["ExclusiveState"].isNull())
			queueVOObject.exclusiveState = dataNodeQueuesQueueVO["ExclusiveState"].asString() == "true";
		if(!dataNodeQueuesQueueVO["AutoDeleteState"].isNull())
			queueVOObject.autoDeleteState = dataNodeQueuesQueueVO["AutoDeleteState"].asString() == "true";
		if(!dataNodeQueuesQueueVO["CreateTime"].isNull())
			queueVOObject.createTime = std::stol(dataNodeQueuesQueueVO["CreateTime"].asString());
		if(!dataNodeQueuesQueueVO["Attributes"].isNull())
			queueVOObject.attributes = dataNodeQueuesQueueVO["Attributes"].asString();
		if(!dataNodeQueuesQueueVO["VHostName"].isNull())
			queueVOObject.vHostName = dataNodeQueuesQueueVO["VHostName"].asString();
		if(!dataNodeQueuesQueueVO["Name"].isNull())
			queueVOObject.name = dataNodeQueuesQueueVO["Name"].asString();
		if(!dataNodeQueuesQueueVO["OwnerId"].isNull())
			queueVOObject.ownerId = dataNodeQueuesQueueVO["OwnerId"].asString();
		if(!dataNodeQueuesQueueVO["LastConsumeTime"].isNull())
			queueVOObject.lastConsumeTime = std::stol(dataNodeQueuesQueueVO["LastConsumeTime"].asString());
		data_.queues.push_back(queueVOObject);
	}

}

ListQueuesResult::Data ListQueuesResult::getData()const
{
	return data_;
}

