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

#include <alibabacloud/live/model/ListLiveMessageAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListLiveMessageAppsResult::ListLiveMessageAppsResult() :
	ServiceResult()
{}

ListLiveMessageAppsResult::ListLiveMessageAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveMessageAppsResult::~ListLiveMessageAppsResult()
{}

void ListLiveMessageAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppListNode = value["AppList"]["Apps"];
	for (auto valueAppListApps : allAppListNode)
	{
		Apps appListObject;
		if(!valueAppListApps["AppId"].isNull())
			appListObject.appId = valueAppListApps["AppId"].asString();
		if(!valueAppListApps["AppKey"].isNull())
			appListObject.appKey = valueAppListApps["AppKey"].asString();
		if(!valueAppListApps["AppSign"].isNull())
			appListObject.appSign = valueAppListApps["AppSign"].asString();
		if(!valueAppListApps["Disable"].isNull())
			appListObject.disable = valueAppListApps["Disable"].asString();
		if(!valueAppListApps["AppName"].isNull())
			appListObject.appName = valueAppListApps["AppName"].asString();
		if(!valueAppListApps["CreateTime"].isNull())
			appListObject.createTime = std::stol(valueAppListApps["CreateTime"].asString());
		if(!valueAppListApps["ModifyTime"].isNull())
			appListObject.modifyTime = std::stol(valueAppListApps["ModifyTime"].asString());
		if(!valueAppListApps["MsgLifeCycle"].isNull())
			appListObject.msgLifeCycle = std::stoi(valueAppListApps["MsgLifeCycle"].asString());
		if(!valueAppListApps["StreamSupport"].isNull())
			appListObject.streamSupport = std::stoi(valueAppListApps["StreamSupport"].asString());
		if(!valueAppListApps["RichTextSupport"].isNull())
			appListObject.richTextSupport = std::stoi(valueAppListApps["RichTextSupport"].asString());
		if(!valueAppListApps["DataCenter"].isNull())
			appListObject.dataCenter = valueAppListApps["DataCenter"].asString();
		appList_.push_back(appListObject);
	}
	if(!value["HasMore"].isNull())
		hasMore_ = value["HasMore"].asString() == "true";
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = std::stol(value["NextPageToken"].asString());

}

bool ListLiveMessageAppsResult::getHasMore()const
{
	return hasMore_;
}

long ListLiveMessageAppsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListLiveMessageAppsResult::Apps> ListLiveMessageAppsResult::getAppList()const
{
	return appList_;
}

