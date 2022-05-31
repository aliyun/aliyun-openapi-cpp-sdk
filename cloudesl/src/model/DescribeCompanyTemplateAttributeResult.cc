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

#include <alibabacloud/cloudesl/model/DescribeCompanyTemplateAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeCompanyTemplateAttributeResult::DescribeCompanyTemplateAttributeResult() :
	ServiceResult()
{}

DescribeCompanyTemplateAttributeResult::DescribeCompanyTemplateAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCompanyTemplateAttributeResult::~DescribeCompanyTemplateAttributeResult()
{}

void DescribeCompanyTemplateAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCategoryFieldNode = value["CategoryField"]["SelectItemInfo"];
	for (auto valueCategoryFieldSelectItemInfo : allCategoryFieldNode)
	{
		SelectItemInfo categoryFieldObject;
		if(!valueCategoryFieldSelectItemInfo["Label"].isNull())
			categoryFieldObject.label = valueCategoryFieldSelectItemInfo["Label"].asString();
		if(!valueCategoryFieldSelectItemInfo["Value"].isNull())
			categoryFieldObject.value = valueCategoryFieldSelectItemInfo["Value"].asString();
		categoryField_.push_back(categoryFieldObject);
	}
	auto allFontTypeNode = value["FontType"]["SelectItemInfo"];
	for (auto valueFontTypeSelectItemInfo : allFontTypeNode)
	{
		SelectItemInfo fontTypeObject;
		if(!valueFontTypeSelectItemInfo["Label"].isNull())
			fontTypeObject.label = valueFontTypeSelectItemInfo["Label"].asString();
		if(!valueFontTypeSelectItemInfo["Value"].isNull())
			fontTypeObject.value = valueFontTypeSelectItemInfo["Value"].asString();
		fontType_.push_back(fontTypeObject);
	}
	auto allDeviceTypeNode = value["DeviceType"]["SelectItemInfo"];
	for (auto valueDeviceTypeSelectItemInfo : allDeviceTypeNode)
	{
		SelectItemInfo deviceTypeObject;
		if(!valueDeviceTypeSelectItemInfo["Label"].isNull())
			deviceTypeObject.label = valueDeviceTypeSelectItemInfo["Label"].asString();
		if(!valueDeviceTypeSelectItemInfo["Value"].isNull())
			deviceTypeObject.value = valueDeviceTypeSelectItemInfo["Value"].asString();
		deviceType_.push_back(deviceTypeObject);
	}
	auto allTemplateTypeNode = value["TemplateType"]["SelectItemInfo"];
	for (auto valueTemplateTypeSelectItemInfo : allTemplateTypeNode)
	{
		SelectItemInfo templateTypeObject;
		if(!valueTemplateTypeSelectItemInfo["Label"].isNull())
			templateTypeObject.label = valueTemplateTypeSelectItemInfo["Label"].asString();
		if(!valueTemplateTypeSelectItemInfo["Value"].isNull())
			templateTypeObject.value = valueTemplateTypeSelectItemInfo["Value"].asString();
		templateType_.push_back(templateTypeObject);
	}
	auto allSizeTypeNode = value["SizeType"]["SelectItemInfo"];
	for (auto valueSizeTypeSelectItemInfo : allSizeTypeNode)
	{
		SelectItemInfo sizeTypeObject;
		if(!valueSizeTypeSelectItemInfo["Label"].isNull())
			sizeTypeObject.label = valueSizeTypeSelectItemInfo["Label"].asString();
		if(!valueSizeTypeSelectItemInfo["Value"].isNull())
			sizeTypeObject.value = valueSizeTypeSelectItemInfo["Value"].asString();
		sizeType_.push_back(sizeTypeObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

std::vector<DescribeCompanyTemplateAttributeResult::SelectItemInfo> DescribeCompanyTemplateAttributeResult::getCategoryField()const
{
	return categoryField_;
}

std::vector<DescribeCompanyTemplateAttributeResult::SelectItemInfo> DescribeCompanyTemplateAttributeResult::getDeviceType()const
{
	return deviceType_;
}

std::string DescribeCompanyTemplateAttributeResult::getMessage()const
{
	return message_;
}

std::string DescribeCompanyTemplateAttributeResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<DescribeCompanyTemplateAttributeResult::SelectItemInfo> DescribeCompanyTemplateAttributeResult::getTemplateType()const
{
	return templateType_;
}

std::string DescribeCompanyTemplateAttributeResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeCompanyTemplateAttributeResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::vector<DescribeCompanyTemplateAttributeResult::SelectItemInfo> DescribeCompanyTemplateAttributeResult::getFontType()const
{
	return fontType_;
}

std::string DescribeCompanyTemplateAttributeResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<DescribeCompanyTemplateAttributeResult::SelectItemInfo> DescribeCompanyTemplateAttributeResult::getSizeType()const
{
	return sizeType_;
}

std::string DescribeCompanyTemplateAttributeResult::getCode()const
{
	return code_;
}

bool DescribeCompanyTemplateAttributeResult::getSuccess()const
{
	return success_;
}

