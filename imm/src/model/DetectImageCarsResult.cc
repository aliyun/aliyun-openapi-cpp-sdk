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

#include <alibabacloud/imm/model/DetectImageCarsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectImageCarsResult::DetectImageCarsResult() :
	ServiceResult()
{}

DetectImageCarsResult::DetectImageCarsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectImageCarsResult::~DetectImageCarsResult()
{}

void DetectImageCarsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCarsNode = value["Cars"]["CarsItem"];
	for (auto valueCarsCarsItem : allCarsNode)
	{
		CarsItem carsObject;
		if(!valueCarsCarsItem["CarType"].isNull())
			carsObject.carType = valueCarsCarsItem["CarType"].asString();
		if(!valueCarsCarsItem["CarTypeConfidence"].isNull())
			carsObject.carTypeConfidence = valueCarsCarsItem["CarTypeConfidence"].asString();
		if(!valueCarsCarsItem["CarColor"].isNull())
			carsObject.carColor = valueCarsCarsItem["CarColor"].asString();
		if(!valueCarsCarsItem["CarColorConfidence"].isNull())
			carsObject.carColorConfidence = valueCarsCarsItem["CarColorConfidence"].asString();
		if(!valueCarsCarsItem["Confidence"].isNull())
			carsObject.confidence = valueCarsCarsItem["Confidence"].asString();
		auto allLicensePlatesNode = valueCarsCarsItem["LicensePlates"]["LicensePlatesItem"];
		for (auto valueCarsCarsItemLicensePlatesLicensePlatesItem : allLicensePlatesNode)
		{
			CarsItem::LicensePlatesItem licensePlatesObject;
			if(!valueCarsCarsItemLicensePlatesLicensePlatesItem["Content"].isNull())
				licensePlatesObject.content = valueCarsCarsItemLicensePlatesLicensePlatesItem["Content"].asString();
			if(!valueCarsCarsItemLicensePlatesLicensePlatesItem["Confidence"].isNull())
				licensePlatesObject.confidence = valueCarsCarsItemLicensePlatesLicensePlatesItem["Confidence"].asString();
			auto boundary1Node = value["Boundary"];
			if(!boundary1Node["Width"].isNull())
				licensePlatesObject.boundary1.width = std::stol(boundary1Node["Width"].asString());
			if(!boundary1Node["Height"].isNull())
				licensePlatesObject.boundary1.height = std::stol(boundary1Node["Height"].asString());
			if(!boundary1Node["Left"].isNull())
				licensePlatesObject.boundary1.left = std::stol(boundary1Node["Left"].asString());
			if(!boundary1Node["Top"].isNull())
				licensePlatesObject.boundary1.top = std::stol(boundary1Node["Top"].asString());
			carsObject.licensePlates.push_back(licensePlatesObject);
		}
		auto boundaryNode = value["Boundary"];
		if(!boundaryNode["Width"].isNull())
			carsObject.boundary.width = std::stol(boundaryNode["Width"].asString());
		if(!boundaryNode["Height"].isNull())
			carsObject.boundary.height = std::stol(boundaryNode["Height"].asString());
		if(!boundaryNode["Left"].isNull())
			carsObject.boundary.left = std::stol(boundaryNode["Left"].asString());
		if(!boundaryNode["Top"].isNull())
			carsObject.boundary.top = std::stol(boundaryNode["Top"].asString());
		cars_.push_back(carsObject);
	}

}

std::vector<DetectImageCarsResult::CarsItem> DetectImageCarsResult::getCars()const
{
	return cars_;
}

