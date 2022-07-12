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

#include <alibabacloud/antiddos-public/model/DescribeIpDdosThresholdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeIpDdosThresholdResult::DescribeIpDdosThresholdResult() :
	ServiceResult()
{}

DescribeIpDdosThresholdResult::DescribeIpDdosThresholdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpDdosThresholdResult::~DescribeIpDdosThresholdResult()
{}

void DescribeIpDdosThresholdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto thresholdNode = value["Threshold"];
	if(!thresholdNode["DdosType"].isNull())
		threshold_.ddosType = thresholdNode["DdosType"].asString();
	if(!thresholdNode["IsAuto"].isNull())
		threshold_.isAuto = thresholdNode["IsAuto"].asString() == "true";
	if(!thresholdNode["MaxBps"].isNull())
		threshold_.maxBps = std::stoi(thresholdNode["MaxBps"].asString());
	if(!thresholdNode["ElasticBps"].isNull())
		threshold_.elasticBps = std::stoi(thresholdNode["ElasticBps"].asString());
	if(!thresholdNode["InstanceId"].isNull())
		threshold_.instanceId = thresholdNode["InstanceId"].asString();
	if(!thresholdNode["Bps"].isNull())
		threshold_.bps = std::stoi(thresholdNode["Bps"].asString());
	if(!thresholdNode["Pps"].isNull())
		threshold_.pps = std::stoi(thresholdNode["Pps"].asString());
	if(!thresholdNode["MaxPps"].isNull())
		threshold_.maxPps = std::stoi(thresholdNode["MaxPps"].asString());
	if(!thresholdNode["InternetIp"].isNull())
		threshold_.internetIp = thresholdNode["InternetIp"].asString();

}

DescribeIpDdosThresholdResult::Threshold DescribeIpDdosThresholdResult::getThreshold()const
{
	return threshold_;
}

