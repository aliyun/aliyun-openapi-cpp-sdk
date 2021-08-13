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

#include <alibabacloud/smartag/model/GetQosAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

GetQosAttributeResult::GetQosAttributeResult() :
	ServiceResult()
{}

GetQosAttributeResult::GetQosAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQosAttributeResult::~GetQosAttributeResult()
{}

void GetQosAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQosPoliciesNode = value["QosPolicies"]["QosPolicy"];
	for (auto valueQosPoliciesQosPolicy : allQosPoliciesNode)
	{
		QosPolicy qosPoliciesObject;
		if(!valueQosPoliciesQosPolicy["EndTime"].isNull())
			qosPoliciesObject.endTime = std::stol(valueQosPoliciesQosPolicy["EndTime"].asString());
		if(!valueQosPoliciesQosPolicy["StartTime"].isNull())
			qosPoliciesObject.startTime = std::stol(valueQosPoliciesQosPolicy["StartTime"].asString());
		if(!valueQosPoliciesQosPolicy["DestCidr"].isNull())
			qosPoliciesObject.destCidr = valueQosPoliciesQosPolicy["DestCidr"].asString();
		if(!valueQosPoliciesQosPolicy["DestPortRange"].isNull())
			qosPoliciesObject.destPortRange = valueQosPoliciesQosPolicy["DestPortRange"].asString();
		if(!valueQosPoliciesQosPolicy["IpProtocol"].isNull())
			qosPoliciesObject.ipProtocol = valueQosPoliciesQosPolicy["IpProtocol"].asString();
		if(!valueQosPoliciesQosPolicy["Priority"].isNull())
			qosPoliciesObject.priority = std::stoi(valueQosPoliciesQosPolicy["Priority"].asString());
		if(!valueQosPoliciesQosPolicy["QosPolicieDescription"].isNull())
			qosPoliciesObject.qosPolicieDescription = valueQosPoliciesQosPolicy["QosPolicieDescription"].asString();
		if(!valueQosPoliciesQosPolicy["SourceCidr"].isNull())
			qosPoliciesObject.sourceCidr = valueQosPoliciesQosPolicy["SourceCidr"].asString();
		if(!valueQosPoliciesQosPolicy["QosPolicieName"].isNull())
			qosPoliciesObject.qosPolicieName = valueQosPoliciesQosPolicy["QosPolicieName"].asString();
		if(!valueQosPoliciesQosPolicy["SourcePortRange"].isNull())
			qosPoliciesObject.sourcePortRange = valueQosPoliciesQosPolicy["SourcePortRange"].asString();
		qosPolicies_.push_back(qosPoliciesObject);
	}
	auto allQosCarsNode = value["QosCars"]["QosCar"];
	for (auto valueQosCarsQosCar : allQosCarsNode)
	{
		QosCar qosCarsObject;
		if(!valueQosCarsQosCar["MaxBandwidthAbs"].isNull())
			qosCarsObject.maxBandwidthAbs = std::stoi(valueQosCarsQosCar["MaxBandwidthAbs"].asString());
		if(!valueQosCarsQosCar["QosCarName"].isNull())
			qosCarsObject.qosCarName = valueQosCarsQosCar["QosCarName"].asString();
		if(!valueQosCarsQosCar["PercentSourceType"].isNull())
			qosCarsObject.percentSourceType = valueQosCarsQosCar["PercentSourceType"].asString();
		if(!valueQosCarsQosCar["MinBandwidthAbs"].isNull())
			qosCarsObject.minBandwidthAbs = std::stoi(valueQosCarsQosCar["MinBandwidthAbs"].asString());
		if(!valueQosCarsQosCar["MaxBandwidthPercent"].isNull())
			qosCarsObject.maxBandwidthPercent = std::stoi(valueQosCarsQosCar["MaxBandwidthPercent"].asString());
		if(!valueQosCarsQosCar["QosCarDescription"].isNull())
			qosCarsObject.qosCarDescription = valueQosCarsQosCar["QosCarDescription"].asString();
		if(!valueQosCarsQosCar["LimitType"].isNull())
			qosCarsObject.limitType = valueQosCarsQosCar["LimitType"].asString();
		if(!valueQosCarsQosCar["Priority"].isNull())
			qosCarsObject.priority = std::stoi(valueQosCarsQosCar["Priority"].asString());
		if(!valueQosCarsQosCar["MinBandwidthPercent"].isNull())
			qosCarsObject.minBandwidthPercent = std::stoi(valueQosCarsQosCar["MinBandwidthPercent"].asString());
		if(!valueQosCarsQosCar["QosCarId"].isNull())
			qosCarsObject.qosCarId = valueQosCarsQosCar["QosCarId"].asString();
		qosCars_.push_back(qosCarsObject);
	}
	if(!value["ErrorConfigSmartAGCount"].isNull())
		errorConfigSmartAGCount_ = std::stoi(value["ErrorConfigSmartAGCount"].asString());
	if(!value["QosName"].isNull())
		qosName_ = value["QosName"].asString();
	if(!value["QosDescription"].isNull())
		qosDescription_ = value["QosDescription"].asString();

}

std::vector<GetQosAttributeResult::QosPolicy> GetQosAttributeResult::getQosPolicies()const
{
	return qosPolicies_;
}

std::vector<GetQosAttributeResult::QosCar> GetQosAttributeResult::getQosCars()const
{
	return qosCars_;
}

int GetQosAttributeResult::getErrorConfigSmartAGCount()const
{
	return errorConfigSmartAGCount_;
}

std::string GetQosAttributeResult::getQosName()const
{
	return qosName_;
}

std::string GetQosAttributeResult::getQosDescription()const
{
	return qosDescription_;
}

