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

#include <alibabacloud/cams/model/GetChatappTemplateDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

GetChatappTemplateDetailResult::GetChatappTemplateDetailResult() :
	ServiceResult()
{}

GetChatappTemplateDetailResult::GetChatappTemplateDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetChatappTemplateDetailResult::~GetChatappTemplateDetailResult()
{}

void GetChatappTemplateDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Category"].isNull())
		data_.category = dataNode["Category"].asString();
	if(!dataNode["TemplateCode"].isNull())
		data_.templateCode = dataNode["TemplateCode"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Language"].isNull())
		data_.language = dataNode["Language"].asString();
	if(!dataNode["Example"].isNull())
		data_.example = dataNode["Example"].asString();
	if(!dataNode["AuditStatus"].isNull())
		data_.auditStatus = dataNode["AuditStatus"].asString();
	if(!dataNode["TemplateType"].isNull())
		data_.templateType = dataNode["TemplateType"].asString();
	if(!dataNode["QualityScore"].isNull())
		data_.qualityScore = dataNode["QualityScore"].asString();
	if(!dataNode["MessageSendTtlSeconds"].isNull())
		data_.messageSendTtlSeconds = std::stoi(dataNode["MessageSendTtlSeconds"].asString());
	if(!dataNode["Reason"].isNull())
		data_.reason = dataNode["Reason"].asString();
	auto allComponentsNode = dataNode["Components"]["component"];
	for (auto dataNodeComponentscomponent : allComponentsNode)
	{
		Data::Component componentObject;
		if(!dataNodeComponentscomponent["Type"].isNull())
			componentObject.type = dataNodeComponentscomponent["Type"].asString();
		if(!dataNodeComponentscomponent["Url"].isNull())
			componentObject.url = dataNodeComponentscomponent["Url"].asString();
		if(!dataNodeComponentscomponent["Text"].isNull())
			componentObject.text = dataNodeComponentscomponent["Text"].asString();
		if(!dataNodeComponentscomponent["Caption"].isNull())
			componentObject.caption = dataNodeComponentscomponent["Caption"].asString();
		if(!dataNodeComponentscomponent["FileName"].isNull())
			componentObject.fileName = dataNodeComponentscomponent["FileName"].asString();
		if(!dataNodeComponentscomponent["Format"].isNull())
			componentObject.format = dataNodeComponentscomponent["Format"].asString();
		if(!dataNodeComponentscomponent["ThumbUrl"].isNull())
			componentObject.thumbUrl = dataNodeComponentscomponent["ThumbUrl"].asString();
		if(!dataNodeComponentscomponent["Duration"].isNull())
			componentObject.duration = std::stoi(dataNodeComponentscomponent["Duration"].asString());
		if(!dataNodeComponentscomponent["FileType"].isNull())
			componentObject.fileType = dataNodeComponentscomponent["FileType"].asString();
		if(!dataNodeComponentscomponent["Latitude"].isNull())
			componentObject.latitude = dataNodeComponentscomponent["Latitude"].asString();
		if(!dataNodeComponentscomponent["Longitude"].isNull())
			componentObject.longitude = dataNodeComponentscomponent["Longitude"].asString();
		if(!dataNodeComponentscomponent["LocationName"].isNull())
			componentObject.locationName = dataNodeComponentscomponent["LocationName"].asString();
		if(!dataNodeComponentscomponent["LocationAddress"].isNull())
			componentObject.locationAddress = dataNodeComponentscomponent["LocationAddress"].asString();
		if(!dataNodeComponentscomponent["AddSecretRecommendation"].isNull())
			componentObject.addSecretRecommendation = dataNodeComponentscomponent["AddSecretRecommendation"].asString() == "true";
		if(!dataNodeComponentscomponent["CodeExpirationMinutes"].isNull())
			componentObject.codeExpirationMinutes = std::stoi(dataNodeComponentscomponent["CodeExpirationMinutes"].asString());
		if(!dataNodeComponentscomponent["hasExpiration"].isNull())
			componentObject.hasExpiration = dataNodeComponentscomponent["hasExpiration"].asString() == "true";
		if(!dataNodeComponentscomponent["OfferExpirationTimeMs"].isNull())
			componentObject.offerExpirationTimeMs = dataNodeComponentscomponent["OfferExpirationTimeMs"].asString();
		auto allButtonsNode = dataNodeComponentscomponent["Buttons"]["button"];
		for (auto dataNodeComponentscomponentButtonsbutton : allButtonsNode)
		{
			Data::Component::Button buttonsObject;
			if(!dataNodeComponentscomponentButtonsbutton["Type"].isNull())
				buttonsObject.type = dataNodeComponentscomponentButtonsbutton["Type"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["Text"].isNull())
				buttonsObject.text = dataNodeComponentscomponentButtonsbutton["Text"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["PhoneNumber"].isNull())
				buttonsObject.phoneNumber = dataNodeComponentscomponentButtonsbutton["PhoneNumber"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["Url"].isNull())
				buttonsObject.url = dataNodeComponentscomponentButtonsbutton["Url"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["UrlType"].isNull())
				buttonsObject.urlType = dataNodeComponentscomponentButtonsbutton["UrlType"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["SignatureHash"].isNull())
				buttonsObject.signatureHash = dataNodeComponentscomponentButtonsbutton["SignatureHash"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["PackageName"].isNull())
				buttonsObject.packageName = dataNodeComponentscomponentButtonsbutton["PackageName"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["AutofillText"].isNull())
				buttonsObject.autofillText = dataNodeComponentscomponentButtonsbutton["AutofillText"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["IsOptOut"].isNull())
				buttonsObject.isOptOut = dataNodeComponentscomponentButtonsbutton["IsOptOut"].asString() == "true";
			if(!dataNodeComponentscomponentButtonsbutton["CouponCode"].isNull())
				buttonsObject.couponCode = dataNodeComponentscomponentButtonsbutton["CouponCode"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["FlowId"].isNull())
				buttonsObject.flowId = dataNodeComponentscomponentButtonsbutton["FlowId"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["FlowAction"].isNull())
				buttonsObject.flowAction = dataNodeComponentscomponentButtonsbutton["FlowAction"].asString();
			if(!dataNodeComponentscomponentButtonsbutton["NavigateScreen"].isNull())
				buttonsObject.navigateScreen = dataNodeComponentscomponentButtonsbutton["NavigateScreen"].asString();
			auto allSupportedAppsNode = dataNodeComponentscomponentButtonsbutton["SupportedApps"]["supportedAppsItem"];
			for (auto dataNodeComponentscomponentButtonsbuttonSupportedAppssupportedAppsItem : allSupportedAppsNode)
			{
				Data::Component::Button::SupportedAppsItem supportedAppsObject;
				if(!dataNodeComponentscomponentButtonsbuttonSupportedAppssupportedAppsItem["SignatureHash"].isNull())
					supportedAppsObject.signatureHash = dataNodeComponentscomponentButtonsbuttonSupportedAppssupportedAppsItem["SignatureHash"].asString();
				if(!dataNodeComponentscomponentButtonsbuttonSupportedAppssupportedAppsItem["PackageName"].isNull())
					supportedAppsObject.packageName = dataNodeComponentscomponentButtonsbuttonSupportedAppssupportedAppsItem["PackageName"].asString();
				buttonsObject.supportedApps.push_back(supportedAppsObject);
			}
			auto extendAttrsNode = value["ExtendAttrs"];
			if(!extendAttrsNode["NextTemplateCode"].isNull())
				buttonsObject.extendAttrs.nextTemplateCode = extendAttrsNode["NextTemplateCode"].asString();
			if(!extendAttrsNode["NextTemplateName"].isNull())
				buttonsObject.extendAttrs.nextTemplateName = extendAttrsNode["NextTemplateName"].asString();
			if(!extendAttrsNode["NextLanguageCode"].isNull())
				buttonsObject.extendAttrs.nextLanguageCode = extendAttrsNode["NextLanguageCode"].asString();
			if(!extendAttrsNode["Action"].isNull())
				buttonsObject.extendAttrs.action = extendAttrsNode["Action"].asString();
			if(!extendAttrsNode["IntentCode"].isNull())
				buttonsObject.extendAttrs.intentCode = extendAttrsNode["IntentCode"].asString();
			componentObject.buttons.push_back(buttonsObject);
		}
		auto allCardsNode = dataNodeComponentscomponent["Cards"]["轮播卡片列表"];
		for (auto dataNodeComponentscomponentCards轮播卡片列表 : allCardsNode)
		{
			Data::Component::轮播卡片列表 cardsObject;
			auto allCardComponentsNode = dataNodeComponentscomponentCards轮播卡片列表["CardComponents"]["卡片控件列表"];
			for (auto dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表 : allCardComponentsNode)
			{
				Data::Component::轮播卡片列表::卡片控件列表 cardComponentsObject;
				if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Type"].isNull())
					cardComponentsObject.type = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Type"].asString();
				if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Text"].isNull())
					cardComponentsObject.text = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Text"].asString();
				if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Url"].isNull())
					cardComponentsObject.url = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Url"].asString();
				if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Format"].isNull())
					cardComponentsObject.format = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Format"].asString();
				auto allButtons1Node = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表["Buttons"]["卡片按钮列表"];
				for (auto dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表 : allButtons1Node)
				{
					Data::Component::轮播卡片列表::卡片控件列表::卡片按钮列表 buttons1Object;
					if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["Type"].isNull())
						buttons1Object.type = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["Type"].asString();
					if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["Text"].isNull())
						buttons1Object.text = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["Text"].asString();
					if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["Url"].isNull())
						buttons1Object.url = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["Url"].asString();
					if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["UrlType"].isNull())
						buttons1Object.urlType = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["UrlType"].asString();
					if(!dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["PhoneNumber"].isNull())
						buttons1Object.phoneNumber = dataNodeComponentscomponentCards轮播卡片列表CardComponents卡片控件列表Buttons卡片按钮列表["PhoneNumber"].asString();
					cardComponentsObject.buttons1.push_back(buttons1Object);
				}
				cardsObject.cardComponents.push_back(cardComponentsObject);
			}
			componentObject.cards.push_back(cardsObject);
		}
		data_.components.push_back(componentObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string GetChatappTemplateDetailResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string GetChatappTemplateDetailResult::getMessage()const
{
	return message_;
}

GetChatappTemplateDetailResult::Data GetChatappTemplateDetailResult::getData()const
{
	return data_;
}

std::string GetChatappTemplateDetailResult::getCode()const
{
	return code_;
}

