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

#include <alibabacloud/iot/model/QueryEdgeInstanceMessageRoutingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryEdgeInstanceMessageRoutingResult::QueryEdgeInstanceMessageRoutingResult() :
	ServiceResult()
{}

QueryEdgeInstanceMessageRoutingResult::QueryEdgeInstanceMessageRoutingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEdgeInstanceMessageRoutingResult::~QueryEdgeInstanceMessageRoutingResult()
{}

void QueryEdgeInstanceMessageRoutingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	auto allMessageRouteListNode = dataNode["MessageRouteList"]["MessageRoute"];
	for (auto dataNodeMessageRouteListMessageRoute : allMessageRouteListNode)
	{
		Data::MessageRoute messageRouteObject;
		if(!dataNodeMessageRouteListMessageRoute["RouteId"].isNull())
			messageRouteObject.routeId = std::stoi(dataNodeMessageRouteListMessageRoute["RouteId"].asString());
		if(!dataNodeMessageRouteListMessageRoute["Name"].isNull())
			messageRouteObject.name = dataNodeMessageRouteListMessageRoute["Name"].asString();
		if(!dataNodeMessageRouteListMessageRoute["TopicFilter"].isNull())
			messageRouteObject.topicFilter = dataNodeMessageRouteListMessageRoute["TopicFilter"].asString();
		if(!dataNodeMessageRouteListMessageRoute["SourceType"].isNull())
			messageRouteObject.sourceType = dataNodeMessageRouteListMessageRoute["SourceType"].asString();
		if(!dataNodeMessageRouteListMessageRoute["SourceData"].isNull())
			messageRouteObject.sourceData = dataNodeMessageRouteListMessageRoute["SourceData"].asString();
		if(!dataNodeMessageRouteListMessageRoute["TargetType"].isNull())
			messageRouteObject.targetType = dataNodeMessageRouteListMessageRoute["TargetType"].asString();
		if(!dataNodeMessageRouteListMessageRoute["TargetData"].isNull())
			messageRouteObject.targetData = dataNodeMessageRouteListMessageRoute["TargetData"].asString();
		if(!dataNodeMessageRouteListMessageRoute["GmtCreate"].isNull())
			messageRouteObject.gmtCreate = dataNodeMessageRouteListMessageRoute["GmtCreate"].asString();
		if(!dataNodeMessageRouteListMessageRoute["GmtModified"].isNull())
			messageRouteObject.gmtModified = dataNodeMessageRouteListMessageRoute["GmtModified"].asString();
		if(!dataNodeMessageRouteListMessageRoute["GmtCreateTimestamp"].isNull())
			messageRouteObject.gmtCreateTimestamp = std::stol(dataNodeMessageRouteListMessageRoute["GmtCreateTimestamp"].asString());
		if(!dataNodeMessageRouteListMessageRoute["GmtModifiedTimestamp"].isNull())
			messageRouteObject.gmtModifiedTimestamp = std::stol(dataNodeMessageRouteListMessageRoute["GmtModifiedTimestamp"].asString());
		auto routeContextNode = value["RouteContext"];
		if(!routeContextNode["SourceFcServiceName"].isNull())
			messageRouteObject.routeContext.sourceFcServiceName = routeContextNode["SourceFcServiceName"].asString();
		if(!routeContextNode["SourceFcFunctionName"].isNull())
			messageRouteObject.routeContext.sourceFcFunctionName = routeContextNode["SourceFcFunctionName"].asString();
		if(!routeContextNode["SourceStreamName"].isNull())
			messageRouteObject.routeContext.sourceStreamName = routeContextNode["SourceStreamName"].asString();
		if(!routeContextNode["SourceApplicationName"].isNull())
			messageRouteObject.routeContext.sourceApplicationName = routeContextNode["SourceApplicationName"].asString();
		if(!routeContextNode["TargetFcServiceName"].isNull())
			messageRouteObject.routeContext.targetFcServiceName = routeContextNode["TargetFcServiceName"].asString();
		if(!routeContextNode["TargetFcFunctionName"].isNull())
			messageRouteObject.routeContext.targetFcFunctionName = routeContextNode["TargetFcFunctionName"].asString();
		if(!routeContextNode["TargetStreamName"].isNull())
			messageRouteObject.routeContext.targetStreamName = routeContextNode["TargetStreamName"].asString();
		if(!routeContextNode["TargetApplicationName"].isNull())
			messageRouteObject.routeContext.targetApplicationName = routeContextNode["TargetApplicationName"].asString();
		if(!routeContextNode["Qos"].isNull())
			messageRouteObject.routeContext.qos = routeContextNode["Qos"].asString();
		data_.messageRouteList.push_back(messageRouteObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryEdgeInstanceMessageRoutingResult::Data QueryEdgeInstanceMessageRoutingResult::getData()const
{
	return data_;
}

std::string QueryEdgeInstanceMessageRoutingResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryEdgeInstanceMessageRoutingResult::getCode()const
{
	return code_;
}

bool QueryEdgeInstanceMessageRoutingResult::getSuccess()const
{
	return success_;
}

