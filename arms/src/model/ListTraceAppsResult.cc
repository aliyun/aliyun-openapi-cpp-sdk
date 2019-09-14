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

#include <alibabacloud/arms/model/ListTraceAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListTraceAppsResult::ListTraceAppsResult() :
	ServiceResult()
{}

ListTraceAppsResult::ListTraceAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTraceAppsResult::~ListTraceAppsResult()
{}

void ListTraceAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTraceApps = value["TraceApps"]["TraceApp"];
	for (auto value : allTraceApps)
	{
		TraceApp traceAppsObject;
		if(!value["AppId"].isNull())
			traceAppsObject.appId = std::stol(value["AppId"].asString());
		if(!value["Pid"].isNull())
			traceAppsObject.pid = value["Pid"].asString();
		if(!value["AppName"].isNull())
			traceAppsObject.appName = value["AppName"].asString();
		if(!value["Type"].isNull())
			traceAppsObject.type = value["Type"].asString();
		if(!value["UserId"].isNull())
			traceAppsObject.userId = value["UserId"].asString();
		if(!value["CreateTime"].isNull())
			traceAppsObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["UpdateTime"].isNull())
			traceAppsObject.updateTime = std::stol(value["UpdateTime"].asString());
		if(!value["RegionId"].isNull())
			traceAppsObject.regionId = value["RegionId"].asString();
		traceApps_.push_back(traceAppsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<ListTraceAppsResult::TraceApp> ListTraceAppsResult::getTraceApps()const
{
	return traceApps_;
}

std::string ListTraceAppsResult::getMessage()const
{
	return message_;
}

int ListTraceAppsResult::getCode()const
{
	return code_;
}

bool ListTraceAppsResult::getSuccess()const
{
	return success_;
}

