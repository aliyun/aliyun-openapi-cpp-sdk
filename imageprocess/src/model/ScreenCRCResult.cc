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

#include <alibabacloud/imageprocess/model/ScreenCRCResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

ScreenCRCResult::ScreenCRCResult() :
	ServiceResult()
{}

ScreenCRCResult::ScreenCRCResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ScreenCRCResult::~ScreenCRCResult()
{}

void ScreenCRCResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto lesionNode = dataNode["Lesion"];
	if(!lesionNode["Probabilities"].isNull())
		data_.lesion.probabilities = lesionNode["Probabilities"].asString();
	if(!lesionNode["Stage2Volume"].isNull())
		data_.lesion.stage2Volume = lesionNode["Stage2Volume"].asString();
	if(!lesionNode["ColorectumVolume"].isNull())
		data_.lesion.colorectumVolume = lesionNode["ColorectumVolume"].asString();
	if(!lesionNode["CRCVolume"].isNull())
		data_.lesion.cRCVolume = lesionNode["CRCVolume"].asString();
	if(!lesionNode["NonCRCVolumel"].isNull())
		data_.lesion.nonCRCVolumel = lesionNode["NonCRCVolumel"].asString();
	if(!lesionNode["Mask"].isNull())
		data_.lesion.mask = lesionNode["Mask"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ScreenCRCResult::getMessage()const
{
	return message_;
}

ScreenCRCResult::Data ScreenCRCResult::getData()const
{
	return data_;
}

std::string ScreenCRCResult::getCode()const
{
	return code_;
}

