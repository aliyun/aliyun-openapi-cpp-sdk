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

#include <alibabacloud/ice/model/SubmitASRJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

SubmitASRJobResult::SubmitASRJobResult() :
	ServiceResult()
{}

SubmitASRJobResult::SubmitASRJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitASRJobResult::~SubmitASRJobResult()
{}

void SubmitASRJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["Output"].isNull())
		output_ = value["Output"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["UserData"].isNull())
		userData_ = value["UserData"].asString();

}

std::string SubmitASRJobResult::getUserData()const
{
	return userData_;
}

std::string SubmitASRJobResult::getState()const
{
	return state_;
}

std::string SubmitASRJobResult::getOutput()const
{
	return output_;
}

std::string SubmitASRJobResult::getJobId()const
{
	return jobId_;
}

