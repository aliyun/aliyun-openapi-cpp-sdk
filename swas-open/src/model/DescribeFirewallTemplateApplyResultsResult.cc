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

#include <alibabacloud/swas-open/model/DescribeFirewallTemplateApplyResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeFirewallTemplateApplyResultsResult::DescribeFirewallTemplateApplyResultsResult() :
	ServiceResult()
{}

DescribeFirewallTemplateApplyResultsResult::DescribeFirewallTemplateApplyResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFirewallTemplateApplyResultsResult::~DescribeFirewallTemplateApplyResultsResult()
{}

void DescribeFirewallTemplateApplyResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alldataNode = value["data"]["ApplyFirewallTemplateResult"];
	for (auto valuedataApplyFirewallTemplateResult : alldataNode)
	{
		ApplyFirewallTemplateResult dataObject;
		if(!valuedataApplyFirewallTemplateResult["TaskId"].isNull())
			dataObject.taskId = valuedataApplyFirewallTemplateResult["TaskId"].asString();
		if(!valuedataApplyFirewallTemplateResult["FirewallTemplateId"].isNull())
			dataObject.firewallTemplateId = valuedataApplyFirewallTemplateResult["FirewallTemplateId"].asString();
		if(!valuedataApplyFirewallTemplateResult["Status"].isNull())
			dataObject.status = valuedataApplyFirewallTemplateResult["Status"].asString();
		if(!valuedataApplyFirewallTemplateResult["TotalCount"].isNull())
			dataObject.totalCount = valuedataApplyFirewallTemplateResult["TotalCount"].asString();
		if(!valuedataApplyFirewallTemplateResult["FailedCount"].isNull())
			dataObject.failedCount = valuedataApplyFirewallTemplateResult["FailedCount"].asString();
		if(!valuedataApplyFirewallTemplateResult["CreateTime"].isNull())
			dataObject.createTime = valuedataApplyFirewallTemplateResult["CreateTime"].asString();
		auto allInstanceApplyResultsNode = valuedataApplyFirewallTemplateResult["InstanceApplyResults"]["ApplyInstanceResult"];
		for (auto valuedataApplyFirewallTemplateResultInstanceApplyResultsApplyInstanceResult : allInstanceApplyResultsNode)
		{
			ApplyFirewallTemplateResult::ApplyInstanceResult instanceApplyResultsObject;
			if(!valuedataApplyFirewallTemplateResultInstanceApplyResultsApplyInstanceResult["InstanceId"].isNull())
				instanceApplyResultsObject.instanceId = valuedataApplyFirewallTemplateResultInstanceApplyResultsApplyInstanceResult["InstanceId"].asString();
			if(!valuedataApplyFirewallTemplateResultInstanceApplyResultsApplyInstanceResult["Status"].isNull())
				instanceApplyResultsObject.status = valuedataApplyFirewallTemplateResultInstanceApplyResultsApplyInstanceResult["Status"].asString();
			dataObject.instanceApplyResults.push_back(instanceApplyResultsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string DescribeFirewallTemplateApplyResultsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeFirewallTemplateApplyResultsResult::ApplyFirewallTemplateResult> DescribeFirewallTemplateApplyResultsResult::getdata()const
{
	return data_;
}

std::string DescribeFirewallTemplateApplyResultsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeFirewallTemplateApplyResultsResult::getPageNumber()const
{
	return pageNumber_;
}

