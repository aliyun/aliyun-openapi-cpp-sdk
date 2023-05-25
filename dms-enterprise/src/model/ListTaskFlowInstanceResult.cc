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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListTaskFlowInstanceResult::ListTaskFlowInstanceResult() :
	ServiceResult()
{}

ListTaskFlowInstanceResult::ListTaskFlowInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskFlowInstanceResult::~ListTaskFlowInstanceResult()
{}

void ListTaskFlowInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDAGInstanceListNode = value["DAGInstanceList"]["DAGInstance"];
	for (auto valueDAGInstanceListDAGInstance : allDAGInstanceListNode)
	{
		DAGInstance dAGInstanceListObject;
		if(!valueDAGInstanceListDAGInstance["Id"].isNull())
			dAGInstanceListObject.id = std::stol(valueDAGInstanceListDAGInstance["Id"].asString());
		if(!valueDAGInstanceListDAGInstance["BusinessTime"].isNull())
			dAGInstanceListObject.businessTime = valueDAGInstanceListDAGInstance["BusinessTime"].asString();
		if(!valueDAGInstanceListDAGInstance["startTime"].isNull())
			dAGInstanceListObject.startTime = valueDAGInstanceListDAGInstance["startTime"].asString();
		if(!valueDAGInstanceListDAGInstance["EndTime"].isNull())
			dAGInstanceListObject.endTime = valueDAGInstanceListDAGInstance["EndTime"].asString();
		if(!valueDAGInstanceListDAGInstance["DagId"].isNull())
			dAGInstanceListObject.dagId = valueDAGInstanceListDAGInstance["DagId"].asString();
		if(!valueDAGInstanceListDAGInstance["TriggerType"].isNull())
			dAGInstanceListObject.triggerType = std::stoi(valueDAGInstanceListDAGInstance["TriggerType"].asString());
		if(!valueDAGInstanceListDAGInstance["Status"].isNull())
			dAGInstanceListObject.status = std::stoi(valueDAGInstanceListDAGInstance["Status"].asString());
		if(!valueDAGInstanceListDAGInstance["Message"].isNull())
			dAGInstanceListObject.message = valueDAGInstanceListDAGInstance["Message"].asString();
		if(!valueDAGInstanceListDAGInstance["HistoryDagId"].isNull())
			dAGInstanceListObject.historyDagId = std::stol(valueDAGInstanceListDAGInstance["HistoryDagId"].asString());
		if(!valueDAGInstanceListDAGInstance["DagName"].isNull())
			dAGInstanceListObject.dagName = valueDAGInstanceListDAGInstance["DagName"].asString();
		if(!valueDAGInstanceListDAGInstance["OwnerName"].isNull())
			dAGInstanceListObject.ownerName = valueDAGInstanceListDAGInstance["OwnerName"].asString();
		if(!valueDAGInstanceListDAGInstance["DagVersion"].isNull())
			dAGInstanceListObject.dagVersion = valueDAGInstanceListDAGInstance["DagVersion"].asString();
		dAGInstanceList_.push_back(dAGInstanceListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListTaskFlowInstanceResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListTaskFlowInstanceResult::DAGInstance> ListTaskFlowInstanceResult::getDAGInstanceList()const
{
	return dAGInstanceList_;
}

std::string ListTaskFlowInstanceResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTaskFlowInstanceResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTaskFlowInstanceResult::getSuccess()const
{
	return success_;
}

