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

#include <alibabacloud/ddoscoo/model/DescribeDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainsResult::DescribeDomainsResult() :
	ServiceResult()
{}

DescribeDomainsResult::DescribeDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainsResult::~DescribeDomainsResult()
{}

void DescribeDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["Domain"];
	for (auto valueDomainsDomain : allDomainsNode)
	{
		Domain domainsObject;
		if(!valueDomainsDomain["Domain"].isNull())
			domainsObject.domain = valueDomainsDomain["Domain"].asString();
		if(!valueDomainsDomain["CcEnabled"].isNull())
			domainsObject.ccEnabled = valueDomainsDomain["CcEnabled"].asString() == "true";
		if(!valueDomainsDomain["CcRuleEnabled"].isNull())
			domainsObject.ccRuleEnabled = valueDomainsDomain["CcRuleEnabled"].asString() == "true";
		if(!valueDomainsDomain["CcTemplate"].isNull())
			domainsObject.ccTemplate = valueDomainsDomain["CcTemplate"].asString();
		if(!valueDomainsDomain["SslProtocols"].isNull())
			domainsObject.sslProtocols = valueDomainsDomain["SslProtocols"].asString();
		if(!valueDomainsDomain["SslCiphers"].isNull())
			domainsObject.sslCiphers = valueDomainsDomain["SslCiphers"].asString();
		if(!valueDomainsDomain["Http2Enable"].isNull())
			domainsObject.http2Enable = valueDomainsDomain["Http2Enable"].asString() == "true";
		if(!valueDomainsDomain["Cname"].isNull())
			domainsObject.cname = valueDomainsDomain["Cname"].asString();
		if(!valueDomainsDomain["CertName"].isNull())
			domainsObject.certName = valueDomainsDomain["CertName"].asString();
		auto allProxyTypeListNode = valueDomainsDomain["ProxyTypeList"]["ProxyConfig"];
		for (auto valueDomainsDomainProxyTypeListProxyConfig : allProxyTypeListNode)
		{
			Domain::ProxyConfig proxyTypeListObject;
			if(!valueDomainsDomainProxyTypeListProxyConfig["ProxyType"].isNull())
				proxyTypeListObject.proxyType = valueDomainsDomainProxyTypeListProxyConfig["ProxyType"].asString();
			auto allProxyPorts = value["ProxyPorts"]["ProxyPort"];
			for (auto value : allProxyPorts)
				proxyTypeListObject.proxyPorts.push_back(value.asString());
			domainsObject.proxyTypeList.push_back(proxyTypeListObject);
		}
		auto allRealServersNode = valueDomainsDomain["RealServers"]["RealServer"];
		for (auto valueDomainsDomainRealServersRealServer : allRealServersNode)
		{
			Domain::RealServer realServersObject;
			if(!valueDomainsDomainRealServersRealServer["RsType"].isNull())
				realServersObject.rsType = std::stoi(valueDomainsDomainRealServersRealServer["RsType"].asString());
			if(!valueDomainsDomainRealServersRealServer["RealServer"].isNull())
				realServersObject.realServer = valueDomainsDomainRealServersRealServer["RealServer"].asString();
			domainsObject.realServers.push_back(realServersObject);
		}
		auto allWhiteList = value["WhiteList"]["WhiteItem"];
		for (auto value : allWhiteList)
			domainsObject.whiteList.push_back(value.asString());
		auto allBlackList = value["BlackList"]["BlackItem"];
		for (auto value : allBlackList)
			domainsObject.blackList.push_back(value.asString());
		domains_.push_back(domainsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<DescribeDomainsResult::Domain> DescribeDomainsResult::getDomains()const
{
	return domains_;
}

long DescribeDomainsResult::getTotal()const
{
	return total_;
}

