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

#include <alibabacloud/cas/model/CreateWebSignatureRequest.h>

using AlibabaCloud::Cas::Model::CreateWebSignatureRequest;

CreateWebSignatureRequest::CreateWebSignatureRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateWebSignature")
{}

CreateWebSignatureRequest::~CreateWebSignatureRequest()
{}

int CreateWebSignatureRequest::getQuantity()const
{
	return quantity_;
}

void CreateWebSignatureRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", quantity);
}

std::string CreateWebSignatureRequest::getHandSignImg()const
{
	return handSignImg_;
}

void CreateWebSignatureRequest::setHandSignImg(const std::string& handSignImg)
{
	handSignImg_ = handSignImg;
	setCoreParameter("HandSignImg", std::to_string(handSignImg));
}

std::string CreateWebSignatureRequest::getDocId()const
{
	return docId_;
}

void CreateWebSignatureRequest::setDocId(const std::string& docId)
{
	docId_ = docId;
	setCoreParameter("DocId", std::to_string(docId));
}

std::string CreateWebSignatureRequest::getCustomApi()const
{
	return customApi_;
}

void CreateWebSignatureRequest::setCustomApi(const std::string& customApi)
{
	customApi_ = customApi;
	setCoreParameter("CustomApi", std::to_string(customApi));
}

int CreateWebSignatureRequest::getPositionPage()const
{
	return positionPage_;
}

void CreateWebSignatureRequest::setPositionPage(int positionPage)
{
	positionPage_ = positionPage;
	setCoreParameter("PositionPage", positionPage);
}

std::string CreateWebSignatureRequest::getDocTitle()const
{
	return docTitle_;
}

void CreateWebSignatureRequest::setDocTitle(const std::string& docTitle)
{
	docTitle_ = docTitle;
	setCoreParameter("DocTitle", std::to_string(docTitle));
}

int CreateWebSignatureRequest::getPositionX()const
{
	return positionX_;
}

void CreateWebSignatureRequest::setPositionX(int positionX)
{
	positionX_ = positionX;
	setCoreParameter("PositionX", positionX);
}

int CreateWebSignatureRequest::getPositionY()const
{
	return positionY_;
}

void CreateWebSignatureRequest::setPositionY(int positionY)
{
	positionY_ = positionY;
	setCoreParameter("PositionY", positionY);
}

std::string CreateWebSignatureRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateWebSignatureRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string CreateWebSignatureRequest::getPeopleId()const
{
	return peopleId_;
}

void CreateWebSignatureRequest::setPeopleId(const std::string& peopleId)
{
	peopleId_ = peopleId;
	setCoreParameter("PeopleId", std::to_string(peopleId));
}

int CreateWebSignatureRequest::getPositionType()const
{
	return positionType_;
}

void CreateWebSignatureRequest::setPositionType(int positionType)
{
	positionType_ = positionType;
	setCoreParameter("PositionType", positionType);
}

std::string CreateWebSignatureRequest::getSignKeyword()const
{
	return signKeyword_;
}

void CreateWebSignatureRequest::setSignKeyword(const std::string& signKeyword)
{
	signKeyword_ = signKeyword;
	setCoreParameter("SignKeyword", std::to_string(signKeyword));
}

std::string CreateWebSignatureRequest::getNotifyUrl()const
{
	return notifyUrl_;
}

void CreateWebSignatureRequest::setNotifyUrl(const std::string& notifyUrl)
{
	notifyUrl_ = notifyUrl;
	setCoreParameter("NotifyUrl", std::to_string(notifyUrl));
}

int CreateWebSignatureRequest::getValidity()const
{
	return validity_;
}

void CreateWebSignatureRequest::setValidity(int validity)
{
	validity_ = validity;
	setCoreParameter("Validity", validity);
}

std::string CreateWebSignatureRequest::getReturnUrl()const
{
	return returnUrl_;
}

void CreateWebSignatureRequest::setReturnUrl(const std::string& returnUrl)
{
	returnUrl_ = returnUrl;
	setCoreParameter("ReturnUrl", std::to_string(returnUrl));
}

std::string CreateWebSignatureRequest::getLang()const
{
	return lang_;
}

void CreateWebSignatureRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

int CreateWebSignatureRequest::getKeywordStrategy()const
{
	return keywordStrategy_;
}

void CreateWebSignatureRequest::setKeywordStrategy(int keywordStrategy)
{
	keywordStrategy_ = keywordStrategy;
	setCoreParameter("KeywordStrategy", keywordStrategy);
}

