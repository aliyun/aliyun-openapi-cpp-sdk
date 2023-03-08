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

#include <alibabacloud/adb/model/ListSparkAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

ListSparkAppsResult::ListSparkAppsResult() :
	ServiceResult()
{}

ListSparkAppsResult::ListSparkAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSparkAppsResult::~ListSparkAppsResult()
{}

void ListSparkAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allAppInfoListNode = dataNode["AppInfoList"]["AppInfo"];
	for (auto dataNodeAppInfoListAppInfo : allAppInfoListNode)
	{
		Data::AppInfo appInfoObject;
		if(!dataNodeAppInfoListAppInfo["AppId"].isNull())
			appInfoObject.appId = dataNodeAppInfoListAppInfo["AppId"].asString();
		if(!dataNodeAppInfoListAppInfo["AppName"].isNull())
			appInfoObject.appName = dataNodeAppInfoListAppInfo["AppName"].asString();
		if(!dataNodeAppInfoListAppInfo["State"].isNull())
			appInfoObject.state = dataNodeAppInfoListAppInfo["State"].asString();
		if(!dataNodeAppInfoListAppInfo["Message"].isNull())
			appInfoObject.message = dataNodeAppInfoListAppInfo["Message"].asString();
		if(!dataNodeAppInfoListAppInfo["DBClusterId"].isNull())
			appInfoObject.dBClusterId = dataNodeAppInfoListAppInfo["DBClusterId"].asString();
		auto detailNode = value["Detail"];
		if(!detailNode["Data"].isNull())
			appInfoObject.detail.data = detailNode["Data"].asString();
		if(!detailNode["EstimateExecutionCpuTimeInSeconds"].isNull())
			appInfoObject.detail.estimateExecutionCpuTimeInSeconds = std::stol(detailNode["EstimateExecutionCpuTimeInSeconds"].asString());
		if(!detailNode["LogRootPath"].isNull())
			appInfoObject.detail.logRootPath = detailNode["LogRootPath"].asString();
		if(!detailNode["LastAttemptId"].isNull())
			appInfoObject.detail.lastAttemptId = detailNode["LastAttemptId"].asString();
		if(!detailNode["WebUiAddress"].isNull())
			appInfoObject.detail.webUiAddress = detailNode["WebUiAddress"].asString();
		if(!detailNode["SubmittedTimeInMillis"].isNull())
			appInfoObject.detail.submittedTimeInMillis = std::stol(detailNode["SubmittedTimeInMillis"].asString());
		if(!detailNode["StartedTimeInMillis"].isNull())
			appInfoObject.detail.startedTimeInMillis = std::stol(detailNode["StartedTimeInMillis"].asString());
		if(!detailNode["LastUpdatedTimeInMillis"].isNull())
			appInfoObject.detail.lastUpdatedTimeInMillis = std::stol(detailNode["LastUpdatedTimeInMillis"].asString());
		if(!detailNode["TerminatedTimeInMillis"].isNull())
			appInfoObject.detail.terminatedTimeInMillis = std::stol(detailNode["TerminatedTimeInMillis"].asString());
		if(!detailNode["DBClusterId"].isNull())
			appInfoObject.detail.dBClusterId = detailNode["DBClusterId"].asString();
		if(!detailNode["ResourceGroupName"].isNull())
			appInfoObject.detail.resourceGroupName = detailNode["ResourceGroupName"].asString();
		if(!detailNode["DurationInMillis"].isNull())
			appInfoObject.detail.durationInMillis = std::stol(detailNode["DurationInMillis"].asString());
		data_.appInfoList.push_back(appInfoObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListSparkAppsResult::getTotalCount()const
{
	return totalCount_;
}

long ListSparkAppsResult::getPageSize()const
{
	return pageSize_;
}

long ListSparkAppsResult::getPageNumber()const
{
	return pageNumber_;
}

ListSparkAppsResult::Data ListSparkAppsResult::getData()const
{
	return data_;
}

