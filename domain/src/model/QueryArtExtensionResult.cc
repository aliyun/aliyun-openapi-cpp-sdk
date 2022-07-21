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

#include <alibabacloud/domain/model/QueryArtExtensionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryArtExtensionResult::QueryArtExtensionResult() :
	ServiceResult()
{}

QueryArtExtensionResult::QueryArtExtensionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryArtExtensionResult::~QueryArtExtensionResult()
{}

void QueryArtExtensionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ObjectType"].isNull())
		objectType_ = value["ObjectType"].asString();
	if(!value["MaterialsAndTechniques"].isNull())
		materialsAndTechniques_ = value["MaterialsAndTechniques"].asString();
	if(!value["InscriptionsAndMarkings"].isNull())
		inscriptionsAndMarkings_ = value["InscriptionsAndMarkings"].asString();
	if(!value["Reference"].isNull())
		reference_ = value["Reference"].asString();
	if(!value["DateOrPeriod"].isNull())
		dateOrPeriod_ = value["DateOrPeriod"].asString();
	if(!value["Dimensions"].isNull())
		dimensions_ = value["Dimensions"].asString();
	if(!value["Title"].isNull())
		title_ = value["Title"].asString();
	if(!value["Features"].isNull())
		features_ = value["Features"].asString();
	if(!value["Subject"].isNull())
		subject_ = value["Subject"].asString();
	if(!value["Maker"].isNull())
		maker_ = value["Maker"].asString();

}

std::string QueryArtExtensionResult::getObjectType()const
{
	return objectType_;
}

std::string QueryArtExtensionResult::getMaterialsAndTechniques()const
{
	return materialsAndTechniques_;
}

std::string QueryArtExtensionResult::getInscriptionsAndMarkings()const
{
	return inscriptionsAndMarkings_;
}

std::string QueryArtExtensionResult::getReference()const
{
	return reference_;
}

std::string QueryArtExtensionResult::getDateOrPeriod()const
{
	return dateOrPeriod_;
}

std::string QueryArtExtensionResult::getDimensions()const
{
	return dimensions_;
}

std::string QueryArtExtensionResult::getTitle()const
{
	return title_;
}

std::string QueryArtExtensionResult::getFeatures()const
{
	return features_;
}

std::string QueryArtExtensionResult::getSubject()const
{
	return subject_;
}

std::string QueryArtExtensionResult::getMaker()const
{
	return maker_;
}

