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
	setCoreParameter("ProductDomainType", std::to_string(productDomainType));
}

int QueryAdvancedDomainListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryAdvancedDomainListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string QueryAdvancedDomainListRequest::getExcluded()const
{
	return excluded_;
}

void QueryAdvancedDomainListRequest::setExcluded(const std::string& excluded)
{
	excluded_ = excluded;
	setCoreParameter("Excluded", std::to_string(excluded));
}

int QueryAdvancedDomainListRequest::getStartLength()const
{
	return startLength_;
}

void QueryAdvancedDomainListRequest::setStartLength(int startLength)
{
	startLength_ = startLength;
	setCoreParameter("StartLength", startLength);
}

bool QueryAdvancedDomainListRequest::getExcludedSuffix()const
{
	return excludedSuffix_;
}

void QueryAdvancedDomainListRequest::setExcludedSuffix(bool excludedSuffix)
{
	excludedSuffix_ = excludedSuffix;
	setCoreParameter("ExcludedSuffix", excludedSuffix ? "true" : "false");
}

int QueryAdvancedDomainListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryAdvancedDomainListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryAdvancedDomainListRequest::getLang()const
{
	return lang_;
}

void QueryAdvancedDomainListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

bool QueryAdvancedDomainListRequest::getExcludedPrefix()const
{
	return excludedPrefix_;
}

void QueryAdvancedDomainListRequest::setExcludedPrefix(bool excludedPrefix)
{
	excludedPrefix_ = excludedPrefix;
	setCoreParameter("ExcludedPrefix", excludedPrefix ? "true" : "false");
}

std::string QueryAdvancedDomainListRequest::getKeyWord()const
{
	return keyWord_;
}

void QueryAdvancedDomainListRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setCoreParameter("KeyWord", std::to_string(keyWord));
}

bool QueryAdvancedDomainListRequest::getProductDomainTypeSort()const
{
	return productDomainTypeSort_;
}

void QueryAdvancedDomainListRequest::setProductDomainTypeSort(bool productDomainTypeSort)
{
	productDomainTypeSort_ = productDomainTypeSort;
	setCoreParameter("ProductDomainTypeSort", productDomainTypeSort ? "true" : "false");
}

long QueryAdvancedDomainListRequest::getEndExpirationDate()const
{
	return endExpirationDate_;
}

void QueryAdvancedDomainListRequest::setEndExpirationDate(long endExpirationDate)
{
	endExpirationDate_ = endExpirationDate;
	setCoreParameter("EndExpirationDate", endExpirationDate);
}

std::string QueryAdvancedDomainListRequest::getSuffixs()const
{
	return suffixs_;
}

void QueryAdvancedDomainListRequest::setSuffixs(const std::string& suffixs)
{
	suffixs_ = suffixs;
	setCoreParameter("Suffixs", std::to_string(suffixs));
}

bool QueryAdvancedDomainListRequest::getDomainNameSort()const
{
	return domainNameSort_;
}

void QueryAdvancedDomainListRequest::setDomainNameSort(bool domainNameSort)
{
	domainNameSort_ = domainNameSort;
	setCoreParameter("DomainNameSort", domainNameSort ? "true" : "false");
}

bool QueryAdvancedDomainListRequest::getExpirationDateSort()const
{
	return expirationDateSort_;
}

void QueryAdvancedDomainListRequest::setExpirationDateSort(bool expirationDateSort)
{
	expirationDateSort_ = expirationDateSort;
	setCoreParameter("ExpirationDateSort", expirationDateSort ? "true" : "false");
}

long QueryAdvancedDomainListRequest::getStartExpirationDate()const
{
	return startExpirationDate_;
}

void QueryAdvancedDomainListRequest::setStartExpirationDate(long startExpirationDate)
{
	startExpirationDate_ = startExpirationDate;
	setCoreParameter("StartExpirationDate", startExpirationDate);
}

int QueryAdvancedDomainListRequest::getDomainStatus()const
{
	return domainStatus_;
}

void QueryAdvancedDomainListRequest::setDomainStatus(int domainStatus)
{
	domainStatus_ = domainStatus;
	setCoreParameter("DomainStatus", domainStatus);
}

long QueryAdvancedDomainListRequest::getDomainGroupId()const
{
	return domainGroupId_;
}

void QueryAdvancedDomainListRequest::setDomainGroupId(long domainGroupId)
{
	domainGroupId_ = domainGroupId;
	setCoreParameter("DomainGroupId", domainGroupId);
}

bool QueryAdvancedDomainListRequest::getKeyWordSuffix()const
{
	return keyWordSuffix_;
}

void QueryAdvancedDomainListRequest::setKeyWordSuffix(bool keyWordSuffix)
{
	keyWordSuffix_ = keyWordSuffix;
	setCoreParameter("KeyWordSuffix", keyWordSuffix ? "true" : "false");
}

bool QueryAdvancedDomainListRequest::getKeyWordPrefix()const
{
	return keyWordPrefix_;
}

void QueryAdvancedDomainListRequest::setKeyWordPrefix(bool keyWordPrefix)
{
	keyWordPrefix_ = keyWordPrefix;
	setCoreParameter("KeyWordPrefix", keyWordPrefix ? "true" : "false");
}

int QueryAdvancedDomainListRequest::getTradeType()const
{
	return tradeType_;
}

void QueryAdvancedDomainListRequest::setTradeType(int tradeType)
{
	tradeType_ = tradeType;
	setCoreParameter("TradeType", tradeType);
}

long QueryAdvancedDomainListRequest::getEndRegistrationDate()const
{
	return endRegistrationDate_;
}

void QueryAdvancedDomainListRequest::setEndRegistrationDate(long endRegistrationDate)
{
	endRegistrationDate_ = endRegistrationDate;
	setCoreParameter("EndRegistrationDate", endRegistrationDate);
}

int QueryAdvancedDomainListRequest::getForm()const
{
	return form_;
}

void QueryAdvancedDomainListRequest::setForm(int form)
{
	form_ = form;
	setCoreParameter("Form", form);
}

std::string QueryAdvancedDomainListRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryAdvancedDomainListRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

bool QueryAdvancedDomainListRequest::getRegistrationDateSort()const
{
	return registrationDateSort_;
}

void QueryAdvancedDomainListRequest::setRegistrationDateSort(bool registrationDateSort)
{
	registrationDateSort_ = registrationDateSort;
	setCoreParameter("RegistrationDateSort", registrationDateSort ? "true" : "false");
}

long QueryAdvancedDomainListRequest::getStartRegistrationDate()const
{
	return startRegistrationDate_;
}

void QueryAdvancedDomainListRequest::setStartRegistrationDate(long startRegistrationDate)
{
	startRegistrationDate_ = startRegistrationDate;
	setCoreParameter("StartRegistrationDate", startRegistrationDate);
}

int QueryAdvancedDomainListRequest::getEndLength()const
{
	return endLength_;
}

void QueryAdvancedDomainListRequest::setEndLength(int endLength)
{
	endLength_ = endLength;
	setCoreParameter("EndLength", endLength);
}

