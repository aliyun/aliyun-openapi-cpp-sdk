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

#include <alibabacloud/oceanbasepro/model/DescribeOmsOpenAPIProjectStepsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeOmsOpenAPIProjectStepsResult::DescribeOmsOpenAPIProjectStepsResult() :
	ServiceResult()
{}

DescribeOmsOpenAPIProjectStepsResult::DescribeOmsOpenAPIProjectStepsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOmsOpenAPIProjectStepsResult::~DescribeOmsOpenAPIProjectStepsResult()
{}

void DescribeOmsOpenAPIProjectStepsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["StepOrder"].isNull())
			dataObject.stepOrder = std::stoi(valueDataDataItem["StepOrder"].asString());
		if(!valueDataDataItem["StepName"].isNull())
			dataObject.stepName = valueDataDataItem["StepName"].asString();
		if(!valueDataDataItem["StepDescription"].isNull())
			dataObject.stepDescription = valueDataDataItem["StepDescription"].asString();
		if(!valueDataDataItem["StepStatus"].isNull())
			dataObject.stepStatus = valueDataDataItem["StepStatus"].asString();
		if(!valueDataDataItem["StepProgress"].isNull())
			dataObject.stepProgress = std::stoi(valueDataDataItem["StepProgress"].asString());
		if(!valueDataDataItem["StartTime"].isNull())
			dataObject.startTime = valueDataDataItem["StartTime"].asString();
		if(!valueDataDataItem["EstimatedRemainingSeconds"].isNull())
			dataObject.estimatedRemainingSeconds = std::stol(valueDataDataItem["EstimatedRemainingSeconds"].asString());
		if(!valueDataDataItem["FinishTime"].isNull())
			dataObject.finishTime = valueDataDataItem["FinishTime"].asString();
		if(!valueDataDataItem["Interactive"].isNull())
			dataObject.interactive = valueDataDataItem["Interactive"].asString() == "true";
		auto stepInfoNode = value["StepInfo"];
		if(!stepInfoNode["JobId"].isNull())
			dataObject.stepInfo.jobId = stepInfoNode["JobId"].asString();
		if(!stepInfoNode["IncrTimestampCheckpoint"].isNull())
			dataObject.stepInfo.incrTimestampCheckpoint = std::stol(stepInfoNode["IncrTimestampCheckpoint"].asString());
		if(!stepInfoNode["Checkpoint"].isNull())
			dataObject.stepInfo.checkpoint = stepInfoNode["Checkpoint"].asString();
		if(!stepInfoNode["Gmt"].isNull())
			dataObject.stepInfo.gmt = std::stol(stepInfoNode["Gmt"].asString());
		if(!stepInfoNode["Validated"].isNull())
			dataObject.stepInfo.validated = stepInfoNode["Validated"].asString() == "true";
		if(!stepInfoNode["Skipped"].isNull())
			dataObject.stepInfo.skipped = stepInfoNode["Skipped"].asString() == "true";
		if(!stepInfoNode["Inconsistencies"].isNull())
			dataObject.stepInfo.inconsistencies = std::stol(stepInfoNode["Inconsistencies"].asString());
		if(!stepInfoNode["DeployId"].isNull())
			dataObject.stepInfo.deployId = stepInfoNode["DeployId"].asString();
		if(!stepInfoNode["ProcessedRecords"].isNull())
			dataObject.stepInfo.processedRecords = std::stol(stepInfoNode["ProcessedRecords"].asString());
		if(!stepInfoNode["Capacity"].isNull())
			dataObject.stepInfo.capacity = std::stol(stepInfoNode["Capacity"].asString());
		if(!stepInfoNode["SrcRps"].isNull())
			dataObject.stepInfo.srcRps = std::stol(stepInfoNode["SrcRps"].asString());
		if(!stepInfoNode["SrcRt"].isNull())
			dataObject.stepInfo.srcRt = std::stol(stepInfoNode["SrcRt"].asString());
		if(!stepInfoNode["SrcIops"].isNull())
			dataObject.stepInfo.srcIops = std::stol(stepInfoNode["SrcIops"].asString());
		if(!stepInfoNode["DstRps"].isNull())
			dataObject.stepInfo.dstRps = std::stol(stepInfoNode["DstRps"].asString());
		if(!stepInfoNode["DstRt"].isNull())
			dataObject.stepInfo.dstRt = std::stol(stepInfoNode["DstRt"].asString());
		if(!stepInfoNode["DstIops"].isNull())
			dataObject.stepInfo.dstIops = std::stol(stepInfoNode["DstIops"].asString());
		if(!stepInfoNode["SrcRpsRef"].isNull())
			dataObject.stepInfo.srcRpsRef = std::stol(stepInfoNode["SrcRpsRef"].asString());
		if(!stepInfoNode["SrcRtRef"].isNull())
			dataObject.stepInfo.srcRtRef = std::stol(stepInfoNode["SrcRtRef"].asString());
		if(!stepInfoNode["DstRpsRef"].isNull())
			dataObject.stepInfo.dstRpsRef = std::stol(stepInfoNode["DstRpsRef"].asString());
		if(!stepInfoNode["DstRtRef"].isNull())
			dataObject.stepInfo.dstRtRef = std::stol(stepInfoNode["DstRtRef"].asString());
		if(!stepInfoNode["SrcIopsRef"].isNull())
			dataObject.stepInfo.srcIopsRef = std::stol(stepInfoNode["SrcIopsRef"].asString());
		auto connectorFullProgressOverviewNode = stepInfoNode["ConnectorFullProgressOverview"];
		if(!connectorFullProgressOverviewNode["EstimatedTotalCount"].isNull())
			dataObject.stepInfo.connectorFullProgressOverview.estimatedTotalCount = std::stol(connectorFullProgressOverviewNode["EstimatedTotalCount"].asString());
		if(!connectorFullProgressOverviewNode["FinishedCount"].isNull())
			dataObject.stepInfo.connectorFullProgressOverview.finishedCount = std::stol(connectorFullProgressOverviewNode["FinishedCount"].asString());
		if(!connectorFullProgressOverviewNode["Progress"].isNull())
			dataObject.stepInfo.connectorFullProgressOverview.progress = std::stoi(connectorFullProgressOverviewNode["Progress"].asString());
		if(!connectorFullProgressOverviewNode["EstimatedRemainingTimeOfSec"].isNull())
			dataObject.stepInfo.connectorFullProgressOverview.estimatedRemainingTimeOfSec = std::stol(connectorFullProgressOverviewNode["EstimatedRemainingTimeOfSec"].asString());
		auto extraInfoNode = value["ExtraInfo"];
		if(!extraInfoNode["ErrorCode"].isNull())
			dataObject.extraInfo.errorCode = extraInfoNode["ErrorCode"].asString();
		if(!extraInfoNode["ErrorMsg"].isNull())
			dataObject.extraInfo.errorMsg = extraInfoNode["ErrorMsg"].asString();
		if(!extraInfoNode["ErrorParam"].isNull())
			dataObject.extraInfo.errorParam = extraInfoNode["ErrorParam"].asString();
		if(!extraInfoNode["FailedTime"].isNull())
			dataObject.extraInfo.failedTime = extraInfoNode["FailedTime"].asString();
		auto allErrorDetailsNode = extraInfoNode["ErrorDetails"]["ErrorDetail"];
		for (auto extraInfoNodeErrorDetailsErrorDetail : allErrorDetailsNode)
		{
			DataItem::ExtraInfo::ErrorDetail errorDetailObject;
			if(!extraInfoNodeErrorDetailsErrorDetail["Code"].isNull())
				errorDetailObject.code = extraInfoNodeErrorDetailsErrorDetail["Code"].asString();
			if(!extraInfoNodeErrorDetailsErrorDetail["Level"].isNull())
				errorDetailObject.level = extraInfoNodeErrorDetailsErrorDetail["Level"].asString();
			if(!extraInfoNodeErrorDetailsErrorDetail["Message"].isNull())
				errorDetailObject.message = extraInfoNodeErrorDetailsErrorDetail["Message"].asString();
			if(!extraInfoNodeErrorDetailsErrorDetail["Proposal"].isNull())
				errorDetailObject.proposal = extraInfoNodeErrorDetailsErrorDetail["Proposal"].asString();
			dataObject.extraInfo.errorDetails.push_back(errorDetailObject);
		}
		data_.push_back(dataObject);
	}
	auto errorDetail1Node = value["ErrorDetail"];
	if(!errorDetail1Node["Code"].isNull())
		errorDetail1_.code = errorDetail1Node["Code"].asString();
	if(!errorDetail1Node["Level"].isNull())
		errorDetail1_.level = errorDetail1Node["Level"].asString();
	if(!errorDetail1Node["Message"].isNull())
		errorDetail1_.message = errorDetail1Node["Message"].asString();
	if(!errorDetail1Node["Proposal"].isNull())
		errorDetail1_.proposal = errorDetail1Node["Proposal"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Advice"].isNull())
		advice_ = value["Advice"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Cost"].isNull())
		cost_ = value["Cost"].asString();

}

long DescribeOmsOpenAPIProjectStepsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeOmsOpenAPIProjectStepsResult::getMessage()const
{
	return message_;
}

int DescribeOmsOpenAPIProjectStepsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeOmsOpenAPIProjectStepsResult::getPageNumber()const
{
	return pageNumber_;
}

DescribeOmsOpenAPIProjectStepsResult::ErrorDetail1 DescribeOmsOpenAPIProjectStepsResult::getErrorDetail1()const
{
	return errorDetail1_;
}

std::vector<DescribeOmsOpenAPIProjectStepsResult::DataItem> DescribeOmsOpenAPIProjectStepsResult::getData()const
{
	return data_;
}

std::string DescribeOmsOpenAPIProjectStepsResult::getAdvice()const
{
	return advice_;
}

std::string DescribeOmsOpenAPIProjectStepsResult::getCode()const
{
	return code_;
}

std::string DescribeOmsOpenAPIProjectStepsResult::getCost()const
{
	return cost_;
}

bool DescribeOmsOpenAPIProjectStepsResult::getSuccess()const
{
	return success_;
}

