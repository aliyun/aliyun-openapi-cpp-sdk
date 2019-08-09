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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allClusterInstalledServiceList = value["ClusterInstalledServiceList"]["ClusterInstalledService"];
	for (auto value : allClusterInstalledServiceList)
	{
		ClusterInstalledService clusterInstalledServiceListObject;
		if(!value["ServiceName"].isNull())
			clusterInstalledServiceListObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceDisplayName"].isNull())
			clusterInstalledServiceListObject.serviceDisplayName = value["ServiceDisplayName"].asString();
		if(!value["ServiceVersion"].isNull())
			clusterInstalledServiceListObject.serviceVersion = value["ServiceVersion"].asString();
		if(!value["ServiceEcmVersion"].isNull())
			clusterInstalledServiceListObject.serviceEcmVersion = value["ServiceEcmVersion"].asString();
		if(!value["serviceStatus"].isNull())
			clusterInstalledServiceListObject.serviceStatus = value["serviceStatus"].asString();
		if(!value["onlyClient"].isNull())
			clusterInstalledServiceListObject.onlyClient = value["onlyClient"].asString() == "true";
		if(!value["notStartedNum"].isNull())
			clusterInstalledServiceListObject.notStartedNum = std::stoi(value["notStartedNum"].asString());
		if(!value["needRestartNum"].isNull())
			clusterInstalledServiceListObject.needRestartNum = std::stoi(value["needRestartNum"].asString());
		if(!value["abnormalNum"].isNull())
			clusterInstalledServiceListObject.abnormalNum = std::stoi(value["abnormalNum"].asString());
		if(!value["comment"].isNull())
			clusterInstalledServiceListObject.comment = value["comment"].asString();
		auto allServiceActionList = value["ServiceActionList"]["ServiceAction"];
		for (auto value : allServiceActionList)
		{
			ClusterInstalledService::ServiceAction serviceActionListObject;
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
			clusterInstalledServiceListObject.serviceActionList.push_back(serviceActionListObject);
		}
		clusterInstalledServiceList_.push_back(clusterInstalledServiceListObject);
	}

}

std::vector<ListClusterInstalledServiceResult::ClusterInstalledService> ListClusterInstalledServiceResult::getClusterInstalledServiceList()const
{
	return clusterInstalledServiceList_;
}

