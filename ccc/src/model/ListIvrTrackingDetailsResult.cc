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

#include <alibabacloud/ccc/model/ListIvrTrackingDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListIvrTrackingDetailsResult::ListIvrTrackingDetailsResult() :
	ServiceResult()
{}

ListIvrTrackingDetailsResult::ListIvrTrackingDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIvrTrackingDetailsResult::~ListIvrTrackingDetailsResult()
{}

void ListIvrTrackingDetailsResult::parse(const std::string &payload)
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
	auto allListNode = dataNode["List"]["IvrTracking"];
	for (auto dataNodeListIvrTracking : allListNode)
	{
		Data::IvrTracking ivrTrackingObject;
		if(!dataNodeListIvrTracking["Instance"].isNull())
			ivrTrackingObject.instance = dataNodeListIvrTracking["Instance"].asString();
		if(!dataNodeListIvrTracking["Callee"].isNull())
			ivrTrackingObject.callee = dataNodeListIvrTracking["Callee"].asString();
		if(!dataNodeListIvrTracking["EnterTime"].isNull())
			ivrTrackingObject.enterTime = std::stol(dataNodeListIvrTracking["EnterTime"].asString());
		if(!dataNodeListIvrTracking["NodeVariables"].isNull())
			ivrTrackingObject.nodeVariables = dataNodeListIvrTracking["NodeVariables"].asString();
		if(!dataNodeListIvrTracking["NodeExitCode"].isNull())
			ivrTrackingObject.nodeExitCode = dataNodeListIvrTracking["NodeExitCode"].asString();
		if(!dataNodeListIvrTracking["FlowName"].isNull())
			ivrTrackingObject.flowName = dataNodeListIvrTracking["FlowName"].asString();
		if(!dataNodeListIvrTracking["FlowId"].isNull())
			ivrTrackingObject.flowId = dataNodeListIvrTracking["FlowId"].asString();
		if(!dataNodeListIvrTracking["NodeProperties"].isNull())
			ivrTrackingObject.nodeProperties = dataNodeListIvrTracking["NodeProperties"].asString();
		if(!dataNodeListIvrTracking["NodeType"].isNull())
			ivrTrackingObject.nodeType = dataNodeListIvrTracking["NodeType"].asString();
		if(!dataNodeListIvrTracking["Caller"].isNull())
			ivrTrackingObject.caller = dataNodeListIvrTracking["Caller"].asString();
		if(!dataNodeListIvrTracking["NodeName"].isNull())
			ivrTrackingObject.nodeName = dataNodeListIvrTracking["NodeName"].asString();
		if(!dataNodeListIvrTracking["ContactId"].isNull())
			ivrTrackingObject.contactId = dataNodeListIvrTracking["ContactId"].asString();
		if(!dataNodeListIvrTracking["LeaveTime"].isNull())
			ivrTrackingObject.leaveTime = std::stol(dataNodeListIvrTracking["LeaveTime"].asString());
		if(!dataNodeListIvrTracking["ChannelVariables"].isNull())
			ivrTrackingObject.channelVariables = dataNodeListIvrTracking["ChannelVariables"].asString();
		if(!dataNodeListIvrTracking["ChannelId"].isNull())
			ivrTrackingObject.channelId = dataNodeListIvrTracking["ChannelId"].asString();
		if(!dataNodeListIvrTracking["NodeId"].isNull())
			ivrTrackingObject.nodeId = dataNodeListIvrTracking["NodeId"].asString();
		data_.list.push_back(ivrTrackingObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListIvrTrackingDetailsResult::getMessage()const
{
	return message_;
}

int ListIvrTrackingDetailsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListIvrTrackingDetailsResult::Data ListIvrTrackingDetailsResult::getData()const
{
	return data_;
}

std::string ListIvrTrackingDetailsResult::getCode()const
{
	return code_;
}

