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

#include <alibabacloud/arms/model/ListRetcodeAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListRetcodeAppsResult::ListRetcodeAppsResult() :
	ServiceResult()
{}

ListRetcodeAppsResult::ListRetcodeAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRetcodeAppsResult::~ListRetcodeAppsResult()
{}

void ListRetcodeAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRetcodeApps = value["RetcodeApps"]["RetcodeApp"];
	for (auto value : allRetcodeApps)
	{
		RetcodeApp retcodeAppsObject;
		if(!value["AppId"].isNull())
			retcodeAppsObject.appId = std::stol(value["AppId"].asString());
		if(!value["Pid"].isNull())
			retcodeAppsObject.pid = value["Pid"].asString();
		if(!value["AppName"].isNull())
			retcodeAppsObject.appName = value["AppName"].asString();
		retcodeApps_.push_back(retcodeAppsObject);
	}

}

std::vector<ListRetcodeAppsResult::RetcodeApp> ListRetcodeAppsResult::getRetcodeApps()const
{
	return retcodeApps_;
}

