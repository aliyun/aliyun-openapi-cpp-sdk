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

#include <alibabacloud/imm/model/PhotoProcessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

PhotoProcessResult::PhotoProcessResult() :
	ServiceResult()
{}

PhotoProcessResult::PhotoProcessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PhotoProcessResult::~PhotoProcessResult()
{}

void PhotoProcessResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["TgtLoc"].isNull())
		tgtLoc_ = value["TgtLoc"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["Percent"].isNull())
		percent_ = std::stoi(value["Percent"].asString());

}

std::string PhotoProcessResult::getStatus()const
{
	return status_;
}

std::string PhotoProcessResult::getTaskId()const
{
	return taskId_;
}

int PhotoProcessResult::getPercent()const
{
	return percent_;
}

std::string PhotoProcessResult::getTgtLoc()const
{
	return tgtLoc_;
}

std::string PhotoProcessResult::getCreateTime()const
{
	return createTime_;
}

