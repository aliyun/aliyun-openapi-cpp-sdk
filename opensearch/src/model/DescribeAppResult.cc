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

#include <alibabacloud/opensearch/model/DescribeAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

DescribeAppResult::DescribeAppResult() :
	ServiceResult()
{}

DescribeAppResult::DescribeAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppResult::~DescribeAppResult()
{}

void DescribeAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["created"].isNull())
		result_.created = std::stoi(resultNode["created"].asString());
	if(!resultNode["clusterName"].isNull())
		result_.clusterName = resultNode["clusterName"].asString();
	if(!resultNode["autoSwitch"].isNull())
		result_.autoSwitch = resultNode["autoSwitch"].asString() == "true";
	if(!resultNode["algoDeploymentId"].isNull())
		result_.algoDeploymentId = std::stoi(resultNode["algoDeploymentId"].asString());
	if(!resultNode["type"].isNull())
		result_.type = resultNode["type"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["schema"].isNull())
		result_.schema = resultNode["schema"].asString();
	if(!resultNode["progressPercent"].isNull())
		result_.progressPercent = std::stoi(resultNode["progressPercent"].asString());
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	auto quotaNode = resultNode["quota"];
	if(!quotaNode["spec"].isNull())
		result_.quota.spec = quotaNode["spec"].asString();
	if(!quotaNode["qps"].isNull())
		result_.quota.qps = std::stoi(quotaNode["qps"].asString());
	if(!quotaNode["docSize"].isNull())
		result_.quota.docSize = std::stoi(quotaNode["docSize"].asString());
	if(!quotaNode["computeResource"].isNull())
		result_.quota.computeResource = std::stoi(quotaNode["computeResource"].asString());
	auto domainNode = resultNode["domain"];
	if(!domainNode["category"].isNull())
		result_.domain.category = domainNode["category"].asString();
	if(!domainNode["name"].isNull())
		result_.domain.name = domainNode["name"].asString();
	auto functionsNode = domainNode["functions"];
		auto allService = functionsNode["service"]["service"];
		for (auto value : allService)
			result_.domain.functions.service.push_back(value.asString());
		auto allQp = functionsNode["qp"]["qp"];
		for (auto value : allQp)
			result_.domain.functions.qp.push_back(value.asString());
		auto allAlgo = functionsNode["algo"]["algo"];
		for (auto value : allAlgo)
			result_.domain.functions.algo.push_back(value.asString());
		auto allFetchFields = resultNode["fetchFields"]["fetchFields"];
		for (auto value : allFetchFields)
			result_.fetchFields.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeAppResult::getRequestId()const
{
	return requestId_;
}

DescribeAppResult::Result DescribeAppResult::getResult()const
{
	return result_;
}

