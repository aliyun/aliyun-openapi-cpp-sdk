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

#include <alibabacloud/facebody/model/MonitorExaminationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

MonitorExaminationResult::MonitorExaminationResult() :
	ServiceResult()
{}

MonitorExaminationResult::MonitorExaminationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MonitorExaminationResult::~MonitorExaminationResult()
{}

void MonitorExaminationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ChatScore"].isNull())
		data_.chatScore = std::stof(dataNode["ChatScore"].asString());
	if(!dataNode["Threshold"].isNull())
		data_.threshold = std::stof(dataNode["Threshold"].asString());
	auto faceInfoNode = dataNode["FaceInfo"];
	if(!faceInfoNode["Completeness"].isNull())
		data_.faceInfo.completeness = std::stof(faceInfoNode["Completeness"].asString());
	if(!faceInfoNode["FaceNumber"].isNull())
		data_.faceInfo.faceNumber = std::stol(faceInfoNode["FaceNumber"].asString());
	auto poseNode = faceInfoNode["Pose"];
	if(!poseNode["Pitch"].isNull())
		data_.faceInfo.pose.pitch = std::stof(poseNode["Pitch"].asString());
	if(!poseNode["Roll"].isNull())
		data_.faceInfo.pose.roll = std::stof(poseNode["Roll"].asString());
	if(!poseNode["Yaw"].isNull())
		data_.faceInfo.pose.yaw = std::stof(poseNode["Yaw"].asString());
	auto personInfoNode = dataNode["PersonInfo"];
	if(!personInfoNode["PersonNumber"].isNull())
		data_.personInfo.personNumber = std::stol(personInfoNode["PersonNumber"].asString());
	auto cellPhoneNode = personInfoNode["CellPhone"];
	if(!cellPhoneNode["Score"].isNull())
		data_.personInfo.cellPhone.score = std::stof(cellPhoneNode["Score"].asString());
	if(!cellPhoneNode["Threshold"].isNull())
		data_.personInfo.cellPhone.threshold = std::stof(cellPhoneNode["Threshold"].asString());
	auto earPhoneNode = personInfoNode["EarPhone"];
	if(!earPhoneNode["Score"].isNull())
		data_.personInfo.earPhone.score = std::stof(earPhoneNode["Score"].asString());
	if(!earPhoneNode["Threshold"].isNull())
		data_.personInfo.earPhone.threshold = std::stof(earPhoneNode["Threshold"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string MonitorExaminationResult::getMessage()const
{
	return message_;
}

MonitorExaminationResult::Data MonitorExaminationResult::getData()const
{
	return data_;
}

std::string MonitorExaminationResult::getCode()const
{
	return code_;
}

