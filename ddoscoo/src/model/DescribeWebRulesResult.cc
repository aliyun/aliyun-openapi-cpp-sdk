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

#include <alibabacloud/ddoscoo/model/DescribeWebRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebRulesResult::DescribeWebRulesResult() :
	ServiceResult()
{}

DescribeWebRulesResult::DescribeWebRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebRulesResult::~DescribeWebRulesResult()
{}

void DescribeWebRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebRulesNode = value["WebRules"]["WebRule"];
	for (auto valueWebRulesWebRule : allWebRulesNode)
	{
		WebRule webRulesObject;
		if(!valueWebRulesWebRule["Domain"].isNull())
			webRulesObject.domain = valueWebRulesWebRule["Domain"].asString();
		if(!valueWebRulesWebRule["Http2HttpsEnable"].isNull())
			webRulesObject.http2HttpsEnable = valueWebRulesWebRule["Http2HttpsEnable"].asString() == "true";
		if(!valueWebRulesWebRule["SslProtocols"].isNull())
			webRulesObject.sslProtocols = valueWebRulesWebRule["SslProtocols"].asString();
		if(!valueWebRulesWebRule["PunishReason"].isNull())
			webRulesObject.punishReason = std::stoi(valueWebRulesWebRule["PunishReason"].asString());
		if(!valueWebRulesWebRule["CcTemplate"].isNull())
			webRulesObject.ccTemplate = valueWebRulesWebRule["CcTemplate"].asString();
		if(!valueWebRulesWebRule["CcEnabled"].isNull())
			webRulesObject.ccEnabled = valueWebRulesWebRule["CcEnabled"].asString() == "true";
		if(!valueWebRulesWebRule["SslCiphers"].isNull())
			webRulesObject.sslCiphers = valueWebRulesWebRule["SslCiphers"].asString();
		if(!valueWebRulesWebRule["Ssl13Enabled"].isNull())
			webRulesObject.ssl13Enabled = valueWebRulesWebRule["Ssl13Enabled"].asString() == "true";
		if(!valueWebRulesWebRule["CcRuleEnabled"].isNull())
			webRulesObject.ccRuleEnabled = valueWebRulesWebRule["CcRuleEnabled"].asString() == "true";
		if(!valueWebRulesWebRule["OcspEnabled"].isNull())
			webRulesObject.ocspEnabled = valueWebRulesWebRule["OcspEnabled"].asString() == "true";
		if(!valueWebRulesWebRule["PunishStatus"].isNull())
			webRulesObject.punishStatus = valueWebRulesWebRule["PunishStatus"].asString() == "true";
		if(!valueWebRulesWebRule["ProxyEnabled"].isNull())
			webRulesObject.proxyEnabled = valueWebRulesWebRule["ProxyEnabled"].asString() == "true";
		if(!valueWebRulesWebRule["CertName"].isNull())
			webRulesObject.certName = valueWebRulesWebRule["CertName"].asString();
		if(!valueWebRulesWebRule["PolicyMode"].isNull())
			webRulesObject.policyMode = valueWebRulesWebRule["PolicyMode"].asString();
		if(!valueWebRulesWebRule["Cname"].isNull())
			webRulesObject.cname = valueWebRulesWebRule["Cname"].asString();
		if(!valueWebRulesWebRule["Http2Enable"].isNull())
			webRulesObject.http2Enable = valueWebRulesWebRule["Http2Enable"].asString() == "true";
		if(!valueWebRulesWebRule["Https2HttpEnable"].isNull())
			webRulesObject.https2HttpEnable = valueWebRulesWebRule["Https2HttpEnable"].asString() == "true";
		if(!valueWebRulesWebRule["CertRegion"].isNull())
			webRulesObject.certRegion = valueWebRulesWebRule["CertRegion"].asString();
		auto allProxyTypesNode = valueWebRulesWebRule["ProxyTypes"]["ProxyConfig"];
		for (auto valueWebRulesWebRuleProxyTypesProxyConfig : allProxyTypesNode)
		{
			WebRule::ProxyConfig proxyTypesObject;
			if(!valueWebRulesWebRuleProxyTypesProxyConfig["ProxyType"].isNull())
				proxyTypesObject.proxyType = valueWebRulesWebRuleProxyTypesProxyConfig["ProxyType"].asString();
			auto allProxyPorts = value["ProxyPorts"]["ProxyPort"];
			for (auto value : allProxyPorts)
				proxyTypesObject.proxyPorts.push_back(value.asString());
			webRulesObject.proxyTypes.push_back(proxyTypesObject);
		}
		auto allRealServersNode = valueWebRulesWebRule["RealServers"]["RealServer"];
		for (auto valueWebRulesWebRuleRealServersRealServer : allRealServersNode)
		{
			WebRule::RealServer realServersObject;
			if(!valueWebRulesWebRuleRealServersRealServer["RsType"].isNull())
				realServersObject.rsType = std::stoi(valueWebRulesWebRuleRealServersRealServer["RsType"].asString());
			if(!valueWebRulesWebRuleRealServersRealServer["RealServer"].isNull())
				realServersObject.realServer = valueWebRulesWebRuleRealServersRealServer["RealServer"].asString();
			webRulesObject.realServers.push_back(realServersObject);
		}
		auto gmCertNode = value["GmCert"];
		if(!gmCertNode["CertId"].isNull())
			webRulesObject.gmCert.certId = gmCertNode["CertId"].asString();
		if(!gmCertNode["GmEnable"].isNull())
			webRulesObject.gmCert.gmEnable = std::stol(gmCertNode["GmEnable"].asString());
		if(!gmCertNode["GmOnly"].isNull())
			webRulesObject.gmCert.gmOnly = std::stol(gmCertNode["GmOnly"].asString());
		auto allWhiteList = value["WhiteList"]["WhiteItem"];
		for (auto value : allWhiteList)
			webRulesObject.whiteList.push_back(value.asString());
		auto allBlackList = value["BlackList"]["BlackItem"];
		for (auto value : allBlackList)
			webRulesObject.blackList.push_back(value.asString());
		auto allCustomCiphers = value["CustomCiphers"]["CustomCipher"];
		for (auto value : allCustomCiphers)
			webRulesObject.customCiphers.push_back(value.asString());
		webRules_.push_back(webRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeWebRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeWebRulesResult::WebRule> DescribeWebRulesResult::getWebRules()const
{
	return webRules_;
}

