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

#include <alibabacloud/openanalytics-open/model/QueryTaskSumResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

QueryTaskSumResult::QueryTaskSumResult() :
	ServiceResult()
{}

QueryTaskSumResult::QueryTaskSumResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTaskSumResult::~QueryTaskSumResult()
{}

void QueryTaskSumResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto queryTaskSumInfoNode = value["QueryTaskSumInfo"];
	if(!queryTaskSumInfoNode["Uid"].isNull())
		queryTaskSumInfo_.uid = queryTaskSumInfoNode["Uid"].asString();
	if(!queryTaskSumInfoNode["ScannedDataBytesGbToday"].isNull())
		queryTaskSumInfo_.scannedDataBytesGbToday = queryTaskSumInfoNode["ScannedDataBytesGbToday"].asString();
	if(!queryTaskSumInfoNode["TotalStmtCountToday"].isNull())
		queryTaskSumInfo_.totalStmtCountToday = queryTaskSumInfoNode["TotalStmtCountToday"].asString();
	if(!queryTaskSumInfoNode["TotalChargedStmtCountToday"].isNull())
		queryTaskSumInfo_.totalChargedStmtCountToday = queryTaskSumInfoNode["TotalChargedStmtCountToday"].asString();
	if(!queryTaskSumInfoNode["ScannedDataBytesTodayIncr"].isNull())
		queryTaskSumInfo_.scannedDataBytesTodayIncr = queryTaskSumInfoNode["ScannedDataBytesTodayIncr"].asString();
	if(!queryTaskSumInfoNode["TotalStmtCountTodayIncr"].isNull())
		queryTaskSumInfo_.totalStmtCountTodayIncr = queryTaskSumInfoNode["TotalStmtCountTodayIncr"].asString();
	if(!queryTaskSumInfoNode["TotalChargedStmtCountTodayIncr"].isNull())
		queryTaskSumInfo_.totalChargedStmtCountTodayIncr = queryTaskSumInfoNode["TotalChargedStmtCountTodayIncr"].asString();
	if(!queryTaskSumInfoNode["ScannedDataBytesGbYesterday"].isNull())
		queryTaskSumInfo_.scannedDataBytesGbYesterday = queryTaskSumInfoNode["ScannedDataBytesGbYesterday"].asString();
	if(!queryTaskSumInfoNode["TotalStmtCountYesterday"].isNull())
		queryTaskSumInfo_.totalStmtCountYesterday = queryTaskSumInfoNode["TotalStmtCountYesterday"].asString();
	if(!queryTaskSumInfoNode["TotalChargedStmtCountYesterday"].isNull())
		queryTaskSumInfo_.totalChargedStmtCountYesterday = queryTaskSumInfoNode["TotalChargedStmtCountYesterday"].asString();
	if(!queryTaskSumInfoNode["ScannedDataBytesYesterdayIncr"].isNull())
		queryTaskSumInfo_.scannedDataBytesYesterdayIncr = queryTaskSumInfoNode["ScannedDataBytesYesterdayIncr"].asString();
	if(!queryTaskSumInfoNode["TotalStmtCountYesterdayIncr"].isNull())
		queryTaskSumInfo_.totalStmtCountYesterdayIncr = queryTaskSumInfoNode["TotalStmtCountYesterdayIncr"].asString();
	if(!queryTaskSumInfoNode["TotalChargedStmtCountYesterdayIncr"].isNull())
		queryTaskSumInfo_.totalChargedStmtCountYesterdayIncr = queryTaskSumInfoNode["TotalChargedStmtCountYesterdayIncr"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

QueryTaskSumResult::QueryTaskSumInfo QueryTaskSumResult::getQueryTaskSumInfo()const
{
	return queryTaskSumInfo_;
}

std::string QueryTaskSumResult::getRegionId()const
{
	return regionId_;
}

