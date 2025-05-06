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

#include <alibabacloud/itag/model/GetTaskProcessInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetTaskProcessInfoResult::GetTaskProcessInfoResult() :
	ServiceResult()
{}

GetTaskProcessInfoResult::GetTaskProcessInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskProcessInfoResult::~GetTaskProcessInfoResult()
{}

void GetTaskProcessInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["TaskId"].isNull())
		result_.taskId = resultNode["TaskId"].asString();
	if(!resultNode["NodeSummary"].isNull())
		result_.nodeSummary = resultNode["NodeSummary"].asString();
	if(!resultNode["Stage"].isNull())
		result_.stage = resultNode["Stage"].asString();
	auto summaryNode = resultNode["Summary"];
	if(!summaryNode["Node"].isNull())
		result_.summary.node = summaryNode["Node"].asString();
	if(!summaryNode["TotalSubTask"].isNull())
		result_.summary.totalSubTask = std::stoi(summaryNode["TotalSubTask"].asString());
	if(!summaryNode["FinishedSubTask"].isNull())
		result_.summary.finishedSubTask = std::stoi(summaryNode["FinishedSubTask"].asString());
	if(!summaryNode["TotalItem"].isNull())
		result_.summary.totalItem = std::stoi(summaryNode["TotalItem"].asString());
	if(!summaryNode["FinishedItem"].isNull())
		result_.summary.finishedItem = std::stoi(summaryNode["FinishedItem"].asString());
	if(!summaryNode["State"].isNull())
		result_.summary.state = summaryNode["State"].asString();
	if(!summaryNode["FixedItem"].isNull())
		result_.summary.fixedItem = std::stol(summaryNode["FixedItem"].asString());
	if(!summaryNode["AbandonItem"].isNull())
		result_.summary.abandonItem = std::stol(summaryNode["AbandonItem"].asString());
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

std::string GetTaskProcessInfoResult::getMsg()const
{
	return msg_;
}

bool GetTaskProcessInfoResult::getSucc()const
{
	return succ_;
}

std::string GetTaskProcessInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTaskProcessInfoResult::getErrInfo()const
{
	return errInfo_;
}

std::string GetTaskProcessInfoResult::getCode()const
{
	return code_;
}

GetTaskProcessInfoResult::Result GetTaskProcessInfoResult::getResult()const
{
	return result_;
}

