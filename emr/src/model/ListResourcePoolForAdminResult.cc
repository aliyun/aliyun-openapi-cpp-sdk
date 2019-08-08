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

#include <alibabacloud/emr/model/ListResourcePoolForAdminResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListResourcePoolForAdminResult::ListResourcePoolForAdminResult() :
	ServiceResult()
{}

ListResourcePoolForAdminResult::ListResourcePoolForAdminResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourcePoolForAdminResult::~ListResourcePoolForAdminResult()
{}

void ListResourcePoolForAdminResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPoolInfoList = value["PoolInfoList"]["PoolInfo"];
	for (auto value : allPoolInfoList)
	{
		PoolInfo poolInfoListObject;
		auto allQueueList = value["QueueList"]["Queue"];
		for (auto value : allQueueList)
		{
			PoolInfo::Queue queueListObject;
			auto allEcmResourcePoolConfigList1 = value["EcmResourcePoolConfigList"]["EcmResourcePoolConfig"];
			for (auto value : allEcmResourcePoolConfigList1)
			{
				PoolInfo::Queue::EcmResourcePoolConfig ecmResourcePoolConfigList1Object;
				if(!value["Id"].isNull())
					ecmResourcePoolConfigList1Object.id = std::stol(value["Id"].asString());
				if(!value["ConfigKey"].isNull())
					ecmResourcePoolConfigList1Object.configKey = value["ConfigKey"].asString();
				if(!value["ConfigValue"].isNull())
					ecmResourcePoolConfigList1Object.configValue = value["ConfigValue"].asString();
				if(!value["ConfigType"].isNull())
					ecmResourcePoolConfigList1Object.configType = value["ConfigType"].asString();
				if(!value["Category"].isNull())
					ecmResourcePoolConfigList1Object.category = value["Category"].asString();
				if(!value["Status"].isNull())
					ecmResourcePoolConfigList1Object.status = value["Status"].asString();
				if(!value["Note"].isNull())
					ecmResourcePoolConfigList1Object.note = value["Note"].asString();
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
		auto allEcmResourcePoolConfigList = value["EcmResourcePoolConfigList"]["EcmResourcePoolConfig"];
		for (auto value : allEcmResourcePoolConfigList)
		{
			PoolInfo::EcmResourcePoolConfig2 ecmResourcePoolConfigListObject;
			if(!value["Id"].isNull())
				ecmResourcePoolConfigListObject.id = std::stol(value["Id"].asString());
			if(!value["ConfigKey"].isNull())
				ecmResourcePoolConfigListObject.configKey = value["ConfigKey"].asString();
			if(!value["ConfigValue"].isNull())
				ecmResourcePoolConfigListObject.configValue = value["ConfigValue"].asString();
			if(!value["ConfigType"].isNull())
				ecmResourcePoolConfigListObject.configType = value["ConfigType"].asString();
			if(!value["Category"].isNull())
				ecmResourcePoolConfigListObject.category = value["Category"].asString();
			if(!value["Status"].isNull())
				ecmResourcePoolConfigListObject.status = value["Status"].asString();
			if(!value["Note"].isNull())
				ecmResourcePoolConfigListObject.note = value["Note"].asString();
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

int ListResourcePoolForAdminResult::getPageSize()const
{
	return pageSize_;
}

int ListResourcePoolForAdminResult::getPageNumber()const
{
	return pageNumber_;
}

int ListResourcePoolForAdminResult::getTotal()const
{
	return total_;
}

std::vector<ListResourcePoolForAdminResult::PoolInfo> ListResourcePoolForAdminResult::getPoolInfoList()const
{
	return poolInfoList_;
}

