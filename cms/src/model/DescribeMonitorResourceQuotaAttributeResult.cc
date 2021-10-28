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

#include <alibabacloud/cms/model/DescribeMonitorResourceQuotaAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitorResourceQuotaAttributeResult::DescribeMonitorResourceQuotaAttributeResult() :
	ServiceResult()
{}

DescribeMonitorResourceQuotaAttributeResult::DescribeMonitorResourceQuotaAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitorResourceQuotaAttributeResult::~DescribeMonitorResourceQuotaAttributeResult()
{}

void DescribeMonitorResourceQuotaAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceQuotaNode = value["ResourceQuota"];
	if(!resourceQuotaNode["SuitInfo"].isNull())
		resourceQuota_.suitInfo = resourceQuotaNode["SuitInfo"].asString();
	if(!resourceQuotaNode["InstanceId"].isNull())
		resourceQuota_.instanceId = resourceQuotaNode["InstanceId"].asString();
	if(!resourceQuotaNode["ExpireTime"].isNull())
		resourceQuota_.expireTime = resourceQuotaNode["ExpireTime"].asString();
	if(!resourceQuotaNode["CRMType"].isNull())
		resourceQuota_.cRMType = resourceQuotaNode["CRMType"].asString();
	auto siteMonitorEcsProbeNode = resourceQuotaNode["SiteMonitorEcsProbe"];
	if(!siteMonitorEcsProbeNode["QuotaLimit"].isNull())
		resourceQuota_.siteMonitorEcsProbe.quotaLimit = std::stoi(siteMonitorEcsProbeNode["QuotaLimit"].asString());
	if(!siteMonitorEcsProbeNode["QuotaPackage"].isNull())
		resourceQuota_.siteMonitorEcsProbe.quotaPackage = std::stoi(siteMonitorEcsProbeNode["QuotaPackage"].asString());
	if(!siteMonitorEcsProbeNode["QuotaUsed"].isNull())
		resourceQuota_.siteMonitorEcsProbe.quotaUsed = std::stoi(siteMonitorEcsProbeNode["QuotaUsed"].asString());
	auto siteMonitorOperatorProbeNode = resourceQuotaNode["SiteMonitorOperatorProbe"];
	if(!siteMonitorOperatorProbeNode["QuotaLimit"].isNull())
		resourceQuota_.siteMonitorOperatorProbe.quotaLimit = std::stoi(siteMonitorOperatorProbeNode["QuotaLimit"].asString());
	if(!siteMonitorOperatorProbeNode["QuotaPackage"].isNull())
		resourceQuota_.siteMonitorOperatorProbe.quotaPackage = std::stoi(siteMonitorOperatorProbeNode["QuotaPackage"].asString());
	if(!siteMonitorOperatorProbeNode["QuotaUsed"].isNull())
		resourceQuota_.siteMonitorOperatorProbe.quotaUsed = std::stoi(siteMonitorOperatorProbeNode["QuotaUsed"].asString());
	auto siteMonitorTaskNode = resourceQuotaNode["SiteMonitorTask"];
	if(!siteMonitorTaskNode["QuotaLimit"].isNull())
		resourceQuota_.siteMonitorTask.quotaLimit = std::stoi(siteMonitorTaskNode["QuotaLimit"].asString());
	if(!siteMonitorTaskNode["QuotaPackage"].isNull())
		resourceQuota_.siteMonitorTask.quotaPackage = std::stoi(siteMonitorTaskNode["QuotaPackage"].asString());
	if(!siteMonitorTaskNode["QuotaUsed"].isNull())
		resourceQuota_.siteMonitorTask.quotaUsed = std::stoi(siteMonitorTaskNode["QuotaUsed"].asString());
	auto customMonitorNode = resourceQuotaNode["CustomMonitor"];
	if(!customMonitorNode["QuotaLimit"].isNull())
		resourceQuota_.customMonitor.quotaLimit = std::stoi(customMonitorNode["QuotaLimit"].asString());
	if(!customMonitorNode["QuotaPackage"].isNull())
		resourceQuota_.customMonitor.quotaPackage = std::stoi(customMonitorNode["QuotaPackage"].asString());
	if(!customMonitorNode["QuotaUsed"].isNull())
		resourceQuota_.customMonitor.quotaUsed = std::stoi(customMonitorNode["QuotaUsed"].asString());
	auto eventMonitorNode = resourceQuotaNode["EventMonitor"];
	if(!eventMonitorNode["QuotaLimit"].isNull())
		resourceQuota_.eventMonitor.quotaLimit = std::stoi(eventMonitorNode["QuotaLimit"].asString());
	if(!eventMonitorNode["QuotaPackage"].isNull())
		resourceQuota_.eventMonitor.quotaPackage = std::stoi(eventMonitorNode["QuotaPackage"].asString());
	if(!eventMonitorNode["QuotaUsed"].isNull())
		resourceQuota_.eventMonitor.quotaUsed = std::stoi(eventMonitorNode["QuotaUsed"].asString());
	auto logMonitorNode = resourceQuotaNode["LogMonitor"];
	if(!logMonitorNode["QuotaLimit"].isNull())
		resourceQuota_.logMonitor.quotaLimit = std::stoi(logMonitorNode["QuotaLimit"].asString());
	if(!logMonitorNode["QuotaPackage"].isNull())
		resourceQuota_.logMonitor.quotaPackage = std::stoi(logMonitorNode["QuotaPackage"].asString());
	if(!logMonitorNode["QuotaUsed"].isNull())
		resourceQuota_.logMonitor.quotaUsed = std::stoi(logMonitorNode["QuotaUsed"].asString());
	auto apiNode = resourceQuotaNode["Api"];
	if(!apiNode["QuotaLimit"].isNull())
		resourceQuota_.api.quotaLimit = std::stoi(apiNode["QuotaLimit"].asString());
	if(!apiNode["QuotaPackage"].isNull())
		resourceQuota_.api.quotaPackage = std::stoi(apiNode["QuotaPackage"].asString());
	if(!apiNode["QuotaUsed"].isNull())
		resourceQuota_.api.quotaUsed = std::stoi(apiNode["QuotaUsed"].asString());
	auto sMSNode = resourceQuotaNode["SMS"];
	if(!sMSNode["QuotaLimit"].isNull())
		resourceQuota_.sMS.quotaLimit = std::stoi(sMSNode["QuotaLimit"].asString());
	if(!sMSNode["QuotaPackage"].isNull())
		resourceQuota_.sMS.quotaPackage = std::stoi(sMSNode["QuotaPackage"].asString());
	if(!sMSNode["QuotaUsed"].isNull())
		resourceQuota_.sMS.quotaUsed = std::stoi(sMSNode["QuotaUsed"].asString());
	auto phoneNode = resourceQuotaNode["Phone"];
	if(!phoneNode["QuotaLimit"].isNull())
		resourceQuota_.phone.quotaLimit = std::stoi(phoneNode["QuotaLimit"].asString());
	if(!phoneNode["QuotaPackage"].isNull())
		resourceQuota_.phone.quotaPackage = std::stoi(phoneNode["QuotaPackage"].asString());
	if(!phoneNode["QuotaUsed"].isNull())
		resourceQuota_.phone.quotaUsed = std::stoi(phoneNode["QuotaUsed"].asString());
	auto enterpriseQuotaNode = resourceQuotaNode["EnterpriseQuota"];
	if(!enterpriseQuotaNode["SuitInfo"].isNull())
		resourceQuota_.enterpriseQuota.suitInfo = enterpriseQuotaNode["SuitInfo"].asString();
	if(!enterpriseQuotaNode["InstanceId"].isNull())
		resourceQuota_.enterpriseQuota.instanceId = enterpriseQuotaNode["InstanceId"].asString();
	auto nAAMNode = resourceQuotaNode["NAAM"];
	if(!nAAMNode["EffectTime"].isNull())
		resourceQuota_.nAAM.effectTime = nAAMNode["EffectTime"].asString();
	if(!nAAMNode["InstanceId"].isNull())
		resourceQuota_.nAAM.instanceId = nAAMNode["InstanceId"].asString();
	if(!nAAMNode["SuitInfo"].isNull())
		resourceQuota_.nAAM.suitInfo = nAAMNode["SuitInfo"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

DescribeMonitorResourceQuotaAttributeResult::ResourceQuota DescribeMonitorResourceQuotaAttributeResult::getResourceQuota()const
{
	return resourceQuota_;
}

std::string DescribeMonitorResourceQuotaAttributeResult::getMessage()const
{
	return message_;
}

std::string DescribeMonitorResourceQuotaAttributeResult::getCode()const
{
	return code_;
}

