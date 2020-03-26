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

#include <alibabacloud/green/model/MarkOssResultRequest.h>

using AlibabaCloud::Green::Model::MarkOssResultRequest;

MarkOssResultRequest::MarkOssResultRequest() :
	RpcServiceRequest("green", "2017-08-23", "MarkOssResult")
{
	setMethod(HttpRequest::Method::Post);
}

MarkOssResultRequest::~MarkOssResultRequest()
{}

std::string MarkOssResultRequest::getScene()const
{
	return scene_;
}

void MarkOssResultRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string MarkOssResultRequest::getSourceIp()const
{
	return sourceIp_;
}

void MarkOssResultRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string MarkOssResultRequest::getLang()const
{
	return lang_;
}

void MarkOssResultRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

bool MarkOssResultRequest::getStock()const
{
	return stock_;
}

void MarkOssResultRequest::setStock(bool stock)
{
	stock_ = stock;
	setParameter("Stock", stock ? "true" : "false");
}

std::string MarkOssResultRequest::getResourceType()const
{
	return resourceType_;
}

void MarkOssResultRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string MarkOssResultRequest::getIds()const
{
	return ids_;
}

void MarkOssResultRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setParameter("Ids", ids);
}

std::string MarkOssResultRequest::getOperation()const
{
	return operation_;
}

void MarkOssResultRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setParameter("Operation", operation);
}

