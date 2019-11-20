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

#include <alibabacloud/sas/model/DescribeRiskCheckResultRequest.h>

using AlibabaCloud::Sas::Model::DescribeRiskCheckResultRequest;

DescribeRiskCheckResultRequest::DescribeRiskCheckResultRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeRiskCheckResult")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRiskCheckResultRequest::~DescribeRiskCheckResultRequest()
{}

long DescribeRiskCheckResultRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRiskCheckResultRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRiskCheckResultRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeRiskCheckResultRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeRiskCheckResultRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRiskCheckResultRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRiskCheckResultRequest::getLang()const
{
	return lang_;
}

void DescribeRiskCheckResultRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeRiskCheckResultRequest::getAssetType()const
{
	return assetType_;
}

void DescribeRiskCheckResultRequest::setAssetType(const std::string& assetType)
{
	assetType_ = assetType;
	setCoreParameter("AssetType", assetType);
}

long DescribeRiskCheckResultRequest::getGroupId()const
{
	return groupId_;
}

void DescribeRiskCheckResultRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::vector<std::string> DescribeRiskCheckResultRequest::getItemIds()const
{
	return itemIds_;
}

void DescribeRiskCheckResultRequest::setItemIds(const std::vector<std::string>& itemIds)
{
	itemIds_ = itemIds;
	for(int dep1 = 0; dep1!= itemIds.size(); dep1++)
		setCoreParameter("ItemIds."+ std::to_string(dep1), itemIds.at(dep1));
}

int DescribeRiskCheckResultRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeRiskCheckResultRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeRiskCheckResultRequest::getRiskLevel()const
{
	return riskLevel_;
}

void DescribeRiskCheckResultRequest::setRiskLevel(const std::string& riskLevel)
{
	riskLevel_ = riskLevel;
	setCoreParameter("RiskLevel", riskLevel);
}

std::string DescribeRiskCheckResultRequest::getName()const
{
	return name_;
}

void DescribeRiskCheckResultRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string DescribeRiskCheckResultRequest::getStatus()const
{
	return status_;
}

void DescribeRiskCheckResultRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

