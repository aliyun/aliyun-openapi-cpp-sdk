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

#include <alibabacloud/imm/model/DetectLogoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectLogoResult::DetectLogoResult() :
	ServiceResult()
{}

DetectLogoResult::DetectLogoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectLogoResult::~DetectLogoResult()
{}

void DetectLogoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSuccessDetails = value["SuccessDetails"]["SuccessDetailsItem"];
	for (auto value : allSuccessDetails)
	{
		SuccessDetailsItem successDetailsObject;
		if(!value["SrcUri"].isNull())
			successDetailsObject.srcUri = value["SrcUri"].asString();
		if(!value["Time"].isNull())
			successDetailsObject.time = value["Time"].asString();
		if(!value["GetImageTime"].isNull())
			successDetailsObject.getImageTime = value["GetImageTime"].asString();
		if(!value["DetectTime"].isNull())
			successDetailsObject.detectTime = value["DetectTime"].asString();
		auto allLogoBoxDetail = value["LogoBoxDetail"]["LogoBoxDetailItem"];
		for (auto value : allLogoBoxDetail)
		{
			SuccessDetailsItem::LogoBoxDetailItem logoBoxDetailObject;
			if(!value["PUID"].isNull())
				logoBoxDetailObject.pUID = value["PUID"].asString();
			if(!value["Type"].isNull())
				logoBoxDetailObject.type = value["Type"].asString();
			if(!value["Score"].isNull())
				logoBoxDetailObject.score = std::stof(value["Score"].asString());
			auto allBox = value["Box"]["Box"];
			for (auto value : allBox)
				logoBoxDetailObject.box.push_back(value.asString());
			successDetailsObject.logoBoxDetail.push_back(logoBoxDetailObject);
		}
		successDetails_.push_back(successDetailsObject);
	}
	auto allFailDetails = value["FailDetails"]["FailDetailsItem"];
	for (auto value : allFailDetails)
	{
		FailDetailsItem failDetailsObject;
		if(!value["SrcUri"].isNull())
			failDetailsObject.srcUri = value["SrcUri"].asString();
		if(!value["Reason"].isNull())
			failDetailsObject.reason = value["Reason"].asString();
		failDetails_.push_back(failDetailsObject);
	}
	auto allSrcUris = value["SrcUris"]["SrcUris"];
	for (const auto &item : allSrcUris)
		srcUris_.push_back(item.asString());

}

std::vector<DetectLogoResult::SuccessDetailsItem> DetectLogoResult::getSuccessDetails()const
{
	return successDetails_;
}

std::vector<std::string> DetectLogoResult::getSrcUris()const
{
	return srcUris_;
}

std::vector<DetectLogoResult::FailDetailsItem> DetectLogoResult::getFailDetails()const
{
	return failDetails_;
}

