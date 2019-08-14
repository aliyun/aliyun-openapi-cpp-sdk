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

#include <alibabacloud/arms/model/SearchTraceAppByPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchTraceAppByPageResult::SearchTraceAppByPageResult() :
	ServiceResult()
{}

SearchTraceAppByPageResult::SearchTraceAppByPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTraceAppByPageResult::~SearchTraceAppByPageResult()
{}

void SearchTraceAppByPageResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	auto allTraceApps = value["TraceApps"]["TraceApp"];
	for (auto value : allTraceApps)
	{
		PageBean::TraceApp traceAppObject;
		if(!value["AppId"].isNull())
			traceAppObject.appId = std::stol(value["AppId"].asString());
		if(!value["Pid"].isNull())
			traceAppObject.pid = value["Pid"].asString();
		if(!value["AppName"].isNull())
			traceAppObject.appName = value["AppName"].asString();
		if(!value["Type"].isNull())
			traceAppObject.type = value["Type"].asString();
		if(!value["UserId"].isNull())
			traceAppObject.userId = value["UserId"].asString();
		if(!value["RegionId"].isNull())
			traceAppObject.regionId = value["RegionId"].asString();
		if(!value["CreateTime"].isNull())
			traceAppObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["UpdateTime"].isNull())
			traceAppObject.updateTime = std::stol(value["UpdateTime"].asString());
		pageBean_.traceApps.push_back(traceAppObject);
	}

}

SearchTraceAppByPageResult::PageBean SearchTraceAppByPageResult::getPageBean()const
{
	return pageBean_;
}

