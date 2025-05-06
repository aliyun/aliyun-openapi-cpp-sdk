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

#include <alibabacloud/itag/model/GetMarkUserDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetMarkUserDetailResult::GetMarkUserDetailResult() :
	ServiceResult()
{}

GetMarkUserDetailResult::GetMarkUserDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMarkUserDetailResult::~GetMarkUserDetailResult()
{}

void GetMarkUserDetailResult::parse(const std::string &payload)
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
	auto allListNode = resultNode["List"]["ITagMarkResultReport"];
	for (auto resultNodeListITagMarkResultReport : allListNode)
	{
		Result::ITagMarkResultReport iTagMarkResultReportObject;
		if(!resultNodeListITagMarkResultReport["TotalDisable"].isNull())
			iTagMarkResultReportObject.totalDisable = std::stoi(resultNodeListITagMarkResultReport["TotalDisable"].asString());
		if(!resultNodeListITagMarkResultReport["UpdateTime"].isNull())
			iTagMarkResultReportObject.updateTime = resultNodeListITagMarkResultReport["UpdateTime"].asString();
		if(!resultNodeListITagMarkResultReport["Sample"].isNull())
			iTagMarkResultReportObject.sample = std::stoi(resultNodeListITagMarkResultReport["Sample"].asString());
		if(!resultNodeListITagMarkResultReport["TotalMark"].isNull())
			iTagMarkResultReportObject.totalMark = std::stoi(resultNodeListITagMarkResultReport["TotalMark"].asString());
		if(!resultNodeListITagMarkResultReport["NoRejectMark"].isNull())
			iTagMarkResultReportObject.noRejectMark = std::stoi(resultNodeListITagMarkResultReport["NoRejectMark"].asString());
		if(!resultNodeListITagMarkResultReport["TotalChecked"].isNull())
			iTagMarkResultReportObject.totalChecked = std::stoi(resultNodeListITagMarkResultReport["TotalChecked"].asString());
		if(!resultNodeListITagMarkResultReport["CheckedError"].isNull())
			iTagMarkResultReportObject.checkedError = std::stoi(resultNodeListITagMarkResultReport["CheckedError"].asString());
		if(!resultNodeListITagMarkResultReport["CheckedAccuracy"].isNull())
			iTagMarkResultReportObject.checkedAccuracy = resultNodeListITagMarkResultReport["CheckedAccuracy"].asString();
		if(!resultNodeListITagMarkResultReport["CheckedReject"].isNull())
			iTagMarkResultReportObject.checkedReject = std::stoi(resultNodeListITagMarkResultReport["CheckedReject"].asString());
		if(!resultNodeListITagMarkResultReport["CheckedFix"].isNull())
			iTagMarkResultReportObject.checkedFix = std::stoi(resultNodeListITagMarkResultReport["CheckedFix"].asString());
		if(!resultNodeListITagMarkResultReport["TotalSampled"].isNull())
			iTagMarkResultReportObject.totalSampled = std::stoi(resultNodeListITagMarkResultReport["TotalSampled"].asString());
		if(!resultNodeListITagMarkResultReport["SampledError"].isNull())
			iTagMarkResultReportObject.sampledError = std::stoi(resultNodeListITagMarkResultReport["SampledError"].asString());
		if(!resultNodeListITagMarkResultReport["SampledReject"].isNull())
			iTagMarkResultReportObject.sampledReject = std::stoi(resultNodeListITagMarkResultReport["SampledReject"].asString());
		if(!resultNodeListITagMarkResultReport["SampledFix"].isNull())
			iTagMarkResultReportObject.sampledFix = std::stoi(resultNodeListITagMarkResultReport["SampledFix"].asString());
		if(!resultNodeListITagMarkResultReport["SampledAccuracy"].isNull())
			iTagMarkResultReportObject.sampledAccuracy = resultNodeListITagMarkResultReport["SampledAccuracy"].asString();
		if(!resultNodeListITagMarkResultReport["TotalSampling"].isNull())
			iTagMarkResultReportObject.totalSampling = std::stoi(resultNodeListITagMarkResultReport["TotalSampling"].asString());
		if(!resultNodeListITagMarkResultReport["SamplingError"].isNull())
			iTagMarkResultReportObject.samplingError = std::stoi(resultNodeListITagMarkResultReport["SamplingError"].asString());
		if(!resultNodeListITagMarkResultReport["SamplingReject"].isNull())
			iTagMarkResultReportObject.samplingReject = std::stoi(resultNodeListITagMarkResultReport["SamplingReject"].asString());
		if(!resultNodeListITagMarkResultReport["SamplingFix"].isNull())
			iTagMarkResultReportObject.samplingFix = std::stoi(resultNodeListITagMarkResultReport["SamplingFix"].asString());
		if(!resultNodeListITagMarkResultReport["SamplingAccuracy"].isNull())
			iTagMarkResultReportObject.samplingAccuracy = resultNodeListITagMarkResultReport["SamplingAccuracy"].asString();
		if(!resultNodeListITagMarkResultReport["TotalCheck"].isNull())
			iTagMarkResultReportObject.totalCheck = std::stoi(resultNodeListITagMarkResultReport["TotalCheck"].asString());
		if(!resultNodeListITagMarkResultReport["NoRejectCheck"].isNull())
			iTagMarkResultReportObject.noRejectCheck = std::stoi(resultNodeListITagMarkResultReport["NoRejectCheck"].asString());
		if(!resultNodeListITagMarkResultReport["CheckError"].isNull())
			iTagMarkResultReportObject.checkError = std::stoi(resultNodeListITagMarkResultReport["CheckError"].asString());
		if(!resultNodeListITagMarkResultReport["CheckAccuracy"].isNull())
			iTagMarkResultReportObject.checkAccuracy = resultNodeListITagMarkResultReport["CheckAccuracy"].asString();
		if(!resultNodeListITagMarkResultReport["CheckReject"].isNull())
			iTagMarkResultReportObject.checkReject = std::stoi(resultNodeListITagMarkResultReport["CheckReject"].asString());
		if(!resultNodeListITagMarkResultReport["CheckFix"].isNull())
			iTagMarkResultReportObject.checkFix = std::stoi(resultNodeListITagMarkResultReport["CheckFix"].asString());
		if(!resultNodeListITagMarkResultReport["UserName"].isNull())
			iTagMarkResultReportObject.userName = resultNodeListITagMarkResultReport["UserName"].asString();
		if(!resultNodeListITagMarkResultReport["UserId"].isNull())
			iTagMarkResultReportObject.userId = resultNodeListITagMarkResultReport["UserId"].asString();
		if(!resultNodeListITagMarkResultReport["TaskId"].isNull())
			iTagMarkResultReportObject.taskId = resultNodeListITagMarkResultReport["TaskId"].asString();
		if(!resultNodeListITagMarkResultReport["TaskName"].isNull())
			iTagMarkResultReportObject.taskName = resultNodeListITagMarkResultReport["TaskName"].asString();
		if(!resultNodeListITagMarkResultReport["BizClassify"].isNull())
			iTagMarkResultReportObject.bizClassify = resultNodeListITagMarkResultReport["BizClassify"].asString();
		if(!resultNodeListITagMarkResultReport["Workflow"].isNull())
			iTagMarkResultReportObject.workflow = resultNodeListITagMarkResultReport["Workflow"].asString();
		if(!resultNodeListITagMarkResultReport["WorkTime"].isNull())
			iTagMarkResultReportObject.workTime = resultNodeListITagMarkResultReport["WorkTime"].asString();
		if(!resultNodeListITagMarkResultReport["TotalPDF"].isNull())
			iTagMarkResultReportObject.totalPDF = std::stol(resultNodeListITagMarkResultReport["TotalPDF"].asString());
		if(!resultNodeListITagMarkResultReport["NoRejectPDF"].isNull())
			iTagMarkResultReportObject.noRejectPDF = std::stol(resultNodeListITagMarkResultReport["NoRejectPDF"].asString());
		if(!resultNodeListITagMarkResultReport["TotalAudio"].isNull())
			iTagMarkResultReportObject.totalAudio = std::stol(resultNodeListITagMarkResultReport["TotalAudio"].asString());
		if(!resultNodeListITagMarkResultReport["NoRejectAudio"].isNull())
			iTagMarkResultReportObject.noRejectAudio = std::stol(resultNodeListITagMarkResultReport["NoRejectAudio"].asString());
		if(!resultNodeListITagMarkResultReport["TotalVideo"].isNull())
			iTagMarkResultReportObject.totalVideo = std::stol(resultNodeListITagMarkResultReport["TotalVideo"].asString());
		if(!resultNodeListITagMarkResultReport["NoRejectVideo"].isNull())
			iTagMarkResultReportObject.noRejectVideo = std::stol(resultNodeListITagMarkResultReport["NoRejectVideo"].asString());
		if(!resultNodeListITagMarkResultReport["MarkTime"].isNull())
			iTagMarkResultReportObject.markTime = resultNodeListITagMarkResultReport["MarkTime"].asString();
		if(!resultNodeListITagMarkResultReport["MarkEfficiency"].isNull())
			iTagMarkResultReportObject.markEfficiency = resultNodeListITagMarkResultReport["MarkEfficiency"].asString();
		if(!resultNodeListITagMarkResultReport["CheckTime"].isNull())
			iTagMarkResultReportObject.checkTime = resultNodeListITagMarkResultReport["CheckTime"].asString();
		if(!resultNodeListITagMarkResultReport["CheckEfficiency"].isNull())
			iTagMarkResultReportObject.checkEfficiency = resultNodeListITagMarkResultReport["CheckEfficiency"].asString();
		result_.list.push_back(iTagMarkResultReportObject);
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

std::string GetMarkUserDetailResult::getMsg()const
{
	return msg_;
}

bool GetMarkUserDetailResult::getSucc()const
{
	return succ_;
}

std::string GetMarkUserDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMarkUserDetailResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetMarkUserDetailResult::getCode()const
{
	return code_;
}

GetMarkUserDetailResult::Result GetMarkUserDetailResult::getResult()const
{
	return result_;
}

