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

#include <alibabacloud/vpc/model/DescribeEipMonitorDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeEipMonitorDataResult::DescribeEipMonitorDataResult() :
	ServiceResult()
{}

DescribeEipMonitorDataResult::DescribeEipMonitorDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEipMonitorDataResult::~DescribeEipMonitorDataResult()
{}

void DescribeEipMonitorDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEipMonitorDatas = value["EipMonitorDatas"]["EipMonitorData"];
	for (auto value : allEipMonitorDatas)
	{
		EipMonitorData eipMonitorDatasObject;
		if(!value["EipRX"].isNull())
			eipMonitorDatasObject.eipRX = std::stoi(value["EipRX"].asString());
		if(!value["EipTX"].isNull())
			eipMonitorDatasObject.eipTX = std::stoi(value["EipTX"].asString());
		if(!value["EipFlow"].isNull())
			eipMonitorDatasObject.eipFlow = std::stoi(value["EipFlow"].asString());
		if(!value["EipBandwidth"].isNull())
			eipMonitorDatasObject.eipBandwidth = std::stoi(value["EipBandwidth"].asString());
		if(!value["EipPackets"].isNull())
			eipMonitorDatasObject.eipPackets = std::stoi(value["EipPackets"].asString());
		if(!value["TimeStamp"].isNull())
			eipMonitorDatasObject.timeStamp = value["TimeStamp"].asString();
		eipMonitorDatas_.push_back(eipMonitorDatasObject);
	}

}

std::vector<DescribeEipMonitorDataResult::EipMonitorData> DescribeEipMonitorDataResult::getEipMonitorDatas()const
{
	return eipMonitorDatas_;
}

