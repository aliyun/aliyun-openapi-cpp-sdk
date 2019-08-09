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

#include <alibabacloud/vod/model/ListAppInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAppInfoResult::ListAppInfoResult() :
	ServiceResult()
{}

ListAppInfoResult::ListAppInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppInfoResult::~ListAppInfoResult()
{}

void ListAppInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAppInfoList = value["AppInfoList"]["AppInfo"];
	for (auto value : allAppInfoList)
	{
		AppInfo appInfoListObject;
		if(!value["AppId"].isNull())
			appInfoListObject.appId = value["AppId"].asString();
		if(!value["AppName"].isNull())
			appInfoListObject.appName = value["AppName"].asString();
		if(!value["Type"].isNull())
			appInfoListObject.type = value["Type"].asString();
		if(!value["Description"].isNull())
			appInfoListObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			appInfoListObject.status = value["Status"].asString();
		if(!value["CreationTime"].isNull())
			appInfoListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModificationTime"].isNull())
			appInfoListObject.modificationTime = value["ModificationTime"].asString();
		appInfoList_.push_back(appInfoListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListAppInfoResult::getTotal()const
{
	return total_;
}

std::vector<ListAppInfoResult::AppInfo> ListAppInfoResult::getAppInfoList()const
{
	return appInfoList_;
}

