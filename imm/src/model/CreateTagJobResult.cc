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

#include <alibabacloud/imm/model/CreateTagJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

CreateTagJobResult::CreateTagJobResult() :
	ServiceResult()
{}

CreateTagJobResult::CreateTagJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTagJobResult::~CreateTagJobResult()
{}

void CreateTagJobResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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

std::string CreateTagJobResult::getStatus()const
{
	return status_;
}

std::string CreateTagJobResult::getFinishTime()const
{
	return finishTime_;
}

int CreateTagJobResult::getPercent()const
{
	return percent_;
}

std::string CreateTagJobResult::getCreateTime()const
{
	return createTime_;
}

std::string CreateTagJobResult::getSetId()const
{
	return setId_;
}

std::string CreateTagJobResult::getJobId()const
{
	return jobId_;
}

std::string CreateTagJobResult::getSrcUri()const
{
	return srcUri_;
}

