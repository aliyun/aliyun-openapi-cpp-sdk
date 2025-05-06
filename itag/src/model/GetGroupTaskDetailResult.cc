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

#include <alibabacloud/itag/model/GetGroupTaskDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetGroupTaskDetailResult::GetGroupTaskDetailResult() :
	ServiceResult()
{}

GetGroupTaskDetailResult::GetGroupTaskDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGroupTaskDetailResult::~GetGroupTaskDetailResult()
{}

void GetGroupTaskDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stol(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stol(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ITagBaseReportResponse"];
	for (auto resultNodeListITagBaseReportResponse : allListNode)
	{
		Result::ITagBaseReportResponse iTagBaseReportResponseObject;
		if(!resultNodeListITagBaseReportResponse["TotalDisable"].isNull())
			iTagBaseReportResponseObject.totalDisable = std::stoi(resultNodeListITagBaseReportResponse["TotalDisable"].asString());
		if(!resultNodeListITagBaseReportResponse["UpdateTime"].isNull())
			iTagBaseReportResponseObject.updateTime = resultNodeListITagBaseReportResponse["UpdateTime"].asString();
		if(!resultNodeListITagBaseReportResponse["Sample"].isNull())
			iTagBaseReportResponseObject.sample = std::stoi(resultNodeListITagBaseReportResponse["Sample"].asString());
		if(!resultNodeListITagBaseReportResponse["TotalMark"].isNull())
			iTagBaseReportResponseObject.totalMark = std::stoi(resultNodeListITagBaseReportResponse["TotalMark"].asString());
		if(!resultNodeListITagBaseReportResponse["NoRejectMark"].isNull())
			iTagBaseReportResponseObject.noRejectMark = std::stoi(resultNodeListITagBaseReportResponse["NoRejectMark"].asString());
		if(!resultNodeListITagBaseReportResponse["TotalChecked"].isNull())
			iTagBaseReportResponseObject.totalChecked = std::stoi(resultNodeListITagBaseReportResponse["TotalChecked"].asString());
		if(!resultNodeListITagBaseReportResponse["CheckedError"].isNull())
			iTagBaseReportResponseObject.checkedError = std::stoi(resultNodeListITagBaseReportResponse["CheckedError"].asString());
		if(!resultNodeListITagBaseReportResponse["CheckedAccuracy"].isNull())
			iTagBaseReportResponseObject.checkedAccuracy = resultNodeListITagBaseReportResponse["CheckedAccuracy"].asString();
		if(!resultNodeListITagBaseReportResponse["CheckedReject"].isNull())
			iTagBaseReportResponseObject.checkedReject = std::stoi(resultNodeListITagBaseReportResponse["CheckedReject"].asString());
		if(!resultNodeListITagBaseReportResponse["CheckedFix"].isNull())
			iTagBaseReportResponseObject.checkedFix = std::stoi(resultNodeListITagBaseReportResponse["CheckedFix"].asString());
		if(!resultNodeListITagBaseReportResponse["TotalSampled"].isNull())
			iTagBaseReportResponseObject.totalSampled = std::stoi(resultNodeListITagBaseReportResponse["TotalSampled"].asString());
		if(!resultNodeListITagBaseReportResponse["SampledError"].isNull())
			iTagBaseReportResponseObject.sampledError = std::stoi(resultNodeListITagBaseReportResponse["SampledError"].asString());
		if(!resultNodeListITagBaseReportResponse["SampledReject"].isNull())
			iTagBaseReportResponseObject.sampledReject = std::stoi(resultNodeListITagBaseReportResponse["SampledReject"].asString());
		if(!resultNodeListITagBaseReportResponse["SampledFix"].isNull())
			iTagBaseReportResponseObject.sampledFix = std::stoi(resultNodeListITagBaseReportResponse["SampledFix"].asString());
		if(!resultNodeListITagBaseReportResponse["SampledAccuracy"].isNull())
			iTagBaseReportResponseObject.sampledAccuracy = resultNodeListITagBaseReportResponse["SampledAccuracy"].asString();
		if(!resultNodeListITagBaseReportResponse["TotalSampling"].isNull())
			iTagBaseReportResponseObject.totalSampling = std::stoi(resultNodeListITagBaseReportResponse["TotalSampling"].asString());
		if(!resultNodeListITagBaseReportResponse["SamplingError"].isNull())
			iTagBaseReportResponseObject.samplingError = std::stoi(resultNodeListITagBaseReportResponse["SamplingError"].asString());
		if(!resultNodeListITagBaseReportResponse["SamplingReject"].isNull())
			iTagBaseReportResponseObject.samplingReject = std::stoi(resultNodeListITagBaseReportResponse["SamplingReject"].asString());
		if(!resultNodeListITagBaseReportResponse["SamplingFix"].isNull())
			iTagBaseReportResponseObject.samplingFix = std::stoi(resultNodeListITagBaseReportResponse["SamplingFix"].asString());
		if(!resultNodeListITagBaseReportResponse["SamplingAccuracy"].isNull())
			iTagBaseReportResponseObject.samplingAccuracy = resultNodeListITagBaseReportResponse["SamplingAccuracy"].asString();
		if(!resultNodeListITagBaseReportResponse["TotalCheck"].isNull())
			iTagBaseReportResponseObject.totalCheck = std::stoi(resultNodeListITagBaseReportResponse["TotalCheck"].asString());
		if(!resultNodeListITagBaseReportResponse["NoRejectCheck"].isNull())
			iTagBaseReportResponseObject.noRejectCheck = std::stoi(resultNodeListITagBaseReportResponse["NoRejectCheck"].asString());
		if(!resultNodeListITagBaseReportResponse["CheckError"].isNull())
			iTagBaseReportResponseObject.checkError = std::stoi(resultNodeListITagBaseReportResponse["CheckError"].asString());
		if(!resultNodeListITagBaseReportResponse["CheckAccuracy"].isNull())
			iTagBaseReportResponseObject.checkAccuracy = resultNodeListITagBaseReportResponse["CheckAccuracy"].asString();
		if(!resultNodeListITagBaseReportResponse["CheckReject"].isNull())
			iTagBaseReportResponseObject.checkReject = std::stoi(resultNodeListITagBaseReportResponse["CheckReject"].asString());
		if(!resultNodeListITagBaseReportResponse["CheckFix"].isNull())
			iTagBaseReportResponseObject.checkFix = std::stoi(resultNodeListITagBaseReportResponse["CheckFix"].asString());
		if(!resultNodeListITagBaseReportResponse["UserName"].isNull())
			iTagBaseReportResponseObject.userName = resultNodeListITagBaseReportResponse["UserName"].asString();
		if(!resultNodeListITagBaseReportResponse["UserId"].isNull())
			iTagBaseReportResponseObject.userId = resultNodeListITagBaseReportResponse["UserId"].asString();
		if(!resultNodeListITagBaseReportResponse["TaskId"].isNull())
			iTagBaseReportResponseObject.taskId = resultNodeListITagBaseReportResponse["TaskId"].asString();
		if(!resultNodeListITagBaseReportResponse["TaskName"].isNull())
			iTagBaseReportResponseObject.taskName = resultNodeListITagBaseReportResponse["TaskName"].asString();
		if(!resultNodeListITagBaseReportResponse["BizClassify"].isNull())
			iTagBaseReportResponseObject.bizClassify = resultNodeListITagBaseReportResponse["BizClassify"].asString();
		if(!resultNodeListITagBaseReportResponse["Workflow"].isNull())
			iTagBaseReportResponseObject.workflow = resultNodeListITagBaseReportResponse["Workflow"].asString();
		if(!resultNodeListITagBaseReportResponse["WorkTime"].isNull())
			iTagBaseReportResponseObject.workTime = resultNodeListITagBaseReportResponse["WorkTime"].asString();
		if(!resultNodeListITagBaseReportResponse["TotalPDF"].isNull())
			iTagBaseReportResponseObject.totalPDF = std::stol(resultNodeListITagBaseReportResponse["TotalPDF"].asString());
		if(!resultNodeListITagBaseReportResponse["NoRejectPDF"].isNull())
			iTagBaseReportResponseObject.noRejectPDF = std::stol(resultNodeListITagBaseReportResponse["NoRejectPDF"].asString());
		if(!resultNodeListITagBaseReportResponse["TotalAudio"].isNull())
			iTagBaseReportResponseObject.totalAudio = std::stol(resultNodeListITagBaseReportResponse["TotalAudio"].asString());
		if(!resultNodeListITagBaseReportResponse["NoRejectAudio"].isNull())
			iTagBaseReportResponseObject.noRejectAudio = std::stol(resultNodeListITagBaseReportResponse["NoRejectAudio"].asString());
		if(!resultNodeListITagBaseReportResponse["TotalVideo"].isNull())
			iTagBaseReportResponseObject.totalVideo = std::stol(resultNodeListITagBaseReportResponse["TotalVideo"].asString());
		if(!resultNodeListITagBaseReportResponse["NoRejectVideo"].isNull())
			iTagBaseReportResponseObject.noRejectVideo = std::stol(resultNodeListITagBaseReportResponse["NoRejectVideo"].asString());
		if(!resultNodeListITagBaseReportResponse["MarkTime"].isNull())
			iTagBaseReportResponseObject.markTime = resultNodeListITagBaseReportResponse["MarkTime"].asString();
		if(!resultNodeListITagBaseReportResponse["MarkEfficiency"].isNull())
			iTagBaseReportResponseObject.markEfficiency = resultNodeListITagBaseReportResponse["MarkEfficiency"].asString();
		if(!resultNodeListITagBaseReportResponse["CheckTime"].isNull())
			iTagBaseReportResponseObject.checkTime = resultNodeListITagBaseReportResponse["CheckTime"].asString();
		if(!resultNodeListITagBaseReportResponse["CheckEfficiency"].isNull())
			iTagBaseReportResponseObject.checkEfficiency = resultNodeListITagBaseReportResponse["CheckEfficiency"].asString();
		result_.list.push_back(iTagBaseReportResponseObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetGroupTaskDetailResult::getMsg()const
{
	return msg_;
}

bool GetGroupTaskDetailResult::getSucc()const
{
	return succ_;
}

std::string GetGroupTaskDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetGroupTaskDetailResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetGroupTaskDetailResult::getCode()const
{
	return code_;
}

GetGroupTaskDetailResult::Result GetGroupTaskDetailResult::getResult()const
{
	return result_;
}

