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

#include <alibabacloud/emr/model/ListFlowClusterAllResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowClusterAllResult::ListFlowClusterAllResult() :
	ServiceResult()
{}

ListFlowClusterAllResult::ListFlowClusterAllResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowClusterAllResult::~ListFlowClusterAllResult()
{}

void ListFlowClusterAllResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["ClusterInfo"];
	for (auto valueClustersClusterInfo : allClustersNode)
	{
		ClusterInfo clustersObject;
		if(!valueClustersClusterInfo["Id"].isNull())
			clustersObject.id = valueClustersClusterInfo["Id"].asString();
		if(!valueClustersClusterInfo["Name"].isNull())
			clustersObject.name = valueClustersClusterInfo["Name"].asString();
		if(!valueClustersClusterInfo["Type"].isNull())
			clustersObject.type = valueClustersClusterInfo["Type"].asString();
		if(!valueClustersClusterInfo["CreateTime"].isNull())
			clustersObject.createTime = std::stol(valueClustersClusterInfo["CreateTime"].asString());
		if(!valueClustersClusterInfo["RunningTime"].isNull())
			clustersObject.runningTime = std::stoi(valueClustersClusterInfo["RunningTime"].asString());
		if(!valueClustersClusterInfo["Status"].isNull())
			clustersObject.status = valueClustersClusterInfo["Status"].asString();
		if(!valueClustersClusterInfo["ChargeType"].isNull())
			clustersObject.chargeType = valueClustersClusterInfo["ChargeType"].asString();
		if(!valueClustersClusterInfo["ExpiredTime"].isNull())
			clustersObject.expiredTime = std::stol(valueClustersClusterInfo["ExpiredTime"].asString());
		if(!valueClustersClusterInfo["Period"].isNull())
			clustersObject.period = std::stoi(valueClustersClusterInfo["Period"].asString());
		if(!valueClustersClusterInfo["HasUncompletedOrder"].isNull())
			clustersObject.hasUncompletedOrder = valueClustersClusterInfo["HasUncompletedOrder"].asString() == "true";
		if(!valueClustersClusterInfo["OrderList"].isNull())
			clustersObject.orderList = valueClustersClusterInfo["OrderList"].asString();
		if(!valueClustersClusterInfo["CreateResource"].isNull())
			clustersObject.createResource = valueClustersClusterInfo["CreateResource"].asString();
		if(!valueClustersClusterInfo["K8sClusterId"].isNull())
			clustersObject.k8sClusterId = valueClustersClusterInfo["K8sClusterId"].asString();
		auto orderTaskInfoNode = value["OrderTaskInfo"];
		if(!orderTaskInfoNode["TargetCount"].isNull())
			clustersObject.orderTaskInfo.targetCount = std::stoi(orderTaskInfoNode["TargetCount"].asString());
		if(!orderTaskInfoNode["CurrentCount"].isNull())
			clustersObject.orderTaskInfo.currentCount = std::stoi(orderTaskInfoNode["CurrentCount"].asString());
		if(!orderTaskInfoNode["OrderIdList"].isNull())
			clustersObject.orderTaskInfo.orderIdList = orderTaskInfoNode["OrderIdList"].asString();
		auto failReasonNode = value["FailReason"];
		if(!failReasonNode["ErrorCode"].isNull())
			clustersObject.failReason.errorCode = failReasonNode["ErrorCode"].asString();
		if(!failReasonNode["ErrorMsg"].isNull())
			clustersObject.failReason.errorMsg = failReasonNode["ErrorMsg"].asString();
		if(!failReasonNode["RequestId"].isNull())
			clustersObject.failReason.requestId = failReasonNode["RequestId"].asString();
		clusters_.push_back(clustersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListFlowClusterAllResult::getTotalCount()const
{
	return totalCount_;
}

int ListFlowClusterAllResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowClusterAllResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListFlowClusterAllResult::ClusterInfo> ListFlowClusterAllResult::getClusters()const
{
	return clusters_;
}

