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

#include <alibabacloud/reid/model/DescribeHeatMapResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

DescribeHeatMapResult::DescribeHeatMapResult() :
	ServiceResult()
{}

DescribeHeatMapResult::DescribeHeatMapResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHeatMapResult::~DescribeHeatMapResult()
{}

void DescribeHeatMapResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHeatMapPointsNode = value["HeatMapPoints"]["HeatMapPoint"];
	for (auto valueHeatMapPointsHeatMapPoint : allHeatMapPointsNode)
	{
		HeatMapPoint heatMapPointsObject;
		if(!valueHeatMapPointsHeatMapPoint["Y"].isNull())
			heatMapPointsObject.y = std::stof(valueHeatMapPointsHeatMapPoint["Y"].asString());
		if(!valueHeatMapPointsHeatMapPoint["Weight"].isNull())
			heatMapPointsObject.weight = std::stoi(valueHeatMapPointsHeatMapPoint["Weight"].asString());
		if(!valueHeatMapPointsHeatMapPoint["X"].isNull())
			heatMapPointsObject.x = std::stof(valueHeatMapPointsHeatMapPoint["X"].asString());
		heatMapPoints_.push_back(heatMapPointsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeHeatMapResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeHeatMapResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<DescribeHeatMapResult::HeatMapPoint> DescribeHeatMapResult::getHeatMapPoints()const
{
	return heatMapPoints_;
}

bool DescribeHeatMapResult::getSuccess()const
{
	return success_;
}

