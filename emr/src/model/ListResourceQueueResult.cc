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

#include <alibabacloud/emr/model/ListResourceQueueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListResourceQueueResult::ListResourceQueueResult() :
	ServiceResult()
{}

ListResourceQueueResult::ListResourceQueueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceQueueResult::~ListResourceQueueResult()
{}

void ListResourceQueueResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allQueueList = value["QueueList"]["Queue"];
	for (auto value : allQueueList)
	{
		Queue queueListObject;
		auto ecmResourceQueueNode = value["EcmResourceQueue"];
		if(!ecmResourceQueueNode["Id"].isNull())
			queueListObject.ecmResourceQueue.id = std::stol(ecmResourceQueueNode["Id"].asString());
		if(!ecmResourceQueueNode["Name"].isNull())
			queueListObject.ecmResourceQueue.name = ecmResourceQueueNode["Name"].asString();
		if(!ecmResourceQueueNode["QualifiedName"].isNull())
			queueListObject.ecmResourceQueue.qualifiedName = ecmResourceQueueNode["QualifiedName"].asString();
		if(!ecmResourceQueueNode["QueueType"].isNull())
			queueListObject.ecmResourceQueue.queueType = ecmResourceQueueNode["QueueType"].asString();
		if(!ecmResourceQueueNode["ParentQueueId"].isNull())
			queueListObject.ecmResourceQueue.parentQueueId = std::stol(ecmResourceQueueNode["ParentQueueId"].asString());
		if(!ecmResourceQueueNode["Leaf"].isNull())
			queueListObject.ecmResourceQueue.leaf = ecmResourceQueueNode["Leaf"].asString() == "true";
		if(!ecmResourceQueueNode["Status"].isNull())
			queueListObject.ecmResourceQueue.status = ecmResourceQueueNode["Status"].asString();
		if(!ecmResourceQueueNode["UserId"].isNull())
			queueListObject.ecmResourceQueue.userId = ecmResourceQueueNode["UserId"].asString();
		if(!ecmResourceQueueNode["ResourcePoolId"].isNull())
			queueListObject.ecmResourceQueue.resourcePoolId = std::stol(ecmResourceQueueNode["ResourcePoolId"].asString());
		queueList_.push_back(queueListObject);
	}

}

std::vector<ListResourceQueueResult::Queue> ListResourceQueueResult::getQueueList()const
{
	return queueList_;
}

