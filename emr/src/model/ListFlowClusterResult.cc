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

#include <alibabacloud/emr/model/ListFlowClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowClusterResult::ListFlowClusterResult() :
	ServiceResult()
{}

ListFlowClusterResult::ListFlowClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowClusterResult::~ListFlowClusterResult()
{}

void ListFlowClusterResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allClusters = value["Clusters"]["ClusterInfo"];
	for (auto value : allClusters)
	{
		ClusterInfo clustersObject;
		if(!value["Id"].isNull())
			clustersObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			clustersObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			clustersObject.type = value["Type"].asString();
		if(!value["CreateTime"].isNull())
			clustersObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["RunningTime"].isNull())
			clustersObject.runningTime = std::stoi(value["RunningTime"].asString());
		if(!value["Status"].isNull())
			clustersObject.status = value["Status"].asString();
		if(!value["ChargeType"].isNull())
			clustersObject.chargeType = value["ChargeType"].asString();
		if(!value["ExpiredTime"].isNull())
			clustersObject.expiredTime = std::stol(value["ExpiredTime"].asString());
		if(!value["Period"].isNull())
			clustersObject.period = std::stoi(value["Period"].asString());
		if(!value["HasUncompletedOrder"].isNull())
			clustersObject.hasUncompletedOrder = value["HasUncompletedOrder"].asString() == "true";
		if(!value["OrderList"].isNull())
			clustersObject.orderList = value["OrderList"].asString();
		if(!value["CreateResource"].isNull())
			clustersObject.createResource = value["CreateResource"].asString();
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

int ListFlowClusterResult::getTotalCount()const
{
	return totalCount_;
}

int ListFlowClusterResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowClusterResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListFlowClusterResult::ClusterInfo> ListFlowClusterResult::getClusters()const
{
	return clusters_;
}

