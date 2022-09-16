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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEDIRECTORIESRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEDIRECTORIESRESULT_H_

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
			class ALIBABACLOUD_ECD_EXPORT DescribeDirectoriesResult : public ServiceResult
			{
			public:
				struct Directory
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
					std::string customSecurityGroupId;
					std::vector<std::string> dnsAddress;
					std::string subDomainName;
					std::string directoryType;
					std::string name;
					std::vector<std::string> subDnsAddress;
					std::string desktopVpcEndpoint;
					std::string ouName;
					bool enableInternetAccess;
					std::string dnsUserName;
					std::string status;
					std::string domainName;
					std::vector<std::string> vSwitchIds;
					bool needVerifyLoginRisk;
					bool enableAdminAccess;
					std::vector<std::string> fileSystemIds;
					bool ssoEnabled;
					std::vector<Directory::Log> logs;
					bool mfaEnabled;
					std::string domainPassword;
					std::string trustPassword;
					std::string directoryId;
					std::string vpcId;
					bool enableCrossDesktopAccess;
					std::string creationTime;
					std::vector<Directory::ADConnector> aDConnectors;
					std::string desktopAccessType;
					std::string domainUserName;
				};


				DescribeDirectoriesResult();
				explicit DescribeDirectoriesResult(const std::string &payload);
				~DescribeDirectoriesResult();
				std::vector<Directory> getDirectories()const;
				std::string getNextToken()const;
				std::string getAdHostname()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Directory> directories_;
				std::string nextToken_;
				std::string adHostname_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEDIRECTORIESRESULT_H_