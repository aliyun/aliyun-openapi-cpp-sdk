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

#include <alibabacloud/live/model/QueryMessageAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

QueryMessageAppResult::QueryMessageAppResult() :
	ServiceResult()
{}

QueryMessageAppResult::QueryMessageAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMessageAppResult::~QueryMessageAppResult()
{}

void QueryMessageAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["resultItem"];
	for (auto valueResultresultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultresultItem["HasMore"].isNull())
			resultObject.hasMore = valueResultresultItem["HasMore"].asString() == "true";
		if(!valueResultresultItem["TotalCount"].isNull())
			resultObject.totalCount = std::stoi(valueResultresultItem["TotalCount"].asString());
		auto allAppListNode = valueResultresultItem["AppList"]["appListItem"];
		for (auto valueResultresultItemAppListappListItem : allAppListNode)
		{
			ResultItem::AppListItem appListObject;
			if(!valueResultresultItemAppListappListItem["AppConfig"].isNull())
				appListObject.appConfig = valueResultresultItemAppListappListItem["AppConfig"].asString();
			if(!valueResultresultItemAppListappListItem["AppId"].isNull())
				appListObject.appId = valueResultresultItemAppListappListItem["AppId"].asString();
			if(!valueResultresultItemAppListappListItem["AppName"].isNull())
				appListObject.appName = valueResultresultItemAppListappListItem["AppName"].asString();
			if(!valueResultresultItemAppListappListItem["CreateTime"].isNull())
				appListObject.createTime = std::stol(valueResultresultItemAppListappListItem["CreateTime"].asString());
			if(!valueResultresultItemAppListappListItem["Extension"].isNull())
				appListObject.extension = valueResultresultItemAppListappListItem["Extension"].asString();
			if(!valueResultresultItemAppListappListItem["Status"].isNull())
				appListObject.status = std::stoi(valueResultresultItemAppListappListItem["Status"].asString());
			resultObject.appList.push_back(appListObject);
		}
		result_.push_back(resultObject);
	}

}

std::vector<QueryMessageAppResult::ResultItem> QueryMessageAppResult::getResult()const
{
	return result_;
}

