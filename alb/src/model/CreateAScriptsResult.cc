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

#include <alibabacloud/alb/model/CreateAScriptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

CreateAScriptsResult::CreateAScriptsResult() :
	ServiceResult()
{}

CreateAScriptsResult::CreateAScriptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAScriptsResult::~CreateAScriptsResult()
{}

void CreateAScriptsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAScriptIdsNode = value["AScriptIds"]["AScriptId"];
	for (auto valueAScriptIdsAScriptId : allAScriptIdsNode)
	{
		AScriptId aScriptIdsObject;
		if(!valueAScriptIdsAScriptId["AScriptId"].isNull())
			aScriptIdsObject.aScriptId = valueAScriptIdsAScriptId["AScriptId"].asString();
		aScriptIds_.push_back(aScriptIdsObject);
	}
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();

}

std::vector<CreateAScriptsResult::AScriptId> CreateAScriptsResult::getAScriptIds()const
{
	return aScriptIds_;
}

std::string CreateAScriptsResult::getJobId()const
{
	return jobId_;
}

