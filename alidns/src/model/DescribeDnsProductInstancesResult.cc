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

#include <alibabacloud/alidns/model/DescribeDnsProductInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsProductInstancesResult::DescribeDnsProductInstancesResult() :
	ServiceResult()
{}

DescribeDnsProductInstancesResult::DescribeDnsProductInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsProductInstancesResult::~DescribeDnsProductInstancesResult()
{}

void DescribeDnsProductInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDnsProductsNode = value["DnsProducts"]["DnsProduct"];
	for (auto valueDnsProductsDnsProduct : allDnsProductsNode)
	{
		DnsProduct dnsProductsObject;
		if(!valueDnsProductsDnsProduct["OverseaLine"].isNull())
			dnsProductsObject.overseaLine = valueDnsProductsDnsProduct["OverseaLine"].asString();
		if(!valueDnsProductsDnsProduct["PaymentType"].isNull())
			dnsProductsObject.paymentType = valueDnsProductsDnsProduct["PaymentType"].asString();
		if(!valueDnsProductsDnsProduct["MonitorNodeCount"].isNull())
			dnsProductsObject.monitorNodeCount = std::stol(valueDnsProductsDnsProduct["MonitorNodeCount"].asString());
		if(!valueDnsProductsDnsProduct["InBlackHole"].isNull())
			dnsProductsObject.inBlackHole = valueDnsProductsDnsProduct["InBlackHole"].asString() == "true";
		if(!valueDnsProductsDnsProduct["BindDomainUsedCount"].isNull())
			dnsProductsObject.bindDomainUsedCount = std::stol(valueDnsProductsDnsProduct["BindDomainUsedCount"].asString());
		if(!valueDnsProductsDnsProduct["ISPRegionLines"].isNull())
			dnsProductsObject.iSPRegionLines = valueDnsProductsDnsProduct["ISPRegionLines"].asString();
		if(!valueDnsProductsDnsProduct["TTLMinValue"].isNull())
			dnsProductsObject.tTLMinValue = std::stol(valueDnsProductsDnsProduct["TTLMinValue"].asString());
		if(!valueDnsProductsDnsProduct["ISPLines"].isNull())
			dnsProductsObject.iSPLines = valueDnsProductsDnsProduct["ISPLines"].asString();
		if(!valueDnsProductsDnsProduct["SearchEngineLines"].isNull())
			dnsProductsObject.searchEngineLines = valueDnsProductsDnsProduct["SearchEngineLines"].asString();
		if(!valueDnsProductsDnsProduct["EndTimestamp"].isNull())
			dnsProductsObject.endTimestamp = std::stol(valueDnsProductsDnsProduct["EndTimestamp"].asString());
		if(!valueDnsProductsDnsProduct["VersionName"].isNull())
			dnsProductsObject.versionName = valueDnsProductsDnsProduct["VersionName"].asString();
		if(!valueDnsProductsDnsProduct["VersionCode"].isNull())
			dnsProductsObject.versionCode = valueDnsProductsDnsProduct["VersionCode"].asString();
		if(!valueDnsProductsDnsProduct["MonitorTaskCount"].isNull())
			dnsProductsObject.monitorTaskCount = std::stol(valueDnsProductsDnsProduct["MonitorTaskCount"].asString());
		if(!valueDnsProductsDnsProduct["BindUsedCount"].isNull())
			dnsProductsObject.bindUsedCount = std::stol(valueDnsProductsDnsProduct["BindUsedCount"].asString());
		if(!valueDnsProductsDnsProduct["Domain"].isNull())
			dnsProductsObject.domain = valueDnsProductsDnsProduct["Domain"].asString();
		if(!valueDnsProductsDnsProduct["MonitorFrequency"].isNull())
			dnsProductsObject.monitorFrequency = std::stol(valueDnsProductsDnsProduct["MonitorFrequency"].asString());
		if(!valueDnsProductsDnsProduct["InClean"].isNull())
			dnsProductsObject.inClean = valueDnsProductsDnsProduct["InClean"].asString() == "true";
		if(!valueDnsProductsDnsProduct["URLForwardCount"].isNull())
			dnsProductsObject.uRLForwardCount = std::stol(valueDnsProductsDnsProduct["URLForwardCount"].asString());
		if(!valueDnsProductsDnsProduct["StartTimestamp"].isNull())
			dnsProductsObject.startTimestamp = std::stol(valueDnsProductsDnsProduct["StartTimestamp"].asString());
		if(!valueDnsProductsDnsProduct["DDosDefendQuery"].isNull())
			dnsProductsObject.dDosDefendQuery = std::stol(valueDnsProductsDnsProduct["DDosDefendQuery"].asString());
		if(!valueDnsProductsDnsProduct["InstanceId"].isNull())
			dnsProductsObject.instanceId = valueDnsProductsDnsProduct["InstanceId"].asString();
		if(!valueDnsProductsDnsProduct["DDosDefendFlow"].isNull())
			dnsProductsObject.dDosDefendFlow = std::stol(valueDnsProductsDnsProduct["DDosDefendFlow"].asString());
		if(!valueDnsProductsDnsProduct["BindCount"].isNull())
			dnsProductsObject.bindCount = std::stol(valueDnsProductsDnsProduct["BindCount"].asString());
		if(!valueDnsProductsDnsProduct["SubDomainLevel"].isNull())
			dnsProductsObject.subDomainLevel = std::stol(valueDnsProductsDnsProduct["SubDomainLevel"].asString());
		if(!valueDnsProductsDnsProduct["BindDomainCount"].isNull())
			dnsProductsObject.bindDomainCount = std::stol(valueDnsProductsDnsProduct["BindDomainCount"].asString());
		if(!valueDnsProductsDnsProduct["EndTime"].isNull())
			dnsProductsObject.endTime = valueDnsProductsDnsProduct["EndTime"].asString();
		if(!valueDnsProductsDnsProduct["StartTime"].isNull())
			dnsProductsObject.startTime = valueDnsProductsDnsProduct["StartTime"].asString();
		if(!valueDnsProductsDnsProduct["OverseaDDosDefendFlow"].isNull())
			dnsProductsObject.overseaDDosDefendFlow = std::stol(valueDnsProductsDnsProduct["OverseaDDosDefendFlow"].asString());
		if(!valueDnsProductsDnsProduct["RegionLines"].isNull())
			dnsProductsObject.regionLines = valueDnsProductsDnsProduct["RegionLines"].asString() == "true";
		if(!valueDnsProductsDnsProduct["Gslb"].isNull())
			dnsProductsObject.gslb = valueDnsProductsDnsProduct["Gslb"].asString() == "true";
		if(!valueDnsProductsDnsProduct["DnsSecurity"].isNull())
			dnsProductsObject.dnsSecurity = valueDnsProductsDnsProduct["DnsSecurity"].asString();
		if(!valueDnsProductsDnsProduct["DnsSLBCount"].isNull())
			dnsProductsObject.dnsSLBCount = std::stol(valueDnsProductsDnsProduct["DnsSLBCount"].asString());
		dnsProducts_.push_back(dnsProductsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["DomainType"].isNull())
		domainType_ = value["DomainType"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribeDnsProductInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeDnsProductInstancesResult::getDomainType()const
{
	return domainType_;
}

long DescribeDnsProductInstancesResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDnsProductInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDnsProductInstancesResult::DnsProduct> DescribeDnsProductInstancesResult::getDnsProducts()const
{
	return dnsProducts_;
}

