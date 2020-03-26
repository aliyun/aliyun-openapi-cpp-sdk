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
{
	setMethod(HttpRequest::Method::Post);
}

ScrollDomainListRequest::~ScrollDomainListRequest()
{}

std::string ScrollDomainListRequest::getProductDomainType()const
{
	return productDomainType_;
}

void ScrollDomainListRequest::setProductDomainType(const std::string& productDomainType)
{
	productDomainType_ = productDomainType;
	setParameter("ProductDomainType", productDomainType);
}

std::string ScrollDomainListRequest::getExcluded()const
{
	return excluded_;
}

void ScrollDomainListRequest::setExcluded(const std::string& excluded)
{
	excluded_ = excluded;
	setParameter("Excluded", excluded);
}

int ScrollDomainListRequest::getStartLength()const
{
	return startLength_;
}

void ScrollDomainListRequest::setStartLength(int startLength)
{
	startLength_ = startLength;
	setParameter("StartLength", std::to_string(startLength));
}

bool ScrollDomainListRequest::getExcludedSuffix()const
{
	return excludedSuffix_;
}

void ScrollDomainListRequest::setExcludedSuffix(bool excludedSuffix)
{
	excludedSuffix_ = excludedSuffix;
	setParameter("ExcludedSuffix", excludedSuffix ? "true" : "false");
}

int ScrollDomainListRequest::getPageSize()const
{
	return pageSize_;
}

void ScrollDomainListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ScrollDomainListRequest::getLang()const
{
	return lang_;
}

void ScrollDomainListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

bool ScrollDomainListRequest::getExcludedPrefix()const
{
	return excludedPrefix_;
}

void ScrollDomainListRequest::setExcludedPrefix(bool excludedPrefix)
{
	excludedPrefix_ = excludedPrefix;
	setParameter("ExcludedPrefix", excludedPrefix ? "true" : "false");
}

std::string ScrollDomainListRequest::getKeyWord()const
{
	return keyWord_;
}

void ScrollDomainListRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setParameter("KeyWord", keyWord);
}

long ScrollDomainListRequest::getEndExpirationDate()const
{
	return endExpirationDate_;
}

void ScrollDomainListRequest::setEndExpirationDate(long endExpirationDate)
{
	endExpirationDate_ = endExpirationDate;
	setParameter("EndExpirationDate", std::to_string(endExpirationDate));
}

std::string ScrollDomainListRequest::getSuffixs()const
{
	return suffixs_;
}

void ScrollDomainListRequest::setSuffixs(const std::string& suffixs)
{
	suffixs_ = suffixs;
	setParameter("Suffixs", suffixs);
}

long ScrollDomainListRequest::getStartExpirationDate()const
{
	return startExpirationDate_;
}

void ScrollDomainListRequest::setStartExpirationDate(long startExpirationDate)
{
	startExpirationDate_ = startExpirationDate;
	setParameter("StartExpirationDate", std::to_string(startExpirationDate));
}

int ScrollDomainListRequest::getDomainStatus()const
{
	return domainStatus_;
}

void ScrollDomainListRequest::setDomainStatus(int domainStatus)
{
	domainStatus_ = domainStatus;
	setParameter("DomainStatus", std::to_string(domainStatus));
}

long ScrollDomainListRequest::getDomainGroupId()const
{
	return domainGroupId_;
}

void ScrollDomainListRequest::setDomainGroupId(long domainGroupId)
{
	domainGroupId_ = domainGroupId;
	setParameter("DomainGroupId", std::to_string(domainGroupId));
}

bool ScrollDomainListRequest::getKeyWordSuffix()const
{
	return keyWordSuffix_;
}

void ScrollDomainListRequest::setKeyWordSuffix(bool keyWordSuffix)
{
	keyWordSuffix_ = keyWordSuffix;
	setParameter("KeyWordSuffix", keyWordSuffix ? "true" : "false");
}

std::string ScrollDomainListRequest::getScrollId()const
{
	return scrollId_;
}

void ScrollDomainListRequest::setScrollId(const std::string& scrollId)
{
	scrollId_ = scrollId;
	setParameter("ScrollId", scrollId);
}

bool ScrollDomainListRequest::getKeyWordPrefix()const
{
	return keyWordPrefix_;
}

void ScrollDomainListRequest::setKeyWordPrefix(bool keyWordPrefix)
{
	keyWordPrefix_ = keyWordPrefix;
	setParameter("KeyWordPrefix", keyWordPrefix ? "true" : "false");
}

int ScrollDomainListRequest::getTradeType()const
{
	return tradeType_;
}

void ScrollDomainListRequest::setTradeType(int tradeType)
{
	tradeType_ = tradeType;
	setParameter("TradeType", std::to_string(tradeType));
}

long ScrollDomainListRequest::getEndRegistrationDate()const
{
	return endRegistrationDate_;
}

void ScrollDomainListRequest::setEndRegistrationDate(long endRegistrationDate)
{
	endRegistrationDate_ = endRegistrationDate;
	setParameter("EndRegistrationDate", std::to_string(endRegistrationDate));
}

int ScrollDomainListRequest::getForm()const
{
	return form_;
}

void ScrollDomainListRequest::setForm(int form)
{
	form_ = form;
	setParameter("Form", std::to_string(form));
}

std::string ScrollDomainListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ScrollDomainListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

long ScrollDomainListRequest::getStartRegistrationDate()const
{
	return startRegistrationDate_;
}

void ScrollDomainListRequest::setStartRegistrationDate(long startRegistrationDate)
{
	startRegistrationDate_ = startRegistrationDate;
	setParameter("StartRegistrationDate", std::to_string(startRegistrationDate));
}

int ScrollDomainListRequest::getEndLength()const
{
	return endLength_;
}

void ScrollDomainListRequest::setEndLength(int endLength)
{
	endLength_ = endLength;
	setParameter("EndLength", std::to_string(endLength));
}

