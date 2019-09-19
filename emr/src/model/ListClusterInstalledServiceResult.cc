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

#include <alibabacloud/emr/model/ListClusterInstalledServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterInstalledServiceResult::ListClusterInstalledServiceResult() :
	ServiceResult()
{}

ListClusterInstalledServiceResult::ListClusterInstalledServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterInstalledServiceResult::~ListClusterInstalledServiceResult()
{}

void ListClusterInstalledServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterInstalledServiceListNode = value["ClusterInstalledServiceList"]["ClusterInstalledService"];
	for (auto valueClusterInstalledServiceListClusterInstalledService : allClusterInstalledServiceListNode)
	{
		ClusterInstalledService clusterInstalledServiceListObject;
		if(!valueClusterInstalledServiceListClusterInstalledService["ServiceName"].isNull())
			clusterInstalledServiceListObject.serviceName = valueClusterInstalledServiceListClusterInstalledService["ServiceName"].asString();
		if(!valueClusterInstalledServiceListClusterInstalledService["ServiceDisplayName"].isNull())
			clusterInstalledServiceListObject.serviceDisplayName = valueClusterInstalledServiceListClusterInstalledService["ServiceDisplayName"].asString();
		if(!valueClusterInstalledServiceListClusterInstalledService["ServiceVersion"].isNull())
			clusterInstalledServiceListObject.serviceVersion = valueClusterInstalledServiceListClusterInstalledService["ServiceVersion"].asString();
		if(!valueClusterInstalledServiceListClusterInstalledService["ServiceEcmVersion"].isNull())
			clusterInstalledServiceListObject.serviceEcmVersion = valueClusterInstalledServiceListClusterInstalledService["ServiceEcmVersion"].asString();
		if(!valueClusterInstalledServiceListClusterInstalledService["serviceStatus"].isNull())
			clusterInstalledServiceListObject.serviceStatus = valueClusterInstalledServiceListClusterInstalledService["serviceStatus"].asString();
		if(!valueClusterInstalledServiceListClusterInstalledService["onlyClient"].isNull())
			clusterInstalledServiceListObject.onlyClient = valueClusterInstalledServiceListClusterInstalledService["onlyClient"].asString() == "true";
		if(!valueClusterInstalledServiceListClusterInstalledService["notStartedNum"].isNull())
			clusterInstalledServiceListObject.notStartedNum = std::stoi(valueClusterInstalledServiceListClusterInstalledService["notStartedNum"].asString());
		if(!valueClusterInstalledServiceListClusterInstalledService["needRestartNum"].isNull())
			clusterInstalledServiceListObject.needRestartNum = std::stoi(valueClusterInstalledServiceListClusterInstalledService["needRestartNum"].asString());
		if(!valueClusterInstalledServiceListClusterInstalledService["abnormalNum"].isNull())
			clusterInstalledServiceListObject.abnormalNum = std::stoi(valueClusterInstalledServiceListClusterInstalledService["abnormalNum"].asString());
		if(!valueClusterInstalledServiceListClusterInstalledService["comment"].isNull())
			clusterInstalledServiceListObject.comment = valueClusterInstalledServiceListClusterInstalledService["comment"].asString();
		auto allServiceActionListNode = allClusterInstalledServiceListNode["ServiceActionList"]["ServiceAction"];
		for (auto allClusterInstalledServiceListNodeServiceActionListServiceAction : allServiceActionListNode)
		{
			ClusterInstalledService::ServiceAction serviceActionListObject;
			if(!allClusterInstalledServiceListNodeServiceActionListServiceAction["ServiceName"].isNull())
				serviceActionListObject.serviceName = allClusterInstalledServiceListNodeServiceActionListServiceAction["ServiceName"].asString();
			if(!allClusterInstalledServiceListNodeServiceActionListServiceAction["ComponentName"].isNull())
				serviceActionListObject.componentName = allClusterInstalledServiceListNodeServiceActionListServiceAction["ComponentName"].asString();
			if(!allClusterInstalledServiceListNodeServiceActionListServiceAction["ActionName"].isNull())
				serviceActionListObject.actionName = allClusterInstalledServiceListNodeServiceActionListServiceAction["ActionName"].asString();
			if(!allClusterInstalledServiceListNodeServiceActionListServiceAction["Command"].isNull())
				serviceActionListObject.command = allClusterInstalledServiceListNodeServiceActionListServiceAction["Command"].asString();
			if(!allClusterInstalledServiceListNodeServiceActionListServiceAction["DisplayName"].isNull())
				serviceActionListObject.displayName = allClusterInstalledServiceListNodeServiceActionListServiceAction["DisplayName"].asString();
			clusterInstalledServiceListObject.serviceActionList.push_back(serviceActionListObject);
		}
		clusterInstalledServiceList_.push_back(clusterInstalledServiceListObject);
	}

}

std::vector<ListClusterInstalledServiceResult::ClusterInstalledService> ListClusterInstalledServiceResult::getClusterInstalledServiceList()const
{
	return clusterInstalledServiceList_;
}

