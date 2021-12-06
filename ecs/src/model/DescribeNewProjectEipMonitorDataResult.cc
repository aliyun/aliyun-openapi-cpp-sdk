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

#include <alibabacloud/ecs/model/DescribeNewProjectEipMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeNewProjectEipMonitorDataResult::DescribeNewProjectEipMonitorDataResult() :
	ServiceResult()
{}

DescribeNewProjectEipMonitorDataResult::DescribeNewProjectEipMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNewProjectEipMonitorDataResult::~DescribeNewProjectEipMonitorDataResult()
{}

void DescribeNewProjectEipMonitorDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEipMonitorDatasNode = value["EipMonitorDatas"]["EipMonitorData"];
	for (auto valueEipMonitorDatasEipMonitorData : allEipMonitorDatasNode)
	{
		EipMonitorData eipMonitorDatasObject;
		if(!valueEipMonitorDatasEipMonitorData["EipTX"].isNull())
			eipMonitorDatasObject.eipTX = std::stoi(valueEipMonitorDatasEipMonitorData["EipTX"].asString());
		if(!valueEipMonitorDatasEipMonitorData["EipPackets"].isNull())
			eipMonitorDatasObject.eipPackets = std::stoi(valueEipMonitorDatasEipMonitorData["EipPackets"].asString());
		if(!valueEipMonitorDatasEipMonitorData["EipBandwidth"].isNull())
			eipMonitorDatasObject.eipBandwidth = std::stoi(valueEipMonitorDatasEipMonitorData["EipBandwidth"].asString());
		if(!valueEipMonitorDatasEipMonitorData["TimeStamp"].isNull())
			eipMonitorDatasObject.timeStamp = valueEipMonitorDatasEipMonitorData["TimeStamp"].asString();
		if(!valueEipMonitorDatasEipMonitorData["EipFlow"].isNull())
			eipMonitorDatasObject.eipFlow = std::stoi(valueEipMonitorDatasEipMonitorData["EipFlow"].asString());
		if(!valueEipMonitorDatasEipMonitorData["EipRX"].isNull())
			eipMonitorDatasObject.eipRX = std::stoi(valueEipMonitorDatasEipMonitorData["EipRX"].asString());
		eipMonitorDatas_.push_back(eipMonitorDatasObject);
	}

}

std::vector<DescribeNewProjectEipMonitorDataResult::EipMonitorData> DescribeNewProjectEipMonitorDataResult::getEipMonitorDatas()const
{
	return eipMonitorDatas_;
}

