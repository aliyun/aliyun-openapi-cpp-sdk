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

#include <alibabacloud/vpc/model/DescribeExpressConnectTrafficQosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeExpressConnectTrafficQosResult::DescribeExpressConnectTrafficQosResult() :
	ServiceResult()
{}

DescribeExpressConnectTrafficQosResult::DescribeExpressConnectTrafficQosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExpressConnectTrafficQosResult::~DescribeExpressConnectTrafficQosResult()
{}

void DescribeExpressConnectTrafficQosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQosListNode = value["QosList"]["qosListItem"];
	for (auto valueQosListqosListItem : allQosListNode)
	{
		QosListItem qosListObject;
		if(!valueQosListqosListItem["QosId"].isNull())
			qosListObject.qosId = valueQosListqosListItem["QosId"].asString();
		if(!valueQosListqosListItem["QosName"].isNull())
			qosListObject.qosName = valueQosListqosListItem["QosName"].asString();
		if(!valueQosListqosListItem["QosDescription"].isNull())
			qosListObject.qosDescription = valueQosListqosListItem["QosDescription"].asString();
		if(!valueQosListqosListItem["Status"].isNull())
			qosListObject.status = valueQosListqosListItem["Status"].asString();
		if(!valueQosListqosListItem["Progressing"].isNull())
			qosListObject.progressing = std::stoi(valueQosListqosListItem["Progressing"].asString());
		if(!valueQosListqosListItem["ResourceGroupId"].isNull())
			qosListObject.resourceGroupId = valueQosListqosListItem["ResourceGroupId"].asString();
		auto allAssociatedInstanceListNode = valueQosListqosListItem["AssociatedInstanceList"]["associatedInstanceListItem"];
		for (auto valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem : allAssociatedInstanceListNode)
		{
			QosListItem::AssociatedInstanceListItem associatedInstanceListObject;
			if(!valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem["InstanceId"].isNull())
				associatedInstanceListObject.instanceId = valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem["InstanceId"].asString();
			if(!valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem["InstanceType"].isNull())
				associatedInstanceListObject.instanceType = valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem["InstanceType"].asString();
			if(!valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem["InstanceStatus"].isNull())
				associatedInstanceListObject.instanceStatus = valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem["InstanceStatus"].asString();
			if(!valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem["InstanceProgressing"].isNull())
				associatedInstanceListObject.instanceProgressing = std::stoi(valueQosListqosListItemAssociatedInstanceListassociatedInstanceListItem["InstanceProgressing"].asString());
			qosListObject.associatedInstanceList.push_back(associatedInstanceListObject);
		}
		auto allQueueListNode = valueQosListqosListItem["QueueList"]["queueListItem"];
		for (auto valueQosListqosListItemQueueListqueueListItem : allQueueListNode)
		{
			QosListItem::QueueListItem queueListObject;
			if(!valueQosListqosListItemQueueListqueueListItem["QosId"].isNull())
				queueListObject.qosId = valueQosListqosListItemQueueListqueueListItem["QosId"].asString();
			if(!valueQosListqosListItemQueueListqueueListItem["QueueId"].isNull())
				queueListObject.queueId = valueQosListqosListItemQueueListqueueListItem["QueueId"].asString();
			if(!valueQosListqosListItemQueueListqueueListItem["QueueType"].isNull())
				queueListObject.queueType = valueQosListqosListItemQueueListqueueListItem["QueueType"].asString();
			if(!valueQosListqosListItemQueueListqueueListItem["BandwidthPercent"].isNull())
				queueListObject.bandwidthPercent = valueQosListqosListItemQueueListqueueListItem["BandwidthPercent"].asString();
			if(!valueQosListqosListItemQueueListqueueListItem["QueueName"].isNull())
				queueListObject.queueName = valueQosListqosListItemQueueListqueueListItem["QueueName"].asString();
			if(!valueQosListqosListItemQueueListqueueListItem["QueueDescription"].isNull())
				queueListObject.queueDescription = valueQosListqosListItemQueueListqueueListItem["QueueDescription"].asString();
			if(!valueQosListqosListItemQueueListqueueListItem["Status"].isNull())
				queueListObject.status = valueQosListqosListItemQueueListqueueListItem["Status"].asString();
			qosListObject.queueList.push_back(queueListObject);
		}
		auto allTagsNode = valueQosListqosListItem["Tags"]["tagsItem"];
		for (auto valueQosListqosListItemTagstagsItem : allTagsNode)
		{
			QosListItem::TagsItem tagsObject;
			if(!valueQosListqosListItemTagstagsItem["Key"].isNull())
				tagsObject.key = valueQosListqosListItemTagstagsItem["Key"].asString();
			if(!valueQosListqosListItemTagstagsItem["Value"].isNull())
				tagsObject.value = valueQosListqosListItemTagstagsItem["Value"].asString();
			qosListObject.tags.push_back(tagsObject);
		}
		qosList_.push_back(qosListObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = value["Count"].asString();

}

int DescribeExpressConnectTrafficQosResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeExpressConnectTrafficQosResult::getNextToken()const
{
	return nextToken_;
}

int DescribeExpressConnectTrafficQosResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeExpressConnectTrafficQosResult::QosListItem> DescribeExpressConnectTrafficQosResult::getQosList()const
{
	return qosList_;
}

std::string DescribeExpressConnectTrafficQosResult::getCount()const
{
	return count_;
}

