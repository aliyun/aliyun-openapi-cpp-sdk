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

#include <alibabacloud/adb/model/GetSparkAppInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetSparkAppInfoResult::GetSparkAppInfoResult() :
	ServiceResult()
{}

GetSparkAppInfoResult::GetSparkAppInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSparkAppInfoResult::~GetSparkAppInfoResult()
{}

void GetSparkAppInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["State"].isNull())
		data_.state = dataNode["State"].asString();
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!dataNode["DBClusterId"].isNull())
		data_.dBClusterId = dataNode["DBClusterId"].asString();
	auto detailNode = dataNode["Detail"];
	if(!detailNode["Data"].isNull())
		data_.detail.data = detailNode["Data"].asString();
	if(!detailNode["EstimateExecutionCpuTimeInSeconds"].isNull())
		data_.detail.estimateExecutionCpuTimeInSeconds = std::stol(detailNode["EstimateExecutionCpuTimeInSeconds"].asString());
	if(!detailNode["LogRootPath"].isNull())
		data_.detail.logRootPath = detailNode["LogRootPath"].asString();
	if(!detailNode["LastAttemptId"].isNull())
		data_.detail.lastAttemptId = detailNode["LastAttemptId"].asString();
	if(!detailNode["WebUiAddress"].isNull())
		data_.detail.webUiAddress = detailNode["WebUiAddress"].asString();
	if(!detailNode["SubmittedTimeInMillis"].isNull())
		data_.detail.submittedTimeInMillis = std::stol(detailNode["SubmittedTimeInMillis"].asString());
	if(!detailNode["StartedTimeInMillis"].isNull())
		data_.detail.startedTimeInMillis = std::stol(detailNode["StartedTimeInMillis"].asString());
	if(!detailNode["LastUpdatedTimeInMillis"].isNull())
		data_.detail.lastUpdatedTimeInMillis = std::stol(detailNode["LastUpdatedTimeInMillis"].asString());
	if(!detailNode["TerminatedTimeInMillis"].isNull())
		data_.detail.terminatedTimeInMillis = std::stol(detailNode["TerminatedTimeInMillis"].asString());
	if(!detailNode["DBClusterId"].isNull())
		data_.detail.dBClusterId = detailNode["DBClusterId"].asString();
	if(!detailNode["ResourceGroupName"].isNull())
		data_.detail.resourceGroupName = detailNode["ResourceGroupName"].asString();
	if(!detailNode["DurationInMillis"].isNull())
		data_.detail.durationInMillis = std::stol(detailNode["DurationInMillis"].asString());

}

GetSparkAppInfoResult::Data GetSparkAppInfoResult::getData()const
{
	return data_;
}

