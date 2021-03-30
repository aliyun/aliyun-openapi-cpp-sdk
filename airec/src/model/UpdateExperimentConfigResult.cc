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

#include <alibabacloud/airec/model/UpdateExperimentConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

UpdateExperimentConfigResult::UpdateExperimentConfigResult() :
	ServiceResult()
{}

UpdateExperimentConfigResult::UpdateExperimentConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateExperimentConfigResult::~UpdateExperimentConfigResult()
{}

void UpdateExperimentConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["experimentId"].isNull())
		result_.experimentId = resultNode["experimentId"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["base"].isNull())
		result_.base = resultNode["base"].asString() == "true";
	if(!resultNode["onlineTime"].isNull())
		result_.onlineTime = resultNode["onlineTime"].asString();
	if(!resultNode["offlineTime"].isNull())
		result_.offlineTime = resultNode["offlineTime"].asString();
	auto allalgorithmsNode = resultNode["algorithms"]["algorithm"];
	for (auto resultNodealgorithmsalgorithm : allalgorithmsNode)
	{
		Result::Algorithm algorithmObject;
		if(!resultNodealgorithmsalgorithm["key"].isNull())
			algorithmObject.key = resultNodealgorithmsalgorithm["key"].asString();
		if(!resultNodealgorithmsalgorithm["name"].isNull())
			algorithmObject.name = resultNodealgorithmsalgorithm["name"].asString();
		if(!resultNodealgorithmsalgorithm["category"].isNull())
			algorithmObject.category = resultNodealgorithmsalgorithm["category"].asString();
		if(!resultNodealgorithmsalgorithm["type"].isNull())
			algorithmObject.type = resultNodealgorithmsalgorithm["type"].asString();
		if(!resultNodealgorithmsalgorithm["defaultValue"].isNull())
			algorithmObject.defaultValue = resultNodealgorithmsalgorithm["defaultValue"].asString();
		if(!resultNodealgorithmsalgorithm["experimentValue"].isNull())
			algorithmObject.experimentValue = resultNodealgorithmsalgorithm["experimentValue"].asString();
		if(!resultNodealgorithmsalgorithm["hasConfig"].isNull())
			algorithmObject.hasConfig = resultNodealgorithmsalgorithm["hasConfig"].asString() == "true";
		auto allconfigNode = resultNodealgorithmsalgorithm["config"]["configItem"];
		for (auto resultNodealgorithmsalgorithmconfigconfigItem : allconfigNode)
		{
			Result::Algorithm::ConfigItem configObject;
			if(!resultNodealgorithmsalgorithmconfigconfigItem["key"].isNull())
				configObject.key = resultNodealgorithmsalgorithmconfigconfigItem["key"].asString();
			if(!resultNodealgorithmsalgorithmconfigconfigItem["name"].isNull())
				configObject.name = resultNodealgorithmsalgorithmconfigconfigItem["name"].asString();
			if(!resultNodealgorithmsalgorithmconfigconfigItem["defaultValue"].isNull())
				configObject.defaultValue = resultNodealgorithmsalgorithmconfigconfigItem["defaultValue"].asString();
			if(!resultNodealgorithmsalgorithmconfigconfigItem["experimentValue"].isNull())
				configObject.experimentValue = resultNodealgorithmsalgorithmconfigconfigItem["experimentValue"].asString();
			algorithmObject.config.push_back(configObject);
		}
		result_.algorithms.push_back(algorithmObject);
	}
		auto allBuckets = resultNode["buckets"]["bucket"];
		for (auto value : allBuckets)
			result_.buckets.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string UpdateExperimentConfigResult::getRequestId()const
{
	return requestId_;
}

UpdateExperimentConfigResult::Result UpdateExperimentConfigResult::getResult()const
{
	return result_;
}

