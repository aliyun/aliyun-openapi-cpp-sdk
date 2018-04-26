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

#include <alibabacloud/domain/model/QueryAdvancedDomainListRequest.h>

using AlibabaCloud::Domain::Model::QueryAdvancedDomainListRequest;

QueryAdvancedDomainListRequest::QueryAdvancedDomainListRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryAdvancedDomainList")
{}

QueryAdvancedDomainListRequest::~QueryAdvancedDomainListRequest()
{}

std::string QueryAdvancedDomainListRequest::getProductDomainType()const
{
	return productDomainType_;
}

void QueryAdvancedDomainListRequest::setProductDomainType(const std::string& productDomainType)
{
	productDomainType_ = productDomainType;
	setParameter("ProductDomainType", productDomainType);
}

int QueryAdvancedDomainListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryAdvancedDomainListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string QueryAdvancedDomainListRequest::getExcluded()const
{
	return excluded_;
}

void QueryAdvancedDomainListRequest::setExcluded(const std::string& excluded)
{
	excluded_ = excluded;
	setParameter("Excluded", excluded);
}

int QueryAdvancedDomainListRequest::getStartLength()const
{
	return startLength_;
}

void QueryAdvancedDomainListRequest::setStartLength(int startLength)
{
	startLength_ = startLength;
	setParameter("StartLength", std::to_string(startLength));
}

bool QueryAdvancedDomainListRequest::getExcludedSuffix()const
{
	return excludedSuffix_;
}

void QueryAdvancedDomainListRequest::setExcludedSuffix(bool excludedSuffix)
{
	excludedSuffix_ = excludedSuffix;
	setParameter("ExcludedSuffix", std::to_string(excludedSuffix));
}

int QueryAdvancedDomainListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryAdvancedDomainListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryAdvancedDomainListRequest::getLang()const
{
	return lang_;
}

void QueryAdvancedDomainListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

bool QueryAdvancedDomainListRequest::getExcludedPrefix()const
{
	return excludedPrefix_;
}

void QueryAdvancedDomainListRequest::setExcludedPrefix(bool excludedPrefix)
{
	excludedPrefix_ = excludedPrefix;
	setParameter("ExcludedPrefix", std::to_string(excludedPrefix));
}

std::string QueryAdvancedDomainListRequest::getKeyWord()const
{
	return keyWord_;
}

void QueryAdvancedDomainListRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setParameter("KeyWord", keyWord);
}

bool QueryAdvancedDomainListRequest::getProductDomainTypeSort()const
{
	return productDomainTypeSort_;
}

void QueryAdvancedDomainListRequest::setProductDomainTypeSort(bool productDomainTypeSort)
{
	productDomainTypeSort_ = productDomainTypeSort;
	setParameter("ProductDomainTypeSort", std::to_string(productDomainTypeSort));
}

long QueryAdvancedDomainListRequest::getEndExpirationDate()const
{
	return endExpirationDate_;
}

void QueryAdvancedDomainListRequest::setEndExpirationDate(long endExpirationDate)
{
	endExpirationDate_ = endExpirationDate;
	setParameter("EndExpirationDate", std::to_string(endExpirationDate));
}

std::string QueryAdvancedDomainListRequest::getSuffixs()const
{
	return suffixs_;
}

void QueryAdvancedDomainListRequest::setSuffixs(const std::string& suffixs)
{
	suffixs_ = suffixs;
	setParameter("Suffixs", suffixs);
}

bool QueryAdvancedDomainListRequest::getDomainNameSort()const
{
	return domainNameSort_;
}

void QueryAdvancedDomainListRequest::setDomainNameSort(bool domainNameSort)
{
	domainNameSort_ = domainNameSort;
	setParameter("DomainNameSort", std::to_string(domainNameSort));
}

bool QueryAdvancedDomainListRequest::getExpirationDateSort()const
{
	return expirationDateSort_;
}

void QueryAdvancedDomainListRequest::setExpirationDateSort(bool expirationDateSort)
{
	expirationDateSort_ = expirationDateSort;
	setParameter("ExpirationDateSort", std::to_string(expirationDateSort));
}

long QueryAdvancedDomainListRequest::getStartExpirationDate()const
{
	return startExpirationDate_;
}

void QueryAdvancedDomainListRequest::setStartExpirationDate(long startExpirationDate)
{
	startExpirationDate_ = startExpirationDate;
	setParameter("StartExpirationDate", std::to_string(startExpirationDate));
}

int QueryAdvancedDomainListRequest::getDomainStatus()const
{
	return domainStatus_;
}

void QueryAdvancedDomainListRequest::setDomainStatus(int domainStatus)
{
	domainStatus_ = domainStatus;
	setParameter("DomainStatus", std::to_string(domainStatus));
}

long QueryAdvancedDomainListRequest::getDomainGroupId()const
{
	return domainGroupId_;
}

void QueryAdvancedDomainListRequest::setDomainGroupId(long domainGroupId)
{
	domainGroupId_ = domainGroupId;
	setParameter("DomainGroupId", std::to_string(domainGroupId));
}

bool QueryAdvancedDomainListRequest::getKeyWordSuffix()const
{
	return keyWordSuffix_;
}

void QueryAdvancedDomainListRequest::setKeyWordSuffix(bool keyWordSuffix)
{
	keyWordSuffix_ = keyWordSuffix;
	setParameter("KeyWordSuffix", std::to_string(keyWordSuffix));
}

bool QueryAdvancedDomainListRequest::getKeyWordPrefix()const
{
	return keyWordPrefix_;
}

void QueryAdvancedDomainListRequest::setKeyWordPrefix(bool keyWordPrefix)
{
	keyWordPrefix_ = keyWordPrefix;
	setParameter("KeyWordPrefix", std::to_string(keyWordPrefix));
}

int QueryAdvancedDomainListRequest::getTradeType()const
{
	return tradeType_;
}

void QueryAdvancedDomainListRequest::setTradeType(int tradeType)
{
	tradeType_ = tradeType;
	setParameter("TradeType", std::to_string(tradeType));
}

long QueryAdvancedDomainListRequest::getEndRegistrationDate()const
{
	return endRegistrationDate_;
}

void QueryAdvancedDomainListRequest::setEndRegistrationDate(long endRegistrationDate)
{
	endRegistrationDate_ = endRegistrationDate;
	setParameter("EndRegistrationDate", std::to_string(endRegistrationDate));
}

int QueryAdvancedDomainListRequest::getForm()const
{
	return form_;
}

void QueryAdvancedDomainListRequest::setForm(int form)
{
	form_ = form;
	setParameter("Form", std::to_string(form));
}

std::string QueryAdvancedDomainListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryAdvancedDomainListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

bool QueryAdvancedDomainListRequest::getRegistrationDateSort()const
{
	return registrationDateSort_;
}

void QueryAdvancedDomainListRequest::setRegistrationDateSort(bool registrationDateSort)
{
	registrationDateSort_ = registrationDateSort;
	setParameter("RegistrationDateSort", std::to_string(registrationDateSort));
}

long QueryAdvancedDomainListRequest::getStartRegistrationDate()const
{
	return startRegistrationDate_;
}

void QueryAdvancedDomainListRequest::setStartRegistrationDate(long startRegistrationDate)
{
	startRegistrationDate_ = startRegistrationDate;
	setParameter("StartRegistrationDate", std::to_string(startRegistrationDate));
}

int QueryAdvancedDomainListRequest::getEndLength()const
{
	return endLength_;
}

void QueryAdvancedDomainListRequest::setEndLength(int endLength)
{
	endLength_ = endLength;
	setParameter("EndLength", std::to_string(endLength));
}

