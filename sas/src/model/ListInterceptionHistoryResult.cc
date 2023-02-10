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

#include <alibabacloud/sas/model/ListInterceptionHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListInterceptionHistoryResult::ListInterceptionHistoryResult() :
	ServiceResult()
{}

ListInterceptionHistoryResult::ListInterceptionHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInterceptionHistoryResult::~ListInterceptionHistoryResult()
{}

void ListInterceptionHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInterceptionHistoryListNode = value["InterceptionHistoryList"]["InterceptionHistory"];
	for (auto valueInterceptionHistoryListInterceptionHistory : allInterceptionHistoryListNode)
	{
		InterceptionHistory interceptionHistoryListObject;
		if(!valueInterceptionHistoryListInterceptionHistory["SrcNamespace"].isNull())
			interceptionHistoryListObject.srcNamespace = valueInterceptionHistoryListInterceptionHistory["SrcNamespace"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["SrcRuleTargetName"].isNull())
			interceptionHistoryListObject.srcRuleTargetName = valueInterceptionHistoryListInterceptionHistory["SrcRuleTargetName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RiskLevel"].isNull())
			interceptionHistoryListObject.riskLevel = std::stol(valueInterceptionHistoryListInterceptionHistory["RiskLevel"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["Status"].isNull())
			interceptionHistoryListObject.status = std::stol(valueInterceptionHistoryListInterceptionHistory["Status"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["DstImageList"].isNull())
			interceptionHistoryListObject.dstImageList = valueInterceptionHistoryListInterceptionHistory["DstImageList"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["SrcTagList"].isNull())
			interceptionHistoryListObject.srcTagList = valueInterceptionHistoryListInterceptionHistory["SrcTagList"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["DstPort"].isNull())
			interceptionHistoryListObject.dstPort = std::stol(valueInterceptionHistoryListInterceptionHistory["DstPort"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["FirstTime"].isNull())
			interceptionHistoryListObject.firstTime = std::stol(valueInterceptionHistoryListInterceptionHistory["FirstTime"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["SrcAppName"].isNull())
			interceptionHistoryListObject.srcAppName = valueInterceptionHistoryListInterceptionHistory["SrcAppName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["SrcImageList"].isNull())
			interceptionHistoryListObject.srcImageList = valueInterceptionHistoryListInterceptionHistory["SrcImageList"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RuleId"].isNull())
			interceptionHistoryListObject.ruleId = std::stol(valueInterceptionHistoryListInterceptionHistory["RuleId"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["RuleName"].isNull())
			interceptionHistoryListObject.ruleName = valueInterceptionHistoryListInterceptionHistory["RuleName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["InterceptionName"].isNull())
			interceptionHistoryListObject.interceptionName = std::stol(valueInterceptionHistoryListInterceptionHistory["InterceptionName"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["DstNamespace"].isNull())
			interceptionHistoryListObject.dstNamespace = valueInterceptionHistoryListInterceptionHistory["DstNamespace"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["LastTime"].isNull())
			interceptionHistoryListObject.lastTime = std::stol(valueInterceptionHistoryListInterceptionHistory["LastTime"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["DstAppName"].isNull())
			interceptionHistoryListObject.dstAppName = valueInterceptionHistoryListInterceptionHistory["DstAppName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["DstRuleTargetName"].isNull())
			interceptionHistoryListObject.dstRuleTargetName = valueInterceptionHistoryListInterceptionHistory["DstRuleTargetName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["ClusterName"].isNull())
			interceptionHistoryListObject.clusterName = valueInterceptionHistoryListInterceptionHistory["ClusterName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["TryCount"].isNull())
			interceptionHistoryListObject.tryCount = std::stoi(valueInterceptionHistoryListInterceptionHistory["TryCount"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["DstTagList"].isNull())
			interceptionHistoryListObject.dstTagList = valueInterceptionHistoryListInterceptionHistory["DstTagList"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["InterceptionType"].isNull())
			interceptionHistoryListObject.interceptionType = std::stoi(valueInterceptionHistoryListInterceptionHistory["InterceptionType"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["RealInterceptionType"].isNull())
			interceptionHistoryListObject.realInterceptionType = std::stoi(valueInterceptionHistoryListInterceptionHistory["RealInterceptionType"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["Id"].isNull())
			interceptionHistoryListObject.id = std::stol(valueInterceptionHistoryListInterceptionHistory["Id"].asString());
		if(!valueInterceptionHistoryListInterceptionHistory["ClusterId"].isNull())
			interceptionHistoryListObject.clusterId = valueInterceptionHistoryListInterceptionHistory["ClusterId"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RealSrcAppName"].isNull())
			interceptionHistoryListObject.realSrcAppName = valueInterceptionHistoryListInterceptionHistory["RealSrcAppName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RealSrcPodName"].isNull())
			interceptionHistoryListObject.realSrcPodName = valueInterceptionHistoryListInterceptionHistory["RealSrcPodName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RealDstAppName"].isNull())
			interceptionHistoryListObject.realDstAppName = valueInterceptionHistoryListInterceptionHistory["RealDstAppName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RealDstPodName"].isNull())
			interceptionHistoryListObject.realDstPodName = valueInterceptionHistoryListInterceptionHistory["RealDstPodName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RealDstNamespace"].isNull())
			interceptionHistoryListObject.realDstNamespace = valueInterceptionHistoryListInterceptionHistory["RealDstNamespace"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RealDstImageName"].isNull())
			interceptionHistoryListObject.realDstImageName = valueInterceptionHistoryListInterceptionHistory["RealDstImageName"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RealSrcNamespace"].isNull())
			interceptionHistoryListObject.realSrcNamespace = valueInterceptionHistoryListInterceptionHistory["RealSrcNamespace"].asString();
		if(!valueInterceptionHistoryListInterceptionHistory["RealSrcImageName"].isNull())
			interceptionHistoryListObject.realSrcImageName = valueInterceptionHistoryListInterceptionHistory["RealSrcImageName"].asString();
		interceptionHistoryList_.push_back(interceptionHistoryListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<ListInterceptionHistoryResult::InterceptionHistory> ListInterceptionHistoryResult::getInterceptionHistoryList()const
{
	return interceptionHistoryList_;
}

ListInterceptionHistoryResult::PageInfo ListInterceptionHistoryResult::getPageInfo()const
{
	return pageInfo_;
}

