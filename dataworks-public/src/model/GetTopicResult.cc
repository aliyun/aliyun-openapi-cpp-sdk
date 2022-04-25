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

#include <alibabacloud/dataworks-public/model/GetTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetTopicResult::GetTopicResult() :
	ServiceResult()
{}

GetTopicResult::GetTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTopicResult::~GetTopicResult()
{}

void GetTopicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Owner"].isNull())
		data_.owner = dataNode["Owner"].asString();
	if(!dataNode["TopicName"].isNull())
		data_.topicName = dataNode["TopicName"].asString();
	if(!dataNode["BaselineStatus"].isNull())
		data_.baselineStatus = dataNode["BaselineStatus"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["NextAlertTime"].isNull())
		data_.nextAlertTime = std::stol(dataNode["NextAlertTime"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = std::stol(dataNode["InstanceId"].asString());
	if(!dataNode["FixTime"].isNull())
		data_.fixTime = std::stol(dataNode["FixTime"].asString());
	if(!dataNode["BaselineInGroupId"].isNull())
		data_.baselineInGroupId = std::stoi(dataNode["BaselineInGroupId"].asString());
	if(!dataNode["BaselineBuffer"].isNull())
		data_.baselineBuffer = std::stol(dataNode["BaselineBuffer"].asString());
	if(!dataNode["TopicType"].isNull())
		data_.topicType = dataNode["TopicType"].asString();
	if(!dataNode["TopicStatus"].isNull())
		data_.topicStatus = dataNode["TopicStatus"].asString();
	if(!dataNode["HappenTime"].isNull())
		data_.happenTime = std::stol(dataNode["HappenTime"].asString());
	if(!dataNode["DealTime"].isNull())
		data_.dealTime = std::stol(dataNode["DealTime"].asString());
	if(!dataNode["DealUser"].isNull())
		data_.dealUser = dataNode["DealUser"].asString();
	if(!dataNode["BaselineName"].isNull())
		data_.baselineName = dataNode["BaselineName"].asString();
	if(!dataNode["BaselineId"].isNull())
		data_.baselineId = std::stol(dataNode["BaselineId"].asString());
	if(!dataNode["NodeName"].isNull())
		data_.nodeName = dataNode["NodeName"].asString();
	if(!dataNode["AlertTime"].isNull())
		data_.alertTime = std::stol(dataNode["AlertTime"].asString());
	if(!dataNode["Buffer"].isNull())
		data_.buffer = std::stol(dataNode["Buffer"].asString());
	if(!dataNode["Assigner"].isNull())
		data_.assigner = dataNode["Assigner"].asString();
	if(!dataNode["TopicId"].isNull())
		data_.topicId = std::stol(dataNode["TopicId"].asString());
	if(!dataNode["AddTime"].isNull())
		data_.addTime = std::stol(dataNode["AddTime"].asString());
	if(!dataNode["NodeId"].isNull())
		data_.nodeId = std::stol(dataNode["NodeId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetTopicResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetTopicResult::Data GetTopicResult::getData()const
{
	return data_;
}

std::string GetTopicResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTopicResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetTopicResult::getSuccess()const
{
	return success_;
}

