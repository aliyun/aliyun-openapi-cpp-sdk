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

#include <alibabacloud/linkwan/model/ListNodesByNodeGroupIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListNodesByNodeGroupIdResult::ListNodesByNodeGroupIdResult() :
	ServiceResult()
{}

ListNodesByNodeGroupIdResult::ListNodesByNodeGroupIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesByNodeGroupIdResult::~ListNodesByNodeGroupIdResult()
{}

void ListNodesByNodeGroupIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["Node"];
	for (auto dataNodeListNode : allListNode)
	{
		Data::Node nodeObject;
		if(!dataNodeListNode["DevEui"].isNull())
			nodeObject.devEui = dataNodeListNode["DevEui"].asString();
		if(!dataNodeListNode["DevAddr"].isNull())
			nodeObject.devAddr = dataNodeListNode["DevAddr"].asString();
		if(!dataNodeListNode["ClassMode"].isNull())
			nodeObject.classMode = dataNodeListNode["ClassMode"].asString();
		if(!dataNodeListNode["LastJoinMillis"].isNull())
			nodeObject.lastJoinMillis = std::stol(dataNodeListNode["LastJoinMillis"].asString());
		if(!dataNodeListNode["BoundMillis"].isNull())
			nodeObject.boundMillis = std::stol(dataNodeListNode["BoundMillis"].asString());
		if(!dataNodeListNode["MulticastGroupId"].isNull())
			nodeObject.multicastGroupId = dataNodeListNode["MulticastGroupId"].asString();
		if(!dataNodeListNode["AuthTypes"].isNull())
			nodeObject.authTypes = dataNodeListNode["AuthTypes"].asString();
		if(!dataNodeListNode["JoinEui"].isNull())
			nodeObject.joinEui = dataNodeListNode["JoinEui"].asString();
		if(!dataNodeListNode["Appkey"].isNull())
			nodeObject.appkey = dataNodeListNode["Appkey"].asString();
		if(!dataNodeListNode["NodeType"].isNull())
			nodeObject.nodeType = dataNodeListNode["NodeType"].asString();
		data_.list.push_back(nodeObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListNodesByNodeGroupIdResult::Data ListNodesByNodeGroupIdResult::getData()const
{
	return data_;
}

bool ListNodesByNodeGroupIdResult::getSuccess()const
{
	return success_;
}

