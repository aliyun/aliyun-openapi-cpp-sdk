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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBENASFILESYSTEMSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBENASFILESYSTEMSRESULT_H_

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
			class ALIBABACLOUD_ECD_EXPORT DescribeNASFileSystemsResult : public ServiceResult
			{
			public:
				struct FileSystem
				{
					struct DesktopGroup
					{
						std::string desktopGroupId;
						std::string desktopGroupName;
					};
					bool supportAcl;
					std::string storageType;
					std::string description;
					std::vector<FileSystem::DesktopGroup> desktopGroups;
					std::string zoneId;
					std::string createTime;
					std::string mountTargetStatus;
					long meteredSize;
					bool encryptionEnabled;
					std::string officeSiteId;
					bool profileCompatible;
					std::string domainId;
					long capacity;
					std::string mountTargetDomain;
					std::string fileSystemType;
					std::string fileSystemStatus;
					std::string officeSiteName;
					std::string fileSystemId;
					std::string fileSystemName;
					std::string regionId;
				};


				DescribeNASFileSystemsResult();
				explicit DescribeNASFileSystemsResult(const std::string &payload);
				~DescribeNASFileSystemsResult();
				std::vector<FileSystem> getFileSystems()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FileSystem> fileSystems_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBENASFILESYSTEMSRESULT_H_