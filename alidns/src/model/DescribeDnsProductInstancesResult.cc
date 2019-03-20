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
	auto allDnsProducts = value["DnsProducts"]["DnsProduct"];
	for (auto value : allDnsProducts)
	{
		DnsProduct dnsProductsObject;
		if(!value["InstanceId"].isNull())
			dnsProductsObject.instanceId = value["InstanceId"].asString();
		if(!value["VersionCode"].isNull())
			dnsProductsObject.versionCode = value["VersionCode"].asString();
		if(!value["VersionName"].isNull())
			dnsProductsObject.versionName = value["VersionName"].asString();
		if(!value["StartTime"].isNull())
			dnsProductsObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			dnsProductsObject.endTime = value["EndTime"].asString();
		if(!value["StartTimestamp"].isNull())
			dnsProductsObject.startTimestamp = std::stol(value["StartTimestamp"].asString());
		if(!value["EndTimestamp"].isNull())
			dnsProductsObject.endTimestamp = std::stol(value["EndTimestamp"].asString());
		if(!value["Domain"].isNull())
			dnsProductsObject.domain = value["Domain"].asString();
		if(!value["BindCount"].isNull())
			dnsProductsObject.bindCount = std::stol(value["BindCount"].asString());
		if(!value["BindUsedCount"].isNull())
			dnsProductsObject.bindUsedCount = std::stol(value["BindUsedCount"].asString());
		if(!value["TTLMinValue"].isNull())
			dnsProductsObject.tTLMinValue = std::stol(value["TTLMinValue"].asString());
		if(!value["SubDomainLevel"].isNull())
			dnsProductsObject.subDomainLevel = std::stol(value["SubDomainLevel"].asString());
		if(!value["DnsSLBCount"].isNull())
			dnsProductsObject.dnsSLBCount = std::stol(value["DnsSLBCount"].asString());
		if(!value["URLForwardCount"].isNull())
			dnsProductsObject.uRLForwardCount = std::stol(value["URLForwardCount"].asString());
		if(!value["DDosDefendFlow"].isNull())
			dnsProductsObject.dDosDefendFlow = std::stol(value["DDosDefendFlow"].asString());
		if(!value["DDosDefendQuery"].isNull())
			dnsProductsObject.dDosDefendQuery = std::stol(value["DDosDefendQuery"].asString());
		if(!value["OverseaDDosDefendFlow"].isNull())
			dnsProductsObject.overseaDDosDefendFlow = std::stol(value["OverseaDDosDefendFlow"].asString());
		if(!value["SearchEngineLines"].isNull())
			dnsProductsObject.searchEngineLines = value["SearchEngineLines"].asString();
		if(!value["ISPLines"].isNull())
			dnsProductsObject.iSPLines = value["ISPLines"].asString();
		if(!value["ISPRegionLines"].isNull())
			dnsProductsObject.iSPRegionLines = value["ISPRegionLines"].asString();
		if(!value["OverseaLine"].isNull())
			dnsProductsObject.overseaLine = value["OverseaLine"].asString();
		if(!value["MonitorNodeCount"].isNull())
			dnsProductsObject.monitorNodeCount = std::stol(value["MonitorNodeCount"].asString());
		if(!value["MonitorFrequency"].isNull())
			dnsProductsObject.monitorFrequency = std::stol(value["MonitorFrequency"].asString());
		if(!value["MonitorTaskCount"].isNull())
			dnsProductsObject.monitorTaskCount = std::stol(value["MonitorTaskCount"].asString());
		if(!value["RegionLines"].isNull())
			dnsProductsObject.regionLines = value["RegionLines"].asString() == "true";
		if(!value["Gslb"].isNull())
			dnsProductsObject.gslb = value["Gslb"].asString() == "true";
		if(!value["InClean"].isNull())
			dnsProductsObject.inClean = value["InClean"].asString() == "true";
		if(!value["InBlackHole"].isNull())
			dnsProductsObject.inBlackHole = value["InBlackHole"].asString() == "true";
		if(!value["BindDomainCount"].isNull())
			dnsProductsObject.bindDomainCount = std::stol(value["BindDomainCount"].asString());
		if(!value["BindDomainUsedCount"].isNull())
			dnsProductsObject.bindDomainUsedCount = std::stol(value["BindDomainUsedCount"].asString());
		if(!value["DnsSecurity"].isNull())
			dnsProductsObject.dnsSecurity = value["DnsSecurity"].asString();
		dnsProducts_.push_back(dnsProductsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeDnsProductInstancesResult::getTotalCount()const
{
	return totalCount_;
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

