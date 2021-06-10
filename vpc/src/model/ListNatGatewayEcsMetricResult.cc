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

#include <alibabacloud/vpc/model/ListNatGatewayEcsMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListNatGatewayEcsMetricResult::ListNatGatewayEcsMetricResult() :
	ServiceResult()
{}

ListNatGatewayEcsMetricResult::ListNatGatewayEcsMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNatGatewayEcsMetricResult::~ListNatGatewayEcsMetricResult()
{}

void ListNatGatewayEcsMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMetricDataListNode = value["MetricDataList"]["MetricData"];
	for (auto valueMetricDataListMetricData : allMetricDataListNode)
	{
		MetricData metricDataListObject;
		if(!valueMetricDataListMetricData["NatGatewayId"].isNull())
			metricDataListObject.natGatewayId = valueMetricDataListMetricData["NatGatewayId"].asString();
		if(!valueMetricDataListMetricData["PrivateIpAddress"].isNull())
			metricDataListObject.privateIpAddress = valueMetricDataListMetricData["PrivateIpAddress"].asString();
		if(!valueMetricDataListMetricData["Timestamp"].isNull())
			metricDataListObject.timestamp = std::stol(valueMetricDataListMetricData["Timestamp"].asString());
		if(!valueMetricDataListMetricData["ActiveSessionNum"].isNull())
			metricDataListObject.activeSessionNum = std::stol(valueMetricDataListMetricData["ActiveSessionNum"].asString());
		if(!valueMetricDataListMetricData["NewSessionRate"].isNull())
			metricDataListObject.newSessionRate = std::stol(valueMetricDataListMetricData["NewSessionRate"].asString());
		if(!valueMetricDataListMetricData["RxBps"].isNull())
			metricDataListObject.rxBps = std::stol(valueMetricDataListMetricData["RxBps"].asString());
		if(!valueMetricDataListMetricData["TxBps"].isNull())
			metricDataListObject.txBps = std::stol(valueMetricDataListMetricData["TxBps"].asString());
		if(!valueMetricDataListMetricData["RxPps"].isNull())
			metricDataListObject.rxPps = std::stol(valueMetricDataListMetricData["RxPps"].asString());
		if(!valueMetricDataListMetricData["TxPps"].isNull())
			metricDataListObject.txPps = std::stol(valueMetricDataListMetricData["TxPps"].asString());
		metricDataList_.push_back(metricDataListObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListNatGatewayEcsMetricResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListNatGatewayEcsMetricResult::MetricData> ListNatGatewayEcsMetricResult::getMetricDataList()const
{
	return metricDataList_;
}

int ListNatGatewayEcsMetricResult::getMaxResults()const
{
	return maxResults_;
}

