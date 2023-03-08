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

#include <alibabacloud/adb/model/ListSparkAppAttemptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

ListSparkAppAttemptsResult::ListSparkAppAttemptsResult() :
	ServiceResult()
{}

ListSparkAppAttemptsResult::ListSparkAppAttemptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSparkAppAttemptsResult::~ListSparkAppAttemptsResult()
{}

void ListSparkAppAttemptsResult::parse(const std::string &payload)
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
	auto allAttemptInfoListNode = dataNode["AttemptInfoList"]["AttemptInfo"];
	for (auto dataNodeAttemptInfoListAttemptInfo : allAttemptInfoListNode)
	{
		Data::AttemptInfo attemptInfoObject;
		if(!dataNodeAttemptInfoListAttemptInfo["AttemptId"].isNull())
			attemptInfoObject.attemptId = dataNodeAttemptInfoListAttemptInfo["AttemptId"].asString();
		if(!dataNodeAttemptInfoListAttemptInfo["State"].isNull())
			attemptInfoObject.state = dataNodeAttemptInfoListAttemptInfo["State"].asString();
		if(!dataNodeAttemptInfoListAttemptInfo["Message"].isNull())
			attemptInfoObject.message = dataNodeAttemptInfoListAttemptInfo["Message"].asString();
		auto detailNode = value["Detail"];
		if(!detailNode["Data"].isNull())
			attemptInfoObject.detail.data = detailNode["Data"].asString();
		if(!detailNode["EstimateExecutionCpuTimeInSeconds"].isNull())
			attemptInfoObject.detail.estimateExecutionCpuTimeInSeconds = std::stol(detailNode["EstimateExecutionCpuTimeInSeconds"].asString());
		if(!detailNode["LogRootPath"].isNull())
			attemptInfoObject.detail.logRootPath = detailNode["LogRootPath"].asString();
		if(!detailNode["LastAttemptId"].isNull())
			attemptInfoObject.detail.lastAttemptId = detailNode["LastAttemptId"].asString();
		if(!detailNode["WebUiAddress"].isNull())
			attemptInfoObject.detail.webUiAddress = detailNode["WebUiAddress"].asString();
		if(!detailNode["SubmittedTimeInMillis"].isNull())
			attemptInfoObject.detail.submittedTimeInMillis = std::stol(detailNode["SubmittedTimeInMillis"].asString());
		if(!detailNode["StartedTimeInMillis"].isNull())
			attemptInfoObject.detail.startedTimeInMillis = std::stol(detailNode["StartedTimeInMillis"].asString());
		if(!detailNode["LastUpdatedTimeInMillis"].isNull())
			attemptInfoObject.detail.lastUpdatedTimeInMillis = std::stol(detailNode["LastUpdatedTimeInMillis"].asString());
		if(!detailNode["TerminatedTimeInMillis"].isNull())
			attemptInfoObject.detail.terminatedTimeInMillis = std::stol(detailNode["TerminatedTimeInMillis"].asString());
		if(!detailNode["DBClusterId"].isNull())
			attemptInfoObject.detail.dBClusterId = detailNode["DBClusterId"].asString();
		if(!detailNode["ResourceGroupName"].isNull())
			attemptInfoObject.detail.resourceGroupName = detailNode["ResourceGroupName"].asString();
		if(!detailNode["DurationInMillis"].isNull())
			attemptInfoObject.detail.durationInMillis = std::stol(detailNode["DurationInMillis"].asString());
		data_.attemptInfoList.push_back(attemptInfoObject);
	}

}

ListSparkAppAttemptsResult::Data ListSparkAppAttemptsResult::getData()const
{
	return data_;
}

