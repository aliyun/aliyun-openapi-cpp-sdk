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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterServiceListNode = value["ClusterServiceList"]["ClusterService"];
	for (auto valueClusterServiceListClusterService : allClusterServiceListNode)
	{
		ClusterService clusterServiceListObject;
		if(!valueClusterServiceListClusterService["ServiceName"].isNull())
			clusterServiceListObject.serviceName = valueClusterServiceListClusterService["ServiceName"].asString();
		if(!valueClusterServiceListClusterService["ServiceDisplayName"].isNull())
			clusterServiceListObject.serviceDisplayName = valueClusterServiceListClusterService["ServiceDisplayName"].asString();
		if(!valueClusterServiceListClusterService["ServiceVersion"].isNull())
			clusterServiceListObject.serviceVersion = valueClusterServiceListClusterService["ServiceVersion"].asString();
		if(!valueClusterServiceListClusterService["InstallStatus"].isNull())
			clusterServiceListObject.installStatus = valueClusterServiceListClusterService["InstallStatus"].asString() == "true";
		if(!valueClusterServiceListClusterService["ClientType"].isNull())
			clusterServiceListObject.clientType = valueClusterServiceListClusterService["ClientType"].asString() == "true";
		if(!valueClusterServiceListClusterService["ServiceStatus"].isNull())
			clusterServiceListObject.serviceStatus = valueClusterServiceListClusterService["ServiceStatus"].asString();
		if(!valueClusterServiceListClusterService["HealthStatus"].isNull())
			clusterServiceListObject.healthStatus = valueClusterServiceListClusterService["HealthStatus"].asString();
		if(!valueClusterServiceListClusterService["NeedRestartInfo"].isNull())
			clusterServiceListObject.needRestartInfo = valueClusterServiceListClusterService["NeedRestartInfo"].asString();
		if(!valueClusterServiceListClusterService["NotStartInfo"].isNull())
			clusterServiceListObject.notStartInfo = valueClusterServiceListClusterService["NotStartInfo"].asString();
		if(!valueClusterServiceListClusterService["AbnormalNum"].isNull())
			clusterServiceListObject.abnormalNum = std::stoi(valueClusterServiceListClusterService["AbnormalNum"].asString());
		if(!valueClusterServiceListClusterService["StoppedNum"].isNull())
			clusterServiceListObject.stoppedNum = std::stoi(valueClusterServiceListClusterService["StoppedNum"].asString());
		if(!valueClusterServiceListClusterService["NeedRestartNum"].isNull())
			clusterServiceListObject.needRestartNum = std::stoi(valueClusterServiceListClusterService["NeedRestartNum"].asString());
		if(!valueClusterServiceListClusterService["State"].isNull())
			clusterServiceListObject.state = valueClusterServiceListClusterService["State"].asString();
		auto allServiceActionListNode = valueClusterServiceListClusterService["ServiceActionList"]["ServiceAction"];
		for (auto valueClusterServiceListClusterServiceServiceActionListServiceAction : allServiceActionListNode)
		{
			ClusterService::ServiceAction serviceActionListObject;
			if(!valueClusterServiceListClusterServiceServiceActionListServiceAction["ServiceName"].isNull())
				serviceActionListObject.serviceName = valueClusterServiceListClusterServiceServiceActionListServiceAction["ServiceName"].asString();
			if(!valueClusterServiceListClusterServiceServiceActionListServiceAction["ComponentName"].isNull())
				serviceActionListObject.componentName = valueClusterServiceListClusterServiceServiceActionListServiceAction["ComponentName"].asString();
			if(!valueClusterServiceListClusterServiceServiceActionListServiceAction["ActionName"].isNull())
				serviceActionListObject.actionName = valueClusterServiceListClusterServiceServiceActionListServiceAction["ActionName"].asString();
			if(!valueClusterServiceListClusterServiceServiceActionListServiceAction["Command"].isNull())
				serviceActionListObject.command = valueClusterServiceListClusterServiceServiceActionListServiceAction["Command"].asString();
			if(!valueClusterServiceListClusterServiceServiceActionListServiceAction["DisplayName"].isNull())
				serviceActionListObject.displayName = valueClusterServiceListClusterServiceServiceActionListServiceAction["DisplayName"].asString();
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

