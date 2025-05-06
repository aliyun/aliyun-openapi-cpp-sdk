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

#include <alibabacloud/itag/model/SamplingSubUserTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

SamplingSubUserTaskListResult::SamplingSubUserTaskListResult() :
	ServiceResult()
{}

SamplingSubUserTaskListResult::SamplingSubUserTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SamplingSubUserTaskListResult::~SamplingSubUserTaskListResult()
{}

void SamplingSubUserTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["TaskId"].isNull())
			resultObject.taskId = valueResultResultItem["TaskId"].asString();
		if(!valueResultResultItem["TaskName"].isNull())
			resultObject.taskName = valueResultResultItem["TaskName"].asString();
		if(!valueResultResultItem["UserTaskId"].isNull())
			resultObject.userTaskId = valueResultResultItem["UserTaskId"].asString();
		if(!valueResultResultItem["State"].isNull())
			resultObject.state = valueResultResultItem["State"].asString();
		if(!valueResultResultItem["SampleUserName"].isNull())
			resultObject.sampleUserName = valueResultResultItem["SampleUserName"].asString();
		if(!valueResultResultItem["BaseInfo"].isNull())
			resultObject.baseInfo = valueResultResultItem["BaseInfo"].asString();
		if(!valueResultResultItem["TotalItemCount"].isNull())
			resultObject.totalItemCount = std::stol(valueResultResultItem["TotalItemCount"].asString());
		if(!valueResultResultItem["FinishedItemCount"].isNull())
			resultObject.finishedItemCount = std::stol(valueResultResultItem["FinishedItemCount"].asString());
		if(!valueResultResultItem["Type"].isNull())
			resultObject.type = valueResultResultItem["Type"].asString();
		if(!valueResultResultItem["AllowOperate"].isNull())
			resultObject.allowOperate = valueResultResultItem["AllowOperate"].asString() == "true";
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string SamplingSubUserTaskListResult::getMsg()const
{
	return msg_;
}

long SamplingSubUserTaskListResult::getRt()const
{
	return rt_;
}

bool SamplingSubUserTaskListResult::getSucc()const
{
	return succ_;
}

std::string SamplingSubUserTaskListResult::getHost()const
{
	return host_;
}

std::string SamplingSubUserTaskListResult::getErrorCode()const
{
	return errorCode_;
}

std::string SamplingSubUserTaskListResult::getErrInfo()const
{
	return errInfo_;
}

int SamplingSubUserTaskListResult::getCode()const
{
	return code_;
}

std::vector<SamplingSubUserTaskListResult::ResultItem> SamplingSubUserTaskListResult::getResult()const
{
	return result_;
}

