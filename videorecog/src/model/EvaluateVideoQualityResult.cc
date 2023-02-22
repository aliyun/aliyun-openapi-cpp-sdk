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

#include <alibabacloud/videorecog/model/EvaluateVideoQualityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Videorecog;
using namespace AlibabaCloud::Videorecog::Model;

EvaluateVideoQualityResult::EvaluateVideoQualityResult() :
	ServiceResult()
{}

EvaluateVideoQualityResult::EvaluateVideoQualityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EvaluateVideoQualityResult::~EvaluateVideoQualityResult()
{}

void EvaluateVideoQualityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JsonUrl"].isNull())
		data_.jsonUrl = dataNode["JsonUrl"].asString();
	if(!dataNode["PdfUrl"].isNull())
		data_.pdfUrl = dataNode["PdfUrl"].asString();
	auto videoQualityInfoNode = dataNode["VideoQualityInfo"];
	if(!videoQualityInfoNode["CompressiveStrength"].isNull())
		data_.videoQualityInfo.compressiveStrength = std::stof(videoQualityInfoNode["CompressiveStrength"].asString());
	if(!videoQualityInfoNode["NoiseIntensity"].isNull())
		data_.videoQualityInfo.noiseIntensity = std::stof(videoQualityInfoNode["NoiseIntensity"].asString());
	if(!videoQualityInfoNode["Blurriness"].isNull())
		data_.videoQualityInfo.blurriness = std::stof(videoQualityInfoNode["Blurriness"].asString());
	if(!videoQualityInfoNode["ColorContrast"].isNull())
		data_.videoQualityInfo.colorContrast = std::stof(videoQualityInfoNode["ColorContrast"].asString());
	if(!videoQualityInfoNode["ColorSaturation"].isNull())
		data_.videoQualityInfo.colorSaturation = std::stof(videoQualityInfoNode["ColorSaturation"].asString());
	if(!videoQualityInfoNode["Luminance"].isNull())
		data_.videoQualityInfo.luminance = std::stof(videoQualityInfoNode["Luminance"].asString());
	if(!videoQualityInfoNode["Colorfulness"].isNull())
		data_.videoQualityInfo.colorfulness = std::stof(videoQualityInfoNode["Colorfulness"].asString());
	if(!videoQualityInfoNode["MosScore"].isNull())
		data_.videoQualityInfo.mosScore = std::stof(videoQualityInfoNode["MosScore"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string EvaluateVideoQualityResult::getMessage()const
{
	return message_;
}

EvaluateVideoQualityResult::Data EvaluateVideoQualityResult::getData()const
{
	return data_;
}

std::string EvaluateVideoQualityResult::getCode()const
{
	return code_;
}

