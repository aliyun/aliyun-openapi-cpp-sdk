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

#include <alibabacloud/dataworks-public/model/ListAlertMessagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListAlertMessagesResult::ListAlertMessagesResult() :
	ServiceResult()
{}

ListAlertMessagesResult::ListAlertMessagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlertMessagesResult::~ListAlertMessagesResult()
{}

void ListAlertMessagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = dataNode["PageNumber"].asString();
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = dataNode["PageSize"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = dataNode["TotalCount"].asString();
	auto allAlertMessagesNode = dataNode["AlertMessages"]["AlertMessagesItem"];
	for (auto dataNodeAlertMessagesAlertMessagesItem : allAlertMessagesNode)
	{
		Data::AlertMessagesItem alertMessagesItemObject;
		if(!dataNodeAlertMessagesAlertMessagesItem["RemindId"].isNull())
			alertMessagesItemObject.remindId = std::stol(dataNodeAlertMessagesAlertMessagesItem["RemindId"].asString());
		if(!dataNodeAlertMessagesAlertMessagesItem["AlertMessageStatus"].isNull())
			alertMessagesItemObject.alertMessageStatus = dataNodeAlertMessagesAlertMessagesItem["AlertMessageStatus"].asString();
		if(!dataNodeAlertMessagesAlertMessagesItem["AlertUser"].isNull())
			alertMessagesItemObject.alertUser = dataNodeAlertMessagesAlertMessagesItem["AlertUser"].asString();
		if(!dataNodeAlertMessagesAlertMessagesItem["AlertTime"].isNull())
			alertMessagesItemObject.alertTime = std::stol(dataNodeAlertMessagesAlertMessagesItem["AlertTime"].asString());
		if(!dataNodeAlertMessagesAlertMessagesItem["AlertMethod"].isNull())
			alertMessagesItemObject.alertMethod = dataNodeAlertMessagesAlertMessagesItem["AlertMethod"].asString();
		if(!dataNodeAlertMessagesAlertMessagesItem["Source"].isNull())
			alertMessagesItemObject.source = dataNodeAlertMessagesAlertMessagesItem["Source"].asString();
		if(!dataNodeAlertMessagesAlertMessagesItem["Content"].isNull())
			alertMessagesItemObject.content = dataNodeAlertMessagesAlertMessagesItem["Content"].asString();
		if(!dataNodeAlertMessagesAlertMessagesItem["RemindName"].isNull())
			alertMessagesItemObject.remindName = dataNodeAlertMessagesAlertMessagesItem["RemindName"].asString();
		if(!dataNodeAlertMessagesAlertMessagesItem["AlertId"].isNull())
			alertMessagesItemObject.alertId = std::stol(dataNodeAlertMessagesAlertMessagesItem["AlertId"].asString());
		auto allInstancesNode = dataNodeAlertMessagesAlertMessagesItem["Instances"]["InstancesItem"];
		for (auto dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem : allInstancesNode)
		{
			Data::AlertMessagesItem::InstancesItem instancesObject;
			if(!dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["Status"].isNull())
				instancesObject.status = dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["Status"].asString();
			if(!dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["InstanceId"].isNull())
				instancesObject.instanceId = std::stol(dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["InstanceId"].asString());
			if(!dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["NodeName"].isNull())
				instancesObject.nodeName = dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["NodeName"].asString();
			if(!dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["NodeId"].isNull())
				instancesObject.nodeId = std::stol(dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["NodeId"].asString());
			if(!dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["ProjectId"].isNull())
				instancesObject.projectId = std::stol(dataNodeAlertMessagesAlertMessagesItemInstancesInstancesItem["ProjectId"].asString());
			alertMessagesItemObject.instances.push_back(instancesObject);
		}
		auto allTopicsNode = dataNodeAlertMessagesAlertMessagesItem["Topics"]["TopicsItem"];
		for (auto dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem : allTopicsNode)
		{
			Data::AlertMessagesItem::TopicsItem topicsObject;
			if(!dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["TopicName"].isNull())
				topicsObject.topicName = dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["TopicName"].asString();
			if(!dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["InstanceId"].isNull())
				topicsObject.instanceId = std::stol(dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["InstanceId"].asString());
			if(!dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["TopicId"].isNull())
				topicsObject.topicId = std::stol(dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["TopicId"].asString());
			if(!dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["TopicOwner"].isNull())
				topicsObject.topicOwner = dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["TopicOwner"].asString();
			if(!dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["NodeId"].isNull())
				topicsObject.nodeId = std::stol(dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["NodeId"].asString());
			if(!dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["TopicStatus"].isNull())
				topicsObject.topicStatus = dataNodeAlertMessagesAlertMessagesItemTopicsTopicsItem["TopicStatus"].asString();
			alertMessagesItemObject.topics.push_back(topicsObject);
		}
		auto allNodesNode = dataNodeAlertMessagesAlertMessagesItem["Nodes"]["NodesItem"];
		for (auto dataNodeAlertMessagesAlertMessagesItemNodesNodesItem : allNodesNode)
		{
			Data::AlertMessagesItem::NodesItem nodesObject;
			if(!dataNodeAlertMessagesAlertMessagesItemNodesNodesItem["Owner"].isNull())
				nodesObject.owner = dataNodeAlertMessagesAlertMessagesItemNodesNodesItem["Owner"].asString();
			if(!dataNodeAlertMessagesAlertMessagesItemNodesNodesItem["NodeName"].isNull())
				nodesObject.nodeName = dataNodeAlertMessagesAlertMessagesItemNodesNodesItem["NodeName"].asString();
			if(!dataNodeAlertMessagesAlertMessagesItemNodesNodesItem["NodeId"].isNull())
				nodesObject.nodeId = std::stol(dataNodeAlertMessagesAlertMessagesItemNodesNodesItem["NodeId"].asString());
			if(!dataNodeAlertMessagesAlertMessagesItemNodesNodesItem["ProjectId"].isNull())
				nodesObject.projectId = std::stol(dataNodeAlertMessagesAlertMessagesItemNodesNodesItem["ProjectId"].asString());
			alertMessagesItemObject.nodes.push_back(nodesObject);
		}
		auto slaAlertNode = value["SlaAlert"];
		if(!slaAlertNode["Status"].isNull())
			alertMessagesItemObject.slaAlert.status = slaAlertNode["Status"].asString();
		if(!slaAlertNode["BaselineOwner"].isNull())
			alertMessagesItemObject.slaAlert.baselineOwner = slaAlertNode["BaselineOwner"].asString();
		if(!slaAlertNode["BaselineId"].isNull())
			alertMessagesItemObject.slaAlert.baselineId = std::stol(slaAlertNode["BaselineId"].asString());
		if(!slaAlertNode["BaselineName"].isNull())
			alertMessagesItemObject.slaAlert.baselineName = slaAlertNode["BaselineName"].asString();
		if(!slaAlertNode["Bizdate"].isNull())
			alertMessagesItemObject.slaAlert.bizdate = std::stol(slaAlertNode["Bizdate"].asString());
		if(!slaAlertNode["ProjectId"].isNull())
			alertMessagesItemObject.slaAlert.projectId = std::stol(slaAlertNode["ProjectId"].asString());
		if(!slaAlertNode["InGroupId"].isNull())
			alertMessagesItemObject.slaAlert.inGroupId = std::stoi(slaAlertNode["InGroupId"].asString());
		data_.alertMessages.push_back(alertMessagesItemObject);
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

int ListAlertMessagesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListAlertMessagesResult::Data ListAlertMessagesResult::getData()const
{
	return data_;
}

std::string ListAlertMessagesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListAlertMessagesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListAlertMessagesResult::getSuccess()const
{
	return success_;
}

