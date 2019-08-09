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

#include <alibabacloud/green/model/DescribeCustomOcrTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeCustomOcrTemplateResult::DescribeCustomOcrTemplateResult() :
	ServiceResult()
{}

DescribeCustomOcrTemplateResult::DescribeCustomOcrTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomOcrTemplateResult::~DescribeCustomOcrTemplateResult()
{}

void DescribeCustomOcrTemplateResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allOcrTemplateList = value["OcrTemplateList"]["OcrTemplate"];
	for (auto value : allOcrTemplateList)
	{
		OcrTemplate ocrTemplateListObject;
		if(!value["Id"].isNull())
			ocrTemplateListObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			ocrTemplateListObject.name = value["Name"].asString();
		if(!value["ImgUrl"].isNull())
			ocrTemplateListObject.imgUrl = value["ImgUrl"].asString();
		if(!value["Status"].isNull())
			ocrTemplateListObject.status = std::stoi(value["Status"].asString());
		auto allReferArea = value["ReferArea"]["item"];
		for (auto value : allReferArea)
		{
			OcrTemplate::Item referAreaObject;
			if(!value["Name"].isNull())
				referAreaObject.name = value["Name"].asString();
			if(!value["X"].isNull())
				referAreaObject.x = std::stoi(value["X"].asString());
			if(!value["Y"].isNull())
				referAreaObject.y = std::stoi(value["Y"].asString());
			if(!value["Width"].isNull())
				referAreaObject.width = std::stoi(value["Width"].asString());
			if(!value["Height"].isNull())
				referAreaObject.height = std::stoi(value["Height"].asString());
			ocrTemplateListObject.referArea.push_back(referAreaObject);
		}
		auto allRecognizeArea = value["RecognizeArea"]["item"];
		for (auto value : allRecognizeArea)
		{
			OcrTemplate::Item recognizeAreaObject;
			if(!value["Name"].isNull())
				recognizeAreaObject.name = value["Name"].asString();
			if(!value["X"].isNull())
				recognizeAreaObject.x = std::stoi(value["X"].asString());
			if(!value["Y"].isNull())
				recognizeAreaObject.y = std::stoi(value["Y"].asString());
			if(!value["Width"].isNull())
				recognizeAreaObject.width = std::stoi(value["Width"].asString());
			if(!value["Height"].isNull())
				recognizeAreaObject.height = std::stoi(value["Height"].asString());
			ocrTemplateListObject.recognizeArea.push_back(recognizeAreaObject);
		}
		ocrTemplateList_.push_back(ocrTemplateListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCustomOcrTemplateResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeCustomOcrTemplateResult::OcrTemplate> DescribeCustomOcrTemplateResult::getOcrTemplateList()const
{
	return ocrTemplateList_;
}

