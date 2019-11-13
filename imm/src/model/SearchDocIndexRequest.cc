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

#include <alibabacloud/imm/model/SearchDocIndexRequest.h>

using AlibabaCloud::Imm::Model::SearchDocIndexRequest;

SearchDocIndexRequest::SearchDocIndexRequest() :
	RpcServiceRequest("imm", "2017-09-06", "SearchDocIndex")
{
	setMethod(HttpRequest::Method::Post);
}

SearchDocIndexRequest::~SearchDocIndexRequest()
{}

int SearchDocIndexRequest::getModifiedTimeEnd()const
{
	return modifiedTimeEnd_;
}

void SearchDocIndexRequest::setModifiedTimeEnd(int modifiedTimeEnd)
{
	modifiedTimeEnd_ = modifiedTimeEnd;
	setCoreParameter("ModifiedTimeEnd", std::to_string(modifiedTimeEnd));
}

int SearchDocIndexRequest::getSizeLimitEnd()const
{
	return sizeLimitEnd_;
}

void SearchDocIndexRequest::setSizeLimitEnd(int sizeLimitEnd)
{
	sizeLimitEnd_ = sizeLimitEnd;
	setCoreParameter("SizeLimitEnd", std::to_string(sizeLimitEnd));
}

std::string SearchDocIndexRequest::getProject()const
{
	return project_;
}

void SearchDocIndexRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

int SearchDocIndexRequest::getModifiedTimeStart()const
{
	return modifiedTimeStart_;
}

void SearchDocIndexRequest::setModifiedTimeStart(int modifiedTimeStart)
{
	modifiedTimeStart_ = modifiedTimeStart;
	setCoreParameter("ModifiedTimeStart", std::to_string(modifiedTimeStart));
}

int SearchDocIndexRequest::getPageNumLimitStart()const
{
	return pageNumLimitStart_;
}

void SearchDocIndexRequest::setPageNumLimitStart(int pageNumLimitStart)
{
	pageNumLimitStart_ = pageNumLimitStart;
	setCoreParameter("PageNumLimitStart", std::to_string(pageNumLimitStart));
}

std::string SearchDocIndexRequest::getContent()const
{
	return content_;
}

void SearchDocIndexRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", content);
}

std::string SearchDocIndexRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SearchDocIndexRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int SearchDocIndexRequest::getSizeLimitStart()const
{
	return sizeLimitStart_;
}

void SearchDocIndexRequest::setSizeLimitStart(int sizeLimitStart)
{
	sizeLimitStart_ = sizeLimitStart;
	setCoreParameter("SizeLimitStart", std::to_string(sizeLimitStart));
}

int SearchDocIndexRequest::getLimit()const
{
	return limit_;
}

void SearchDocIndexRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

std::string SearchDocIndexRequest::getCustomKey1()const
{
	return customKey1_;
}

void SearchDocIndexRequest::setCustomKey1(const std::string& customKey1)
{
	customKey1_ = customKey1;
	setCoreParameter("CustomKey1", customKey1);
}

std::string SearchDocIndexRequest::getSet()const
{
	return set_;
}

void SearchDocIndexRequest::setSet(const std::string& set)
{
	set_ = set;
	setCoreParameter("Set", set);
}

std::string SearchDocIndexRequest::getCustomKey5()const
{
	return customKey5_;
}

void SearchDocIndexRequest::setCustomKey5(const std::string& customKey5)
{
	customKey5_ = customKey5;
	setCoreParameter("CustomKey5", customKey5);
}

int SearchDocIndexRequest::getOffset()const
{
	return offset_;
}

void SearchDocIndexRequest::setOffset(int offset)
{
	offset_ = offset;
	setCoreParameter("Offset", std::to_string(offset));
}

std::string SearchDocIndexRequest::getCustomKey4()const
{
	return customKey4_;
}

void SearchDocIndexRequest::setCustomKey4(const std::string& customKey4)
{
	customKey4_ = customKey4;
	setCoreParameter("CustomKey4", customKey4);
}

std::string SearchDocIndexRequest::getCustomKey3()const
{
	return customKey3_;
}

void SearchDocIndexRequest::setCustomKey3(const std::string& customKey3)
{
	customKey3_ = customKey3;
	setCoreParameter("CustomKey3", customKey3);
}

std::string SearchDocIndexRequest::getCustomKey2()const
{
	return customKey2_;
}

void SearchDocIndexRequest::setCustomKey2(const std::string& customKey2)
{
	customKey2_ = customKey2;
	setCoreParameter("CustomKey2", customKey2);
}

std::string SearchDocIndexRequest::getCustomKey6()const
{
	return customKey6_;
}

void SearchDocIndexRequest::setCustomKey6(const std::string& customKey6)
{
	customKey6_ = customKey6;
	setCoreParameter("CustomKey6", customKey6);
}

int SearchDocIndexRequest::getPageNumLimitEnd()const
{
	return pageNumLimitEnd_;
}

void SearchDocIndexRequest::setPageNumLimitEnd(int pageNumLimitEnd)
{
	pageNumLimitEnd_ = pageNumLimitEnd;
	setCoreParameter("PageNumLimitEnd", std::to_string(pageNumLimitEnd));
}

std::string SearchDocIndexRequest::getContentType()const
{
	return contentType_;
}

void SearchDocIndexRequest::setContentType(const std::string& contentType)
{
	contentType_ = contentType;
	setCoreParameter("ContentType", contentType);
}

std::string SearchDocIndexRequest::getName()const
{
	return name_;
}

void SearchDocIndexRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

