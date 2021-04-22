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

#include <alibabacloud/ecs/model/DescribeDiskReplicaPairsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDiskReplicaPairsResult::DescribeDiskReplicaPairsResult() :
	ServiceResult()
{}

DescribeDiskReplicaPairsResult::DescribeDiskReplicaPairsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiskReplicaPairsResult::~DescribeDiskReplicaPairsResult()
{}

void DescribeDiskReplicaPairsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDiskReplicaPairsNode = value["DiskReplicaPairs"]["DiskReplicaPair"];
	for (auto valueDiskReplicaPairsDiskReplicaPair : allDiskReplicaPairsNode)
	{
		DiskReplicaPair diskReplicaPairsObject;
		if(!valueDiskReplicaPairsDiskReplicaPair["ReplicaPairId"].isNull())
			diskReplicaPairsObject.replicaPairId = valueDiskReplicaPairsDiskReplicaPair["ReplicaPairId"].asString();
		if(!valueDiskReplicaPairsDiskReplicaPair["SourceRegion"].isNull())
			diskReplicaPairsObject.sourceRegion = valueDiskReplicaPairsDiskReplicaPair["SourceRegion"].asString();
		if(!valueDiskReplicaPairsDiskReplicaPair["SourceDiskId"].isNull())
			diskReplicaPairsObject.sourceDiskId = valueDiskReplicaPairsDiskReplicaPair["SourceDiskId"].asString();
		if(!valueDiskReplicaPairsDiskReplicaPair["DestinationRegion"].isNull())
			diskReplicaPairsObject.destinationRegion = valueDiskReplicaPairsDiskReplicaPair["DestinationRegion"].asString();
		if(!valueDiskReplicaPairsDiskReplicaPair["DestinationDiskId"].isNull())
			diskReplicaPairsObject.destinationDiskId = valueDiskReplicaPairsDiskReplicaPair["DestinationDiskId"].asString();
		if(!valueDiskReplicaPairsDiskReplicaPair["PairName"].isNull())
			diskReplicaPairsObject.pairName = valueDiskReplicaPairsDiskReplicaPair["PairName"].asString();
		if(!valueDiskReplicaPairsDiskReplicaPair["Description"].isNull())
			diskReplicaPairsObject.description = valueDiskReplicaPairsDiskReplicaPair["Description"].asString();
		if(!valueDiskReplicaPairsDiskReplicaPair["Status"].isNull())
			diskReplicaPairsObject.status = valueDiskReplicaPairsDiskReplicaPair["Status"].asString();
		diskReplicaPairs_.push_back(diskReplicaPairsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeDiskReplicaPairsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeDiskReplicaPairsResult::DiskReplicaPair> DescribeDiskReplicaPairsResult::getDiskReplicaPairs()const
{
	return diskReplicaPairs_;
}

