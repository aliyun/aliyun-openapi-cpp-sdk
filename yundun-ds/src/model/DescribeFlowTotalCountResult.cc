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

#include <alibabacloud/yundun-ds/model/DescribeFlowTotalCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeFlowTotalCountResult::DescribeFlowTotalCountResult() :
	ServiceResult()
{}

DescribeFlowTotalCountResult::DescribeFlowTotalCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFlowTotalCountResult::~DescribeFlowTotalCountResult()
{}

void DescribeFlowTotalCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto flowCountNode = value["FlowCount"];
	auto dataHubNode = flowCountNode["DataHub"];
	auto projectNode = dataHubNode["Project"];
	if(!projectNode["TotalCount"].isNull())
		flowCount_.dataHub.project.totalCount = std::stol(projectNode["TotalCount"].asString());
	if(!projectNode["LastCount"].isNull())
		flowCount_.dataHub.project.lastCount = std::stol(projectNode["LastCount"].asString());
	auto topicNode = dataHubNode["Topic"];
	if(!topicNode["TotalCount"].isNull())
		flowCount_.dataHub.topic.totalCount = std::stol(topicNode["TotalCount"].asString());
	if(!topicNode["LastCount"].isNull())
		flowCount_.dataHub.topic.lastCount = std::stol(topicNode["LastCount"].asString());
	auto subscriptionNode = dataHubNode["Subscription"];
	if(!subscriptionNode["TotalCount"].isNull())
		flowCount_.dataHub.subscription.totalCount = std::stol(subscriptionNode["TotalCount"].asString());
	if(!subscriptionNode["LastCount"].isNull())
		flowCount_.dataHub.subscription.lastCount = std::stol(subscriptionNode["LastCount"].asString());
	auto connectorNode = dataHubNode["Connector"];
	if(!connectorNode["TotalCount"].isNull())
		flowCount_.dataHub.connector.totalCount = std::stol(connectorNode["TotalCount"].asString());
	if(!connectorNode["LastCount"].isNull())
		flowCount_.dataHub.connector.lastCount = std::stol(connectorNode["LastCount"].asString());
	auto cDPNode = flowCountNode["CDP"];
	auto inputInstanceCountNode = cDPNode["InputInstanceCount"];
	if(!inputInstanceCountNode["TotalCount"].isNull())
		flowCount_.cDP.inputInstanceCount.totalCount = std::stol(inputInstanceCountNode["TotalCount"].asString());
	auto inputRecordCountNode = cDPNode["InputRecordCount"];
	if(!inputRecordCountNode["TotalCount"].isNull())
		flowCount_.cDP.inputRecordCount.totalCount = std::stol(inputRecordCountNode["TotalCount"].asString());
	auto outputInstanceCountNode = cDPNode["OutputInstanceCount"];
	if(!outputInstanceCountNode["TotalCount"].isNull())
		flowCount_.cDP.outputInstanceCount.totalCount = std::stol(outputInstanceCountNode["TotalCount"].asString());
	auto outputRecordCountNode = cDPNode["OutputRecordCount"];
	if(!outputRecordCountNode["TotalCount"].isNull())
		flowCount_.cDP.outputRecordCount.totalCount = std::stol(outputRecordCountNode["TotalCount"].asString());

}

DescribeFlowTotalCountResult::FlowCount DescribeFlowTotalCountResult::getFlowCount()const
{
	return flowCount_;
}

