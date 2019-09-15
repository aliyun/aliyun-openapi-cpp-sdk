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

#include <alibabacloud/aegis/model/DescribeEntityListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeEntityListRequest;

DescribeEntityListRequest::DescribeEntityListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeEntityList")
{}

DescribeEntityListRequest::~DescribeEntityListRequest()
{}

std::string DescribeEntityListRequest::getTagIdList()const
{
	return tagIdList_;
}

void DescribeEntityListRequest::setTagIdList(const std::string& tagIdList)
{
	tagIdList_ = tagIdList;
	setCoreParameter("TagIdList", tagIdList);
}

std::string DescribeEntityListRequest::getRemark()const
{
	return remark_;
}

void DescribeEntityListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeEntityListRequest::getPatch()const
{
	return patch_;
}

void DescribeEntityListRequest::setPatch(const std::string& patch)
{
	patch_ = patch;
	setCoreParameter("Patch", patch);
}

std::string DescribeEntityListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEntityListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeEntityListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeEntityListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeEntityListRequest::getFrom()const
{
	return from_;
}

void DescribeEntityListRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeEntityListRequest::getOs()const
{
	return os_;
}

void DescribeEntityListRequest::setOs(const std::string& os)
{
	os_ = os;
	setCoreParameter("Os", os);
}

long DescribeEntityListRequest::getGroupId()const
{
	return groupId_;
}

void DescribeEntityListRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string DescribeEntityListRequest::getHealth()const
{
	return health_;
}

void DescribeEntityListRequest::setHealth(const std::string& health)
{
	health_ = health;
	setCoreParameter("Health", health);
}

int DescribeEntityListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeEntityListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeEntityListRequest::getTrojan()const
{
	return trojan_;
}

void DescribeEntityListRequest::setTrojan(const std::string& trojan)
{
	trojan_ = trojan;
	setCoreParameter("Trojan", trojan);
}

std::string DescribeEntityListRequest::getSuspicious()const
{
	return suspicious_;
}

void DescribeEntityListRequest::setSuspicious(const std::string& suspicious)
{
	suspicious_ = suspicious;
	setCoreParameter("Suspicious", suspicious);
}

std::string DescribeEntityListRequest::getRegionNo()const
{
	return regionNo_;
}

void DescribeEntityListRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setCoreParameter("RegionNo", regionNo);
}

std::string DescribeEntityListRequest::getAccount()const
{
	return account_;
}

void DescribeEntityListRequest::setAccount(const std::string& account)
{
	account_ = account;
	setCoreParameter("Account", account);
}

std::string DescribeEntityListRequest::getStatus()const
{
	return status_;
}

void DescribeEntityListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

