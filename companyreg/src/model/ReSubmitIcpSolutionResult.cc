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

#include <alibabacloud/companyreg/model/ReSubmitIcpSolutionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ReSubmitIcpSolutionResult::ReSubmitIcpSolutionResult() :
	ServiceResult()
{}

ReSubmitIcpSolutionResult::ReSubmitIcpSolutionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ReSubmitIcpSolutionResult::~ReSubmitIcpSolutionResult()
{}

void ReSubmitIcpSolutionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();

}

std::string ReSubmitIcpSolutionResult::getBizId()const
{
	return bizId_;
}

bool ReSubmitIcpSolutionResult::getSuccess()const
{
	return success_;
}

