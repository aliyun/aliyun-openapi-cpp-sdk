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

#include <alibabacloud/imm/model/GetTagJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetTagJobResult::GetTagJobResult() :
	ServiceResult()
{}

GetTagJobResult::GetTagJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTagJobResult::~GetTagJobResult()
{}

void GetTagJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["SrcUri"].isNull())
		srcUri_ = value["SrcUri"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Percent"].isNull())
		percent_ = std::stoi(value["Percent"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["FinishTime"].isNull())
		finishTime_ = value["FinishTime"].asString();

}

std::string GetTagJobResult::getStatus()const
{
	return status_;
}

std::string GetTagJobResult::getFinishTime()const
{
	return finishTime_;
}

int GetTagJobResult::getPercent()const
{
	return percent_;
}

std::string GetTagJobResult::getCreateTime()const
{
	return createTime_;
}

std::string GetTagJobResult::getSetId()const
{
	return setId_;
}

std::string GetTagJobResult::getJobId()const
{
	return jobId_;
}

std::string GetTagJobResult::getSrcUri()const
{
	return srcUri_;
}

