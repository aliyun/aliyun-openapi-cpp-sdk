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

#include <alibabacloud/dms-enterprise/model/ListLogicTableRouteConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListLogicTableRouteConfigResult::ListLogicTableRouteConfigResult() :
	ServiceResult()
{}

ListLogicTableRouteConfigResult::ListLogicTableRouteConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLogicTableRouteConfigResult::~ListLogicTableRouteConfigResult()
{}

void ListLogicTableRouteConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogicTableRouteConfigListNode = value["LogicTableRouteConfigList"]["LogicTableRouteConfig"];
	for (auto valueLogicTableRouteConfigListLogicTableRouteConfig : allLogicTableRouteConfigListNode)
	{
		LogicTableRouteConfig logicTableRouteConfigListObject;
		if(!valueLogicTableRouteConfigListLogicTableRouteConfig["RouteKey"].isNull())
			logicTableRouteConfigListObject.routeKey = valueLogicTableRouteConfigListLogicTableRouteConfig["RouteKey"].asString();
		if(!valueLogicTableRouteConfigListLogicTableRouteConfig["RouteExpr"].isNull())
			logicTableRouteConfigListObject.routeExpr = valueLogicTableRouteConfigListLogicTableRouteConfig["RouteExpr"].asString();
		if(!valueLogicTableRouteConfigListLogicTableRouteConfig["TableId"].isNull())
			logicTableRouteConfigListObject.tableId = std::stol(valueLogicTableRouteConfigListLogicTableRouteConfig["TableId"].asString());
		logicTableRouteConfigList_.push_back(logicTableRouteConfigListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListLogicTableRouteConfigResult::LogicTableRouteConfig> ListLogicTableRouteConfigResult::getLogicTableRouteConfigList()const
{
	return logicTableRouteConfigList_;
}

std::string ListLogicTableRouteConfigResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListLogicTableRouteConfigResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListLogicTableRouteConfigResult::getSuccess()const
{
	return success_;
}

