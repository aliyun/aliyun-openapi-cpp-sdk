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

#include <alibabacloud/ecd/model/DescribeDirectoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeDirectoriesResult::DescribeDirectoriesResult() :
	ServiceResult()
{}

DescribeDirectoriesResult::DescribeDirectoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDirectoriesResult::~DescribeDirectoriesResult()
{}

void DescribeDirectoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDirectoriesNode = value["Directories"]["Directory"];
	for (auto valueDirectoriesDirectory : allDirectoriesNode)
	{
		Directory directoriesObject;
		if(!valueDirectoriesDirectory["EnableInternetAccess"].isNull())
			directoriesObject.enableInternetAccess = valueDirectoriesDirectory["EnableInternetAccess"].asString() == "true";
		if(!valueDirectoriesDirectory["VpcId"].isNull())
			directoriesObject.vpcId = valueDirectoriesDirectory["VpcId"].asString();
		if(!valueDirectoriesDirectory["CreationTime"].isNull())
			directoriesObject.creationTime = valueDirectoriesDirectory["CreationTime"].asString();
		if(!valueDirectoriesDirectory["Status"].isNull())
			directoriesObject.status = valueDirectoriesDirectory["Status"].asString();
		if(!valueDirectoriesDirectory["DomainPassword"].isNull())
			directoriesObject.domainPassword = valueDirectoriesDirectory["DomainPassword"].asString();
		if(!valueDirectoriesDirectory["EnableAdminAccess"].isNull())
			directoriesObject.enableAdminAccess = valueDirectoriesDirectory["EnableAdminAccess"].asString() == "true";
		if(!valueDirectoriesDirectory["SubDomainName"].isNull())
			directoriesObject.subDomainName = valueDirectoriesDirectory["SubDomainName"].asString();
		if(!valueDirectoriesDirectory["DomainUserName"].isNull())
			directoriesObject.domainUserName = valueDirectoriesDirectory["DomainUserName"].asString();
		if(!valueDirectoriesDirectory["EnableCrossDesktopAccess"].isNull())
			directoriesObject.enableCrossDesktopAccess = valueDirectoriesDirectory["EnableCrossDesktopAccess"].asString() == "true";
		if(!valueDirectoriesDirectory["CustomSecurityGroupId"].isNull())
			directoriesObject.customSecurityGroupId = valueDirectoriesDirectory["CustomSecurityGroupId"].asString();
		if(!valueDirectoriesDirectory["DesktopVpcEndpoint"].isNull())
			directoriesObject.desktopVpcEndpoint = valueDirectoriesDirectory["DesktopVpcEndpoint"].asString();
		if(!valueDirectoriesDirectory["SsoEnabled"].isNull())
			directoriesObject.ssoEnabled = valueDirectoriesDirectory["SsoEnabled"].asString() == "true";
		if(!valueDirectoriesDirectory["DomainName"].isNull())
			directoriesObject.domainName = valueDirectoriesDirectory["DomainName"].asString();
		if(!valueDirectoriesDirectory["DesktopAccessType"].isNull())
			directoriesObject.desktopAccessType = valueDirectoriesDirectory["DesktopAccessType"].asString();
		if(!valueDirectoriesDirectory["MfaEnabled"].isNull())
			directoriesObject.mfaEnabled = valueDirectoriesDirectory["MfaEnabled"].asString() == "true";
		if(!valueDirectoriesDirectory["DirectoryType"].isNull())
			directoriesObject.directoryType = valueDirectoriesDirectory["DirectoryType"].asString();
		if(!valueDirectoriesDirectory["DnsUserName"].isNull())
			directoriesObject.dnsUserName = valueDirectoriesDirectory["DnsUserName"].asString();
		if(!valueDirectoriesDirectory["TrustPassword"].isNull())
			directoriesObject.trustPassword = valueDirectoriesDirectory["TrustPassword"].asString();
		if(!valueDirectoriesDirectory["OuName"].isNull())
			directoriesObject.ouName = valueDirectoriesDirectory["OuName"].asString();
		if(!valueDirectoriesDirectory["Name"].isNull())
			directoriesObject.name = valueDirectoriesDirectory["Name"].asString();
		if(!valueDirectoriesDirectory["DirectoryId"].isNull())
			directoriesObject.directoryId = valueDirectoriesDirectory["DirectoryId"].asString();
		if(!valueDirectoriesDirectory["NeedVerifyLoginRisk"].isNull())
			directoriesObject.needVerifyLoginRisk = valueDirectoriesDirectory["NeedVerifyLoginRisk"].asString() == "true";
		auto allADConnectorsNode = valueDirectoriesDirectory["ADConnectors"]["ADConnector"];
		for (auto valueDirectoriesDirectoryADConnectorsADConnector : allADConnectorsNode)
		{
			Directory::ADConnector aDConnectorsObject;
			if(!valueDirectoriesDirectoryADConnectorsADConnector["ConnectorStatus"].isNull())
				aDConnectorsObject.connectorStatus = valueDirectoriesDirectoryADConnectorsADConnector["ConnectorStatus"].asString();
			if(!valueDirectoriesDirectoryADConnectorsADConnector["VSwitchId"].isNull())
				aDConnectorsObject.vSwitchId = valueDirectoriesDirectoryADConnectorsADConnector["VSwitchId"].asString();
			if(!valueDirectoriesDirectoryADConnectorsADConnector["ADConnectorAddress"].isNull())
				aDConnectorsObject.aDConnectorAddress = valueDirectoriesDirectoryADConnectorsADConnector["ADConnectorAddress"].asString();
			if(!valueDirectoriesDirectoryADConnectorsADConnector["TrustKey"].isNull())
				aDConnectorsObject.trustKey = valueDirectoriesDirectoryADConnectorsADConnector["TrustKey"].asString();
			if(!valueDirectoriesDirectoryADConnectorsADConnector["NetworkInterfaceId"].isNull())
				aDConnectorsObject.networkInterfaceId = valueDirectoriesDirectoryADConnectorsADConnector["NetworkInterfaceId"].asString();
			if(!valueDirectoriesDirectoryADConnectorsADConnector["Specification"].isNull())
				aDConnectorsObject.specification = valueDirectoriesDirectoryADConnectorsADConnector["Specification"].asString();
			directoriesObject.aDConnectors.push_back(aDConnectorsObject);
		}
		auto allLogsNode = valueDirectoriesDirectory["Logs"]["Log"];
		for (auto valueDirectoriesDirectoryLogsLog : allLogsNode)
		{
			Directory::Log logsObject;
			if(!valueDirectoriesDirectoryLogsLog["Step"].isNull())
				logsObject.step = valueDirectoriesDirectoryLogsLog["Step"].asString();
			if(!valueDirectoriesDirectoryLogsLog["Message"].isNull())
				logsObject.message = valueDirectoriesDirectoryLogsLog["Message"].asString();
			if(!valueDirectoriesDirectoryLogsLog["TimeStamp"].isNull())
				logsObject.timeStamp = valueDirectoriesDirectoryLogsLog["TimeStamp"].asString();
			if(!valueDirectoriesDirectoryLogsLog["Level"].isNull())
				logsObject.level = valueDirectoriesDirectoryLogsLog["Level"].asString();
			directoriesObject.logs.push_back(logsObject);
		}
		auto allVSwitchIds = value["VSwitchIds"]["vSwitchId"];
		for (auto value : allVSwitchIds)
			directoriesObject.vSwitchIds.push_back(value.asString());
		auto allFileSystemIds = value["FileSystemIds"]["FileSystemId"];
		for (auto value : allFileSystemIds)
			directoriesObject.fileSystemIds.push_back(value.asString());
		auto allSubDnsAddress = value["SubDnsAddress"]["SubAddress"];
		for (auto value : allSubDnsAddress)
			directoriesObject.subDnsAddress.push_back(value.asString());
		auto allDnsAddress = value["DnsAddress"]["Address"];
		for (auto value : allDnsAddress)
			directoriesObject.dnsAddress.push_back(value.asString());
		directories_.push_back(directoriesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["AdHostname"].isNull())
		adHostname_ = value["AdHostname"].asString();

}

std::vector<DescribeDirectoriesResult::Directory> DescribeDirectoriesResult::getDirectories()const
{
	return directories_;
}

std::string DescribeDirectoriesResult::getNextToken()const
{
	return nextToken_;
}

std::string DescribeDirectoriesResult::getAdHostname()const
{
	return adHostname_;
}

