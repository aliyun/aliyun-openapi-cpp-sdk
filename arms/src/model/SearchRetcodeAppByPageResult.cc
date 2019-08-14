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
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	auto allRetcodeApps = value["RetcodeApps"]["RetcodeApp"];
	for (auto value : allRetcodeApps)
	{
		PageBean::RetcodeApp retcodeAppObject;
		if(!value["AppId"].isNull())
			retcodeAppObject.appId = std::stol(value["AppId"].asString());
		if(!value["Pid"].isNull())
			retcodeAppObject.pid = value["Pid"].asString();
		if(!value["AppName"].isNull())
			retcodeAppObject.appName = value["AppName"].asString();
		if(!value["Type"].isNull())
			retcodeAppObject.type = value["Type"].asString();
		if(!value["UserId"].isNull())
			retcodeAppObject.userId = value["UserId"].asString();
		if(!value["RegionId"].isNull())
			retcodeAppObject.regionId = value["RegionId"].asString();
		if(!value["CreateTime"].isNull())
			retcodeAppObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["UpdateTime"].isNull())
			retcodeAppObject.updateTime = std::stol(value["UpdateTime"].asString());
		pageBean_.retcodeApps.push_back(retcodeAppObject);
	}

}

SearchRetcodeAppByPageResult::PageBean SearchRetcodeAppByPageResult::getPageBean()const
{
	return pageBean_;
}

