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

#include <alibabacloud/cusanalytic_sc_online/model/GetPortrayalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetPortrayalResult::GetPortrayalResult() :
	ServiceResult()
{}

GetPortrayalResult::GetPortrayalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPortrayalResult::~GetPortrayalResult()
{}

void GetPortrayalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["FemalePercent"].isNull())
		femalePercent_ = std::stof(value["FemalePercent"].asString());
	if(!value["Mcount"].isNull())
		mcount_ = std::stol(value["Mcount"].asString());
	if(!value["Mcount1120"].isNull())
		mcount1120_ = std::stol(value["Mcount1120"].asString());
	if(!value["Newcount"].isNull())
		newcount_ = std::stol(value["Newcount"].asString());
	if(!value["Agecount3140Percent"].isNull())
		agecount3140Percent_ = std::stof(value["Agecount3140Percent"].asString());
	if(!value["Agecount4150Percent"].isNull())
		agecount4150Percent_ = std::stof(value["Agecount4150Percent"].asString());
	if(!value["Agecount010Percent"].isNull())
		agecount010Percent_ = std::stof(value["Agecount010Percent"].asString());
	if(!value["Fcount5160"].isNull())
		fcount5160_ = std::stol(value["Fcount5160"].asString());
	if(!value["Mcount010"].isNull())
		mcount010_ = std::stol(value["Mcount010"].asString());
	if(!value["Mcountgt60"].isNull())
		mcountgt60_ = std::stol(value["Mcountgt60"].asString());
	if(!value["Agecount1120Percent"].isNull())
		agecount1120Percent_ = std::stof(value["Agecount1120Percent"].asString());
	if(!value["Fcountgt60"].isNull())
		fcountgt60_ = std::stol(value["Fcountgt60"].asString());
	if(!value["Fcount4150"].isNull())
		fcount4150_ = std::stol(value["Fcount4150"].asString());
	if(!value["Oldcount"].isNull())
		oldcount_ = std::stol(value["Oldcount"].asString());
	if(!value["Fcount3140"].isNull())
		fcount3140_ = std::stol(value["Fcount3140"].asString());
	if(!value["Fcount2130"].isNull())
		fcount2130_ = std::stol(value["Fcount2130"].asString());
	if(!value["Agecountgt60Percent"].isNull())
		agecountgt60Percent_ = std::stof(value["Agecountgt60Percent"].asString());
	if(!value["Fcount1120"].isNull())
		fcount1120_ = std::stol(value["Fcount1120"].asString());
	if(!value["OldcountPercent"].isNull())
		oldcountPercent_ = std::stof(value["OldcountPercent"].asString());
	if(!value["Mcount4150"].isNull())
		mcount4150_ = std::stol(value["Mcount4150"].asString());
	if(!value["Fcount"].isNull())
		fcount_ = std::stol(value["Fcount"].asString());
	if(!value["NewcountPercent"].isNull())
		newcountPercent_ = std::stof(value["NewcountPercent"].asString());
	if(!value["Mcount2130"].isNull())
		mcount2130_ = std::stol(value["Mcount2130"].asString());
	if(!value["Mcount3140"].isNull())
		mcount3140_ = std::stol(value["Mcount3140"].asString());
	if(!value["Agecount5160Percent"].isNull())
		agecount5160Percent_ = std::stof(value["Agecount5160Percent"].asString());
	if(!value["Agecount2130Percent"].isNull())
		agecount2130Percent_ = std::stof(value["Agecount2130Percent"].asString());
	if(!value["Fcount010"].isNull())
		fcount010_ = std::stol(value["Fcount010"].asString());
	if(!value["Mcount5160"].isNull())
		mcount5160_ = std::stol(value["Mcount5160"].asString());
	if(!value["MalePercent"].isNull())
		malePercent_ = std::stof(value["MalePercent"].asString());

}

long GetPortrayalResult::getOldcount()const
{
	return oldcount_;
}

float GetPortrayalResult::getAgecount5160Percent()const
{
	return agecount5160Percent_;
}

long GetPortrayalResult::getFcount5160()const
{
	return fcount5160_;
}

long GetPortrayalResult::getMcount010()const
{
	return mcount010_;
}

float GetPortrayalResult::getMalePercent()const
{
	return malePercent_;
}

long GetPortrayalResult::getFcount()const
{
	return fcount_;
}

float GetPortrayalResult::getAgecount3140Percent()const
{
	return agecount3140Percent_;
}

float GetPortrayalResult::getNewcountPercent()const
{
	return newcountPercent_;
}

long GetPortrayalResult::getMcount1120()const
{
	return mcount1120_;
}

long GetPortrayalResult::getFcountgt60()const
{
	return fcountgt60_;
}

long GetPortrayalResult::getMcount5160()const
{
	return mcount5160_;
}

long GetPortrayalResult::getMcount4150()const
{
	return mcount4150_;
}

float GetPortrayalResult::getAgecount010Percent()const
{
	return agecount010Percent_;
}

long GetPortrayalResult::getMcount3140()const
{
	return mcount3140_;
}

long GetPortrayalResult::getNewcount()const
{
	return newcount_;
}

long GetPortrayalResult::getMcount2130()const
{
	return mcount2130_;
}

float GetPortrayalResult::getAgecount4150Percent()const
{
	return agecount4150Percent_;
}

float GetPortrayalResult::getAgecountgt60Percent()const
{
	return agecountgt60Percent_;
}

float GetPortrayalResult::getFemalePercent()const
{
	return femalePercent_;
}

float GetPortrayalResult::getAgecount1120Percent()const
{
	return agecount1120Percent_;
}

long GetPortrayalResult::getMcount()const
{
	return mcount_;
}

float GetPortrayalResult::getOldcountPercent()const
{
	return oldcountPercent_;
}

long GetPortrayalResult::getFcount010()const
{
	return fcount010_;
}

long GetPortrayalResult::getFcount1120()const
{
	return fcount1120_;
}

long GetPortrayalResult::getFcount2130()const
{
	return fcount2130_;
}

long GetPortrayalResult::getFcount3140()const
{
	return fcount3140_;
}

long GetPortrayalResult::getFcount4150()const
{
	return fcount4150_;
}

long GetPortrayalResult::getMcountgt60()const
{
	return mcountgt60_;
}

float GetPortrayalResult::getAgecount2130Percent()const
{
	return agecount2130Percent_;
}

