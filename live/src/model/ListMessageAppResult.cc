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

#include <alibabacloud/live/model/ListMessageAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListMessageAppResult::ListMessageAppResult() :
	ServiceResult()
{}

ListMessageAppResult::ListMessageAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMessageAppResult::~ListMessageAppResult()
{}

void ListMessageAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["HasMore"].isNull())
		result_.hasMore = resultNode["HasMore"].asString() == "true";
	if(!resultNode["Total"].isNull())
		result_.total = std::stoi(resultNode["Total"].asString());
	auto allAppListNode = resultNode["AppList"]["appListItem"];
	for (auto resultNodeAppListappListItem : allAppListNode)
	{
		Result::AppListItem appListItemObject;
		if(!resultNodeAppListappListItem["AppConfig"].isNull())
			appListItemObject.appConfig = resultNodeAppListappListItem["AppConfig"].asString();
		if(!resultNodeAppListappListItem["AppId"].isNull())
			appListItemObject.appId = resultNodeAppListappListItem["AppId"].asString();
		if(!resultNodeAppListappListItem["AppName"].isNull())
			appListItemObject.appName = resultNodeAppListappListItem["AppName"].asString();
		if(!resultNodeAppListappListItem["CreateTime"].isNull())
			appListItemObject.createTime = std::stol(resultNodeAppListappListItem["CreateTime"].asString());
		if(!resultNodeAppListappListItem["Extension"].isNull())
			appListItemObject.extension = resultNodeAppListappListItem["Extension"].asString();
		if(!resultNodeAppListappListItem["Status"].isNull())
			appListItemObject.status = std::stoi(resultNodeAppListappListItem["Status"].asString());
		result_.appList.push_back(appListItemObject);
	}

}

ListMessageAppResult::Result ListMessageAppResult::getResult()const
{
	return result_;
}

