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

#include <alibabacloud/dataworks-public/model/ListTopicsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListTopicsResult::ListTopicsResult() :
	ServiceResult()
{}

ListTopicsResult::ListTopicsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTopicsResult::~ListTopicsResult()
{}

void ListTopicsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allTopicsNode = dataNode["Topics"]["TopicsItem"];
	for (auto dataNodeTopicsTopicsItem : allTopicsNode)
	{
		Data::TopicsItem topicsItemObject;
		if(!dataNodeTopicsTopicsItem["TopicName"].isNull())
			topicsItemObject.topicName = dataNodeTopicsTopicsItem["TopicName"].asString();
		if(!dataNodeTopicsTopicsItem["ProjectId"].isNull())
			topicsItemObject.projectId = std::stol(dataNodeTopicsTopicsItem["ProjectId"].asString());
		if(!dataNodeTopicsTopicsItem["NodeOwner"].isNull())
			topicsItemObject.nodeOwner = dataNodeTopicsTopicsItem["NodeOwner"].asString();
		if(!dataNodeTopicsTopicsItem["InstanceId"].isNull())
			topicsItemObject.instanceId = std::stol(dataNodeTopicsTopicsItem["InstanceId"].asString());
		if(!dataNodeTopicsTopicsItem["FixTime"].isNull())
			topicsItemObject.fixTime = std::stol(dataNodeTopicsTopicsItem["FixTime"].asString());
		if(!dataNodeTopicsTopicsItem["TopicType"].isNull())
			topicsItemObject.topicType = dataNodeTopicsTopicsItem["TopicType"].asString();
		if(!dataNodeTopicsTopicsItem["TopicStatus"].isNull())
			topicsItemObject.topicStatus = dataNodeTopicsTopicsItem["TopicStatus"].asString();
		if(!dataNodeTopicsTopicsItem["HappenTime"].isNull())
			topicsItemObject.happenTime = std::stol(dataNodeTopicsTopicsItem["HappenTime"].asString());
		if(!dataNodeTopicsTopicsItem["NodeName"].isNull())
			topicsItemObject.nodeName = dataNodeTopicsTopicsItem["NodeName"].asString();
		if(!dataNodeTopicsTopicsItem["TopicId"].isNull())
			topicsItemObject.topicId = std::stol(dataNodeTopicsTopicsItem["TopicId"].asString());
		if(!dataNodeTopicsTopicsItem["AddTime"].isNull())
			topicsItemObject.addTime = std::stol(dataNodeTopicsTopicsItem["AddTime"].asString());
		if(!dataNodeTopicsTopicsItem["NodeId"].isNull())
			topicsItemObject.nodeId = std::stol(dataNodeTopicsTopicsItem["NodeId"].asString());
		data_.topics.push_back(topicsItemObject);
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

int ListTopicsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListTopicsResult::Data ListTopicsResult::getData()const
{
	return data_;
}

std::string ListTopicsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTopicsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListTopicsResult::getSuccess()const
{
	return success_;
}

