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

#include <alibabacloud/foas/model/ListProjectBindQueueResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

ListProjectBindQueueResourceResult::ListProjectBindQueueResourceResult() :
	ServiceResult()
{}

ListProjectBindQueueResourceResult::ListProjectBindQueueResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectBindQueueResourceResult::~ListProjectBindQueueResourceResult()
{}

void ListProjectBindQueueResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQueuesNode = value["Queues"]["Queue"];
	for (auto valueQueuesQueue : allQueuesNode)
	{
		Queue queuesObject;
		if(!valueQueuesQueue["ClusterId"].isNull())
			queuesObject.clusterId = valueQueuesQueue["ClusterId"].asString();
		if(!valueQueuesQueue["QueueName"].isNull())
			queuesObject.queueName = valueQueuesQueue["QueueName"].asString();
		if(!valueQueuesQueue["MinGpu"].isNull())
			queuesObject.minGpu = std::stoi(valueQueuesQueue["MinGpu"].asString());
		if(!valueQueuesQueue["MaxGpu"].isNull())
			queuesObject.maxGpu = std::stoi(valueQueuesQueue["MaxGpu"].asString());
		if(!valueQueuesQueue["MinMem"].isNull())
			queuesObject.minMem = std::stoi(valueQueuesQueue["MinMem"].asString());
		if(!valueQueuesQueue["MaxMem"].isNull())
			queuesObject.maxMem = std::stoi(valueQueuesQueue["MaxMem"].asString());
		if(!valueQueuesQueue["MinVCore"].isNull())
			queuesObject.minVCore = std::stoi(valueQueuesQueue["MinVCore"].asString());
		if(!valueQueuesQueue["MaxVCore"].isNull())
			queuesObject.maxVCore = std::stoi(valueQueuesQueue["MaxVCore"].asString());
		if(!valueQueuesQueue["UsedVCore"].isNull())
			queuesObject.usedVCore = std::stoi(valueQueuesQueue["UsedVCore"].asString());
		if(!valueQueuesQueue["UsedGpu"].isNull())
			queuesObject.usedGpu = std::stoi(valueQueuesQueue["UsedGpu"].asString());
		if(!valueQueuesQueue["UsedMem"].isNull())
			queuesObject.usedMem = std::stoi(valueQueuesQueue["UsedMem"].asString());
		queues_.push_back(queuesObject);
	}

}

std::vector<ListProjectBindQueueResourceResult::Queue> ListProjectBindQueueResourceResult::getQueues()const
{
	return queues_;
}

