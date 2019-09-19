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

#include <alibabacloud/emr/model/ListResourcePoolResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListResourcePoolResult::ListResourcePoolResult() :
	ServiceResult()
{}

ListResourcePoolResult::ListResourcePoolResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourcePoolResult::~ListResourcePoolResult()
{}

void ListResourcePoolResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoolInfoListNode = value["PoolInfoList"]["PoolInfo"];
	for (auto valuePoolInfoListPoolInfo : allPoolInfoListNode)
	{
		PoolInfo poolInfoListObject;
		auto allQueueListNode = allPoolInfoListNode["QueueList"]["Queue"];
		for (auto allPoolInfoListNodeQueueListQueue : allQueueListNode)
		{
			PoolInfo::Queue queueListObject;
			auto allEcmResourcePoolConfigList1Node = allQueueListNode["EcmResourcePoolConfigList"]["EcmResourcePoolConfig"];
			for (auto allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig : allEcmResourcePoolConfigList1Node)
			{
				PoolInfo::Queue::EcmResourcePoolConfig ecmResourcePoolConfigList1Object;
				if(!allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Id"].isNull())
					ecmResourcePoolConfigList1Object.id = std::stol(allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Id"].asString());
				if(!allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigKey"].isNull())
					ecmResourcePoolConfigList1Object.configKey = allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigKey"].asString();
				if(!allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigValue"].isNull())
					ecmResourcePoolConfigList1Object.configValue = allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigValue"].asString();
				if(!allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigType"].isNull())
					ecmResourcePoolConfigList1Object.configType = allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigType"].asString();
				if(!allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Category"].isNull())
					ecmResourcePoolConfigList1Object.category = allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Category"].asString();
				if(!allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Status"].isNull())
					ecmResourcePoolConfigList1Object.status = allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Status"].asString();
				if(!allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Note"].isNull())
					ecmResourcePoolConfigList1Object.note = allQueueListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Note"].asString();
				queueListObject.ecmResourcePoolConfigList1.push_back(ecmResourcePoolConfigList1Object);
			}
			auto ecmResourceQueueNode = value["EcmResourceQueue"];
			if(!ecmResourceQueueNode["Id"].isNull())
				queueListObject.ecmResourceQueue.id = std::stol(ecmResourceQueueNode["Id"].asString());
			if(!ecmResourceQueueNode["Name"].isNull())
				queueListObject.ecmResourceQueue.name = ecmResourceQueueNode["Name"].asString();
			if(!ecmResourceQueueNode["QualifiedName"].isNull())
				queueListObject.ecmResourceQueue.qualifiedName = ecmResourceQueueNode["QualifiedName"].asString();
			if(!ecmResourceQueueNode["QueueType"].isNull())
				queueListObject.ecmResourceQueue.queueType = ecmResourceQueueNode["QueueType"].asString();
			if(!ecmResourceQueueNode["ParentQueueId"].isNull())
				queueListObject.ecmResourceQueue.parentQueueId = std::stol(ecmResourceQueueNode["ParentQueueId"].asString());
			if(!ecmResourceQueueNode["Leaf"].isNull())
				queueListObject.ecmResourceQueue.leaf = ecmResourceQueueNode["Leaf"].asString() == "true";
			if(!ecmResourceQueueNode["Status"].isNull())
				queueListObject.ecmResourceQueue.status = ecmResourceQueueNode["Status"].asString();
			if(!ecmResourceQueueNode["UserId"].isNull())
				queueListObject.ecmResourceQueue.userId = ecmResourceQueueNode["UserId"].asString();
			if(!ecmResourceQueueNode["ResourcePoolId"].isNull())
				queueListObject.ecmResourceQueue.resourcePoolId = std::stol(ecmResourceQueueNode["ResourcePoolId"].asString());
			poolInfoListObject.queueList.push_back(queueListObject);
		}
		auto allEcmResourcePoolConfigListNode = allPoolInfoListNode["EcmResourcePoolConfigList"]["EcmResourcePoolConfig"];
		for (auto allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig : allEcmResourcePoolConfigListNode)
		{
			PoolInfo::EcmResourcePoolConfig2 ecmResourcePoolConfigListObject;
			if(!allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Id"].isNull())
				ecmResourcePoolConfigListObject.id = std::stol(allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Id"].asString());
			if(!allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigKey"].isNull())
				ecmResourcePoolConfigListObject.configKey = allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigKey"].asString();
			if(!allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigValue"].isNull())
				ecmResourcePoolConfigListObject.configValue = allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigValue"].asString();
			if(!allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigType"].isNull())
				ecmResourcePoolConfigListObject.configType = allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["ConfigType"].asString();
			if(!allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Category"].isNull())
				ecmResourcePoolConfigListObject.category = allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Category"].asString();
			if(!allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Status"].isNull())
				ecmResourcePoolConfigListObject.status = allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Status"].asString();
			if(!allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Note"].isNull())
				ecmResourcePoolConfigListObject.note = allPoolInfoListNodeEcmResourcePoolConfigListEcmResourcePoolConfig["Note"].asString();
			poolInfoListObject.ecmResourcePoolConfigList.push_back(ecmResourcePoolConfigListObject);
		}
		auto ecmResourcePoolNode = value["EcmResourcePool"];
		if(!ecmResourcePoolNode["Id"].isNull())
			poolInfoListObject.ecmResourcePool.id = std::stol(ecmResourcePoolNode["Id"].asString());
		if(!ecmResourcePoolNode["Name"].isNull())
			poolInfoListObject.ecmResourcePool.name = ecmResourcePoolNode["Name"].asString();
		if(!ecmResourcePoolNode["PoolType"].isNull())
			poolInfoListObject.ecmResourcePool.poolType = ecmResourcePoolNode["PoolType"].asString();
		if(!ecmResourcePoolNode["Active"].isNull())
			poolInfoListObject.ecmResourcePool.active = ecmResourcePoolNode["Active"].asString() == "true";
		if(!ecmResourcePoolNode["Note"].isNull())
			poolInfoListObject.ecmResourcePool.note = ecmResourcePoolNode["Note"].asString();
		if(!ecmResourcePoolNode["UserId"].isNull())
			poolInfoListObject.ecmResourcePool.userId = ecmResourcePoolNode["UserId"].asString();
		if(!ecmResourcePoolNode["YarnSiteConfig"].isNull())
			poolInfoListObject.ecmResourcePool.yarnSiteConfig = ecmResourcePoolNode["YarnSiteConfig"].asString();
		poolInfoList_.push_back(poolInfoListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListResourcePoolResult::getPageSize()const
{
	return pageSize_;
}

int ListResourcePoolResult::getPageNumber()const
{
	return pageNumber_;
}

int ListResourcePoolResult::getTotal()const
{
	return total_;
}

std::vector<ListResourcePoolResult::PoolInfo> ListResourcePoolResult::getPoolInfoList()const
{
	return poolInfoList_;
}

