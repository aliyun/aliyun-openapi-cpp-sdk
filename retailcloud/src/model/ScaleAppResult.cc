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

#include <alibabacloud/retailcloud/model/ScaleAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ScaleAppResult::ScaleAppResult() :
	ServiceResult()
{}

ScaleAppResult::ScaleAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ScaleAppResult::~ScaleAppResult()
{}

void ScaleAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["BusinessCode"].isNull())
		result_.businessCode = resultNode["BusinessCode"].asString();
	if(!resultNode["DeployOrderId"].isNull())
		result_.deployOrderId = std::stol(resultNode["DeployOrderId"].asString());
	if(!resultNode["Admitted"].isNull())
		result_.admitted = resultNode["Admitted"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ScaleAppResult::getErrMsg()const
{
	return errMsg_;
}

int ScaleAppResult::getCode()const
{
	return code_;
}

bool ScaleAppResult::getSuccess()const
{
	return success_;
}

ScaleAppResult::Result ScaleAppResult::getResult()const
{
	return result_;
}

