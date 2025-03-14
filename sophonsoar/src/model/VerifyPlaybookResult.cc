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

#include <alibabacloud/sophonsoar/model/VerifyPlaybookResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

VerifyPlaybookResult::VerifyPlaybookResult() :
	ServiceResult()
{}

VerifyPlaybookResult::VerifyPlaybookResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

VerifyPlaybookResult::~VerifyPlaybookResult()
{}

void VerifyPlaybookResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCheckTaskInfosNode = value["CheckTaskInfos"]["Data"];
	for (auto valueCheckTaskInfosData : allCheckTaskInfosNode)
	{
		Data checkTaskInfosObject;
		if(!valueCheckTaskInfosData["RiskLevel"].isNull())
			checkTaskInfosObject.riskLevel = valueCheckTaskInfosData["RiskLevel"].asString();
		if(!valueCheckTaskInfosData["NodeName"].isNull())
			checkTaskInfosObject.nodeName = valueCheckTaskInfosData["NodeName"].asString();
		if(!valueCheckTaskInfosData["Detail"].isNull())
			checkTaskInfosObject.detail = valueCheckTaskInfosData["Detail"].asString();
		checkTaskInfos_.push_back(checkTaskInfosObject);
	}

}

std::vector<VerifyPlaybookResult::Data> VerifyPlaybookResult::getCheckTaskInfos()const
{
	return checkTaskInfos_;
}

