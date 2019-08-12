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

#include <alibabacloud/aegis/model/DescribeWhiteListEffectiveAssetsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWhiteListEffectiveAssetsRequest;

DescribeWhiteListEffectiveAssetsRequest::DescribeWhiteListEffectiveAssetsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWhiteListEffectiveAssets")
{}

DescribeWhiteListEffectiveAssetsRequest::~DescribeWhiteListEffectiveAssetsRequest()
{}

std::string DescribeWhiteListEffectiveAssetsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWhiteListEffectiveAssetsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeWhiteListEffectiveAssetsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWhiteListEffectiveAssetsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeWhiteListEffectiveAssetsRequest::getRemark()const
{
	return remark_;
}

void DescribeWhiteListEffectiveAssetsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

long DescribeWhiteListEffectiveAssetsRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeWhiteListEffectiveAssetsRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", strategyId);
}

int DescribeWhiteListEffectiveAssetsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWhiteListEffectiveAssetsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeWhiteListEffectiveAssetsRequest::getLang()const
{
	return lang_;
}

void DescribeWhiteListEffectiveAssetsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeWhiteListEffectiveAssetsRequest::getNeedStatistics()const
{
	return needStatistics_;
}

void DescribeWhiteListEffectiveAssetsRequest::setNeedStatistics(int needStatistics)
{
	needStatistics_ = needStatistics;
	setCoreParameter("NeedStatistics", needStatistics);
}

