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

#include <alibabacloud/ehpc/model/ListQueuesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

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
	auto allQueuesNode = value["Queues"]["QueueInfo"];
	for (auto valueQueuesQueueInfo : allQueuesNode)
	{
		QueueInfo queuesObject;
		if(!valueQueuesQueueInfo["QueueName"].isNull())
			queuesObject.queueName = valueQueuesQueueInfo["QueueName"].asString();
		if(!valueQueuesQueueInfo["Type"].isNull())
			queuesObject.type = valueQueuesQueueInfo["Type"].asString();
		if(!valueQueuesQueueInfo["ResourceGroupId"].isNull())
			queuesObject.resourceGroupId = valueQueuesQueueInfo["ResourceGroupId"].asString();
		if(!valueQueuesQueueInfo["ComputeInstanceType"].isNull())
			queuesObject.computeInstanceType = valueQueuesQueueInfo["ComputeInstanceType"].asString();
		queues_.push_back(queuesObject);
	}

}

std::vector<ListQueuesResult::QueueInfo> ListQueuesResult::getQueues()const
{
	return queues_;
}

