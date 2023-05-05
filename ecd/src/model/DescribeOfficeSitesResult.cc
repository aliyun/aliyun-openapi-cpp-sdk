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

#include <alibabacloud/ecd/model/DescribeOfficeSitesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeOfficeSitesResult::DescribeOfficeSitesResult() :
	ServiceResult()
{}

DescribeOfficeSitesResult::DescribeOfficeSitesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOfficeSitesResult::~DescribeOfficeSitesResult()
{}

void DescribeOfficeSitesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOfficeSitesNode = value["OfficeSites"]["OfficeSite"];
	for (auto valueOfficeSitesOfficeSite : allOfficeSitesNode)
	{
		OfficeSite officeSitesObject;
		if(!valueOfficeSitesOfficeSite["Status"].isNull())
			officeSitesObject.status = valueOfficeSitesOfficeSite["Status"].asString();
		if(!valueOfficeSitesOfficeSite["CreationTime"].isNull())
			officeSitesObject.creationTime = valueOfficeSitesOfficeSite["CreationTime"].asString();
		if(!valueOfficeSitesOfficeSite["VpcId"].isNull())
			officeSitesObject.vpcId = valueOfficeSitesOfficeSite["VpcId"].asString();
		if(!valueOfficeSitesOfficeSite["VpcType"].isNull())
			officeSitesObject.vpcType = valueOfficeSitesOfficeSite["VpcType"].asString();
		if(!valueOfficeSitesOfficeSite["EnableAdminAccess"].isNull())
			officeSitesObject.enableAdminAccess = valueOfficeSitesOfficeSite["EnableAdminAccess"].asString() == "true";
		if(!valueOfficeSitesOfficeSite["EnableCrossDesktopAccess"].isNull())
			officeSitesObject.enableCrossDesktopAccess = valueOfficeSitesOfficeSite["EnableCrossDesktopAccess"].asString() == "true";
		if(!valueOfficeSitesOfficeSite["DesktopVpcEndpoint"].isNull())
			officeSitesObject.desktopVpcEndpoint = valueOfficeSitesOfficeSite["DesktopVpcEndpoint"].asString();
		if(!valueOfficeSitesOfficeSite["DesktopAccessType"].isNull())
			officeSitesObject.desktopAccessType = valueOfficeSitesOfficeSite["DesktopAccessType"].asString();
		if(!valueOfficeSitesOfficeSite["DomainName"].isNull())
			officeSitesObject.domainName = valueOfficeSitesOfficeSite["DomainName"].asString();
		if(!valueOfficeSitesOfficeSite["SsoEnabled"].isNull())
			officeSitesObject.ssoEnabled = valueOfficeSitesOfficeSite["SsoEnabled"].asString() == "true";
		if(!valueOfficeSitesOfficeSite["CidrBlock"].isNull())
			officeSitesObject.cidrBlock = valueOfficeSitesOfficeSite["CidrBlock"].asString();
		if(!valueOfficeSitesOfficeSite["Bandwidth"].isNull())
			officeSitesObject.bandwidth = std::stoi(valueOfficeSitesOfficeSite["Bandwidth"].asString());
		if(!valueOfficeSitesOfficeSite["TrustPassword"].isNull())
			officeSitesObject.trustPassword = valueOfficeSitesOfficeSite["TrustPassword"].asString();
		if(!valueOfficeSitesOfficeSite["Name"].isNull())
			officeSitesObject.name = valueOfficeSitesOfficeSite["Name"].asString();
		if(!valueOfficeSitesOfficeSite["EnableInternetAccess"].isNull())
			officeSitesObject.enableInternetAccess = valueOfficeSitesOfficeSite["EnableInternetAccess"].asString() == "true";
		if(!valueOfficeSitesOfficeSite["DomainPassword"].isNull())
			officeSitesObject.domainPassword = valueOfficeSitesOfficeSite["DomainPassword"].asString();
		if(!valueOfficeSitesOfficeSite["CustomSecurityGroupId"].isNull())
			officeSitesObject.customSecurityGroupId = valueOfficeSitesOfficeSite["CustomSecurityGroupId"].asString();
		if(!valueOfficeSitesOfficeSite["OuName"].isNull())
			officeSitesObject.ouName = valueOfficeSitesOfficeSite["OuName"].asString();
		if(!valueOfficeSitesOfficeSite["DomainUserName"].isNull())
			officeSitesObject.domainUserName = valueOfficeSitesOfficeSite["DomainUserName"].asString();
		if(!valueOfficeSitesOfficeSite["SubDomainName"].isNull())
			officeSitesObject.subDomainName = valueOfficeSitesOfficeSite["SubDomainName"].asString();
		if(!valueOfficeSitesOfficeSite["OfficeSiteId"].isNull())
			officeSitesObject.officeSiteId = valueOfficeSitesOfficeSite["OfficeSiteId"].asString();
		if(!valueOfficeSitesOfficeSite["CenId"].isNull())
			officeSitesObject.cenId = valueOfficeSitesOfficeSite["CenId"].asString();
		if(!valueOfficeSitesOfficeSite["MfaEnabled"].isNull())
			officeSitesObject.mfaEnabled = valueOfficeSitesOfficeSite["MfaEnabled"].asString() == "true";
		if(!valueOfficeSitesOfficeSite["NetworkPackageId"].isNull())
			officeSitesObject.networkPackageId = valueOfficeSitesOfficeSite["NetworkPackageId"].asString();
		if(!valueOfficeSitesOfficeSite["DnsUserName"].isNull())
			officeSitesObject.dnsUserName = valueOfficeSitesOfficeSite["DnsUserName"].asString();
		if(!valueOfficeSitesOfficeSite["OfficeSiteType"].isNull())
			officeSitesObject.officeSiteType = valueOfficeSitesOfficeSite["OfficeSiteType"].asString();
		if(!valueOfficeSitesOfficeSite["NeedVerifyLoginRisk"].isNull())
			officeSitesObject.needVerifyLoginRisk = valueOfficeSitesOfficeSite["NeedVerifyLoginRisk"].asString() == "true";
		if(!valueOfficeSitesOfficeSite["DesktopCount"].isNull())
			officeSitesObject.desktopCount = std::stol(valueOfficeSitesOfficeSite["DesktopCount"].asString());
		if(!valueOfficeSitesOfficeSite["NeedVerifyZeroDevice"].isNull())
			officeSitesObject.needVerifyZeroDevice = valueOfficeSitesOfficeSite["NeedVerifyZeroDevice"].asString() == "true";
		if(!valueOfficeSitesOfficeSite["CloudBoxOfficeSite"].isNull())
			officeSitesObject.cloudBoxOfficeSite = valueOfficeSitesOfficeSite["CloudBoxOfficeSite"].asString() == "true";
		if(!valueOfficeSitesOfficeSite["SsoType"].isNull())
			officeSitesObject.ssoType = valueOfficeSitesOfficeSite["SsoType"].asString();
		if(!valueOfficeSitesOfficeSite["ProtocolType"].isNull())
			officeSitesObject.protocolType = valueOfficeSitesOfficeSite["ProtocolType"].asString();
		if(!valueOfficeSitesOfficeSite["AdHostname"].isNull())
			officeSitesObject.adHostname = valueOfficeSitesOfficeSite["AdHostname"].asString();
		if(!valueOfficeSitesOfficeSite["RdsLicenseStatus"].isNull())
			officeSitesObject.rdsLicenseStatus = valueOfficeSitesOfficeSite["RdsLicenseStatus"].asString();
		if(!valueOfficeSitesOfficeSite["RdsLicenseAddress"].isNull())
			officeSitesObject.rdsLicenseAddress = valueOfficeSitesOfficeSite["RdsLicenseAddress"].asString();
		if(!valueOfficeSitesOfficeSite["RdsLicenseDomainName"].isNull())
			officeSitesObject.rdsLicenseDomainName = valueOfficeSitesOfficeSite["RdsLicenseDomainName"].asString();
		auto allADConnectorsNode = valueOfficeSitesOfficeSite["ADConnectors"]["ADConnector"];
		for (auto valueOfficeSitesOfficeSiteADConnectorsADConnector : allADConnectorsNode)
		{
			OfficeSite::ADConnector aDConnectorsObject;
			if(!valueOfficeSitesOfficeSiteADConnectorsADConnector["ConnectorStatus"].isNull())
				aDConnectorsObject.connectorStatus = valueOfficeSitesOfficeSiteADConnectorsADConnector["ConnectorStatus"].asString();
			if(!valueOfficeSitesOfficeSiteADConnectorsADConnector["VSwitchId"].isNull())
				aDConnectorsObject.vSwitchId = valueOfficeSitesOfficeSiteADConnectorsADConnector["VSwitchId"].asString();
			if(!valueOfficeSitesOfficeSiteADConnectorsADConnector["ADConnectorAddress"].isNull())
				aDConnectorsObject.aDConnectorAddress = valueOfficeSitesOfficeSiteADConnectorsADConnector["ADConnectorAddress"].asString();
			if(!valueOfficeSitesOfficeSiteADConnectorsADConnector["TrustKey"].isNull())
				aDConnectorsObject.trustKey = valueOfficeSitesOfficeSiteADConnectorsADConnector["TrustKey"].asString();
			if(!valueOfficeSitesOfficeSiteADConnectorsADConnector["NetworkInterfaceId"].isNull())
				aDConnectorsObject.networkInterfaceId = valueOfficeSitesOfficeSiteADConnectorsADConnector["NetworkInterfaceId"].asString();
			if(!valueOfficeSitesOfficeSiteADConnectorsADConnector["Specification"].isNull())
				aDConnectorsObject.specification = valueOfficeSitesOfficeSiteADConnectorsADConnector["Specification"].asString();
			officeSitesObject.aDConnectors.push_back(aDConnectorsObject);
		}
		auto allLogsNode = valueOfficeSitesOfficeSite["Logs"]["Log"];
		for (auto valueOfficeSitesOfficeSiteLogsLog : allLogsNode)
		{
			OfficeSite::Log logsObject;
			if(!valueOfficeSitesOfficeSiteLogsLog["Step"].isNull())
				logsObject.step = valueOfficeSitesOfficeSiteLogsLog["Step"].asString();
			if(!valueOfficeSitesOfficeSiteLogsLog["Message"].isNull())
				logsObject.message = valueOfficeSitesOfficeSiteLogsLog["Message"].asString();
			if(!valueOfficeSitesOfficeSiteLogsLog["TimeStamp"].isNull())
				logsObject.timeStamp = valueOfficeSitesOfficeSiteLogsLog["TimeStamp"].asString();
			if(!valueOfficeSitesOfficeSiteLogsLog["Level"].isNull())
				logsObject.level = valueOfficeSitesOfficeSiteLogsLog["Level"].asString();
			officeSitesObject.logs.push_back(logsObject);
		}
		auto allVSwitchIds = value["VSwitchIds"]["vSwitchId"];
		for (auto value : allVSwitchIds)
			officeSitesObject.vSwitchIds.push_back(value.asString());
		auto allFileSystemIds = value["FileSystemIds"]["FileSystemId"];
		for (auto value : allFileSystemIds)
			officeSitesObject.fileSystemIds.push_back(value.asString());
		auto allSubDnsAddress = value["SubDnsAddress"]["SubAddress"];
		for (auto value : allSubDnsAddress)
			officeSitesObject.subDnsAddress.push_back(value.asString());
		auto allDnsAddress = value["DnsAddress"]["Address"];
		for (auto value : allDnsAddress)
			officeSitesObject.dnsAddress.push_back(value.asString());
		officeSites_.push_back(officeSitesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeOfficeSitesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeOfficeSitesResult::OfficeSite> DescribeOfficeSitesResult::getOfficeSites()const
{
	return officeSites_;
}

