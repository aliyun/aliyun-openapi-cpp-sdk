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
	auto allQueues = value["Queues"]["Queue"];
	for (auto value : allQueues)
	{
		Queue queuesObject;
		if(!value["ClusterId"].isNull())
			queuesObject.clusterId = value["ClusterId"].asString();
		if(!value["QueueName"].isNull())
			queuesObject.queueName = value["QueueName"].asString();
		if(!value["MinGpu"].isNull())
			queuesObject.minGpu = std::stoi(value["MinGpu"].asString());
		if(!value["MaxGpu"].isNull())
			queuesObject.maxGpu = std::stoi(value["MaxGpu"].asString());
		if(!value["MinMem"].isNull())
			queuesObject.minMem = std::stoi(value["MinMem"].asString());
		if(!value["MaxMem"].isNull())
			queuesObject.maxMem = std::stoi(value["MaxMem"].asString());
		if(!value["MinVCore"].isNull())
			queuesObject.minVCore = std::stoi(value["MinVCore"].asString());
		if(!value["MaxVCore"].isNull())
			queuesObject.maxVCore = std::stoi(value["MaxVCore"].asString());
		if(!value["UsedVCore"].isNull())
			queuesObject.usedVCore = std::stoi(value["UsedVCore"].asString());
		if(!value["UsedGpu"].isNull())
			queuesObject.usedGpu = std::stoi(value["UsedGpu"].asString());
		if(!value["UsedMem"].isNull())
			queuesObject.usedMem = std::stoi(value["UsedMem"].asString());
		queues_.push_back(queuesObject);
	}

}

std::vector<ListProjectBindQueueResourceResult::Queue> ListProjectBindQueueResourceResult::getQueues()const
{
	return queues_;
}

