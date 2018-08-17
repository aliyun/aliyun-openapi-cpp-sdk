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

#include <alibabacloud/vod/model/GetCDNStatisSumResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetCDNStatisSumResult::GetCDNStatisSumResult() :
	ServiceResult()
{}

GetCDNStatisSumResult::GetCDNStatisSumResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCDNStatisSumResult::~GetCDNStatisSumResult()
{}

void GetCDNStatisSumResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCDNStatisList = value["CDNStatisList"]["CDNMetric"];
	for (auto value : allCDNStatisList)
	{
		CDNMetric cDNStatisListObject;
		if(!value["StatTime"].isNull())
			cDNStatisListObject.statTime = value["StatTime"].asString();
		if(!value["FlowDataDomesticValue"].isNull())
			cDNStatisListObject.flowDataDomesticValue = std::stol(value["FlowDataDomesticValue"].asString());
		if(!value["FlowDataOverseasValue"].isNull())
			cDNStatisListObject.flowDataOverseasValue = std::stol(value["FlowDataOverseasValue"].asString());
		if(!value["FlowDataValue"].isNull())
			cDNStatisListObject.flowDataValue = std::stol(value["FlowDataValue"].asString());
		if(!value["BpsDataDomesticValue"].isNull())
			cDNStatisListObject.bpsDataDomesticValue = std::stol(value["BpsDataDomesticValue"].asString());
		if(!value["BpsDataOverseasValue"].isNull())
			cDNStatisListObject.bpsDataOverseasValue = std::stol(value["BpsDataOverseasValue"].asString());
		if(!value["BpsDataValue"].isNull())
			cDNStatisListObject.bpsDataValue = std::stol(value["BpsDataValue"].asString());
		cDNStatisList_.push_back(cDNStatisListObject);
	}
	if(!value["SumFlowDataValue"].isNull())
		sumFlowDataValue_ = std::stol(value["SumFlowDataValue"].asString());
	if(!value["MaxBpsDataValue"].isNull())
		maxBpsDataValue_ = std::stol(value["MaxBpsDataValue"].asString());

}

long GetCDNStatisSumResult::getSumFlowDataValue()const
{
	return sumFlowDataValue_;
}

long GetCDNStatisSumResult::getMaxBpsDataValue()const
{
	return maxBpsDataValue_;
}

std::vector<GetCDNStatisSumResult::CDNMetric> GetCDNStatisSumResult::getCDNStatisList()const
{
	return cDNStatisList_;
}

