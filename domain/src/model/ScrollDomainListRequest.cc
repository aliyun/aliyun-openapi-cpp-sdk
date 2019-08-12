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

#include <alibabacloud/domain/model/ScrollDomainListRequest.h>

using AlibabaCloud::Domain::Model::ScrollDomainListRequest;

ScrollDomainListRequest::ScrollDomainListRequest() :
	RpcServiceRequest("domain", "2018-01-29", "ScrollDomainList")
{}

ScrollDomainListRequest::~ScrollDomainListRequest()
{}

long ScrollDomainListRequest::getEndExpirationDate()const
{
	return endExpirationDate_;
}

void ScrollDomainListRequest::setEndExpirationDate(long endExpirationDate)
{
	endExpirationDate_ = endExpirationDate;
	setCoreParameter("EndExpirationDate", endExpirationDate);
}

std::string ScrollDomainListRequest::getProductDomainType()const
{
	return productDomainType_;
}

void ScrollDomainListRequest::setProductDomainType(const std::string& productDomainType)
{
	productDomainType_ = productDomainType;
	setCoreParameter("ProductDomainType", std::to_string(productDomainType));
}

std::string ScrollDomainListRequest::getSuffixs()const
{
	return suffixs_;
}

void ScrollDomainListRequest::setSuffixs(const std::string& suffixs)
{
	suffixs_ = suffixs;
	setCoreParameter("Suffixs", std::to_string(suffixs));
}

long ScrollDomainListRequest::getStartExpirationDate()const
{
	return startExpirationDate_;
}

void ScrollDomainListRequest::setStartExpirationDate(long startExpirationDate)
{
	startExpirationDate_ = startExpirationDate;
	setCoreParameter("StartExpirationDate", startExpirationDate);
}

int ScrollDomainListRequest::getDomainStatus()const
{
	return domainStatus_;
}

void ScrollDomainListRequest::setDomainStatus(int domainStatus)
{
	domainStatus_ = domainStatus;
	setCoreParameter("DomainStatus", domainStatus);
}

long ScrollDomainListRequest::getDomainGroupId()const
{
	return domainGroupId_;
}

void ScrollDomainListRequest::setDomainGroupId(long domainGroupId)
{
	domainGroupId_ = domainGroupId;
	setCoreParameter("DomainGroupId", domainGroupId);
}

bool ScrollDomainListRequest::getKeyWordSuffix()const
{
	return keyWordSuffix_;
}

void ScrollDomainListRequest::setKeyWordSuffix(bool keyWordSuffix)
{
	keyWordSuffix_ = keyWordSuffix;
	setCoreParameter("KeyWordSuffix", keyWordSuffix ? "true" : "false");
}

std::string ScrollDomainListRequest::getScrollId()const
{
	return scrollId_;
}

void ScrollDomainListRequest::setScrollId(const std::string& scrollId)
{
	scrollId_ = scrollId;
	setCoreParameter("ScrollId", std::to_string(scrollId));
}

std::string ScrollDomainListRequest::getExcluded()const
{
	return excluded_;
}

void ScrollDomainListRequest::setExcluded(const std::string& excluded)
{
	excluded_ = excluded;
	setCoreParameter("Excluded", std::to_string(excluded));
}

bool ScrollDomainListRequest::getKeyWordPrefix()const
{
	return keyWordPrefix_;
}

void ScrollDomainListRequest::setKeyWordPrefix(bool keyWordPrefix)
{
	keyWordPrefix_ = keyWordPrefix;
	setCoreParameter("KeyWordPrefix", keyWordPrefix ? "true" : "false");
}

int ScrollDomainListRequest::getStartLength()const
{
	return startLength_;
}

void ScrollDomainListRequest::setStartLength(int startLength)
{
	startLength_ = startLength;
	setCoreParameter("StartLength", startLength);
}

int ScrollDomainListRequest::getTradeType()const
{
	return tradeType_;
}

void ScrollDomainListRequest::setTradeType(int tradeType)
{
	tradeType_ = tradeType;
	setCoreParameter("TradeType", tradeType);
}

bool ScrollDomainListRequest::getExcludedSuffix()const
{
	return excludedSuffix_;
}

void ScrollDomainListRequest::setExcludedSuffix(bool excludedSuffix)
{
	excludedSuffix_ = excludedSuffix;
	setCoreParameter("ExcludedSuffix", excludedSuffix ? "true" : "false");
}

long ScrollDomainListRequest::getEndRegistrationDate()const
{
	return endRegistrationDate_;
}

void ScrollDomainListRequest::setEndRegistrationDate(long endRegistrationDate)
{
	endRegistrationDate_ = endRegistrationDate;
	setCoreParameter("EndRegistrationDate", endRegistrationDate);
}

int ScrollDomainListRequest::getForm()const
{
	return form_;
}

void ScrollDomainListRequest::setForm(int form)
{
	form_ = form;
	setCoreParameter("Form", form);
}

std::string ScrollDomainListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ScrollDomainListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

int ScrollDomainListRequest::getPageSize()const
{
	return pageSize_;
}

void ScrollDomainListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ScrollDomainListRequest::getLang()const
{
	return lang_;
}

void ScrollDomainListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

bool ScrollDomainListRequest::getExcludedPrefix()const
{
	return excludedPrefix_;
}

void ScrollDomainListRequest::setExcludedPrefix(bool excludedPrefix)
{
	excludedPrefix_ = excludedPrefix;
	setCoreParameter("ExcludedPrefix", excludedPrefix ? "true" : "false");
}

std::string ScrollDomainListRequest::getKeyWord()const
{
	return keyWord_;
}

void ScrollDomainListRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setCoreParameter("KeyWord", std::to_string(keyWord));
}

long ScrollDomainListRequest::getStartRegistrationDate()const
{
	return startRegistrationDate_;
}

void ScrollDomainListRequest::setStartRegistrationDate(long startRegistrationDate)
{
	startRegistrationDate_ = startRegistrationDate;
	setCoreParameter("StartRegistrationDate", startRegistrationDate);
}

int ScrollDomainListRequest::getEndLength()const
{
	return endLength_;
}

void ScrollDomainListRequest::setEndLength(int endLength)
{
	endLength_ = endLength;
	setCoreParameter("EndLength", endLength);
}

