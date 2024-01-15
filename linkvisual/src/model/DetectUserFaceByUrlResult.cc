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

#include <alibabacloud/linkvisual/model/DetectUserFaceByUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

DetectUserFaceByUrlResult::DetectUserFaceByUrlResult() :
	ServiceResult()
{}

DetectUserFaceByUrlResult::DetectUserFaceByUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectUserFaceByUrlResult::~DetectUserFaceByUrlResult()
{}

void DetectUserFaceByUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["BlurScore"].isNull())
			dataObject.blurScore = std::stof(valueDatadataItem["BlurScore"].asString());
		if(!valueDatadataItem["Gender"].isNull())
			dataObject.gender = std::stoi(valueDatadataItem["Gender"].asString());
		if(!valueDatadataItem["OcclusionScore"].isNull())
			dataObject.occlusionScore = std::stof(valueDatadataItem["OcclusionScore"].asString());
		if(!valueDatadataItem["GoodForLibrary"].isNull())
			dataObject.goodForLibrary = valueDatadataItem["GoodForLibrary"].asString() == "true";
		if(!valueDatadataItem["GoodForRecognition"].isNull())
			dataObject.goodForRecognition = valueDatadataItem["GoodForRecognition"].asString() == "true";
		if(!valueDatadataItem["Age"].isNull())
			dataObject.age = std::stoi(valueDatadataItem["Age"].asString());
		if(!valueDatadataItem["FaceProbability"].isNull())
			dataObject.faceProbability = std::stof(valueDatadataItem["FaceProbability"].asString());
		if(!valueDatadataItem["PoseScore"].isNull())
			dataObject.poseScore = std::stof(valueDatadataItem["PoseScore"].asString());
		auto allFaceRects = value["FaceRects"]["FaceRectsData"];
		for (auto value : allFaceRects)
			dataObject.faceRects.push_back(value.asString());
		auto allLandmarks = value["Landmarks"]["LandmarksData"];
		for (auto value : allLandmarks)
			dataObject.landmarks.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DetectUserFaceByUrlResult::DataItem> DetectUserFaceByUrlResult::getData()const
{
	return data_;
}

std::string DetectUserFaceByUrlResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DetectUserFaceByUrlResult::getCode()const
{
	return code_;
}

bool DetectUserFaceByUrlResult::getSuccess()const
{
	return success_;
}

