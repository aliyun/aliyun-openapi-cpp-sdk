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

#include <alibabacloud/vpc/model/Describe95TrafficResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

Describe95TrafficResult::Describe95TrafficResult() :
	ServiceResult()
{}

Describe95TrafficResult::Describe95TrafficResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

Describe95TrafficResult::~Describe95TrafficResult()
{}

void Describe95TrafficResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto traffic95SummaryNode = value["Traffic95Summary"];
	if(!traffic95SummaryNode["InternetChargeType"].isNull())
		traffic95Summary_.internetChargeType = traffic95SummaryNode["InternetChargeType"].asString();
	if(!traffic95SummaryNode["InstanceId"].isNull())
		traffic95Summary_.instanceId = traffic95SummaryNode["InstanceId"].asString();
	if(!traffic95SummaryNode["Bandwidth"].isNull())
		traffic95Summary_.bandwidth = std::stol(traffic95SummaryNode["Bandwidth"].asString());
	if(!traffic95SummaryNode["FifthPeakBandwidth"].isNull())
		traffic95Summary_.fifthPeakBandwidth = traffic95SummaryNode["FifthPeakBandwidth"].asString();
	if(!traffic95SummaryNode["MinimumConsumeBandwidth"].isNull())
		traffic95Summary_.minimumConsumeBandwidth = traffic95SummaryNode["MinimumConsumeBandwidth"].asString();
	auto allTraffic95DetailListNode = traffic95SummaryNode["Traffic95DetailList"]["Traffic95Detail"];
	for (auto traffic95SummaryNodeTraffic95DetailListTraffic95Detail : allTraffic95DetailListNode)
	{
		Traffic95Summary::Traffic95Detail traffic95DetailObject;
		if(!traffic95SummaryNodeTraffic95DetailListTraffic95Detail["Time"].isNull())
			traffic95DetailObject.time = traffic95SummaryNodeTraffic95DetailListTraffic95Detail["Time"].asString();
		if(!traffic95SummaryNodeTraffic95DetailListTraffic95Detail["BillBandwidth"].isNull())
			traffic95DetailObject.billBandwidth = traffic95SummaryNodeTraffic95DetailListTraffic95Detail["BillBandwidth"].asString();
		if(!traffic95SummaryNodeTraffic95DetailListTraffic95Detail["OutBandwidth"].isNull())
			traffic95DetailObject.outBandwidth = traffic95SummaryNodeTraffic95DetailListTraffic95Detail["OutBandwidth"].asString();
		if(!traffic95SummaryNodeTraffic95DetailListTraffic95Detail["InBandwidth"].isNull())
			traffic95DetailObject.inBandwidth = traffic95SummaryNodeTraffic95DetailListTraffic95Detail["InBandwidth"].asString();
		traffic95Summary_.traffic95DetailList.push_back(traffic95DetailObject);
	}

}

Describe95TrafficResult::Traffic95Summary Describe95TrafficResult::getTraffic95Summary()const
{
	return traffic95Summary_;
}

