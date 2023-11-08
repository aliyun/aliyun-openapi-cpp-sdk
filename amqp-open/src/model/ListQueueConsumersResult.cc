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

#include <alibabacloud/amqp-open/model/ListQueueConsumersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Amqp_open;
using namespace AlibabaCloud::Amqp_open::Model;

ListQueueConsumersResult::ListQueueConsumersResult() :
	ServiceResult()
{}

ListQueueConsumersResult::ListQueueConsumersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQueueConsumersResult::~ListQueueConsumersResult()
{}

void ListQueueConsumersResult::parse(const std::string &payload)
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
	auto allConsumersNode = dataNode["Consumers"]["QueueConsumerVO"];
	for (auto dataNodeConsumersQueueConsumerVO : allConsumersNode)
	{
		Data::QueueConsumerVO queueConsumerVOObject;
		if(!dataNodeConsumersQueueConsumerVO["ConsumerTag"].isNull())
			queueConsumerVOObject.consumerTag = dataNodeConsumersQueueConsumerVO["ConsumerTag"].asString();
		data_.consumers.push_back(queueConsumerVOObject);
	}

}

ListQueueConsumersResult::Data ListQueueConsumersResult::getData()const
{
	return data_;
}

