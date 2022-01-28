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

#include <alibabacloud/ens/model/DescribeMeasurementDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeMeasurementDataResult::DescribeMeasurementDataResult() :
	ServiceResult()
{}

DescribeMeasurementDataResult::DescribeMeasurementDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMeasurementDataResult::~DescribeMeasurementDataResult()
{}

void DescribeMeasurementDataResult::parse(const std::string &payload)
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
			if(!valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostVal"].isNull())
				bandWidthFeeDatasObject.costVal = std::stoi(valueMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData["CostVal"].asString());
			measurementDatasObject.bandWidthFeeDatas.push_back(bandWidthFeeDatasObject);
		}
		auto allResourceFeeDataDetailsNode = valueMeasurementDatasMeasurementData["ResourceFeeDataDetails"]["ResourceFeeDataDetail"];
		for (auto valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail : allResourceFeeDataDetailsNode)
		{
			MeasurementData::ResourceFeeDataDetail resourceFeeDataDetailsObject;
			if(!valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail["CostCode"].isNull())
				resourceFeeDataDetailsObject.costCode = valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail["CostCode"].asString();
			if(!valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail["CostName"].isNull())
				resourceFeeDataDetailsObject.costName = valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail["CostName"].asString();
			if(!valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail["CostVal"].isNull())
				resourceFeeDataDetailsObject.costVal = std::stoi(valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail["CostVal"].asString());
			if(!valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail["ResourceType"].isNull())
				resourceFeeDataDetailsObject.resourceType = valueMeasurementDatasMeasurementDataResourceFeeDataDetailsResourceFeeDataDetail["ResourceType"].asString();
			measurementDatasObject.resourceFeeDataDetails.push_back(resourceFeeDataDetailsObject);
		}
		auto resourceFeeDataNode = value["ResourceFeeData"];
		if(!resourceFeeDataNode["Memory"].isNull())
			measurementDatasObject.resourceFeeData.memory = std::stoi(resourceFeeDataNode["Memory"].asString());
		if(!resourceFeeDataNode["Storage"].isNull())
			measurementDatasObject.resourceFeeData.storage = std::stoi(resourceFeeDataNode["Storage"].asString());
		if(!resourceFeeDataNode["Vcpu"].isNull())
			measurementDatasObject.resourceFeeData.vcpu = std::stoi(resourceFeeDataNode["Vcpu"].asString());
		measurementDatas_.push_back(measurementDatasObject);
	}

}

std::vector<DescribeMeasurementDataResult::MeasurementData> DescribeMeasurementDataResult::getMeasurementDatas()const
{
	return measurementDatas_;
}

