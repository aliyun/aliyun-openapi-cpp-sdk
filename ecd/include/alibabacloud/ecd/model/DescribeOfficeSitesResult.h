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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEOFFICESITESRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEOFFICESITESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeOfficeSitesResult : public ServiceResult
			{
			public:
				struct OfficeSite
				{
					struct ADConnector
					{
						std::string connectorStatus;
						std::string vSwitchId;
						std::string aDConnectorAddress;
						std::string specification;
						std::string networkInterfaceId;
						std::string trustKey;
					};
					struct Log
					{
						std::string message;
						std::string level;
						std::string step;
						std::string timeStamp;
					};
					std::string networkPackageId;
					bool cloudBoxOfficeSite;
					std::string cidrBlock;
					std::string customSecurityGroupId;
					std::string adHostname;
					std::vector<std::string> dnsAddress;
					std::string subDomainName;
					std::string name;
					long desktopCount;
					bool needVerifyZeroDevice;
					std::vector<std::string> subDnsAddress;
					std::string desktopVpcEndpoint;
					std::string ouName;
					int bandwidth;
					bool enableInternetAccess;
					std::string dnsUserName;
					std::string rdsLicenseAddress;
					std::string status;
					std::string domainName;
					std::vector<std::string> vSwitchIds;
					bool needVerifyLoginRisk;
					std::string rdsLicenseStatus;
					std::string rdsLicenseDomainName;
					bool enableAdminAccess;
					std::string officeSiteType;
					std::vector<std::string> fileSystemIds;
					bool ssoEnabled;
					std::vector<OfficeSite::Log> logs;
					bool mfaEnabled;
					std::string ssoType;
					std::string trustPassword;
					std::string domainPassword;
					std::string officeSiteId;
					std::string vpcType;
					std::string vpcId;
					bool enableCrossDesktopAccess;
					std::string protocolType;
					std::string creationTime;
					std::string cenId;
					std::vector<OfficeSite::ADConnector> aDConnectors;
					std::string desktopAccessType;
					std::string domainUserName;
				};


				DescribeOfficeSitesResult();
				explicit DescribeOfficeSitesResult(const std::string &payload);
				~DescribeOfficeSitesResult();
				std::string getNextToken()const;
				std::vector<OfficeSite> getOfficeSites()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<OfficeSite> officeSites_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEOFFICESITESRESULT_H_