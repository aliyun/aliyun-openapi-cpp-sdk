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

#include <alibabacloud/vcs/model/GetFaceModelResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetFaceModelResultResult::GetFaceModelResultResult() :
	ServiceResult()
{}

GetFaceModelResultResult::GetFaceModelResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFaceModelResultResult::~GetFaceModelResultResult()
{}

void GetFaceModelResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allRecordsNode = dataNode["Records"]["RecordsItem"];
	for (auto dataNodeRecordsRecordsItem : allRecordsNode)
	{
		Data::RecordsItem recordsItemObject;
		if(!dataNodeRecordsRecordsItem["MustacheStyle"].isNull())
			recordsItemObject.mustacheStyle = dataNodeRecordsRecordsItem["MustacheStyle"].asString();
		if(!dataNodeRecordsRecordsItem["FaceStyle"].isNull())
			recordsItemObject.faceStyle = dataNodeRecordsRecordsItem["FaceStyle"].asString();
		if(!dataNodeRecordsRecordsItem["CapStyle"].isNull())
			recordsItemObject.capStyle = std::stoi(dataNodeRecordsRecordsItem["CapStyle"].asString());
		if(!dataNodeRecordsRecordsItem["SkinColor"].isNull())
			recordsItemObject.skinColor = std::stoi(dataNodeRecordsRecordsItem["SkinColor"].asString());
		if(!dataNodeRecordsRecordsItem["RightBottomY"].isNull())
			recordsItemObject.rightBottomY = std::stof(dataNodeRecordsRecordsItem["RightBottomY"].asString());
		if(!dataNodeRecordsRecordsItem["RightBottomX"].isNull())
			recordsItemObject.rightBottomX = std::stof(dataNodeRecordsRecordsItem["RightBottomX"].asString());
		if(!dataNodeRecordsRecordsItem["HairStyle"].isNull())
			recordsItemObject.hairStyle = std::stoi(dataNodeRecordsRecordsItem["HairStyle"].asString());
		if(!dataNodeRecordsRecordsItem["GenderCode"].isNull())
			recordsItemObject.genderCode = std::stoi(dataNodeRecordsRecordsItem["GenderCode"].asString());
		if(!dataNodeRecordsRecordsItem["RespiratorColor"].isNull())
			recordsItemObject.respiratorColor = std::stoi(dataNodeRecordsRecordsItem["RespiratorColor"].asString());
		if(!dataNodeRecordsRecordsItem["EthicCode"].isNull())
			recordsItemObject.ethicCode = std::stoi(dataNodeRecordsRecordsItem["EthicCode"].asString());
		if(!dataNodeRecordsRecordsItem["AgeLowerLimit"].isNull())
			recordsItemObject.ageLowerLimit = std::stoi(dataNodeRecordsRecordsItem["AgeLowerLimit"].asString());
		if(!dataNodeRecordsRecordsItem["LeftTopY"].isNull())
			recordsItemObject.leftTopY = std::stof(dataNodeRecordsRecordsItem["LeftTopY"].asString());
		if(!dataNodeRecordsRecordsItem["LeftTopX"].isNull())
			recordsItemObject.leftTopX = std::stof(dataNodeRecordsRecordsItem["LeftTopX"].asString());
		if(!dataNodeRecordsRecordsItem["HairColor"].isNull())
			recordsItemObject.hairColor = std::stoi(dataNodeRecordsRecordsItem["HairColor"].asString());
		if(!dataNodeRecordsRecordsItem["AgeUpLimit"].isNull())
			recordsItemObject.ageUpLimit = std::stoi(dataNodeRecordsRecordsItem["AgeUpLimit"].asString());
		if(!dataNodeRecordsRecordsItem["GlassStyle"].isNull())
			recordsItemObject.glassStyle = std::stoi(dataNodeRecordsRecordsItem["GlassStyle"].asString());
		if(!dataNodeRecordsRecordsItem["GlassColor"].isNull())
			recordsItemObject.glassColor = std::stoi(dataNodeRecordsRecordsItem["GlassColor"].asString());
		if(!dataNodeRecordsRecordsItem["CapColor"].isNull())
			recordsItemObject.capColor = std::stoi(dataNodeRecordsRecordsItem["CapColor"].asString());
		if(!dataNodeRecordsRecordsItem["CapColorReliability"].isNull())
			recordsItemObject.capColorReliability = dataNodeRecordsRecordsItem["CapColorReliability"].asString();
		if(!dataNodeRecordsRecordsItem["RespiratorColorReliability"].isNull())
			recordsItemObject.respiratorColorReliability = dataNodeRecordsRecordsItem["RespiratorColorReliability"].asString();
		if(!dataNodeRecordsRecordsItem["EthicCodeReliability"].isNull())
			recordsItemObject.ethicCodeReliability = dataNodeRecordsRecordsItem["EthicCodeReliability"].asString();
		if(!dataNodeRecordsRecordsItem["GenderCodeReliability"].isNull())
			recordsItemObject.genderCodeReliability = dataNodeRecordsRecordsItem["GenderCodeReliability"].asString();
		if(!dataNodeRecordsRecordsItem["GlassColorReliability"].isNull())
			recordsItemObject.glassColorReliability = dataNodeRecordsRecordsItem["GlassColorReliability"].asString();
		if(!dataNodeRecordsRecordsItem["SkinColorReliability"].isNull())
			recordsItemObject.skinColorReliability = dataNodeRecordsRecordsItem["SkinColorReliability"].asString();
		if(!dataNodeRecordsRecordsItem["MustacheStyleReliability"].isNull())
			recordsItemObject.mustacheStyleReliability = dataNodeRecordsRecordsItem["MustacheStyleReliability"].asString();
		if(!dataNodeRecordsRecordsItem["CapStyleReliability"].isNull())
			recordsItemObject.capStyleReliability = dataNodeRecordsRecordsItem["CapStyleReliability"].asString();
		if(!dataNodeRecordsRecordsItem["FaceStyleReliability"].isNull())
			recordsItemObject.faceStyleReliability = dataNodeRecordsRecordsItem["FaceStyleReliability"].asString();
		if(!dataNodeRecordsRecordsItem["GlassStyleReliability"].isNull())
			recordsItemObject.glassStyleReliability = dataNodeRecordsRecordsItem["GlassStyleReliability"].asString();
		if(!dataNodeRecordsRecordsItem["AgeUpLimitReliability"].isNull())
			recordsItemObject.ageUpLimitReliability = dataNodeRecordsRecordsItem["AgeUpLimitReliability"].asString();
		if(!dataNodeRecordsRecordsItem["HairStyleReliability"].isNull())
			recordsItemObject.hairStyleReliability = dataNodeRecordsRecordsItem["HairStyleReliability"].asString();
		if(!dataNodeRecordsRecordsItem["AgeLowerLimitReliability"].isNull())
			recordsItemObject.ageLowerLimitReliability = dataNodeRecordsRecordsItem["AgeLowerLimitReliability"].asString();
		if(!dataNodeRecordsRecordsItem["HairColorReliability"].isNull())
			recordsItemObject.hairColorReliability = dataNodeRecordsRecordsItem["HairColorReliability"].asString();
		auto allFeatureData = value["FeatureData"]["FeatureData"];
		for (auto value : allFeatureData)
			recordsItemObject.featureData.push_back(value.asString());
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetFaceModelResultResult::getMessage()const
{
	return message_;
}

GetFaceModelResultResult::Data GetFaceModelResultResult::getData()const
{
	return data_;
}

std::string GetFaceModelResultResult::getCode()const
{
	return code_;
}

