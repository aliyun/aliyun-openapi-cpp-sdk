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

#include <alibabacloud/vcs/model/ReportDeviceCapacityRequest.h>

using AlibabaCloud::Vcs::Model::ReportDeviceCapacityRequest;

ReportDeviceCapacityRequest::ReportDeviceCapacityRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ReportDeviceCapacity")
{
	setMethod(HttpRequest::Method::Post);
}

ReportDeviceCapacityRequest::~ReportDeviceCapacityRequest()
{}

std::vector<ReportDeviceCapacityRequest::StreamCapacities> ReportDeviceCapacityRequest::getStreamCapacities()const
{
	return streamCapacities_;
}

void ReportDeviceCapacityRequest::setStreamCapacities(const std::vector<StreamCapacities>& streamCapacities)
{
	streamCapacities_ = streamCapacities;
	for(int dep1 = 0; dep1!= streamCapacities.size(); dep1++) {
		auto streamCapacitiesObj = streamCapacities.at(dep1);
		std::string streamCapacitiesObjStr = "StreamCapacities." + std::to_string(dep1 + 1);
		setParameter(streamCapacitiesObjStr + ".BitrateRange", streamCapacitiesObj.bitrateRange);
		setParameter(streamCapacitiesObjStr + ".MaxStream", streamCapacitiesObj.maxStream);
		setParameter(streamCapacitiesObjStr + ".EncodeFormat", streamCapacitiesObj.encodeFormat);
		setParameter(streamCapacitiesObjStr + ".MaxFrameRate", streamCapacitiesObj.maxFrameRate);
		setParameter(streamCapacitiesObjStr + ".GovLengthRange", streamCapacitiesObj.govLengthRange);
		setParameter(streamCapacitiesObjStr + ".Resolution", streamCapacitiesObj.resolution);
	}
}

std::string ReportDeviceCapacityRequest::getLatitude()const
{
	return latitude_;
}

void ReportDeviceCapacityRequest::setLatitude(const std::string& latitude)
{
	latitude_ = latitude;
	setBodyParameter("Latitude", latitude);
}

std::string ReportDeviceCapacityRequest::getPresetNum()const
{
	return presetNum_;
}

void ReportDeviceCapacityRequest::setPresetNum(const std::string& presetNum)
{
	presetNum_ = presetNum;
	setBodyParameter("PresetNum", presetNum);
}

std::string ReportDeviceCapacityRequest::getDeviceTimeStamp()const
{
	return deviceTimeStamp_;
}

void ReportDeviceCapacityRequest::setDeviceTimeStamp(const std::string& deviceTimeStamp)
{
	deviceTimeStamp_ = deviceTimeStamp;
	setBodyParameter("DeviceTimeStamp", deviceTimeStamp);
}

std::string ReportDeviceCapacityRequest::getDeviceSn()const
{
	return deviceSn_;
}

void ReportDeviceCapacityRequest::setDeviceSn(const std::string& deviceSn)
{
	deviceSn_ = deviceSn;
	setBodyParameter("DeviceSn", deviceSn);
}

std::string ReportDeviceCapacityRequest::getAudioFormat()const
{
	return audioFormat_;
}

void ReportDeviceCapacityRequest::setAudioFormat(const std::string& audioFormat)
{
	audioFormat_ = audioFormat;
	setBodyParameter("AudioFormat", audioFormat);
}

std::string ReportDeviceCapacityRequest::getPTZCapacity()const
{
	return pTZCapacity_;
}

void ReportDeviceCapacityRequest::setPTZCapacity(const std::string& pTZCapacity)
{
	pTZCapacity_ = pTZCapacity;
	setBodyParameter("PTZCapacity", pTZCapacity);
}

std::string ReportDeviceCapacityRequest::getLongitude()const
{
	return longitude_;
}

void ReportDeviceCapacityRequest::setLongitude(const std::string& longitude)
{
	longitude_ = longitude;
	setBodyParameter("Longitude", longitude);
}

