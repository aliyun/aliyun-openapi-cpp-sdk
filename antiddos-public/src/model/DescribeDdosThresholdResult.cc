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

#include <alibabacloud/antiddos-public/model/DescribeDdosThresholdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeDdosThresholdResult::DescribeDdosThresholdResult() :
	ServiceResult()
{}

DescribeDdosThresholdResult::DescribeDdosThresholdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDdosThresholdResult::~DescribeDdosThresholdResult()
{}

void DescribeDdosThresholdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allThresholdsNode = value["Thresholds"]["Threshold"];
	for (auto valueThresholdsThreshold : allThresholdsNode)
	{
		Threshold thresholdsObject;
		if(!valueThresholdsThreshold["DdosType"].isNull())
			thresholdsObject.ddosType = valueThresholdsThreshold["DdosType"].asString();
		if(!valueThresholdsThreshold["IsAuto"].isNull())
			thresholdsObject.isAuto = valueThresholdsThreshold["IsAuto"].asString() == "true";
		if(!valueThresholdsThreshold["MaxBps"].isNull())
			thresholdsObject.maxBps = std::stoi(valueThresholdsThreshold["MaxBps"].asString());
		if(!valueThresholdsThreshold["ElasticBps"].isNull())
			thresholdsObject.elasticBps = std::stoi(valueThresholdsThreshold["ElasticBps"].asString());
		if(!valueThresholdsThreshold["InstanceId"].isNull())
			thresholdsObject.instanceId = valueThresholdsThreshold["InstanceId"].asString();
		if(!valueThresholdsThreshold["Bps"].isNull())
			thresholdsObject.bps = std::stoi(valueThresholdsThreshold["Bps"].asString());
		if(!valueThresholdsThreshold["Pps"].isNull())
			thresholdsObject.pps = std::stoi(valueThresholdsThreshold["Pps"].asString());
		if(!valueThresholdsThreshold["MaxPps"].isNull())
			thresholdsObject.maxPps = std::stoi(valueThresholdsThreshold["MaxPps"].asString());
		if(!valueThresholdsThreshold["InternetIp"].isNull())
			thresholdsObject.internetIp = valueThresholdsThreshold["InternetIp"].asString();
		thresholds_.push_back(thresholdsObject);
	}

}

std::vector<DescribeDdosThresholdResult::Threshold> DescribeDdosThresholdResult::getThresholds()const
{
	return thresholds_;
}

