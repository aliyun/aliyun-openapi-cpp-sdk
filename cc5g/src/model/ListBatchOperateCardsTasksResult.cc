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

#include <alibabacloud/cc5g/model/ListBatchOperateCardsTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

ListBatchOperateCardsTasksResult::ListBatchOperateCardsTasksResult() :
	ServiceResult()
{}

ListBatchOperateCardsTasksResult::ListBatchOperateCardsTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBatchOperateCardsTasksResult::~ListBatchOperateCardsTasksResult()
{}

void ListBatchOperateCardsTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBatchOperateCardsTasksNode = value["BatchOperateCardsTasks"]["BatchOperateCardsTask"];
	for (auto valueBatchOperateCardsTasksBatchOperateCardsTask : allBatchOperateCardsTasksNode)
	{
		BatchOperateCardsTask batchOperateCardsTasksObject;
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["BatchOperateCardsTaskId"].isNull())
			batchOperateCardsTasksObject.batchOperateCardsTaskId = valueBatchOperateCardsTasksBatchOperateCardsTask["BatchOperateCardsTaskId"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["Status"].isNull())
			batchOperateCardsTasksObject.status = valueBatchOperateCardsTasksBatchOperateCardsTask["Status"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["OperateType"].isNull())
			batchOperateCardsTasksObject.operateType = valueBatchOperateCardsTasksBatchOperateCardsTask["OperateType"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["Threshold"].isNull())
			batchOperateCardsTasksObject.threshold = valueBatchOperateCardsTasksBatchOperateCardsTask["Threshold"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["EffectType"].isNull())
			batchOperateCardsTasksObject.effectType = valueBatchOperateCardsTasksBatchOperateCardsTask["EffectType"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["IccidsOssFilePath"].isNull())
			batchOperateCardsTasksObject.iccidsOssFilePath = valueBatchOperateCardsTasksBatchOperateCardsTask["IccidsOssFilePath"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["OperateResultOssFilePath"].isNull())
			batchOperateCardsTasksObject.operateResultOssFilePath = valueBatchOperateCardsTasksBatchOperateCardsTask["OperateResultOssFilePath"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["Description"].isNull())
			batchOperateCardsTasksObject.description = valueBatchOperateCardsTasksBatchOperateCardsTask["Description"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["Name"].isNull())
			batchOperateCardsTasksObject.name = valueBatchOperateCardsTasksBatchOperateCardsTask["Name"].asString();
		if(!valueBatchOperateCardsTasksBatchOperateCardsTask["CreateTime"].isNull())
			batchOperateCardsTasksObject.createTime = valueBatchOperateCardsTasksBatchOperateCardsTask["CreateTime"].asString();
		auto allWirelessCloudConnectorsNode = valueBatchOperateCardsTasksBatchOperateCardsTask["WirelessCloudConnectors"]["WirelessCloudConnector"];
		for (auto valueBatchOperateCardsTasksBatchOperateCardsTaskWirelessCloudConnectorsWirelessCloudConnector : allWirelessCloudConnectorsNode)
		{
			BatchOperateCardsTask::WirelessCloudConnector wirelessCloudConnectorsObject;
			if(!valueBatchOperateCardsTasksBatchOperateCardsTaskWirelessCloudConnectorsWirelessCloudConnector["WirelessCloudConnectorId"].isNull())
				wirelessCloudConnectorsObject.wirelessCloudConnectorId = valueBatchOperateCardsTasksBatchOperateCardsTaskWirelessCloudConnectorsWirelessCloudConnector["WirelessCloudConnectorId"].asString();
			if(!valueBatchOperateCardsTasksBatchOperateCardsTaskWirelessCloudConnectorsWirelessCloudConnector["Status"].isNull())
				wirelessCloudConnectorsObject.status = valueBatchOperateCardsTasksBatchOperateCardsTaskWirelessCloudConnectorsWirelessCloudConnector["Status"].asString();
			batchOperateCardsTasksObject.wirelessCloudConnectors.push_back(wirelessCloudConnectorsObject);
		}
		batchOperateCardsTasks_.push_back(batchOperateCardsTasksObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListBatchOperateCardsTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListBatchOperateCardsTasksResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListBatchOperateCardsTasksResult::BatchOperateCardsTask> ListBatchOperateCardsTasksResult::getBatchOperateCardsTasks()const
{
	return batchOperateCardsTasks_;
}

std::string ListBatchOperateCardsTasksResult::getMaxResults()const
{
	return maxResults_;
}

