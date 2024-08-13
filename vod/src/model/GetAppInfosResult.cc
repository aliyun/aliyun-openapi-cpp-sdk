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

#include <alibabacloud/vod/model/GetAppInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetAppInfosResult::GetAppInfosResult() :
	ServiceResult()
{}

GetAppInfosResult::GetAppInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppInfosResult::~GetAppInfosResult()
{}

void GetAppInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppInfoListNode = value["AppInfoList"]["AppInfo"];
	for (auto valueAppInfoListAppInfo : allAppInfoListNode)
	{
		AppInfo appInfoListObject;
		if(!valueAppInfoListAppInfo["Type"].isNull())
			appInfoListObject.type = valueAppInfoListAppInfo["Type"].asString();
		if(!valueAppInfoListAppInfo["Status"].isNull())
			appInfoListObject.status = valueAppInfoListAppInfo["Status"].asString();
		if(!valueAppInfoListAppInfo["CreationTime"].isNull())
			appInfoListObject.creationTime = valueAppInfoListAppInfo["CreationTime"].asString();
		if(!valueAppInfoListAppInfo["AppName"].isNull())
			appInfoListObject.appName = valueAppInfoListAppInfo["AppName"].asString();
		if(!valueAppInfoListAppInfo["Description"].isNull())
			appInfoListObject.description = valueAppInfoListAppInfo["Description"].asString();
		if(!valueAppInfoListAppInfo["AppId"].isNull())
			appInfoListObject.appId = valueAppInfoListAppInfo["AppId"].asString();
		if(!valueAppInfoListAppInfo["ModificationTime"].isNull())
			appInfoListObject.modificationTime = valueAppInfoListAppInfo["ModificationTime"].asString();
		if(!valueAppInfoListAppInfo["ResourceGroupId"].isNull())
			appInfoListObject.resourceGroupId = valueAppInfoListAppInfo["ResourceGroupId"].asString();
		appInfoList_.push_back(appInfoListObject);
	}
	auto allNonExistAppIds = value["NonExistAppIds"]["AppId"];
	for (const auto &item : allNonExistAppIds)
		nonExistAppIds_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::vector<GetAppInfosResult::AppInfo> GetAppInfosResult::getAppInfoList()const
{
	return appInfoList_;
}

std::string GetAppInfosResult::getCode()const
{
	return code_;
}

std::vector<std::string> GetAppInfosResult::getNonExistAppIds()const
{
	return nonExistAppIds_;
}

