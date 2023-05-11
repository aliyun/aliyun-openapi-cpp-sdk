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

#include <alibabacloud/alidns/model/DescribeDomainInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDomainInfoResult::DescribeDomainInfoResult() :
	ServiceResult()
{}

DescribeDomainInfoResult::DescribeDomainInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainInfoResult::~DescribeDomainInfoResult()
{}

void DescribeDomainInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordLinesNode = value["RecordLines"]["RecordLine"];
	for (auto valueRecordLinesRecordLine : allRecordLinesNode)
	{
		RecordLine recordLinesObject;
		if(!valueRecordLinesRecordLine["FatherCode"].isNull())
			recordLinesObject.fatherCode = valueRecordLinesRecordLine["FatherCode"].asString();
		if(!valueRecordLinesRecordLine["LineDisplayName"].isNull())
			recordLinesObject.lineDisplayName = valueRecordLinesRecordLine["LineDisplayName"].asString();
		if(!valueRecordLinesRecordLine["LineCode"].isNull())
			recordLinesObject.lineCode = valueRecordLinesRecordLine["LineCode"].asString();
		if(!valueRecordLinesRecordLine["LineName"].isNull())
			recordLinesObject.lineName = valueRecordLinesRecordLine["LineName"].asString();
		recordLines_.push_back(recordLinesObject);
	}
	auto allDnsServers = value["DnsServers"]["DnsServer"];
	for (const auto &item : allDnsServers)
		dnsServers_.push_back(item.asString());
	auto allAvailableTtls = value["AvailableTtls"]["AvailableTtl"];
	for (const auto &item : allAvailableTtls)
		availableTtls_.push_back(item.asString());
	if(!value["RecordLineTreeJson"].isNull())
		recordLineTreeJson_ = value["RecordLineTreeJson"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["InBlackHole"].isNull())
		inBlackHole_ = value["InBlackHole"].asString() == "true";
	if(!value["RegionLines"].isNull())
		regionLines_ = value["RegionLines"].asString() == "true";
	if(!value["SlaveDns"].isNull())
		slaveDns_ = value["SlaveDns"].asString() == "true";
	if(!value["AliDomain"].isNull())
		aliDomain_ = value["AliDomain"].asString() == "true";
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["PunyCode"].isNull())
		punyCode_ = value["PunyCode"].asString();
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["VersionCode"].isNull())
		versionCode_ = value["VersionCode"].asString();
	if(!value["DomainId"].isNull())
		domainId_ = value["DomainId"].asString();
	if(!value["MinTtl"].isNull())
		minTtl_ = std::stol(value["MinTtl"].asString());
	if(!value["InClean"].isNull())
		inClean_ = value["InClean"].asString() == "true";
	if(!value["VersionName"].isNull())
		versionName_ = value["VersionName"].asString();
	if(!value["LineType"].isNull())
		lineType_ = value["LineType"].asString();

}

std::string DescribeDomainInfoResult::getRecordLineTreeJson()const
{
	return recordLineTreeJson_;
}

std::string DescribeDomainInfoResult::getGroupName()const
{
	return groupName_;
}

bool DescribeDomainInfoResult::getInBlackHole()const
{
	return inBlackHole_;
}

bool DescribeDomainInfoResult::getRegionLines()const
{
	return regionLines_;
}

bool DescribeDomainInfoResult::getSlaveDns()const
{
	return slaveDns_;
}

bool DescribeDomainInfoResult::getAliDomain()const
{
	return aliDomain_;
}

std::string DescribeDomainInfoResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeDomainInfoResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeDomainInfoResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainInfoResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeDomainInfoResult::getPunyCode()const
{
	return punyCode_;
}

std::vector<std::string> DescribeDomainInfoResult::getDnsServers()const
{
	return dnsServers_;
}

std::string DescribeDomainInfoResult::getRemark()const
{
	return remark_;
}

std::string DescribeDomainInfoResult::getGroupId()const
{
	return groupId_;
}

std::vector<DescribeDomainInfoResult::RecordLine> DescribeDomainInfoResult::getRecordLines()const
{
	return recordLines_;
}

std::string DescribeDomainInfoResult::getVersionCode()const
{
	return versionCode_;
}

std::string DescribeDomainInfoResult::getDomainId()const
{
	return domainId_;
}

std::vector<std::string> DescribeDomainInfoResult::getAvailableTtls()const
{
	return availableTtls_;
}

long DescribeDomainInfoResult::getMinTtl()const
{
	return minTtl_;
}

bool DescribeDomainInfoResult::getInClean()const
{
	return inClean_;
}

std::string DescribeDomainInfoResult::getVersionName()const
{
	return versionName_;
}

std::string DescribeDomainInfoResult::getLineType()const
{
	return lineType_;
}

