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

#include <alibabacloud/mse/model/ListClusterHealthCheckTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListClusterHealthCheckTaskResult::ListClusterHealthCheckTaskResult() :
	ServiceResult()
{}

ListClusterHealthCheckTaskResult::ListClusterHealthCheckTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterHealthCheckTaskResult::~ListClusterHealthCheckTaskResult()
{}

void ListClusterHealthCheckTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["ResultItem"];
	for (auto dataNodeResultResultItem : allResultNode)
	{
		Data::ResultItem resultItemObject;
		if(!dataNodeResultResultItem["Id"].isNull())
			resultItemObject.id = std::stoi(dataNodeResultResultItem["Id"].asString());
		if(!dataNodeResultResultItem["Score"].isNull())
			resultItemObject.score = std::stoi(dataNodeResultResultItem["Score"].asString());
		if(!dataNodeResultResultItem["TotalItem"].isNull())
			resultItemObject.totalItem = std::stoi(dataNodeResultResultItem["TotalItem"].asString());
		if(!dataNodeResultResultItem["TotalRisk"].isNull())
			resultItemObject.totalRisk = std::stoi(dataNodeResultResultItem["TotalRisk"].asString());
		if(!dataNodeResultResultItem["InstanceId"].isNull())
			resultItemObject.instanceId = dataNodeResultResultItem["InstanceId"].asString();
		if(!dataNodeResultResultItem["ClusterType"].isNull())
			resultItemObject.clusterType = dataNodeResultResultItem["ClusterType"].asString();
		if(!dataNodeResultResultItem["Type"].isNull())
			resultItemObject.type = dataNodeResultResultItem["Type"].asString();
		if(!dataNodeResultResultItem["Status"].isNull())
			resultItemObject.status = dataNodeResultResultItem["Status"].asString();
		if(!dataNodeResultResultItem["PrimaryUser"].isNull())
			resultItemObject.primaryUser = dataNodeResultResultItem["PrimaryUser"].asString();
		if(!dataNodeResultResultItem["Spec"].isNull())
			resultItemObject.spec = dataNodeResultResultItem["Spec"].asString();
		if(!dataNodeResultResultItem["Replica"].isNull())
			resultItemObject.replica = dataNodeResultResultItem["Replica"].asString();
		if(!dataNodeResultResultItem["VersionCode"].isNull())
			resultItemObject.versionCode = dataNodeResultResultItem["VersionCode"].asString();
		if(!dataNodeResultResultItem["AppVersion"].isNull())
			resultItemObject.appVersion = dataNodeResultResultItem["AppVersion"].asString();
		if(!dataNodeResultResultItem["ImageVersion"].isNull())
			resultItemObject.imageVersion = dataNodeResultResultItem["ImageVersion"].asString();
		if(!dataNodeResultResultItem["CreateTime"].isNull())
			resultItemObject.createTime = dataNodeResultResultItem["CreateTime"].asString();
		if(!dataNodeResultResultItem["UpdateTime"].isNull())
			resultItemObject.updateTime = dataNodeResultResultItem["UpdateTime"].asString();
		if(!dataNodeResultResultItem["ChargeType"].isNull())
			resultItemObject.chargeType = dataNodeResultResultItem["ChargeType"].asString();
		auto allRiskListNode = dataNodeResultResultItem["RiskList"]["RiskListItem"];
		for (auto dataNodeResultResultItemRiskListRiskListItem : allRiskListNode)
		{
			Data::ResultItem::RiskListItem riskListObject;
			if(!dataNodeResultResultItemRiskListRiskListItem["Id"].isNull())
				riskListObject.id = std::stoi(dataNodeResultResultItemRiskListRiskListItem["Id"].asString());
			if(!dataNodeResultResultItemRiskListRiskListItem["TaskId"].isNull())
				riskListObject.taskId = std::stol(dataNodeResultResultItemRiskListRiskListItem["TaskId"].asString());
			if(!dataNodeResultResultItemRiskListRiskListItem["RiskName"].isNull())
				riskListObject.riskName = dataNodeResultResultItemRiskListRiskListItem["RiskName"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["RiskCode"].isNull())
				riskListObject.riskCode = dataNodeResultResultItemRiskListRiskListItem["RiskCode"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["PrimaryUser"].isNull())
				riskListObject.primaryUser = dataNodeResultResultItemRiskListRiskListItem["PrimaryUser"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["Type"].isNull())
				riskListObject.type = std::stoi(dataNodeResultResultItemRiskListRiskListItem["Type"].asString());
			if(!dataNodeResultResultItemRiskListRiskListItem["Values"].isNull())
				riskListObject.values = dataNodeResultResultItemRiskListRiskListItem["Values"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["Module"].isNull())
				riskListObject.module = dataNodeResultResultItemRiskListRiskListItem["Module"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["RiskType"].isNull())
				riskListObject.riskType = dataNodeResultResultItemRiskListRiskListItem["RiskType"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["RiskLevel"].isNull())
				riskListObject.riskLevel = dataNodeResultResultItemRiskListRiskListItem["RiskLevel"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["Suggestion"].isNull())
				riskListObject.suggestion = dataNodeResultResultItemRiskListRiskListItem["Suggestion"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["Situation"].isNull())
				riskListObject.situation = dataNodeResultResultItemRiskListRiskListItem["Situation"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["Description"].isNull())
				riskListObject.description = dataNodeResultResultItemRiskListRiskListItem["Description"].asString();
			if(!dataNodeResultResultItemRiskListRiskListItem["Mute"].isNull())
				riskListObject.mute = dataNodeResultResultItemRiskListRiskListItem["Mute"].asString() == "true";
			if(!dataNodeResultResultItemRiskListRiskListItem["NoticeFeature"].isNull())
				riskListObject.noticeFeature = dataNodeResultResultItemRiskListRiskListItem["NoticeFeature"].asString() == "true";
			resultItemObject.riskList.push_back(riskListObject);
		}
		data_.result.push_back(resultItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string ListClusterHealthCheckTaskResult::getMessage()const
{
	return message_;
}

int ListClusterHealthCheckTaskResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListClusterHealthCheckTaskResult::Data ListClusterHealthCheckTaskResult::getData()const
{
	return data_;
}

std::string ListClusterHealthCheckTaskResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListClusterHealthCheckTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListClusterHealthCheckTaskResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int ListClusterHealthCheckTaskResult::getCode()const
{
	return code_;
}

bool ListClusterHealthCheckTaskResult::getSuccess()const
{
	return success_;
}

