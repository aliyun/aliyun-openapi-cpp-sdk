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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allRecordLines = value["RecordLines"]["RecordLine"];
	for (auto value : allRecordLines)
	{
		RecordLine recordLinesObject;
		if(!value["LineCode"].isNull())
			recordLinesObject.lineCode = value["LineCode"].asString();
		if(!value["FatherCode"].isNull())
			recordLinesObject.fatherCode = value["FatherCode"].asString();
		if(!value["LineName"].isNull())
			recordLinesObject.lineName = value["LineName"].asString();
		if(!value["LineDisplayName"].isNull())
			recordLinesObject.lineDisplayName = value["LineDisplayName"].asString();
		recordLines_.push_back(recordLinesObject);
	}
	auto allDnsServers = value["DnsServers"]["DnsServer"];
	for (const auto &item : allDnsServers)
		dnsServers_.push_back(item.asString());
	auto allAvailableTtls = value["AvailableTtls"]["AvailableTtl"];
	for (const auto &item : allAvailableTtls)
		availableTtls_.push_back(item.asString());
	if(!value["DomainId"].isNull())
		domainId_ = value["DomainId"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["PunyCode"].isNull())
		punyCode_ = value["PunyCode"].asString();
	if(!value["AliDomain"].isNull())
		aliDomain_ = value["AliDomain"].asString() == "true";
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["VersionCode"].isNull())
		versionCode_ = value["VersionCode"].asString();
	if(!value["VersionName"].isNull())
		versionName_ = value["VersionName"].asString();
	if(!value["MinTtl"].isNull())
		minTtl_ = std::stol(value["MinTtl"].asString());
	if(!value["RecordLineTreeJson"].isNull())
		recordLineTreeJson_ = value["RecordLineTreeJson"].asString();
	if(!value["LineType"].isNull())
		lineType_ = value["LineType"].asString();
	if(!value["RegionLines"].isNull())
		regionLines_ = value["RegionLines"].asString() == "true";
	if(!value["InBlackHole"].isNull())
		inBlackHole_ = value["InBlackHole"].asString() == "true";
	if(!value["InClean"].isNull())
		inClean_ = value["InClean"].asString() == "true";
	if(!value["SlaveDns"].isNull())
		slaveDns_ = value["SlaveDns"].asString() == "true";

}

std::string DescribeDomainInfoResult::getGroupName()const
{
	return groupName_;
}

std::string DescribeDomainInfoResult::getRecordLineTreeJson()const
{
	return recordLineTreeJson_;
}

bool DescribeDomainInfoResult::getInBlackHole()const
{
	return inBlackHole_;
}

bool DescribeDomainInfoResult::getRegionLines()const
{
	return regionLines_;
}

bool DescribeDomainInfoResult::getAliDomain()const
{
	return aliDomain_;
}

bool DescribeDomainInfoResult::getSlaveDns()const
{
	return slaveDns_;
}

std::string DescribeDomainInfoResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainInfoResult::getInstanceId()const
{
	return instanceId_;
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

std::string DescribeDomainInfoResult::getVersionName()const
{
	return versionName_;
}

long DescribeDomainInfoResult::getMinTtl()const
{
	return minTtl_;
}

bool DescribeDomainInfoResult::getInClean()const
{
	return inClean_;
}

std::string DescribeDomainInfoResult::getLineType()const
{
	return lineType_;
}

