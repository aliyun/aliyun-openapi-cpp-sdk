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

#include <alibabacloud/cas/model/CreateSignatureRequest.h>

using AlibabaCloud::Cas::Model::CreateSignatureRequest;

CreateSignatureRequest::CreateSignatureRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateSignature")
{}

CreateSignatureRequest::~CreateSignatureRequest()
{}

std::string CreateSignatureRequest::getIconId()const
{
	return iconId_;
}

void CreateSignatureRequest::setIconId(const std::string& iconId)
{
	iconId_ = iconId;
	setCoreParameter("IconId", iconId);
}

int CreateSignatureRequest::getQuantity()const
{
	return quantity_;
}

void CreateSignatureRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", std::to_string(quantity));
}

std::string CreateSignatureRequest::getHandSignImg()const
{
	return handSignImg_;
}

void CreateSignatureRequest::setHandSignImg(const std::string& handSignImg)
{
	handSignImg_ = handSignImg;
	setCoreParameter("HandSignImg", handSignImg);
}

std::string CreateSignatureRequest::getDocId()const
{
	return docId_;
}

void CreateSignatureRequest::setDocId(const std::string& docId)
{
	docId_ = docId;
	setCoreParameter("DocId", docId);
}

std::string CreateSignatureRequest::getCustomApi()const
{
	return customApi_;
}

void CreateSignatureRequest::setCustomApi(const std::string& customApi)
{
	customApi_ = customApi;
	setCoreParameter("CustomApi", customApi);
}

int CreateSignatureRequest::getPositionPage()const
{
	return positionPage_;
}

void CreateSignatureRequest::setPositionPage(int positionPage)
{
	positionPage_ = positionPage;
	setCoreParameter("PositionPage", std::to_string(positionPage));
}

std::string CreateSignatureRequest::getDocTitle()const
{
	return docTitle_;
}

void CreateSignatureRequest::setDocTitle(const std::string& docTitle)
{
	docTitle_ = docTitle;
	setCoreParameter("DocTitle", docTitle);
}

int CreateSignatureRequest::getPositionX()const
{
	return positionX_;
}

void CreateSignatureRequest::setPositionX(int positionX)
{
	positionX_ = positionX;
	setCoreParameter("PositionX", std::to_string(positionX));
}

int CreateSignatureRequest::getPositionY()const
{
	return positionY_;
}

void CreateSignatureRequest::setPositionY(int positionY)
{
	positionY_ = positionY;
	setCoreParameter("PositionY", std::to_string(positionY));
}

std::string CreateSignatureRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateSignatureRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateSignatureRequest::getPeopleId()const
{
	return peopleId_;
}

void CreateSignatureRequest::setPeopleId(const std::string& peopleId)
{
	peopleId_ = peopleId;
	setCoreParameter("PeopleId", peopleId);
}

int CreateSignatureRequest::getPositionType()const
{
	return positionType_;
}

void CreateSignatureRequest::setPositionType(int positionType)
{
	positionType_ = positionType;
	setCoreParameter("PositionType", std::to_string(positionType));
}

std::string CreateSignatureRequest::getSignKeyword()const
{
	return signKeyword_;
}

void CreateSignatureRequest::setSignKeyword(const std::string& signKeyword)
{
	signKeyword_ = signKeyword;
	setCoreParameter("SignKeyword", signKeyword);
}

std::string CreateSignatureRequest::getNotifyUrl()const
{
	return notifyUrl_;
}

void CreateSignatureRequest::setNotifyUrl(const std::string& notifyUrl)
{
	notifyUrl_ = notifyUrl;
	setCoreParameter("NotifyUrl", notifyUrl);
}

int CreateSignatureRequest::getValidity()const
{
	return validity_;
}

void CreateSignatureRequest::setValidity(int validity)
{
	validity_ = validity;
	setCoreParameter("Validity", std::to_string(validity));
}

std::string CreateSignatureRequest::getReturnUrl()const
{
	return returnUrl_;
}

void CreateSignatureRequest::setReturnUrl(const std::string& returnUrl)
{
	returnUrl_ = returnUrl;
	setCoreParameter("ReturnUrl", returnUrl);
}

std::string CreateSignatureRequest::getLang()const
{
	return lang_;
}

void CreateSignatureRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int CreateSignatureRequest::getKeywordStrategy()const
{
	return keywordStrategy_;
}

void CreateSignatureRequest::setKeywordStrategy(int keywordStrategy)
{
	keywordStrategy_ = keywordStrategy;
	setCoreParameter("KeywordStrategy", std::to_string(keywordStrategy));
}

