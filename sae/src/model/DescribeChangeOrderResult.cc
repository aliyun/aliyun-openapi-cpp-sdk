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

#include <alibabacloud/sae/model/DescribeChangeOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeChangeOrderResult::DescribeChangeOrderResult() :
	ServiceResult()
{}

DescribeChangeOrderResult::DescribeChangeOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeChangeOrderResult::~DescribeChangeOrderResult()
{}

void DescribeChangeOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["SubStatus"].isNull())
		data_.subStatus = std::stoi(dataNode["SubStatus"].asString());
	if(!dataNode["ApprovalId"].isNull())
		data_.approvalId = dataNode["ApprovalId"].asString();
	if(!dataNode["ErrorMessage"].isNull())
		data_.errorMessage = dataNode["ErrorMessage"].asString();
	if(!dataNode["BatchWaitTime"].isNull())
		data_.batchWaitTime = std::stoi(dataNode["BatchWaitTime"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["BatchCount"].isNull())
		data_.batchCount = std::stoi(dataNode["BatchCount"].asString());
	if(!dataNode["CoTypeCode"].isNull())
		data_.coTypeCode = dataNode["CoTypeCode"].asString();
	if(!dataNode["SupportAbortFreeze"].isNull())
		data_.supportAbortFreeze = dataNode["SupportAbortFreeze"].asString() == "true";
	if(!dataNode["SupportRollback"].isNull())
		data_.supportRollback = dataNode["SupportRollback"].asString() == "true";
	if(!dataNode["ChangeOrderId"].isNull())
		data_.changeOrderId = dataNode["ChangeOrderId"].asString();
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["BatchType"].isNull())
		data_.batchType = dataNode["BatchType"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["CoType"].isNull())
		data_.coType = dataNode["CoType"].asString();
	if(!dataNode["Auto"].isNull())
		data_._auto = dataNode["Auto"].asString() == "true";
	if(!dataNode["CurrentPipelineId"].isNull())
		data_.currentPipelineId = dataNode["CurrentPipelineId"].asString();
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	auto allPipelinesNode = dataNode["Pipelines"]["Pipeline"];
	for (auto dataNodePipelinesPipeline : allPipelinesNode)
	{
		Data::Pipeline pipelineObject;
		if(!dataNodePipelinesPipeline["Status"].isNull())
			pipelineObject.status = std::stoi(dataNodePipelinesPipeline["Status"].asString());
		if(!dataNodePipelinesPipeline["StartTime"].isNull())
			pipelineObject.startTime = std::stol(dataNodePipelinesPipeline["StartTime"].asString());
		if(!dataNodePipelinesPipeline["UpdateTime"].isNull())
			pipelineObject.updateTime = std::stol(dataNodePipelinesPipeline["UpdateTime"].asString());
		if(!dataNodePipelinesPipeline["BatchType"].isNull())
			pipelineObject.batchType = std::stoi(dataNodePipelinesPipeline["BatchType"].asString());
		if(!dataNodePipelinesPipeline["ParallelCount"].isNull())
			pipelineObject.parallelCount = std::stoi(dataNodePipelinesPipeline["ParallelCount"].asString());
		if(!dataNodePipelinesPipeline["PipelineName"].isNull())
			pipelineObject.pipelineName = dataNodePipelinesPipeline["PipelineName"].asString();
		if(!dataNodePipelinesPipeline["PipelineId"].isNull())
			pipelineObject.pipelineId = dataNodePipelinesPipeline["PipelineId"].asString();
		data_.pipelines.push_back(pipelineObject);
	}
		auto allCoTargets = dataNode["CoTargets"]["CoTarget"];
		for (auto value : allCoTargets)
			data_.coTargets.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeChangeOrderResult::getMessage()const
{
	return message_;
}

std::string DescribeChangeOrderResult::getTraceId()const
{
	return traceId_;
}

DescribeChangeOrderResult::Data DescribeChangeOrderResult::getData()const
{
	return data_;
}

std::string DescribeChangeOrderResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeChangeOrderResult::getCode()const
{
	return code_;
}

bool DescribeChangeOrderResult::getSuccess()const
{
	return success_;
}

