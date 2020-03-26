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

#include <alibabacloud/jarvis/model/DeleteWhiteListDbItemConditionalRequest.h>

using AlibabaCloud::Jarvis::Model::DeleteWhiteListDbItemConditionalRequest;

DeleteWhiteListDbItemConditionalRequest::DeleteWhiteListDbItemConditionalRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DeleteWhiteListDbItemConditional")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteWhiteListDbItemConditionalRequest::~DeleteWhiteListDbItemConditionalRequest()
{}

std::string DeleteWhiteListDbItemConditionalRequest::getSrcIP()const
{
	return srcIP_;
}

void DeleteWhiteListDbItemConditionalRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setParameter("SrcIP", srcIP);
}

std::string DeleteWhiteListDbItemConditionalRequest::getSourceCode()const
{
	return sourceCode_;
}

void DeleteWhiteListDbItemConditionalRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

std::string DeleteWhiteListDbItemConditionalRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteWhiteListDbItemConditionalRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteWhiteListDbItemConditionalRequest::getQueryProduct()const
{
	return queryProduct_;
}

void DeleteWhiteListDbItemConditionalRequest::setQueryProduct(const std::string& queryProduct)
{
	queryProduct_ = queryProduct;
	setParameter("QueryProduct", queryProduct);
}

std::string DeleteWhiteListDbItemConditionalRequest::getDstIP()const
{
	return dstIP_;
}

void DeleteWhiteListDbItemConditionalRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setParameter("DstIP", dstIP);
}

std::string DeleteWhiteListDbItemConditionalRequest::getLang()const
{
	return lang_;
}

void DeleteWhiteListDbItemConditionalRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

