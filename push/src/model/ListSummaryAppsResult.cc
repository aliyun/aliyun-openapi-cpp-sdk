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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSummaryAppInfosNode = value["SummaryAppInfos"]["SummaryAppInfo"];
	for (auto valueSummaryAppInfosSummaryAppInfo : allSummaryAppInfosNode)
	{
		SummaryAppInfo summaryAppInfosObject;
		if(!valueSummaryAppInfosSummaryAppInfo["AppKey"].isNull())
			summaryAppInfosObject.appKey = std::stol(valueSummaryAppInfosSummaryAppInfo["AppKey"].asString());
		if(!valueSummaryAppInfosSummaryAppInfo["AppName"].isNull())
			summaryAppInfosObject.appName = valueSummaryAppInfosSummaryAppInfo["AppName"].asString();
		summaryAppInfos_.push_back(summaryAppInfosObject);
	}

}

std::vector<ListSummaryAppsResult::SummaryAppInfo> ListSummaryAppsResult::getSummaryAppInfos()const
{
	return summaryAppInfos_;
}

