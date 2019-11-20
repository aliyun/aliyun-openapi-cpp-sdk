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

#include <alibabacloud/cas/model/DescribeOrderListRequest.h>

using AlibabaCloud::Cas::Model::DescribeOrderListRequest;

DescribeOrderListRequest::DescribeOrderListRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeOrderList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOrderListRequest::~DescribeOrderListRequest()
{}

std::string DescribeOrderListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeOrderListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeOrderListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOrderListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeOrderListRequest::getBrandId()const
{
	return brandId_;
}

void DescribeOrderListRequest::setBrandId(long brandId)
{
	brandId_ = brandId;
	setCoreParameter("BrandId", std::to_string(brandId));
}

std::vector<DescribeOrderListRequest::Tag> DescribeOrderListRequest::getTag()const
{
	return tag_;
}

void DescribeOrderListRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeOrderListRequest::getKeyword()const
{
	return keyword_;
}

void DescribeOrderListRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setCoreParameter("Keyword", keyword);
}

std::string DescribeOrderListRequest::getLang()const
{
	return lang_;
}

void DescribeOrderListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeOrderListRequest::getShowSize()const
{
	return showSize_;
}

void DescribeOrderListRequest::setShowSize(int showSize)
{
	showSize_ = showSize;
	setCoreParameter("ShowSize", std::to_string(showSize));
}

int DescribeOrderListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeOrderListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeOrderListRequest::getStatus()const
{
	return status_;
}

void DescribeOrderListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

