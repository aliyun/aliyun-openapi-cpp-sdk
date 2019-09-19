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
	auto allSuccessDetailsNode = value["SuccessDetails"]["SuccessDetailsItem"];
	for (auto valueSuccessDetailsSuccessDetailsItem : allSuccessDetailsNode)
	{
		SuccessDetailsItem successDetailsObject;
		if(!valueSuccessDetailsSuccessDetailsItem["SrcUri"].isNull())
			successDetailsObject.srcUri = valueSuccessDetailsSuccessDetailsItem["SrcUri"].asString();
		if(!valueSuccessDetailsSuccessDetailsItem["Time"].isNull())
			successDetailsObject.time = valueSuccessDetailsSuccessDetailsItem["Time"].asString();
		if(!valueSuccessDetailsSuccessDetailsItem["GetImageTime"].isNull())
			successDetailsObject.getImageTime = valueSuccessDetailsSuccessDetailsItem["GetImageTime"].asString();
		if(!valueSuccessDetailsSuccessDetailsItem["DetectTime"].isNull())
			successDetailsObject.detectTime = valueSuccessDetailsSuccessDetailsItem["DetectTime"].asString();
		auto allLogoBoxDetailNode = allSuccessDetailsNode["LogoBoxDetail"]["LogoBoxDetailItem"];
		for (auto allSuccessDetailsNodeLogoBoxDetailLogoBoxDetailItem : allLogoBoxDetailNode)
		{
			SuccessDetailsItem::LogoBoxDetailItem logoBoxDetailObject;
			if(!allSuccessDetailsNodeLogoBoxDetailLogoBoxDetailItem["PUID"].isNull())
				logoBoxDetailObject.pUID = allSuccessDetailsNodeLogoBoxDetailLogoBoxDetailItem["PUID"].asString();
			if(!allSuccessDetailsNodeLogoBoxDetailLogoBoxDetailItem["Type"].isNull())
				logoBoxDetailObject.type = allSuccessDetailsNodeLogoBoxDetailLogoBoxDetailItem["Type"].asString();
			if(!allSuccessDetailsNodeLogoBoxDetailLogoBoxDetailItem["Score"].isNull())
				logoBoxDetailObject.score = std::stof(allSuccessDetailsNodeLogoBoxDetailLogoBoxDetailItem["Score"].asString());
			auto allBox = value["Box"]["Box"];
			for (auto value : allBox)
				logoBoxDetailObject.box.push_back(value.asString());
			successDetailsObject.logoBoxDetail.push_back(logoBoxDetailObject);
		}
		successDetails_.push_back(successDetailsObject);
	}
	auto allFailDetailsNode = value["FailDetails"]["FailDetailsItem"];
	for (auto valueFailDetailsFailDetailsItem : allFailDetailsNode)
	{
		FailDetailsItem failDetailsObject;
		if(!valueFailDetailsFailDetailsItem["SrcUri"].isNull())
			failDetailsObject.srcUri = valueFailDetailsFailDetailsItem["SrcUri"].asString();
		if(!valueFailDetailsFailDetailsItem["Reason"].isNull())
			failDetailsObject.reason = valueFailDetailsFailDetailsItem["Reason"].asString();
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

