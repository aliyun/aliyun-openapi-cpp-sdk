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

#include <alibabacloud/green/model/CreateBizTypeRequest.h>

using AlibabaCloud::Green::Model::CreateBizTypeRequest;

CreateBizTypeRequest::CreateBizTypeRequest() :
	RpcServiceRequest("green", "2017-08-23", "CreateBizType")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBizTypeRequest::~CreateBizTypeRequest()
{}

std::string CreateBizTypeRequest::getDescription()const
{
	return description_;
}

void CreateBizTypeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateBizTypeRequest::getBizTypeImport()const
{
	return bizTypeImport_;
}

void CreateBizTypeRequest::setBizTypeImport(const std::string& bizTypeImport)
{
	bizTypeImport_ = bizTypeImport;
	setParameter("BizTypeImport", bizTypeImport);
}

bool CreateBizTypeRequest::getCiteTemplate()const
{
	return citeTemplate_;
}

void CreateBizTypeRequest::setCiteTemplate(bool citeTemplate)
{
	citeTemplate_ = citeTemplate;
	setParameter("CiteTemplate", citeTemplate ? "true" : "false");
}

std::string CreateBizTypeRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateBizTypeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateBizTypeRequest::getIndustryInfo()const
{
	return industryInfo_;
}

void CreateBizTypeRequest::setIndustryInfo(const std::string& industryInfo)
{
	industryInfo_ = industryInfo;
	setParameter("IndustryInfo", industryInfo);
}

std::string CreateBizTypeRequest::getBizTypeName()const
{
	return bizTypeName_;
}

void CreateBizTypeRequest::setBizTypeName(const std::string& bizTypeName)
{
	bizTypeName_ = bizTypeName;
	setParameter("BizTypeName", bizTypeName);
}

