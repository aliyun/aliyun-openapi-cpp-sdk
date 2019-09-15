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
	auto allQueues = value["Queues"]["QueueInfo"];
	for (auto value : allQueues)
	{
		QueueInfo queuesObject;
		if(!value["QueueName"].isNull())
			queuesObject.queueName = value["QueueName"].asString();
		if(!value["Type"].isNull())
			queuesObject.type = value["Type"].asString();
		if(!value["ResourceGroupId"].isNull())
			queuesObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["ComputeInstanceType"].isNull())
			queuesObject.computeInstanceType = value["ComputeInstanceType"].asString();
		queues_.push_back(queuesObject);
	}

}

std::vector<ListQueuesResult::QueueInfo> ListQueuesResult::getQueues()const
{
	return queues_;
}

