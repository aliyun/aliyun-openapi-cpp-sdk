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

#include <alibabacloud/itag/model/GetMarkUserEfficiencyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetMarkUserEfficiencyResult::GetMarkUserEfficiencyResult() :
	ServiceResult()
{}

GetMarkUserEfficiencyResult::GetMarkUserEfficiencyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMarkUserEfficiencyResult::~GetMarkUserEfficiencyResult()
{}

void GetMarkUserEfficiencyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allUserWorkEfficiencyListNode = resultNode["UserWorkEfficiencyList"]["ITagBaseReportResponse"];
	for (auto resultNodeUserWorkEfficiencyListITagBaseReportResponse : allUserWorkEfficiencyListNode)
	{
		Result::ITagBaseReportResponse iTagBaseReportResponseObject;
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalDisable"].isNull())
			iTagBaseReportResponseObject.totalDisable = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalDisable"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["UpdateTime"].isNull())
			iTagBaseReportResponseObject.updateTime = resultNodeUserWorkEfficiencyListITagBaseReportResponse["UpdateTime"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["Sample"].isNull())
			iTagBaseReportResponseObject.sample = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["Sample"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalMark"].isNull())
			iTagBaseReportResponseObject.totalMark = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalMark"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectMark"].isNull())
			iTagBaseReportResponseObject.noRejectMark = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectMark"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalChecked"].isNull())
			iTagBaseReportResponseObject.totalChecked = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalChecked"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckedError"].isNull())
			iTagBaseReportResponseObject.checkedError = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckedError"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckedAccuracy"].isNull())
			iTagBaseReportResponseObject.checkedAccuracy = resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckedAccuracy"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckedReject"].isNull())
			iTagBaseReportResponseObject.checkedReject = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckedReject"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckedFix"].isNull())
			iTagBaseReportResponseObject.checkedFix = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckedFix"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalSampled"].isNull())
			iTagBaseReportResponseObject.totalSampled = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalSampled"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["SampledError"].isNull())
			iTagBaseReportResponseObject.sampledError = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["SampledError"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["SampledReject"].isNull())
			iTagBaseReportResponseObject.sampledReject = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["SampledReject"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["SampledFix"].isNull())
			iTagBaseReportResponseObject.sampledFix = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["SampledFix"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["SampledAccuracy"].isNull())
			iTagBaseReportResponseObject.sampledAccuracy = resultNodeUserWorkEfficiencyListITagBaseReportResponse["SampledAccuracy"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalSampling"].isNull())
			iTagBaseReportResponseObject.totalSampling = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalSampling"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["SamplingError"].isNull())
			iTagBaseReportResponseObject.samplingError = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["SamplingError"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["SamplingReject"].isNull())
			iTagBaseReportResponseObject.samplingReject = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["SamplingReject"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["SamplingFix"].isNull())
			iTagBaseReportResponseObject.samplingFix = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["SamplingFix"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["SamplingAccuracy"].isNull())
			iTagBaseReportResponseObject.samplingAccuracy = resultNodeUserWorkEfficiencyListITagBaseReportResponse["SamplingAccuracy"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalCheck"].isNull())
			iTagBaseReportResponseObject.totalCheck = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalCheck"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectCheck"].isNull())
			iTagBaseReportResponseObject.noRejectCheck = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectCheck"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckError"].isNull())
			iTagBaseReportResponseObject.checkError = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckError"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckAccuracy"].isNull())
			iTagBaseReportResponseObject.checkAccuracy = resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckAccuracy"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckReject"].isNull())
			iTagBaseReportResponseObject.checkReject = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckReject"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckFix"].isNull())
			iTagBaseReportResponseObject.checkFix = std::stoi(resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckFix"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["UserName"].isNull())
			iTagBaseReportResponseObject.userName = resultNodeUserWorkEfficiencyListITagBaseReportResponse["UserName"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["UserId"].isNull())
			iTagBaseReportResponseObject.userId = resultNodeUserWorkEfficiencyListITagBaseReportResponse["UserId"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TaskId"].isNull())
			iTagBaseReportResponseObject.taskId = resultNodeUserWorkEfficiencyListITagBaseReportResponse["TaskId"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TaskName"].isNull())
			iTagBaseReportResponseObject.taskName = resultNodeUserWorkEfficiencyListITagBaseReportResponse["TaskName"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["BizClassify"].isNull())
			iTagBaseReportResponseObject.bizClassify = resultNodeUserWorkEfficiencyListITagBaseReportResponse["BizClassify"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["Workflow"].isNull())
			iTagBaseReportResponseObject.workflow = resultNodeUserWorkEfficiencyListITagBaseReportResponse["Workflow"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["WorkTime"].isNull())
			iTagBaseReportResponseObject.workTime = resultNodeUserWorkEfficiencyListITagBaseReportResponse["WorkTime"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalPDF"].isNull())
			iTagBaseReportResponseObject.totalPDF = std::stol(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalPDF"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectPDF"].isNull())
			iTagBaseReportResponseObject.noRejectPDF = std::stol(resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectPDF"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalAudio"].isNull())
			iTagBaseReportResponseObject.totalAudio = std::stol(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalAudio"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectAudio"].isNull())
			iTagBaseReportResponseObject.noRejectAudio = std::stol(resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectAudio"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalVideo"].isNull())
			iTagBaseReportResponseObject.totalVideo = std::stol(resultNodeUserWorkEfficiencyListITagBaseReportResponse["TotalVideo"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectVideo"].isNull())
			iTagBaseReportResponseObject.noRejectVideo = std::stol(resultNodeUserWorkEfficiencyListITagBaseReportResponse["NoRejectVideo"].asString());
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["MarkTime"].isNull())
			iTagBaseReportResponseObject.markTime = resultNodeUserWorkEfficiencyListITagBaseReportResponse["MarkTime"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["MarkEfficiency"].isNull())
			iTagBaseReportResponseObject.markEfficiency = resultNodeUserWorkEfficiencyListITagBaseReportResponse["MarkEfficiency"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckTime"].isNull())
			iTagBaseReportResponseObject.checkTime = resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckTime"].asString();
		if(!resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckEfficiency"].isNull())
			iTagBaseReportResponseObject.checkEfficiency = resultNodeUserWorkEfficiencyListITagBaseReportResponse["CheckEfficiency"].asString();
		result_.userWorkEfficiencyList.push_back(iTagBaseReportResponseObject);
	}
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

std::string GetMarkUserEfficiencyResult::getMsg()const
{
	return msg_;
}

std::string GetMarkUserEfficiencyResult::getRequestId()const
{
	return requestId_;
}

bool GetMarkUserEfficiencyResult::getSucc()const
{
	return succ_;
}

std::string GetMarkUserEfficiencyResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMarkUserEfficiencyResult::getErrInfo()const
{
	return errInfo_;
}

int GetMarkUserEfficiencyResult::getCode()const
{
	return code_;
}

GetMarkUserEfficiencyResult::Result GetMarkUserEfficiencyResult::getResult()const
{
	return result_;
}

