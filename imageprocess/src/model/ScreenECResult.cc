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

#include <alibabacloud/imageprocess/model/ScreenECResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

ScreenECResult::ScreenECResult() :
	ServiceResult()
{}

ScreenECResult::ScreenECResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ScreenECResult::~ScreenECResult()
{}

void ScreenECResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto lesionNode = dataNode["Lesion"];
	if(!lesionNode["EsoVolume"].isNull())
		data_.lesion.esoVolume = lesionNode["EsoVolume"].asString();
	if(!lesionNode["EcVolume"].isNull())
		data_.lesion.ecVolume = lesionNode["EcVolume"].asString();
	if(!lesionNode["BenignVolume"].isNull())
		data_.lesion.benignVolume = lesionNode["BenignVolume"].asString();
	if(!lesionNode["Mask"].isNull())
		data_.lesion.mask = lesionNode["Mask"].asString();
		auto allPossibilities = lesionNode["Possibilities"]["possibilities"];
		for (auto value : allPossibilities)
			data_.lesion.possibilities.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ScreenECResult::getMessage()const
{
	return message_;
}

ScreenECResult::Data ScreenECResult::getData()const
{
	return data_;
}

std::string ScreenECResult::getCode()const
{
	return code_;
}

