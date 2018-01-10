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

#include <alibabacloud/vpc/model/DescribeNewProjectEipMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
	auto allEipMonitorDatas = value["EipMonitorDatas"]["EipMonitorData"];
	for (auto value : allEipMonitorDatas)
	{
		EipMonitorData eipMonitorDataObject;
		eipMonitorDataObject.eipRX = std::stoi(value["EipRX"].asString());
		eipMonitorDataObject.eipTX = std::stoi(value["EipTX"].asString());
		eipMonitorDataObject.eipFlow = std::stoi(value["EipFlow"].asString());
		eipMonitorDataObject.eipBandwidth = std::stoi(value["EipBandwidth"].asString());
		eipMonitorDataObject.eipPackets = std::stoi(value["EipPackets"].asString());
		eipMonitorDataObject.timeStamp = value["TimeStamp"].asString();
		eipMonitorDatas_.push_back(eipMonitorDataObject);
	}

}

