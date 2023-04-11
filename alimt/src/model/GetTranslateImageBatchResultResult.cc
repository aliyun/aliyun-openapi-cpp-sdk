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

#include <alibabacloud/alimt/model/GetTranslateImageBatchResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alimt;
using namespace AlibabaCloud::Alimt::Model;

GetTranslateImageBatchResultResult::GetTranslateImageBatchResultResult() :
	ServiceResult()
{}

GetTranslateImageBatchResultResult::GetTranslateImageBatchResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTranslateImageBatchResultResult::~GetTranslateImageBatchResultResult()
{}

void GetTranslateImageBatchResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	auto allResultNode = dataNode["Result"]["CertificateImageTranslateResult"];
	for (auto dataNodeResultCertificateImageTranslateResult : allResultNode)
	{
		Data::CertificateImageTranslateResult certificateImageTranslateResultObject;
		if(!dataNodeResultCertificateImageTranslateResult["InPaintingUrl"].isNull())
			certificateImageTranslateResultObject.inPaintingUrl = dataNodeResultCertificateImageTranslateResult["InPaintingUrl"].asString();
		if(!dataNodeResultCertificateImageTranslateResult["FinalImageUrl"].isNull())
			certificateImageTranslateResultObject.finalImageUrl = dataNodeResultCertificateImageTranslateResult["FinalImageUrl"].asString();
		if(!dataNodeResultCertificateImageTranslateResult["TemplateJson"].isNull())
			certificateImageTranslateResultObject.templateJson = dataNodeResultCertificateImageTranslateResult["TemplateJson"].asString();
		if(!dataNodeResultCertificateImageTranslateResult["SourceImageUrl"].isNull())
			certificateImageTranslateResultObject.sourceImageUrl = dataNodeResultCertificateImageTranslateResult["SourceImageUrl"].asString();
		if(!dataNodeResultCertificateImageTranslateResult["Code"].isNull())
			certificateImageTranslateResultObject.code = std::stoi(dataNodeResultCertificateImageTranslateResult["Code"].asString());
		if(!dataNodeResultCertificateImageTranslateResult["Message"].isNull())
			certificateImageTranslateResultObject.message = dataNodeResultCertificateImageTranslateResult["Message"].asString();
		if(!dataNodeResultCertificateImageTranslateResult["Success"].isNull())
			certificateImageTranslateResultObject.success = dataNodeResultCertificateImageTranslateResult["Success"].asString() == "true";
		data_.result.push_back(certificateImageTranslateResultObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetTranslateImageBatchResultResult::getMessage()const
{
	return message_;
}

GetTranslateImageBatchResultResult::Data GetTranslateImageBatchResultResult::getData()const
{
	return data_;
}

int GetTranslateImageBatchResultResult::getCode()const
{
	return code_;
}

