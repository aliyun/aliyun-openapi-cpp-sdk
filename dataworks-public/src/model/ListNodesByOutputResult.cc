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

#include <alibabacloud/dataworks-public/model/ListNodesByOutputResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListNodesByOutputResult::ListNodesByOutputResult() :
	ServiceResult()
{}

ListNodesByOutputResult::ListNodesByOutputResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesByOutputResult::~ListNodesByOutputResult()
{}

void ListNodesByOutputResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["OutputNodePair"];
	for (auto valueDataOutputNodePair : allDataNode)
	{
		OutputNodePair dataObject;
		if(!valueDataOutputNodePair["Output"].isNull())
			dataObject.output = valueDataOutputNodePair["Output"].asString();
		auto allNodeListNode = valueDataOutputNodePair["NodeList"]["Node"];
		for (auto valueDataOutputNodePairNodeListNode : allNodeListNode)
		{
			OutputNodePair::Node nodeListObject;
			if(!valueDataOutputNodePairNodeListNode["SchedulerType"].isNull())
				nodeListObject.schedulerType = valueDataOutputNodePairNodeListNode["SchedulerType"].asString();
			if(!valueDataOutputNodePairNodeListNode["RepeatInterval"].isNull())
				nodeListObject.repeatInterval = std::stoi(valueDataOutputNodePairNodeListNode["RepeatInterval"].asString());
			if(!valueDataOutputNodePairNodeListNode["Repeatability"].isNull())
				nodeListObject.repeatability = valueDataOutputNodePairNodeListNode["Repeatability"].asString() == "true";
			if(!valueDataOutputNodePairNodeListNode["FileType"].isNull())
				nodeListObject.fileType = valueDataOutputNodePairNodeListNode["FileType"].asString();
			if(!valueDataOutputNodePairNodeListNode["ProjectId"].isNull())
				nodeListObject.projectId = std::stol(valueDataOutputNodePairNodeListNode["ProjectId"].asString());
			if(!valueDataOutputNodePairNodeListNode["ProgramType"].isNull())
				nodeListObject.programType = valueDataOutputNodePairNodeListNode["ProgramType"].asString();
			if(!valueDataOutputNodePairNodeListNode["Priority"].isNull())
				nodeListObject.priority = std::stoi(valueDataOutputNodePairNodeListNode["Priority"].asString());
			if(!valueDataOutputNodePairNodeListNode["OwnerId"].isNull())
				nodeListObject.ownerId = valueDataOutputNodePairNodeListNode["OwnerId"].asString();
			if(!valueDataOutputNodePairNodeListNode["Connection"].isNull())
				nodeListObject.connection = valueDataOutputNodePairNodeListNode["Connection"].asString();
			if(!valueDataOutputNodePairNodeListNode["ParamValues"].isNull())
				nodeListObject.paramValues = valueDataOutputNodePairNodeListNode["ParamValues"].asString();
			if(!valueDataOutputNodePairNodeListNode["RelatedFlowId"].isNull())
				nodeListObject.relatedFlowId = std::stol(valueDataOutputNodePairNodeListNode["RelatedFlowId"].asString());
			if(!valueDataOutputNodePairNodeListNode["DqcType"].isNull())
				nodeListObject.dqcType = std::stoi(valueDataOutputNodePairNodeListNode["DqcType"].asString());
			if(!valueDataOutputNodePairNodeListNode["BaselineId"].isNull())
				nodeListObject.baselineId = std::stol(valueDataOutputNodePairNodeListNode["BaselineId"].asString());
			if(!valueDataOutputNodePairNodeListNode["Description"].isNull())
				nodeListObject.description = valueDataOutputNodePairNodeListNode["Description"].asString();
			if(!valueDataOutputNodePairNodeListNode["NodeName"].isNull())
				nodeListObject.nodeName = valueDataOutputNodePairNodeListNode["NodeName"].asString();
			if(!valueDataOutputNodePairNodeListNode["ResGroupName"].isNull())
				nodeListObject.resGroupName = valueDataOutputNodePairNodeListNode["ResGroupName"].asString();
			if(!valueDataOutputNodePairNodeListNode["DqcDescription"].isNull())
				nodeListObject.dqcDescription = valueDataOutputNodePairNodeListNode["DqcDescription"].asString();
			if(!valueDataOutputNodePairNodeListNode["CronExpress"].isNull())
				nodeListObject.cronExpress = valueDataOutputNodePairNodeListNode["CronExpress"].asString();
			if(!valueDataOutputNodePairNodeListNode["NodeId"].isNull())
				nodeListObject.nodeId = std::stol(valueDataOutputNodePairNodeListNode["NodeId"].asString());
			dataObject.nodeList.push_back(nodeListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListNodesByOutputResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListNodesByOutputResult::OutputNodePair> ListNodesByOutputResult::getData()const
{
	return data_;
}

std::string ListNodesByOutputResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListNodesByOutputResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListNodesByOutputResult::getSuccess()const
{
	return success_;
}

