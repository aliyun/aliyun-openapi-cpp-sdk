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

#include <alibabacloud/iot/model/GetEdgeInstanceMessageRoutingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetEdgeInstanceMessageRoutingResult::GetEdgeInstanceMessageRoutingResult() :
	ServiceResult()
{}

GetEdgeInstanceMessageRoutingResult::GetEdgeInstanceMessageRoutingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEdgeInstanceMessageRoutingResult::~GetEdgeInstanceMessageRoutingResult()
{}

void GetEdgeInstanceMessageRoutingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TopicFilter"].isNull())
		data_.topicFilter = dataNode["TopicFilter"].asString();
	if(!dataNode["SourceType"].isNull())
		data_.sourceType = dataNode["SourceType"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["SourceData"].isNull())
		data_.sourceData = dataNode["SourceData"].asString();
	if(!dataNode["TargetType"].isNull())
		data_.targetType = dataNode["TargetType"].asString();
	if(!dataNode["TargetData"].isNull())
		data_.targetData = dataNode["TargetData"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["GmtCreateTimestamp"].isNull())
		data_.gmtCreateTimestamp = std::stol(dataNode["GmtCreateTimestamp"].asString());
	if(!dataNode["GmtModifiedTimestamp"].isNull())
		data_.gmtModifiedTimestamp = std::stol(dataNode["GmtModifiedTimestamp"].asString());
	auto routeContextNode = dataNode["RouteContext"];
	if(!routeContextNode["SourceFcServiceName"].isNull())
		data_.routeContext.sourceFcServiceName = routeContextNode["SourceFcServiceName"].asString();
	if(!routeContextNode["SourceFcFunctionName"].isNull())
		data_.routeContext.sourceFcFunctionName = routeContextNode["SourceFcFunctionName"].asString();
	if(!routeContextNode["SourceStreamName"].isNull())
		data_.routeContext.sourceStreamName = routeContextNode["SourceStreamName"].asString();
	if(!routeContextNode["SourceApplicationName"].isNull())
		data_.routeContext.sourceApplicationName = routeContextNode["SourceApplicationName"].asString();
	if(!routeContextNode["TargetFcServiceName"].isNull())
		data_.routeContext.targetFcServiceName = routeContextNode["TargetFcServiceName"].asString();
	if(!routeContextNode["TargetFcFunctionName"].isNull())
		data_.routeContext.targetFcFunctionName = routeContextNode["TargetFcFunctionName"].asString();
	if(!routeContextNode["TargetStreamName"].isNull())
		data_.routeContext.targetStreamName = routeContextNode["TargetStreamName"].asString();
	if(!routeContextNode["TargetApplicationName"].isNull())
		data_.routeContext.targetApplicationName = routeContextNode["TargetApplicationName"].asString();
	if(!routeContextNode["Qos"].isNull())
		data_.routeContext.qos = routeContextNode["Qos"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetEdgeInstanceMessageRoutingResult::Data GetEdgeInstanceMessageRoutingResult::getData()const
{
	return data_;
}

std::string GetEdgeInstanceMessageRoutingResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetEdgeInstanceMessageRoutingResult::getCode()const
{
	return code_;
}

bool GetEdgeInstanceMessageRoutingResult::getSuccess()const
{
	return success_;
}

