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
{}

DeleteWhiteListConditionalRequest::~DeleteWhiteListConditionalRequest()
{}

std::string DeleteWhiteListConditionalRequest::getSrcIP()const
{
	return srcIP_;
}

void DeleteWhiteListConditionalRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", std::to_string(srcIP));
}

std::string DeleteWhiteListConditionalRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteWhiteListConditionalRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DeleteWhiteListConditionalRequest::getQueryProduct()const
{
	return queryProduct_;
}

void DeleteWhiteListConditionalRequest::setQueryProduct(const std::string& queryProduct)
{
	queryProduct_ = queryProduct;
	setCoreParameter("QueryProduct", std::to_string(queryProduct));
}

std::string DeleteWhiteListConditionalRequest::getDstIP()const
{
	return dstIP_;
}

void DeleteWhiteListConditionalRequest::setDstIP(const std::string& dstIP)
{
	dstIP_ = dstIP;
	setCoreParameter("DstIP", std::to_string(dstIP));
}

std::string DeleteWhiteListConditionalRequest::getLang()const
{
	return lang_;
}

void DeleteWhiteListConditionalRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DeleteWhiteListConditionalRequest::getSourceCode()const
{
	return sourceCode_;
}

void DeleteWhiteListConditionalRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", std::to_string(sourceCode));
}

