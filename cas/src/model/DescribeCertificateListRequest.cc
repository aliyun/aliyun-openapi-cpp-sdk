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

#include <alibabacloud/cas/model/DescribeCertificateListRequest.h>

using AlibabaCloud::Cas::Model::DescribeCertificateListRequest;

DescribeCertificateListRequest::DescribeCertificateListRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeCertificateList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCertificateListRequest::~DescribeCertificateListRequest()
{}

std::string DescribeCertificateListRequest::getSortType()const
{
	return sortType_;
}

void DescribeCertificateListRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setParameter("SortType", sortType);
}

std::string DescribeCertificateListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeCertificateListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeCertificateListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCertificateListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::vector<DescribeCertificateListRequest::Tag> DescribeCertificateListRequest::getTag()const
{
	return tag_;
}

void DescribeCertificateListRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeCertificateListRequest::getLang()const
{
	return lang_;
}

void DescribeCertificateListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeCertificateListRequest::getKeyword()const
{
	return keyword_;
}

void DescribeCertificateListRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

int DescribeCertificateListRequest::getShowSize()const
{
	return showSize_;
}

void DescribeCertificateListRequest::setShowSize(int showSize)
{
	showSize_ = showSize;
	setParameter("ShowSize", std::to_string(showSize));
}

int DescribeCertificateListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCertificateListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeCertificateListRequest::getSortColumn()const
{
	return sortColumn_;
}

void DescribeCertificateListRequest::setSortColumn(const std::string& sortColumn)
{
	sortColumn_ = sortColumn;
	setParameter("SortColumn", sortColumn);
}

std::string DescribeCertificateListRequest::getStatus()const
{
	return status_;
}

void DescribeCertificateListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

