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

#include <alibabacloud/emr/model/ListClusterServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterServiceResult::ListClusterServiceResult() :
	ServiceResult()
{}

ListClusterServiceResult::ListClusterServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterServiceResult::~ListClusterServiceResult()
{}

void ListClusterServiceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allClusterServiceList = value["ClusterServiceList"]["ClusterService"];
	for (auto value : allClusterServiceList)
	{
		ClusterService clusterServiceListObject;
		if(!value["ServiceName"].isNull())
			clusterServiceListObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceDisplayName"].isNull())
			clusterServiceListObject.serviceDisplayName = value["ServiceDisplayName"].asString();
		if(!value["ServiceVersion"].isNull())
			clusterServiceListObject.serviceVersion = value["ServiceVersion"].asString();
		if(!value["InstallStatus"].isNull())
			clusterServiceListObject.installStatus = value["InstallStatus"].asString() == "true";
		if(!value["ClientType"].isNull())
			clusterServiceListObject.clientType = value["ClientType"].asString() == "true";
		if(!value["ServiceStatus"].isNull())
			clusterServiceListObject.serviceStatus = value["ServiceStatus"].asString();
		if(!value["HealthStatus"].isNull())
			clusterServiceListObject.healthStatus = value["HealthStatus"].asString();
		if(!value["NeedRestartInfo"].isNull())
			clusterServiceListObject.needRestartInfo = value["NeedRestartInfo"].asString();
		if(!value["NotStartInfo"].isNull())
			clusterServiceListObject.notStartInfo = value["NotStartInfo"].asString();
		if(!value["AbnormalNum"].isNull())
			clusterServiceListObject.abnormalNum = std::stoi(value["AbnormalNum"].asString());
		if(!value["StoppedNum"].isNull())
			clusterServiceListObject.stoppedNum = std::stoi(value["StoppedNum"].asString());
		if(!value["NeedRestartNum"].isNull())
			clusterServiceListObject.needRestartNum = std::stoi(value["NeedRestartNum"].asString());
		auto allServiceActionList = value["ServiceActionList"]["ServiceAction"];
		for (auto value : allServiceActionList)
		{
			ClusterService::ServiceAction serviceActionListObject;
			if(!value["ServiceName"].isNull())
				serviceActionListObject.serviceName = value["ServiceName"].asString();
			if(!value["ComponentName"].isNull())
				serviceActionListObject.componentName = value["ComponentName"].asString();
			if(!value["ActionName"].isNull())
				serviceActionListObject.actionName = value["ActionName"].asString();
			if(!value["Command"].isNull())
				serviceActionListObject.command = value["Command"].asString();
			if(!value["DisplayName"].isNull())
				serviceActionListObject.displayName = value["DisplayName"].asString();
			clusterServiceListObject.serviceActionList.push_back(serviceActionListObject);
		}
		clusterServiceList_.push_back(clusterServiceListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListClusterServiceResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterServiceResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterServiceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListClusterServiceResult::ClusterService> ListClusterServiceResult::getClusterServiceList()const
{
	return clusterServiceList_;
}

