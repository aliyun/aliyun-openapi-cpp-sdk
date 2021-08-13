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

#include <alibabacloud/smartag/model/DescribeSagTrafficTopNResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagTrafficTopNResult::DescribeSagTrafficTopNResult() :
	ServiceResult()
{}

DescribeSagTrafficTopNResult::DescribeSagTrafficTopNResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagTrafficTopNResult::~DescribeSagTrafficTopNResult()
{}

void DescribeSagTrafficTopNResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficTopNNode = value["TrafficTopN"]["TrafficTopNItem"];
	for (auto valueTrafficTopNTrafficTopNItem : allTrafficTopNNode)
	{
		TrafficTopNItem trafficTopNObject;
		if(!valueTrafficTopNTrafficTopNItem["TrafficRate"].isNull())
			trafficTopNObject.trafficRate = valueTrafficTopNTrafficTopNItem["TrafficRate"].asString();
		if(!valueTrafficTopNTrafficTopNItem["InstanceId"].isNull())
			trafficTopNObject.instanceId = valueTrafficTopNTrafficTopNItem["InstanceId"].asString();
		if(!valueTrafficTopNTrafficTopNItem["Name"].isNull())
			trafficTopNObject.name = valueTrafficTopNTrafficTopNItem["Name"].asString();
		if(!valueTrafficTopNTrafficTopNItem["RegionId"].isNull())
			trafficTopNObject.regionId = valueTrafficTopNTrafficTopNItem["RegionId"].asString();
		trafficTopN_.push_back(trafficTopNObject);
	}

}

std::vector<DescribeSagTrafficTopNResult::TrafficTopNItem> DescribeSagTrafficTopNResult::getTrafficTopN()const
{
	return trafficTopN_;
}

