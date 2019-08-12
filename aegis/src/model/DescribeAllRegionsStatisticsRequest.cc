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

#include <alibabacloud/aegis/model/DescribeAllRegionsStatisticsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeAllRegionsStatisticsRequest;

DescribeAllRegionsStatisticsRequest::DescribeAllRegionsStatisticsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeAllRegionsStatistics")
{}

DescribeAllRegionsStatisticsRequest::~DescribeAllRegionsStatisticsRequest()
{}

std::string DescribeAllRegionsStatisticsRequest::getStatusList()const
{
	return statusList_;
}

void DescribeAllRegionsStatisticsRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", std::to_string(statusList));
}

std::string DescribeAllRegionsStatisticsRequest::getSaleId()const
{
	return saleId_;
}

void DescribeAllRegionsStatisticsRequest::setSaleId(const std::string& saleId)
{
	saleId_ = saleId;
	setCoreParameter("SaleId", std::to_string(saleId));
}

int DescribeAllRegionsStatisticsRequest::getRuleType()const
{
	return ruleType_;
}

void DescribeAllRegionsStatisticsRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setCoreParameter("RuleType", ruleType);
}

long DescribeAllRegionsStatisticsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAllRegionsStatisticsRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeAllRegionsStatisticsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAllRegionsStatisticsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeAllRegionsStatisticsRequest::getRemark()const
{
	return remark_;
}

void DescribeAllRegionsStatisticsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", std::to_string(remark));
}

std::string DescribeAllRegionsStatisticsRequest::getDealed()const
{
	return dealed_;
}

void DescribeAllRegionsStatisticsRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", std::to_string(dealed));
}

int DescribeAllRegionsStatisticsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAllRegionsStatisticsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeAllRegionsStatisticsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAllRegionsStatisticsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeAllRegionsStatisticsRequest::getType()const
{
	return type_;
}

void DescribeAllRegionsStatisticsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string DescribeAllRegionsStatisticsRequest::getUuid()const
{
	return uuid_;
}

void DescribeAllRegionsStatisticsRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", std::to_string(uuid));
}

std::string DescribeAllRegionsStatisticsRequest::getSecureToken()const
{
	return secureToken_;
}

void DescribeAllRegionsStatisticsRequest::setSecureToken(const std::string& secureToken)
{
	secureToken_ = secureToken;
	setCoreParameter("SecureToken", std::to_string(secureToken));
}

std::string DescribeAllRegionsStatisticsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAllRegionsStatisticsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

long DescribeAllRegionsStatisticsRequest::getWebGroupId()const
{
	return webGroupId_;
}

void DescribeAllRegionsStatisticsRequest::setWebGroupId(long webGroupId)
{
	webGroupId_ = webGroupId;
	setCoreParameter("WebGroupId", webGroupId);
}

int DescribeAllRegionsStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAllRegionsStatisticsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeAllRegionsStatisticsRequest::getFrom()const
{
	return from_;
}

void DescribeAllRegionsStatisticsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", std::to_string(from));
}

int DescribeAllRegionsStatisticsRequest::getAction1()const
{
	return action1_;
}

void DescribeAllRegionsStatisticsRequest::setAction1(int action1)
{
	action1_ = action1;
	setCoreParameter("Action1", action1);
}

std::string DescribeAllRegionsStatisticsRequest::getTag()const
{
	return tag_;
}

void DescribeAllRegionsStatisticsRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", std::to_string(tag));
}

int DescribeAllRegionsStatisticsRequest::getFlow()const
{
	return flow_;
}

void DescribeAllRegionsStatisticsRequest::setFlow(int flow)
{
	flow_ = flow;
	setCoreParameter("Flow", flow);
}

int DescribeAllRegionsStatisticsRequest::getStatus()const
{
	return status_;
}

void DescribeAllRegionsStatisticsRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

