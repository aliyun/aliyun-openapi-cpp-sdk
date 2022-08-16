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

#include <alibabacloud/dataworks-public/model/ListInnerNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListInnerNodesResult::ListInnerNodesResult() :
	ServiceResult()
{}

ListInnerNodesResult::ListInnerNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInnerNodesResult::~ListInnerNodesResult()
{}

void ListInnerNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pagingNode = value["Paging"];
	if(!pagingNode["PageNumber"].isNull())
		paging_.pageNumber = std::stoi(pagingNode["PageNumber"].asString());
	if(!pagingNode["PageSize"].isNull())
		paging_.pageSize = std::stoi(pagingNode["PageSize"].asString());
	if(!pagingNode["TotalCount"].isNull())
		paging_.totalCount = std::stoi(pagingNode["TotalCount"].asString());
	auto allNodesNode = pagingNode["Nodes"]["NodesItem"];
	for (auto pagingNodeNodesNodesItem : allNodesNode)
	{
		Paging::NodesItem nodesItemObject;
		if(!pagingNodeNodesNodesItem["SchedulerType"].isNull())
			nodesItemObject.schedulerType = pagingNodeNodesNodesItem["SchedulerType"].asString();
		if(!pagingNodeNodesNodesItem["RepeatInterval"].isNull())
			nodesItemObject.repeatInterval = std::stol(pagingNodeNodesNodesItem["RepeatInterval"].asString());
		if(!pagingNodeNodesNodesItem["Repeatability"].isNull())
			nodesItemObject.repeatability = pagingNodeNodesNodesItem["Repeatability"].asString() == "true";
		if(!pagingNodeNodesNodesItem["ProjectId"].isNull())
			nodesItemObject.projectId = std::stol(pagingNodeNodesNodesItem["ProjectId"].asString());
		if(!pagingNodeNodesNodesItem["ProgramType"].isNull())
			nodesItemObject.programType = pagingNodeNodesNodesItem["ProgramType"].asString();
		if(!pagingNodeNodesNodesItem["Priority"].isNull())
			nodesItemObject.priority = std::stoi(pagingNodeNodesNodesItem["Priority"].asString());
		if(!pagingNodeNodesNodesItem["OwnerId"].isNull())
			nodesItemObject.ownerId = pagingNodeNodesNodesItem["OwnerId"].asString();
		if(!pagingNodeNodesNodesItem["Connection"].isNull())
			nodesItemObject.connection = pagingNodeNodesNodesItem["Connection"].asString();
		if(!pagingNodeNodesNodesItem["ParamValues"].isNull())
			nodesItemObject.paramValues = pagingNodeNodesNodesItem["ParamValues"].asString();
		if(!pagingNodeNodesNodesItem["DqcType"].isNull())
			nodesItemObject.dqcType = pagingNodeNodesNodesItem["DqcType"].asString();
		if(!pagingNodeNodesNodesItem["BaselineId"].isNull())
			nodesItemObject.baselineId = std::stol(pagingNodeNodesNodesItem["BaselineId"].asString());
		if(!pagingNodeNodesNodesItem["Description"].isNull())
			nodesItemObject.description = pagingNodeNodesNodesItem["Description"].asString();
		if(!pagingNodeNodesNodesItem["NodeName"].isNull())
			nodesItemObject.nodeName = pagingNodeNodesNodesItem["NodeName"].asString();
		if(!pagingNodeNodesNodesItem["ResGroupName"].isNull())
			nodesItemObject.resGroupName = pagingNodeNodesNodesItem["ResGroupName"].asString();
		if(!pagingNodeNodesNodesItem["BusinessId"].isNull())
			nodesItemObject.businessId = std::stol(pagingNodeNodesNodesItem["BusinessId"].asString());
		if(!pagingNodeNodesNodesItem["DqcDescription"].isNull())
			nodesItemObject.dqcDescription = pagingNodeNodesNodesItem["DqcDescription"].asString();
		if(!pagingNodeNodesNodesItem["CronExpress"].isNull())
			nodesItemObject.cronExpress = pagingNodeNodesNodesItem["CronExpress"].asString();
		if(!pagingNodeNodesNodesItem["NodeId"].isNull())
			nodesItemObject.nodeId = std::stol(pagingNodeNodesNodesItem["NodeId"].asString());
		paging_.nodes.push_back(nodesItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListInnerNodesResult::Paging ListInnerNodesResult::getPaging()const
{
	return paging_;
}

bool ListInnerNodesResult::getSuccess()const
{
	return success_;
}

