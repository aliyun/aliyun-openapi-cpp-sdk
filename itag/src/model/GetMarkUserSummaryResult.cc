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

#include <alibabacloud/itag/model/GetMarkUserSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetMarkUserSummaryResult::GetMarkUserSummaryResult() :
	ServiceResult()
{}

GetMarkUserSummaryResult::GetMarkUserSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMarkUserSummaryResult::~GetMarkUserSummaryResult()
{}

void GetMarkUserSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["TotalDisable"].isNull())
		result_.totalDisable = std::stoi(resultNode["TotalDisable"].asString());
	if(!resultNode["UpdateTime"].isNull())
		result_.updateTime = resultNode["UpdateTime"].asString();
	if(!resultNode["Sample"].isNull())
		result_.sample = std::stoi(resultNode["Sample"].asString());
	if(!resultNode["TotalMark"].isNull())
		result_.totalMark = std::stoi(resultNode["TotalMark"].asString());
	if(!resultNode["NoRejectMark"].isNull())
		result_.noRejectMark = std::stoi(resultNode["NoRejectMark"].asString());
	if(!resultNode["TotalChecked"].isNull())
		result_.totalChecked = std::stoi(resultNode["TotalChecked"].asString());
	if(!resultNode["CheckedError"].isNull())
		result_.checkedError = std::stoi(resultNode["CheckedError"].asString());
	if(!resultNode["CheckedAccuracy"].isNull())
		result_.checkedAccuracy = std::stof(resultNode["CheckedAccuracy"].asString());
	if(!resultNode["CheckedReject"].isNull())
		result_.checkedReject = std::stoi(resultNode["CheckedReject"].asString());
	if(!resultNode["CheckedFix"].isNull())
		result_.checkedFix = std::stoi(resultNode["CheckedFix"].asString());
	if(!resultNode["TotalSampled"].isNull())
		result_.totalSampled = std::stoi(resultNode["TotalSampled"].asString());
	if(!resultNode["SampledError"].isNull())
		result_.sampledError = std::stoi(resultNode["SampledError"].asString());
	if(!resultNode["SampledReject"].isNull())
		result_.sampledReject = std::stoi(resultNode["SampledReject"].asString());
	if(!resultNode["SampledFix"].isNull())
		result_.sampledFix = std::stoi(resultNode["SampledFix"].asString());
	if(!resultNode["SampledAccuracy"].isNull())
		result_.sampledAccuracy = std::stof(resultNode["SampledAccuracy"].asString());
	if(!resultNode["TotalSampling"].isNull())
		result_.totalSampling = std::stoi(resultNode["TotalSampling"].asString());
	if(!resultNode["SamplingError"].isNull())
		result_.samplingError = std::stoi(resultNode["SamplingError"].asString());
	if(!resultNode["SamplingReject"].isNull())
		result_.samplingReject = std::stoi(resultNode["SamplingReject"].asString());
	if(!resultNode["SamplingFix"].isNull())
		result_.samplingFix = std::stoi(resultNode["SamplingFix"].asString());
	if(!resultNode["SamplingAccuracy"].isNull())
		result_.samplingAccuracy = std::stof(resultNode["SamplingAccuracy"].asString());
	if(!resultNode["TotalCheck"].isNull())
		result_.totalCheck = std::stoi(resultNode["TotalCheck"].asString());
	if(!resultNode["NoRejectCheck"].isNull())
		result_.noRejectCheck = std::stoi(resultNode["NoRejectCheck"].asString());
	if(!resultNode["CheckError"].isNull())
		result_.checkError = std::stoi(resultNode["CheckError"].asString());
	if(!resultNode["CheckAccuracy"].isNull())
		result_.checkAccuracy = std::stof(resultNode["CheckAccuracy"].asString());
	if(!resultNode["CheckReject"].isNull())
		result_.checkReject = std::stoi(resultNode["CheckReject"].asString());
	if(!resultNode["CheckFix"].isNull())
		result_.checkFix = std::stoi(resultNode["CheckFix"].asString());
	if(!resultNode["UserName"].isNull())
		result_.userName = resultNode["UserName"].asString();
	if(!resultNode["UserId"].isNull())
		result_.userId = resultNode["UserId"].asString();
	if(!resultNode["TaskId"].isNull())
		result_.taskId = resultNode["TaskId"].asString();
	if(!resultNode["TaskName"].isNull())
		result_.taskName = resultNode["TaskName"].asString();
	if(!resultNode["BizClassify"].isNull())
		result_.bizClassify = resultNode["BizClassify"].asString();
	if(!resultNode["Workflow"].isNull())
		result_.workflow = resultNode["Workflow"].asString();
	if(!resultNode["WorkTime"].isNull())
		result_.workTime = resultNode["WorkTime"].asString();
	if(!resultNode["TotalPDF"].isNull())
		result_.totalPDF = std::stol(resultNode["TotalPDF"].asString());
	if(!resultNode["NoRejectPDF"].isNull())
		result_.noRejectPDF = std::stol(resultNode["NoRejectPDF"].asString());
	if(!resultNode["TotalAudio"].isNull())
		result_.totalAudio = std::stol(resultNode["TotalAudio"].asString());
	if(!resultNode["NoRejectAudio"].isNull())
		result_.noRejectAudio = std::stol(resultNode["NoRejectAudio"].asString());
	if(!resultNode["TotalVideo"].isNull())
		result_.totalVideo = std::stol(resultNode["TotalVideo"].asString());
	if(!resultNode["NoRejectVideo"].isNull())
		result_.noRejectVideo = std::stol(resultNode["NoRejectVideo"].asString());
	if(!resultNode["MarkTime"].isNull())
		result_.markTime = std::stof(resultNode["MarkTime"].asString());
	if(!resultNode["MarkEfficiency"].isNull())
		result_.markEfficiency = std::stof(resultNode["MarkEfficiency"].asString());
	if(!resultNode["CheckTime"].isNull())
		result_.checkTime = std::stof(resultNode["CheckTime"].asString());
	if(!resultNode["CheckEfficiency"].isNull())
		result_.checkEfficiency = std::stof(resultNode["CheckEfficiency"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetMarkUserSummaryResult::getMsg()const
{
	return msg_;
}

std::string GetMarkUserSummaryResult::getRequestId()const
{
	return requestId_;
}

bool GetMarkUserSummaryResult::getSucc()const
{
	return succ_;
}

std::string GetMarkUserSummaryResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMarkUserSummaryResult::getErrInfo()const
{
	return errInfo_;
}

int GetMarkUserSummaryResult::getCode()const
{
	return code_;
}

GetMarkUserSummaryResult::Result GetMarkUserSummaryResult::getResult()const
{
	return result_;
}

