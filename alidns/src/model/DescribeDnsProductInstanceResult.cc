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

#include <alibabacloud/alidns/model/DescribeDnsProductInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsProductInstanceResult::DescribeDnsProductInstanceResult() :
	ServiceResult()
{}

DescribeDnsProductInstanceResult::DescribeDnsProductInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsProductInstanceResult::~DescribeDnsProductInstanceResult()
{}

void DescribeDnsProductInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDnsServers = value["DnsServers"]["DnsServer"];
	for (const auto &item : allDnsServers)
		dnsServers_.push_back(item.asString());
	if(!value["MonitorNodeCount"].isNull())
		monitorNodeCount_ = std::stol(value["MonitorNodeCount"].asString());
	if(!value["InBlackHole"].isNull())
		inBlackHole_ = value["InBlackHole"].asString() == "true";
	if(!value["BindDomainCount"].isNull())
		bindDomainCount_ = std::stol(value["BindDomainCount"].asString());
	if(!value["RegionLines"].isNull())
		regionLines_ = value["RegionLines"].asString() == "true";
	if(!value["BindCount"].isNull())
		bindCount_ = std::stol(value["BindCount"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTimestamp"].isNull())
		startTimestamp_ = std::stol(value["StartTimestamp"].asString());
	if(!value["ISPLines"].isNull())
		iSPLines_ = value["ISPLines"].asString();
	if(!value["EndTimestamp"].isNull())
		endTimestamp_ = std::stol(value["EndTimestamp"].asString());
	if(!value["DDosDefendQuery"].isNull())
		dDosDefendQuery_ = std::stol(value["DDosDefendQuery"].asString());
	if(!value["DnsSecurity"].isNull())
		dnsSecurity_ = value["DnsSecurity"].asString();
	if(!value["DomainType"].isNull())
		domainType_ = value["DomainType"].asString();
	if(!value["URLForwardCount"].isNull())
		uRLForwardCount_ = std::stol(value["URLForwardCount"].asString());
	if(!value["TTLMinValue"].isNull())
		tTLMinValue_ = std::stol(value["TTLMinValue"].asString());
	if(!value["PaymentType"].isNull())
		paymentType_ = value["PaymentType"].asString();
	if(!value["VersionName"].isNull())
		versionName_ = value["VersionName"].asString();
	if(!value["OverseaLine"].isNull())
		overseaLine_ = value["OverseaLine"].asString();
	if(!value["ISPRegionLines"].isNull())
		iSPRegionLines_ = value["ISPRegionLines"].asString();
	if(!value["Gslb"].isNull())
		gslb_ = value["Gslb"].asString() == "true";
	if(!value["BindUsedCount"].isNull())
		bindUsedCount_ = std::stol(value["BindUsedCount"].asString());
	if(!value["DnsSLBCount"].isNull())
		dnsSLBCount_ = std::stol(value["DnsSLBCount"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["MonitorTaskCount"].isNull())
		monitorTaskCount_ = std::stol(value["MonitorTaskCount"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DDosDefendFlow"].isNull())
		dDosDefendFlow_ = std::stol(value["DDosDefendFlow"].asString());
	if(!value["MonitorFrequency"].isNull())
		monitorFrequency_ = std::stol(value["MonitorFrequency"].asString());
	if(!value["SearchEngineLines"].isNull())
		searchEngineLines_ = value["SearchEngineLines"].asString();
	if(!value["BindDomainUsedCount"].isNull())
		bindDomainUsedCount_ = std::stol(value["BindDomainUsedCount"].asString());
	if(!value["VersionCode"].isNull())
		versionCode_ = value["VersionCode"].asString();
	if(!value["OverseaDDosDefendFlow"].isNull())
		overseaDDosDefendFlow_ = std::stol(value["OverseaDDosDefendFlow"].asString());
	if(!value["InClean"].isNull())
		inClean_ = value["InClean"].asString() == "true";
	if(!value["SubDomainLevel"].isNull())
		subDomainLevel_ = std::stol(value["SubDomainLevel"].asString());
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();

}

long DescribeDnsProductInstanceResult::getMonitorNodeCount()const
{
	return monitorNodeCount_;
}

bool DescribeDnsProductInstanceResult::getInBlackHole()const
{
	return inBlackHole_;
}

long DescribeDnsProductInstanceResult::getBindDomainCount()const
{
	return bindDomainCount_;
}

bool DescribeDnsProductInstanceResult::getRegionLines()const
{
	return regionLines_;
}

long DescribeDnsProductInstanceResult::getBindCount()const
{
	return bindCount_;
}

std::string DescribeDnsProductInstanceResult::getEndTime()const
{
	return endTime_;
}

long DescribeDnsProductInstanceResult::getStartTimestamp()const
{
	return startTimestamp_;
}

std::string DescribeDnsProductInstanceResult::getISPLines()const
{
	return iSPLines_;
}

std::vector<std::string> DescribeDnsProductInstanceResult::getDnsServers()const
{
	return dnsServers_;
}

long DescribeDnsProductInstanceResult::getEndTimestamp()const
{
	return endTimestamp_;
}

long DescribeDnsProductInstanceResult::getDDosDefendQuery()const
{
	return dDosDefendQuery_;
}

std::string DescribeDnsProductInstanceResult::getDnsSecurity()const
{
	return dnsSecurity_;
}

std::string DescribeDnsProductInstanceResult::getDomainType()const
{
	return domainType_;
}

long DescribeDnsProductInstanceResult::getURLForwardCount()const
{
	return uRLForwardCount_;
}

long DescribeDnsProductInstanceResult::getTTLMinValue()const
{
	return tTLMinValue_;
}

std::string DescribeDnsProductInstanceResult::getPaymentType()const
{
	return paymentType_;
}

std::string DescribeDnsProductInstanceResult::getVersionName()const
{
	return versionName_;
}

std::string DescribeDnsProductInstanceResult::getOverseaLine()const
{
	return overseaLine_;
}

std::string DescribeDnsProductInstanceResult::getISPRegionLines()const
{
	return iSPRegionLines_;
}

bool DescribeDnsProductInstanceResult::getGslb()const
{
	return gslb_;
}

long DescribeDnsProductInstanceResult::getBindUsedCount()const
{
	return bindUsedCount_;
}

long DescribeDnsProductInstanceResult::getDnsSLBCount()const
{
	return dnsSLBCount_;
}

std::string DescribeDnsProductInstanceResult::getInstanceId()const
{
	return instanceId_;
}

long DescribeDnsProductInstanceResult::getMonitorTaskCount()const
{
	return monitorTaskCount_;
}

std::string DescribeDnsProductInstanceResult::getStartTime()const
{
	return startTime_;
}

long DescribeDnsProductInstanceResult::getDDosDefendFlow()const
{
	return dDosDefendFlow_;
}

long DescribeDnsProductInstanceResult::getMonitorFrequency()const
{
	return monitorFrequency_;
}

std::string DescribeDnsProductInstanceResult::getSearchEngineLines()const
{
	return searchEngineLines_;
}

long DescribeDnsProductInstanceResult::getBindDomainUsedCount()const
{
	return bindDomainUsedCount_;
}

std::string DescribeDnsProductInstanceResult::getVersionCode()const
{
	return versionCode_;
}

long DescribeDnsProductInstanceResult::getOverseaDDosDefendFlow()const
{
	return overseaDDosDefendFlow_;
}

bool DescribeDnsProductInstanceResult::getInClean()const
{
	return inClean_;
}

long DescribeDnsProductInstanceResult::getSubDomainLevel()const
{
	return subDomainLevel_;
}

std::string DescribeDnsProductInstanceResult::getDomain()const
{
	return domain_;
}

