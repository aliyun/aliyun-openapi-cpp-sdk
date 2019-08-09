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

#include <alibabacloud/cloudapi/model/DescribeApiGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiGroupResult::DescribeApiGroupResult() :
	ServiceResult()
{}

DescribeApiGroupResult::DescribeApiGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiGroupResult::~DescribeApiGroupResult()
{}

void DescribeApiGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCustomDomains = value["CustomDomains"]["DomainItem"];
	for (auto value : allCustomDomains)
	{
		DomainItem customDomainsObject;
		if(!value["DomainName"].isNull())
			customDomainsObject.domainName = value["DomainName"].asString();
		if(!value["CertificateId"].isNull())
			customDomainsObject.certificateId = value["CertificateId"].asString();
		if(!value["CertificateName"].isNull())
			customDomainsObject.certificateName = value["CertificateName"].asString();
		if(!value["DomainCNAMEStatus"].isNull())
			customDomainsObject.domainCNAMEStatus = value["DomainCNAMEStatus"].asString();
		if(!value["DomainBindingStatus"].isNull())
			customDomainsObject.domainBindingStatus = value["DomainBindingStatus"].asString();
		if(!value["DomainLegalStatus"].isNull())
			customDomainsObject.domainLegalStatus = value["DomainLegalStatus"].asString();
		if(!value["DomainWebSocketStatus"].isNull())
			customDomainsObject.domainWebSocketStatus = value["DomainWebSocketStatus"].asString();
		if(!value["DomainRemark"].isNull())
			customDomainsObject.domainRemark = value["DomainRemark"].asString();
		customDomains_.push_back(customDomainsObject);
	}
	auto allStageItems = value["StageItems"]["StageInfo"];
	for (auto value : allStageItems)
	{
		StageInfo stageItemsObject;
		if(!value["StageId"].isNull())
			stageItemsObject.stageId = value["StageId"].asString();
		if(!value["StageName"].isNull())
			stageItemsObject.stageName = value["StageName"].asString();
		if(!value["Description"].isNull())
			stageItemsObject.description = value["Description"].asString();
		stageItems_.push_back(stageItemsObject);
	}
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["SubDomain"].isNull())
		subDomain_ = value["SubDomain"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["ModifiedTime"].isNull())
		modifiedTime_ = value["ModifiedTime"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["BillingStatus"].isNull())
		billingStatus_ = value["BillingStatus"].asString();
	if(!value["IllegalStatus"].isNull())
		illegalStatus_ = value["IllegalStatus"].asString();
	if(!value["TrafficLimit"].isNull())
		trafficLimit_ = std::stoi(value["TrafficLimit"].asString());
	if(!value["VpcDomain"].isNull())
		vpcDomain_ = value["VpcDomain"].asString();
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["HttpsPolicy"].isNull())
		httpsPolicy_ = value["HttpsPolicy"].asString();

}

std::string DescribeApiGroupResult::getGroupName()const
{
	return groupName_;
}

std::string DescribeApiGroupResult::getStatus()const
{
	return status_;
}

std::string DescribeApiGroupResult::getDescription()const
{
	return description_;
}

std::string DescribeApiGroupResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeApiGroupResult::getHttpsPolicy()const
{
	return httpsPolicy_;
}

std::string DescribeApiGroupResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeApiGroupResult::getBillingStatus()const
{
	return billingStatus_;
}

int DescribeApiGroupResult::getTrafficLimit()const
{
	return trafficLimit_;
}

std::string DescribeApiGroupResult::getGroupId()const
{
	return groupId_;
}

std::string DescribeApiGroupResult::getVpcDomain()const
{
	return vpcDomain_;
}

std::string DescribeApiGroupResult::getSubDomain()const
{
	return subDomain_;
}

std::vector<DescribeApiGroupResult::DomainItem> DescribeApiGroupResult::getCustomDomains()const
{
	return customDomains_;
}

std::string DescribeApiGroupResult::getModifiedTime()const
{
	return modifiedTime_;
}

std::vector<DescribeApiGroupResult::StageInfo> DescribeApiGroupResult::getStageItems()const
{
	return stageItems_;
}

std::string DescribeApiGroupResult::getIllegalStatus()const
{
	return illegalStatus_;
}

std::string DescribeApiGroupResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeApiGroupResult::getInstanceType()const
{
	return instanceType_;
}

