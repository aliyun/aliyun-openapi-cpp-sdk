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

#include <alibabacloud/imageprocess/model/PredictCVDResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

PredictCVDResult::PredictCVDResult() :
	ServiceResult()
{}

PredictCVDResult::PredictCVDResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PredictCVDResult::~PredictCVDResult()
{}

void PredictCVDResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto lesionNode = dataNode["Lesion"];
	if(!lesionNode["CVDProbability"].isNull())
		data_.lesion.cVDProbability = std::stof(lesionNode["CVDProbability"].asString());
	auto featureScoreNode = lesionNode["FeatureScore"];
		auto allMyoEpiRatio = featureScoreNode["MyoEpiRatio"]["MyoEpiRatio"];
		for (auto value : allMyoEpiRatio)
			data_.lesion.featureScore.myoEpiRatio.push_back(value.asString());
		auto allAscAoMaxDiam = featureScoreNode["AscAoMaxDiam"]["AscAoMaxDiam"];
		for (auto value : allAscAoMaxDiam)
			data_.lesion.featureScore.ascAoMaxDiam.push_back(value.asString());
		auto allCoronaryCalciumVol = featureScoreNode["CoronaryCalciumVol"]["CoronaryCalciumVol"];
		for (auto value : allCoronaryCalciumVol)
			data_.lesion.featureScore.coronaryCalciumVol.push_back(value.asString());
		auto allEatVolume = featureScoreNode["EatVolume"]["EatVolume"];
		for (auto value : allEatVolume)
			data_.lesion.featureScore.eatVolume.push_back(value.asString());
		auto allAortaCalciumScore = featureScoreNode["AortaCalciumScore"]["AortaCalciumScore"];
		for (auto value : allAortaCalciumScore)
			data_.lesion.featureScore.aortaCalciumScore.push_back(value.asString());
		auto allCardioThoracicRatio = featureScoreNode["CardioThoracicRatio"]["CardioThoracicRatio"];
		for (auto value : allCardioThoracicRatio)
			data_.lesion.featureScore.cardioThoracicRatio.push_back(value.asString());
		auto allEatHUMean = featureScoreNode["EatHUMean"]["EatHUMean"];
		for (auto value : allEatHUMean)
			data_.lesion.featureScore.eatHUMean.push_back(value.asString());
		auto allEatHUSTD = featureScoreNode["EatHUSTD"]["EatHUSTD"];
		for (auto value : allEatHUSTD)
			data_.lesion.featureScore.eatHUSTD.push_back(value.asString());
		auto allRightLungLowattRatio = featureScoreNode["RightLungLowattRatio"]["RightLungLowattRatio"];
		for (auto value : allRightLungLowattRatio)
			data_.lesion.featureScore.rightLungLowattRatio.push_back(value.asString());
		auto allAscendAortaLength = featureScoreNode["AscendAortaLength"]["AscendAortaLength"];
		for (auto value : allAscendAortaLength)
			data_.lesion.featureScore.ascendAortaLength.push_back(value.asString());
		auto allLeftLungLowattRatio = featureScoreNode["LeftLungLowattRatio"]["LeftLungLowattRatio"];
		for (auto value : allLeftLungLowattRatio)
			data_.lesion.featureScore.leftLungLowattRatio.push_back(value.asString());
		auto allDeepFeature = featureScoreNode["DeepFeature"]["DeepFeature"];
		for (auto value : allDeepFeature)
			data_.lesion.featureScore.deepFeature.push_back(value.asString());
		auto allAortaCalciumVolume = featureScoreNode["AortaCalciumVolume"]["AortaCalciumVolume"];
		for (auto value : allAortaCalciumVolume)
			data_.lesion.featureScore.aortaCalciumVolume.push_back(value.asString());
		auto allCoronaryCalciumScore = featureScoreNode["CoronaryCalciumScore"]["CoronaryCalciumScore"];
		for (auto value : allCoronaryCalciumScore)
			data_.lesion.featureScore.coronaryCalciumScore.push_back(value.asString());
		auto allResultURL = lesionNode["ResultURL"]["ResultURL"];
		for (auto value : allResultURL)
			data_.lesion.resultURL.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string PredictCVDResult::getMessage()const
{
	return message_;
}

PredictCVDResult::Data PredictCVDResult::getData()const
{
	return data_;
}

std::string PredictCVDResult::getCode()const
{
	return code_;
}

