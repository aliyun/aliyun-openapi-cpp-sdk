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

#include <alibabacloud/aegis/model/DescribeTotalStatisticsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeTotalStatisticsRequest;

DescribeTotalStatisticsRequest::DescribeTotalStatisticsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeTotalStatistics")
{}

DescribeTotalStatisticsRequest::~DescribeTotalStatisticsRequest()
{}

std::string DescribeTotalStatisticsRequest::getStatusList()const
{
	return statusList_;
}

void DescribeTotalStatisticsRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", statusList);
}

std::string DescribeTotalStatisticsRequest::getRemark()const
{
	return remark_;
}

void DescribeTotalStatisticsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string DescribeTotalStatisticsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeTotalStatisticsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeTotalStatisticsRequest::getType()const
{
	return type_;
}

void DescribeTotalStatisticsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeTotalStatisticsRequest::getUuid()const
{
	return uuid_;
}

void DescribeTotalStatisticsRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string DescribeTotalStatisticsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeTotalStatisticsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeTotalStatisticsRequest::getWebGroupId()const
{
	return webGroupId_;
}

void DescribeTotalStatisticsRequest::setWebGroupId(long webGroupId)
{
	webGroupId_ = webGroupId;
	setCoreParameter("WebGroupId", std::to_string(webGroupId));
}

int DescribeTotalStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTotalStatisticsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTotalStatisticsRequest::getFrom()const
{
	return from_;
}

void DescribeTotalStatisticsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeTotalStatisticsRequest::getTag()const
{
	return tag_;
}

void DescribeTotalStatisticsRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

int DescribeTotalStatisticsRequest::getFlow()const
{
	return flow_;
}

void DescribeTotalStatisticsRequest::setFlow(int flow)
{
	flow_ = flow;
	setCoreParameter("Flow", std::to_string(flow));
}

std::string DescribeTotalStatisticsRequest::getSaleId()const
{
	return saleId_;
}

void DescribeTotalStatisticsRequest::setSaleId(const std::string& saleId)
{
	saleId_ = saleId;
	setCoreParameter("SaleId", saleId);
}

int DescribeTotalStatisticsRequest::getRuleType()const
{
	return ruleType_;
}

void DescribeTotalStatisticsRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setCoreParameter("RuleType", std::to_string(ruleType));
}

long DescribeTotalStatisticsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeTotalStatisticsRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string DescribeTotalStatisticsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeTotalStatisticsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeTotalStatisticsRequest::getDealed()const
{
	return dealed_;
}

void DescribeTotalStatisticsRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", dealed);
}

int DescribeTotalStatisticsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeTotalStatisticsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeTotalStatisticsRequest::getSecureToken()const
{
	return secureToken_;
}

void DescribeTotalStatisticsRequest::setSecureToken(const std::string& secureToken)
{
	secureToken_ = secureToken;
	setCoreParameter("SecureToken", secureToken);
}

int DescribeTotalStatisticsRequest::getAction1()const
{
	return action1_;
}

void DescribeTotalStatisticsRequest::setAction1(int action1)
{
	action1_ = action1;
	setCoreParameter("Action1", std::to_string(action1));
}

int DescribeTotalStatisticsRequest::getStatus()const
{
	return status_;
}

void DescribeTotalStatisticsRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

