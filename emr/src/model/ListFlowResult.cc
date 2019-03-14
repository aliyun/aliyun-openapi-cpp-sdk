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

#include <alibabacloud/emr/model/ListFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowResult::ListFlowResult() :
	ServiceResult()
{}

ListFlowResult::ListFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowResult::~ListFlowResult()
{}

void ListFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFlow = value["Flow"]["FlowItem"];
	for (auto value : allFlow)
	{
		FlowItem flowObject;
		if(!value["Id"].isNull())
			flowObject.id = value["Id"].asString();
		if(!value["GmtCreate"].isNull())
			flowObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			flowObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Name"].isNull())
			flowObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			flowObject.description = value["Description"].asString();
		if(!value["Type"].isNull())
			flowObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			flowObject.status = value["Status"].asString();
		if(!value["Periodic"].isNull())
			flowObject.periodic = value["Periodic"].asString() == "true";
		if(!value["StartSchedule"].isNull())
			flowObject.startSchedule = std::stol(value["StartSchedule"].asString());
		if(!value["EndSchedule"].isNull())
			flowObject.endSchedule = std::stol(value["EndSchedule"].asString());
		if(!value["CronExpr"].isNull())
			flowObject.cronExpr = value["CronExpr"].asString();
		if(!value["CreateCluster"].isNull())
			flowObject.createCluster = value["CreateCluster"].asString() == "true";
		if(!value["ClusterId"].isNull())
			flowObject.clusterId = value["ClusterId"].asString();
		if(!value["ProjectId"].isNull())
			flowObject.projectId = value["ProjectId"].asString();
		if(!value["HostName"].isNull())
			flowObject.hostName = value["HostName"].asString();
		if(!value["Graph"].isNull())
			flowObject.graph = value["Graph"].asString();
		if(!value["AlertUserGroupBizId"].isNull())
			flowObject.alertUserGroupBizId = value["AlertUserGroupBizId"].asString();
		if(!value["AlertDingDingGroupBizId"].isNull())
			flowObject.alertDingDingGroupBizId = value["AlertDingDingGroupBizId"].asString();
		if(!value["AlertConf"].isNull())
			flowObject.alertConf = value["AlertConf"].asString();
		if(!value["CategoryId"].isNull())
			flowObject.categoryId = value["CategoryId"].asString();
		flow_.push_back(flowObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowResult::getTotal()const
{
	return total_;
}

std::vector<ListFlowResult::FlowItem> ListFlowResult::getFlow()const
{
	return flow_;
}

