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

#include <alibabacloud/arms/model/SearchRetcodeAppByPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchRetcodeAppByPageResult::SearchRetcodeAppByPageResult() :
	ServiceResult()
{}

SearchRetcodeAppByPageResult::SearchRetcodeAppByPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchRetcodeAppByPageResult::~SearchRetcodeAppByPageResult()
{}

void SearchRetcodeAppByPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	auto allRetcodeAppsNode = pageBeanNode["RetcodeApps"]["RetcodeApp"];
	for (auto pageBeanNodeRetcodeAppsRetcodeApp : allRetcodeAppsNode)
	{
		PageBean::RetcodeApp retcodeAppObject;
		if(!pageBeanNodeRetcodeAppsRetcodeApp["Type"].isNull())
			retcodeAppObject.type = pageBeanNodeRetcodeAppsRetcodeApp["Type"].asString();
		if(!pageBeanNodeRetcodeAppsRetcodeApp["AppName"].isNull())
			retcodeAppObject.appName = pageBeanNodeRetcodeAppsRetcodeApp["AppName"].asString();
		if(!pageBeanNodeRetcodeAppsRetcodeApp["RetcodeAppType"].isNull())
			retcodeAppObject.retcodeAppType = pageBeanNodeRetcodeAppsRetcodeApp["RetcodeAppType"].asString();
		if(!pageBeanNodeRetcodeAppsRetcodeApp["UpdateTime"].isNull())
			retcodeAppObject.updateTime = std::stol(pageBeanNodeRetcodeAppsRetcodeApp["UpdateTime"].asString());
		if(!pageBeanNodeRetcodeAppsRetcodeApp["CreateTime"].isNull())
			retcodeAppObject.createTime = std::stol(pageBeanNodeRetcodeAppsRetcodeApp["CreateTime"].asString());
		if(!pageBeanNodeRetcodeAppsRetcodeApp["Pid"].isNull())
			retcodeAppObject.pid = pageBeanNodeRetcodeAppsRetcodeApp["Pid"].asString();
		if(!pageBeanNodeRetcodeAppsRetcodeApp["AppId"].isNull())
			retcodeAppObject.appId = std::stol(pageBeanNodeRetcodeAppsRetcodeApp["AppId"].asString());
		if(!pageBeanNodeRetcodeAppsRetcodeApp["UserId"].isNull())
			retcodeAppObject.userId = pageBeanNodeRetcodeAppsRetcodeApp["UserId"].asString();
		if(!pageBeanNodeRetcodeAppsRetcodeApp["RegionId"].isNull())
			retcodeAppObject.regionId = pageBeanNodeRetcodeAppsRetcodeApp["RegionId"].asString();
		pageBean_.retcodeApps.push_back(retcodeAppObject);
	}

}

SearchRetcodeAppByPageResult::PageBean SearchRetcodeAppByPageResult::getPageBean()const
{
	return pageBean_;
}

