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
	auto allFlowNode = value["Flow"]["FlowItem"];
	for (auto valueFlowFlowItem : allFlowNode)
	{
		FlowItem flowObject;
		if(!valueFlowFlowItem["Id"].isNull())
			flowObject.id = valueFlowFlowItem["Id"].asString();
		if(!valueFlowFlowItem["GmtCreate"].isNull())
			flowObject.gmtCreate = std::stol(valueFlowFlowItem["GmtCreate"].asString());
		if(!valueFlowFlowItem["GmtModified"].isNull())
			flowObject.gmtModified = std::stol(valueFlowFlowItem["GmtModified"].asString());
		if(!valueFlowFlowItem["Name"].isNull())
			flowObject.name = valueFlowFlowItem["Name"].asString();
		if(!valueFlowFlowItem["Description"].isNull())
			flowObject.description = valueFlowFlowItem["Description"].asString();
		if(!valueFlowFlowItem["Type"].isNull())
			flowObject.type = valueFlowFlowItem["Type"].asString();
		if(!valueFlowFlowItem["Status"].isNull())
			flowObject.status = valueFlowFlowItem["Status"].asString();
		if(!valueFlowFlowItem["Periodic"].isNull())
			flowObject.periodic = valueFlowFlowItem["Periodic"].asString() == "true";
		if(!valueFlowFlowItem["StartSchedule"].isNull())
			flowObject.startSchedule = std::stol(valueFlowFlowItem["StartSchedule"].asString());
		if(!valueFlowFlowItem["EndSchedule"].isNull())
			flowObject.endSchedule = std::stol(valueFlowFlowItem["EndSchedule"].asString());
		if(!valueFlowFlowItem["CronExpr"].isNull())
			flowObject.cronExpr = valueFlowFlowItem["CronExpr"].asString();
		if(!valueFlowFlowItem["CreateCluster"].isNull())
			flowObject.createCluster = valueFlowFlowItem["CreateCluster"].asString() == "true";
		if(!valueFlowFlowItem["ClusterId"].isNull())
			flowObject.clusterId = valueFlowFlowItem["ClusterId"].asString();
		if(!valueFlowFlowItem["ProjectId"].isNull())
			flowObject.projectId = valueFlowFlowItem["ProjectId"].asString();
		if(!valueFlowFlowItem["HostName"].isNull())
			flowObject.hostName = valueFlowFlowItem["HostName"].asString();
		if(!valueFlowFlowItem["Graph"].isNull())
			flowObject.graph = valueFlowFlowItem["Graph"].asString();
		if(!valueFlowFlowItem["AlertUserGroupBizId"].isNull())
			flowObject.alertUserGroupBizId = valueFlowFlowItem["AlertUserGroupBizId"].asString();
		if(!valueFlowFlowItem["AlertDingDingGroupBizId"].isNull())
			flowObject.alertDingDingGroupBizId = valueFlowFlowItem["AlertDingDingGroupBizId"].asString();
		if(!valueFlowFlowItem["AlertConf"].isNull())
			flowObject.alertConf = valueFlowFlowItem["AlertConf"].asString();
		if(!valueFlowFlowItem["CategoryId"].isNull())
			flowObject.categoryId = valueFlowFlowItem["CategoryId"].asString();
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

