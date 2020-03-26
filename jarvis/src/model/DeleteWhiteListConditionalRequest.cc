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

#include <alibabacloud/jarvis/model/DeleteWhiteListConditionalRequest.h>

using AlibabaCloud::Jarvis::Model::DeleteWhiteListConditionalRequest;

DeleteWhiteListConditionalRequest::DeleteWhiteListConditionalRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DeleteWhiteListConditional")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteWhiteListConditionalRequest::~DeleteWhiteListConditionalRequest()
{}

std::string DeleteWhiteListConditionalRequest::getSrcIP()const
{
	return srcIP_;
}

void DeleteWhiteListConditionalRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

std::string DeleteWhiteListConditionalRequest::getSourceCode()const
{
	return sourceCode_;
}

void DeleteWhiteListConditionalRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DeleteWhiteListConditionalRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteWhiteListConditionalRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteWhiteListConditionalRequest::getQueryProduct()const
{
	return queryProduct_;
}

void DeleteWhiteListConditionalRequest::setQueryProduct(const std::string& queryProduct)
{
	queryProduct_ = queryProduct;
	setParameter("QueryProduct", queryProduct);
}

std::string DeleteWhiteListConditionalRequest::getDstIP()const
{
	return dstIP_;
}

void DeleteWhiteListConditionalRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setParameter("DstIP", dstIP);
}

std::string DeleteWhiteListConditionalRequest::getLang()const
{
	return lang_;
}

void DeleteWhiteListConditionalRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

