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

#include <alibabacloud/dataworks-public/model/GetAlertMessageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetAlertMessageResult::GetAlertMessageResult() :
	ServiceResult()
{}

GetAlertMessageResult::GetAlertMessageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAlertMessageResult::~GetAlertMessageResult()
{}

void GetAlertMessageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RemindId"].isNull())
		data_.remindId = std::stol(dataNode["RemindId"].asString());
	if(!dataNode["AlertMessageStatus"].isNull())
		data_.alertMessageStatus = dataNode["AlertMessageStatus"].asString();
	if(!dataNode["AlertUser"].isNull())
		data_.alertUser = dataNode["AlertUser"].asString();
	if(!dataNode["AlertTime"].isNull())
		data_.alertTime = std::stol(dataNode["AlertTime"].asString());
	if(!dataNode["AlertMethod"].isNull())
		data_.alertMethod = dataNode["AlertMethod"].asString();
	if(!dataNode["Source"].isNull())
		data_.source = dataNode["Source"].asString();
	if(!dataNode["Content"].isNull())
		data_.content = dataNode["Content"].asString();
	if(!dataNode["RemindName"].isNull())
		data_.remindName = dataNode["RemindName"].asString();
	if(!dataNode["AlertId"].isNull())
		data_.alertId = std::stol(dataNode["AlertId"].asString());
	auto allInstancesNode = dataNode["Instances"]["Instance"];
	for (auto dataNodeInstancesInstance : allInstancesNode)
	{
		Data::Instance instanceObject;
		if(!dataNodeInstancesInstance["Status"].isNull())
			instanceObject.status = dataNodeInstancesInstance["Status"].asString();
		if(!dataNodeInstancesInstance["InstanceId"].isNull())
			instanceObject.instanceId = std::stol(dataNodeInstancesInstance["InstanceId"].asString());
		if(!dataNodeInstancesInstance["NodeName"].isNull())
			instanceObject.nodeName = dataNodeInstancesInstance["NodeName"].asString();
		if(!dataNodeInstancesInstance["NodeId"].isNull())
			instanceObject.nodeId = std::stol(dataNodeInstancesInstance["NodeId"].asString());
		if(!dataNodeInstancesInstance["ProjectId"].isNull())
			instanceObject.projectId = std::stol(dataNodeInstancesInstance["ProjectId"].asString());
		data_.instances.push_back(instanceObject);
	}
	auto allTopicsNode = dataNode["Topics"]["Topic"];
	for (auto dataNodeTopicsTopic : allTopicsNode)
	{
		Data::Topic topicObject;
		if(!dataNodeTopicsTopic["TopicName"].isNull())
			topicObject.topicName = dataNodeTopicsTopic["TopicName"].asString();
		if(!dataNodeTopicsTopic["InstanceId"].isNull())
			topicObject.instanceId = std::stol(dataNodeTopicsTopic["InstanceId"].asString());
		if(!dataNodeTopicsTopic["TopicId"].isNull())
			topicObject.topicId = std::stol(dataNodeTopicsTopic["TopicId"].asString());
		if(!dataNodeTopicsTopic["TopicOwner"].isNull())
			topicObject.topicOwner = dataNodeTopicsTopic["TopicOwner"].asString();
		if(!dataNodeTopicsTopic["NodeId"].isNull())
			topicObject.nodeId = std::stol(dataNodeTopicsTopic["NodeId"].asString());
		if(!dataNodeTopicsTopic["TopicStatus"].isNull())
			topicObject.topicStatus = dataNodeTopicsTopic["TopicStatus"].asString();
		data_.topics.push_back(topicObject);
	}
	auto allNodesNode = dataNode["Nodes"]["Node"];
	for (auto dataNodeNodesNode : allNodesNode)
	{
		Data::Node nodeObject;
		if(!dataNodeNodesNode["Owner"].isNull())
			nodeObject.owner = dataNodeNodesNode["Owner"].asString();
		if(!dataNodeNodesNode["NodeName"].isNull())
			nodeObject.nodeName = dataNodeNodesNode["NodeName"].asString();
		if(!dataNodeNodesNode["NodeId"].isNull())
			nodeObject.nodeId = std::stol(dataNodeNodesNode["NodeId"].asString());
		if(!dataNodeNodesNode["ProjectId"].isNull())
			nodeObject.projectId = std::stol(dataNodeNodesNode["ProjectId"].asString());
		data_.nodes.push_back(nodeObject);
	}
	auto slaAlertNode = dataNode["SlaAlert"];
	if(!slaAlertNode["Status"].isNull())
		data_.slaAlert.status = slaAlertNode["Status"].asString();
	if(!slaAlertNode["BaselineOwner"].isNull())
		data_.slaAlert.baselineOwner = slaAlertNode["BaselineOwner"].asString();
	if(!slaAlertNode["BaselineId"].isNull())
		data_.slaAlert.baselineId = std::stol(slaAlertNode["BaselineId"].asString());
	if(!slaAlertNode["BaselineName"].isNull())
		data_.slaAlert.baselineName = slaAlertNode["BaselineName"].asString();
	if(!slaAlertNode["Bizdate"].isNull())
		data_.slaAlert.bizdate = std::stol(slaAlertNode["Bizdate"].asString());
	if(!slaAlertNode["ProjectId"].isNull())
		data_.slaAlert.projectId = std::stol(slaAlertNode["ProjectId"].asString());
	if(!slaAlertNode["InGroupId"].isNull())
		data_.slaAlert.inGroupId = std::stoi(slaAlertNode["InGroupId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetAlertMessageResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetAlertMessageResult::Data GetAlertMessageResult::getData()const
{
	return data_;
}

std::string GetAlertMessageResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetAlertMessageResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetAlertMessageResult::getSuccess()const
{
	return success_;
}

