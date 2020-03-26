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

#include <alibabacloud/sas/model/DescribeAllRegionsStatisticsRequest.h>

using AlibabaCloud::Sas::Model::DescribeAllRegionsStatisticsRequest;

DescribeAllRegionsStatisticsRequest::DescribeAllRegionsStatisticsRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeAllRegionsStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAllRegionsStatisticsRequest::~DescribeAllRegionsStatisticsRequest()
{}

std::string DescribeAllRegionsStatisticsRequest::getStatusList()const
{
	return statusList_;
}

void DescribeAllRegionsStatisticsRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

bool DescribeAllRegionsStatisticsRequest::getAllRegion()const
{
	return allRegion_;
}

void DescribeAllRegionsStatisticsRequest::setAllRegion(bool allRegion)
{
	allRegion_ = allRegion;
	setParameter("AllRegion", allRegion ? "true" : "false");
}

std::string DescribeAllRegionsStatisticsRequest::getRemark()const
{
	return remark_;
}

void DescribeAllRegionsStatisticsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DescribeAllRegionsStatisticsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAllRegionsStatisticsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeAllRegionsStatisticsRequest::getType()const
{
	return type_;
}

void DescribeAllRegionsStatisticsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeAllRegionsStatisticsRequest::getUuid()const
{
	return uuid_;
}

void DescribeAllRegionsStatisticsRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string DescribeAllRegionsStatisticsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAllRegionsStatisticsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeAllRegionsStatisticsRequest::getWebGroupId()const
{
	return webGroupId_;
}

void DescribeAllRegionsStatisticsRequest::setWebGroupId(long webGroupId)
{
	webGroupId_ = webGroupId;
	setParameter("WebGroupId", std::to_string(webGroupId));
}

int DescribeAllRegionsStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAllRegionsStatisticsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAllRegionsStatisticsRequest::getFrom()const
{
	return from_;
}

void DescribeAllRegionsStatisticsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setParameter("From", from);
}

std::string DescribeAllRegionsStatisticsRequest::getTag()const
{
	return tag_;
}

void DescribeAllRegionsStatisticsRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setParameter("Tag", tag);
}

int DescribeAllRegionsStatisticsRequest::getFlow()const
{
	return flow_;
}

void DescribeAllRegionsStatisticsRequest::setFlow(int flow)
{
	flow_ = flow;
	setParameter("Flow", std::to_string(flow));
}

std::string DescribeAllRegionsStatisticsRequest::getSaleId()const
{
	return saleId_;
}

void DescribeAllRegionsStatisticsRequest::setSaleId(const std::string& saleId)
{
	saleId_ = saleId;
	setParameter("SaleId", saleId);
}

int DescribeAllRegionsStatisticsRequest::getRuleType()const
{
	return ruleType_;
}

void DescribeAllRegionsStatisticsRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", std::to_string(ruleType));
}

long DescribeAllRegionsStatisticsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAllRegionsStatisticsRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string DescribeAllRegionsStatisticsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAllRegionsStatisticsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeAllRegionsStatisticsRequest::getDealed()const
{
	return dealed_;
}

void DescribeAllRegionsStatisticsRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

int DescribeAllRegionsStatisticsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAllRegionsStatisticsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAllRegionsStatisticsRequest::getSecureToken()const
{
	return secureToken_;
}

void DescribeAllRegionsStatisticsRequest::setSecureToken(const std::string& secureToken)
{
	secureToken_ = secureToken;
	setParameter("SecureToken", secureToken);
}

int DescribeAllRegionsStatisticsRequest::getAction1()const
{
	return action1_;
}

void DescribeAllRegionsStatisticsRequest::setAction1(int action1)
{
	action1_ = action1;
	setParameter("Action1", std::to_string(action1));
}

int DescribeAllRegionsStatisticsRequest::getStatus()const
{
	return status_;
}

void DescribeAllRegionsStatisticsRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

