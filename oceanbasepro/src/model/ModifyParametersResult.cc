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

#include <alibabacloud/oceanbasepro/model/ModifyParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

ModifyParametersResult::ModifyParametersResult() :
	ServiceResult()
{}

ModifyParametersResult::ModifyParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyParametersResult::~ModifyParametersResult()
{}

void ModifyParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultsNode = value["Results"];
	if(!resultsNode["Success"].isNull())
		results_.success = resultsNode["Success"].asString() == "true";
	if(!resultsNode["Message"].isNull())
		results_.message = resultsNode["Message"].asString();

}

ModifyParametersResult::Results ModifyParametersResult::getResults()const
{
	return results_;
}

