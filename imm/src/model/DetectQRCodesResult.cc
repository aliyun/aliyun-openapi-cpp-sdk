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

#include <alibabacloud/imm/model/DetectQRCodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectQRCodesResult::DetectQRCodesResult() :
	ServiceResult()
{}

DetectQRCodesResult::DetectQRCodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectQRCodesResult::~DetectQRCodesResult()
{}

void DetectQRCodesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSuccessDetails = value["SuccessDetails"]["SuccessDetailsItem"];
	for (auto value : allSuccessDetails)
	{
		SuccessDetailsItem successDetailsObject;
		if(!value["SrcUri"].isNull())
			successDetailsObject.srcUri = value["SrcUri"].asString();
		auto allQRCodes = value["QRCodes"]["QRCodesItem"];
		for (auto value : allQRCodes)
		{
			SuccessDetailsItem::QRCodesItem qRCodesObject;
			if(!value["Content"].isNull())
				qRCodesObject.content = value["Content"].asString();
			auto qRCodesRectangleNode = value["QRCodesRectangle"];
			if(!qRCodesRectangleNode["Left"].isNull())
				qRCodesObject.qRCodesRectangle.left = qRCodesRectangleNode["Left"].asString();
			if(!qRCodesRectangleNode["Top"].isNull())
				qRCodesObject.qRCodesRectangle.top = qRCodesRectangleNode["Top"].asString();
			if(!qRCodesRectangleNode["Width"].isNull())
				qRCodesObject.qRCodesRectangle.width = qRCodesRectangleNode["Width"].asString();
			if(!qRCodesRectangleNode["Height"].isNull())
				qRCodesObject.qRCodesRectangle.height = qRCodesRectangleNode["Height"].asString();
			successDetailsObject.qRCodes.push_back(qRCodesObject);
		}
		successDetails_.push_back(successDetailsObject);
	}
	auto allFailDetails = value["FailDetails"]["FailDetailsItem"];
	for (auto value : allFailDetails)
	{
		FailDetailsItem failDetailsObject;
		if(!value["SrcUri"].isNull())
			failDetailsObject.srcUri = value["SrcUri"].asString();
		if(!value["ErrorCode"].isNull())
			failDetailsObject.errorCode = value["ErrorCode"].asString();
		if(!value["ErrorMessage"].isNull())
			failDetailsObject.errorMessage = value["ErrorMessage"].asString();
		failDetails_.push_back(failDetailsObject);
	}

}

std::vector<DetectQRCodesResult::SuccessDetailsItem> DetectQRCodesResult::getSuccessDetails()const
{
	return successDetails_;
}

std::vector<DetectQRCodesResult::FailDetailsItem> DetectQRCodesResult::getFailDetails()const
{
	return failDetails_;
}

