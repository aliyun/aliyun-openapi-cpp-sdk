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
{}

DescribeCertificateListRequest::~DescribeCertificateListRequest()
{}

std::string DescribeCertificateListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeCertificateListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeCertificateListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCertificateListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeCertificateListRequest::getSortType()const
{
	return sortType_;
}

void DescribeCertificateListRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setCoreParameter("SortType", sortType);
}

std::string DescribeCertificateListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCertificateListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeCertificateListRequest::getShowSize()const
{
	return showSize_;
}

void DescribeCertificateListRequest::setShowSize(int showSize)
{
	showSize_ = showSize;
	setCoreParameter("ShowSize", showSize);
}

std::string DescribeCertificateListRequest::getSortColumn()const
{
	return sortColumn_;
}

void DescribeCertificateListRequest::setSortColumn(const std::string& sortColumn)
{
	sortColumn_ = sortColumn;
	setCoreParameter("SortColumn", sortColumn);
}

int DescribeCertificateListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCertificateListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::vector<DescribeCertificateListRequest::Tag> DescribeCertificateListRequest::getTag()const
{
	return tag_;
}

void DescribeCertificateListRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string DescribeCertificateListRequest::getLang()const
{
	return lang_;
}

void DescribeCertificateListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeCertificateListRequest::getKeyword()const
{
	return keyword_;
}

void DescribeCertificateListRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setCoreParameter("Keyword", keyword);
}

std::string DescribeCertificateListRequest::getStatus()const
{
	return status_;
}

void DescribeCertificateListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

