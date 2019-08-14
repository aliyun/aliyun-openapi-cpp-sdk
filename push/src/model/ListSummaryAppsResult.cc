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

#include <alibabacloud/push/model/ListSummaryAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

ListSummaryAppsResult::ListSummaryAppsResult() :
	ServiceResult()
{}

ListSummaryAppsResult::ListSummaryAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSummaryAppsResult::~ListSummaryAppsResult()
{}

void ListSummaryAppsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSummaryAppInfos = value["SummaryAppInfos"]["SummaryAppInfo"];
	for (auto value : allSummaryAppInfos)
	{
		SummaryAppInfo summaryAppInfosObject;
		if(!value["AppName"].isNull())
			summaryAppInfosObject.appName = value["AppName"].asString();
		if(!value["AppKey"].isNull())
			summaryAppInfosObject.appKey = std::stol(value["AppKey"].asString());
		summaryAppInfos_.push_back(summaryAppInfosObject);
	}

}

std::vector<ListSummaryAppsResult::SummaryAppInfo> ListSummaryAppsResult::getSummaryAppInfos()const
{
	return summaryAppInfos_;
}

