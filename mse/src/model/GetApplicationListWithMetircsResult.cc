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

#include <alibabacloud/mse/model/GetApplicationListWithMetircsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetApplicationListWithMetircsResult::GetApplicationListWithMetircsResult() :
	ServiceResult()
{}

GetApplicationListWithMetircsResult::GetApplicationListWithMetircsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationListWithMetircsResult::~GetApplicationListWithMetircsResult()
{}

void GetApplicationListWithMetircsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["ApplicationList"];
	for (auto dataNodeResultApplicationList : allResultNode)
	{
		Data::ApplicationList applicationListObject;
		if(!dataNodeResultApplicationList["RegionId"].isNull())
			applicationListObject.regionId = dataNodeResultApplicationList["RegionId"].asString();
		if(!dataNodeResultApplicationList["Namespace"].isNull())
			applicationListObject._namespace = dataNodeResultApplicationList["Namespace"].asString();
		if(!dataNodeResultApplicationList["AppName"].isNull())
			applicationListObject.appName = dataNodeResultApplicationList["AppName"].asString();
		if(!dataNodeResultApplicationList["AppId"].isNull())
			applicationListObject.appId = dataNodeResultApplicationList["AppId"].asString();
		if(!dataNodeResultApplicationList["Status"].isNull())
			applicationListObject.status = std::stol(dataNodeResultApplicationList["Status"].asString());
		if(!dataNodeResultApplicationList["ExtraInfo"].isNull())
			applicationListObject.extraInfo = dataNodeResultApplicationList["ExtraInfo"].asString();
		if(!dataNodeResultApplicationList["LicenseKey"].isNull())
			applicationListObject.licenseKey = dataNodeResultApplicationList["LicenseKey"].asString();
		if(!dataNodeResultApplicationList["UserId"].isNull())
			applicationListObject.userId = dataNodeResultApplicationList["UserId"].asString();
		if(!dataNodeResultApplicationList["InstancesNumber"].isNull())
			applicationListObject.instancesNumber = std::stoi(dataNodeResultApplicationList["InstancesNumber"].asString());
		if(!dataNodeResultApplicationList["Source"].isNull())
			applicationListObject.source = dataNodeResultApplicationList["Source"].asString();
		if(!dataNodeResultApplicationList["Language"].isNull())
			applicationListObject.language = dataNodeResultApplicationList["Language"].asString();
		if(!dataNodeResultApplicationList["TagCount"].isNull())
			applicationListObject.tagCount = std::stol(dataNodeResultApplicationList["TagCount"].asString());
		if(!dataNodeResultApplicationList["AppType"].isNull())
			applicationListObject.appType = std::stoi(dataNodeResultApplicationList["AppType"].asString());
		auto allCurMetricsNode = dataNodeResultApplicationList["CurMetrics"]["curMetricsItem"];
		for (auto dataNodeResultApplicationListCurMetricscurMetricsItem : allCurMetricsNode)
		{
			Data::ApplicationList::CurMetricsItem curMetricsObject;
			if(!dataNodeResultApplicationListCurMetricscurMetricsItem["Timestamp"].isNull())
				curMetricsObject.timestamp = std::stol(dataNodeResultApplicationListCurMetricscurMetricsItem["Timestamp"].asString());
			if(!dataNodeResultApplicationListCurMetricscurMetricsItem["Qps"].isNull())
				curMetricsObject.qps = dataNodeResultApplicationListCurMetricscurMetricsItem["Qps"].asString();
			if(!dataNodeResultApplicationListCurMetricscurMetricsItem["ExpQps"].isNull())
				curMetricsObject.expQps = dataNodeResultApplicationListCurMetricscurMetricsItem["ExpQps"].asString();
			if(!dataNodeResultApplicationListCurMetricscurMetricsItem["Rt"].isNull())
				curMetricsObject.rt = dataNodeResultApplicationListCurMetricscurMetricsItem["Rt"].asString();
			if(!dataNodeResultApplicationListCurMetricscurMetricsItem["PassQps"].isNull())
				curMetricsObject.passQps = dataNodeResultApplicationListCurMetricscurMetricsItem["PassQps"].asString();
			if(!dataNodeResultApplicationListCurMetricscurMetricsItem["BlockQps"].isNull())
				curMetricsObject.blockQps = dataNodeResultApplicationListCurMetricscurMetricsItem["BlockQps"].asString();
			if(!dataNodeResultApplicationListCurMetricscurMetricsItem["Thread"].isNull())
				curMetricsObject.thread = dataNodeResultApplicationListCurMetricscurMetricsItem["Thread"].asString();
			applicationListObject.curMetrics.push_back(curMetricsObject);
		}
		auto curMetricsFmNode = value["CurMetricsFm"];
		if(!curMetricsFmNode["Timestamp"].isNull())
			applicationListObject.curMetricsFm.timestamp = std::stol(curMetricsFmNode["Timestamp"].asString());
		if(!curMetricsFmNode["Qps"].isNull())
			applicationListObject.curMetricsFm.qps = curMetricsFmNode["Qps"].asString();
		if(!curMetricsFmNode["ExpQps"].isNull())
			applicationListObject.curMetricsFm.expQps = curMetricsFmNode["ExpQps"].asString();
		if(!curMetricsFmNode["Rt"].isNull())
			applicationListObject.curMetricsFm.rt = curMetricsFmNode["Rt"].asString();
		if(!curMetricsFmNode["PassQps"].isNull())
			applicationListObject.curMetricsFm.passQps = curMetricsFmNode["PassQps"].asString();
		if(!curMetricsFmNode["BlockQps"].isNull())
			applicationListObject.curMetricsFm.blockQps = curMetricsFmNode["BlockQps"].asString();
		if(!curMetricsFmNode["Thread"].isNull())
			applicationListObject.curMetricsFm.thread = curMetricsFmNode["Thread"].asString();
		auto allTags = value["Tags"]["Tags"];
		for (auto value : allTags)
			applicationListObject.tags.push_back(value.asString());
		data_.result.push_back(applicationListObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetApplicationListWithMetircsResult::getMessage()const
{
	return message_;
}

int GetApplicationListWithMetircsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetApplicationListWithMetircsResult::Data GetApplicationListWithMetircsResult::getData()const
{
	return data_;
}

int GetApplicationListWithMetircsResult::getCode()const
{
	return code_;
}

bool GetApplicationListWithMetircsResult::getSuccess()const
{
	return success_;
}

