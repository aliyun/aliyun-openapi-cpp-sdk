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
		if(!valueQueuesQueueInfo["Type"].isNull())
			queuesObject.type = valueQueuesQueueInfo["Type"].asString();
		if(!valueQueuesQueueInfo["HostNamePrefix"].isNull())
			queuesObject.hostNamePrefix = valueQueuesQueueInfo["HostNamePrefix"].asString();
		if(!valueQueuesQueueInfo["QueueName"].isNull())
			queuesObject.queueName = valueQueuesQueueInfo["QueueName"].asString();
		if(!valueQueuesQueueInfo["EnableAutoGrow"].isNull())
			queuesObject.enableAutoGrow = valueQueuesQueueInfo["EnableAutoGrow"].asString() == "true";
		if(!valueQueuesQueueInfo["ResourceGroupId"].isNull())
			queuesObject.resourceGroupId = valueQueuesQueueInfo["ResourceGroupId"].asString();
		if(!valueQueuesQueueInfo["ImageId"].isNull())
			queuesObject.imageId = valueQueuesQueueInfo["ImageId"].asString();
		if(!valueQueuesQueueInfo["HostNameSuffix"].isNull())
			queuesObject.hostNameSuffix = valueQueuesQueueInfo["HostNameSuffix"].asString();
		if(!valueQueuesQueueInfo["SpotStrategy"].isNull())
			queuesObject.spotStrategy = valueQueuesQueueInfo["SpotStrategy"].asString();
		auto allSpotInstanceTypesNode = valueQueuesQueueInfo["SpotInstanceTypes"]["Instance"];
		for (auto valueQueuesQueueInfoSpotInstanceTypesInstance : allSpotInstanceTypesNode)
		{
			QueueInfo::Instance spotInstanceTypesObject;
			if(!valueQueuesQueueInfoSpotInstanceTypesInstance["InstanceType"].isNull())
				spotInstanceTypesObject.instanceType = valueQueuesQueueInfoSpotInstanceTypesInstance["InstanceType"].asString();
			if(!valueQueuesQueueInfoSpotInstanceTypesInstance["SpotPriceLimit"].isNull())
				spotInstanceTypesObject.spotPriceLimit = std::stof(valueQueuesQueueInfoSpotInstanceTypesInstance["SpotPriceLimit"].asString());
			queuesObject.spotInstanceTypes.push_back(spotInstanceTypesObject);
		}
		auto allComputeInstanceType = value["ComputeInstanceType"]["InstanceType"];
		for (auto value : allComputeInstanceType)
			queuesObject.computeInstanceType.push_back(value.asString());
		queues_.push_back(queuesObject);
	}

}

std::vector<ListQueuesResult::QueueInfo> ListQueuesResult::getQueues()const
{
	return queues_;
}

