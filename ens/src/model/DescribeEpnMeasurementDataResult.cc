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

#include <alibabacloud/ens/model/DescribeEpnMeasurementDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEpnMeasurementDataResult::DescribeEpnMeasurementDataResult() :
	ServiceResult()
{}

DescribeEpnMeasurementDataResult::DescribeEpnMeasurementDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEpnMeasurementDataResult::~DescribeEpnMeasurementDataResult()
{}

void DescribeEpnMeasurementDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMeasurementDatasNode = value["MeasurementDatas"]["MeasurementData"];
	for (auto valueMeasurementDatasMeasurementData : allMeasurementDatasNode)
	{
		MeasurementData measurementDatasObject;
		if(!valueMeasurementDatasMeasurementData["ChargeModel"].isNull())
			measurementDatasObject.chargeModel = valueMeasurementDatasMeasurementData["ChargeModel"].asString();
		if(!valueMeasurementDatasMeasurementData["CostCycle"].isNull())
			measurementDatasObject.costCycle = valueMeasurementDatasMeasurementData["CostCycle"].asString();
		if(!valueMeasurementDatasMeasurementData["CostEndTime"].isNull())
			measurementDatasObject.costEndTime = valueMeasurementDatasMeasurementData["CostEndTime"].asString();
		if(!valueMeasurementDatasMeasurementData["CostStartTime"].isNull())
			measurementDatasObject.costStartTime = valueMeasurementDatasMeasurementData["CostStartTime"].asString();
		auto allBandWidthFeeDatasNode = valueMeasurementDatasMeasurementData["BandWidthFeeDatas"]["BandWidthFeeData"];
		for (auto valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData : allBandWidthFeeDatasNode)
		{
			MeasurementData::BandWidthFeeData bandWidthFeeDatasObject;
			if(!valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostCode"].isNull())
				bandWidthFeeDatasObject.costCode = valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostCode"].asString();
			if(!valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostName"].isNull())
				bandWidthFeeDatasObject.costName = valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostName"].asString();
			if(!valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostType"].isNull())
				bandWidthFeeDatasObject.costType = valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostType"].asString();
			if(!valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostVal"].isNull())
				bandWidthFeeDatasObject.costVal = std::stoi(valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostVal"].asString());
			if(!valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["IspLine"].isNull())
				bandWidthFeeDatasObject.ispLine = valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["IspLine"].asString();
			measurementDatasObject.bandWidthFeeDatas.push_back(bandWidthFeeDatasObject);
		}
		measurementDatas_.push_back(measurementDatasObject);
	}

}

std::vector<DescribeEpnMeasurementDataResult::MeasurementData> DescribeEpnMeasurementDataResult::getMeasurementDatas()const
{
	return measurementDatas_;
}

