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

#include <alibabacloud/facebody/model/ExtractPedestrianFeatureAttrResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

ExtractPedestrianFeatureAttrResult::ExtractPedestrianFeatureAttrResult() :
	ServiceResult()
{}

ExtractPedestrianFeatureAttrResult::ExtractPedestrianFeatureAttrResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExtractPedestrianFeatureAttrResult::~ExtractPedestrianFeatureAttrResult()
{}

void ExtractPedestrianFeatureAttrResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["QualityScore"].isNull())
		data_.qualityScore = std::stof(dataNode["QualityScore"].asString());
	if(!dataNode["ObjType"].isNull())
		data_.objType = dataNode["ObjType"].asString();
	if(!dataNode["Feature"].isNull())
		data_.feature = dataNode["Feature"].asString();
	if(!dataNode["Gender"].isNull())
		data_.gender = dataNode["Gender"].asString();
	if(!dataNode["LowerColorScore"].isNull())
		data_.lowerColorScore = std::stof(dataNode["LowerColorScore"].asString());
	if(!dataNode["ObjTypeScore"].isNull())
		data_.objTypeScore = std::stof(dataNode["ObjTypeScore"].asString());
	if(!dataNode["Age"].isNull())
		data_.age = dataNode["Age"].asString();
	if(!dataNode["AgeScore"].isNull())
		data_.ageScore = std::stof(dataNode["AgeScore"].asString());
	if(!dataNode["UpperTypeScore"].isNull())
		data_.upperTypeScore = std::stof(dataNode["UpperTypeScore"].asString());
	if(!dataNode["LowerTypeScore"].isNull())
		data_.lowerTypeScore = std::stof(dataNode["LowerTypeScore"].asString());
	if(!dataNode["LowerColor"].isNull())
		data_.lowerColor = dataNode["LowerColor"].asString();
	if(!dataNode["Hair"].isNull())
		data_.hair = dataNode["Hair"].asString();
	if(!dataNode["UpperColor"].isNull())
		data_.upperColor = dataNode["UpperColor"].asString();
	if(!dataNode["GenderScore"].isNull())
		data_.genderScore = std::stof(dataNode["GenderScore"].asString());
	if(!dataNode["UpperType"].isNull())
		data_.upperType = dataNode["UpperType"].asString();
	if(!dataNode["HairScore"].isNull())
		data_.hairScore = std::stof(dataNode["HairScore"].asString());
	if(!dataNode["LowerType"].isNull())
		data_.lowerType = dataNode["LowerType"].asString();
	if(!dataNode["UpperColorScore"].isNull())
		data_.upperColorScore = std::stof(dataNode["UpperColorScore"].asString());
	if(!dataNode["Orientation"].isNull())
		data_.orientation = dataNode["Orientation"].asString();
	if(!dataNode["OrientationScore"].isNull())
		data_.orientationScore = std::stof(dataNode["OrientationScore"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ExtractPedestrianFeatureAttrResult::getMessage()const
{
	return message_;
}

ExtractPedestrianFeatureAttrResult::Data ExtractPedestrianFeatureAttrResult::getData()const
{
	return data_;
}

std::string ExtractPedestrianFeatureAttrResult::getCode()const
{
	return code_;
}

