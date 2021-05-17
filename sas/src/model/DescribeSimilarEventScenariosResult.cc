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

#include <alibabacloud/sas/model/DescribeSimilarEventScenariosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeSimilarEventScenariosResult::DescribeSimilarEventScenariosResult() :
	ServiceResult()
{}

DescribeSimilarEventScenariosResult::DescribeSimilarEventScenariosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSimilarEventScenariosResult::~DescribeSimilarEventScenariosResult()
{}

void DescribeSimilarEventScenariosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScenariosNode = value["Scenarios"]["Scenario"];
	for (auto valueScenariosScenario : allScenariosNode)
	{
		Scenario scenariosObject;
		if(!valueScenariosScenario["Code"].isNull())
			scenariosObject.code = valueScenariosScenario["Code"].asString();
		scenarios_.push_back(scenariosObject);
	}

}

std::vector<DescribeSimilarEventScenariosResult::Scenario> DescribeSimilarEventScenariosResult::getScenarios()const
{
	return scenarios_;
}

