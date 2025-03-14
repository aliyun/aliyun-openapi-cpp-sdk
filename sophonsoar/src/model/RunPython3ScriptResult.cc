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

#include <alibabacloud/sophonsoar/model/RunPython3ScriptResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

RunPython3ScriptResult::RunPython3ScriptResult() :
	ServiceResult()
{}

RunPython3ScriptResult::RunPython3ScriptResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RunPython3ScriptResult::~RunPython3ScriptResult()
{}

void RunPython3ScriptResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["RunResult"].isNull())
		runResult_ = value["RunResult"].asString();

}

std::string RunPython3ScriptResult::getRunResult()const
{
	return runResult_;
}

