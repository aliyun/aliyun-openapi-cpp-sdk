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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT DescribeFileSystemsResult : public ServiceResult
			{
			public:
				struct FileSystem
				{
					struct Ldap
					{
						std::string searchBase;
						std::string bindDN;
						std::string uRI;
					};
					struct MountTarget
					{
						struct ClientMasterNode
						{
							std::string ecsIp;
							std::string ecsId;
							std::string defaultPasswd;
						};
						struct Tag
						{
							std::string value;
							std::string key;
						};
						std::string status;
						std::string vpcId;
						std::string vswId;
						std::string dualStackMountTargetDomain;
						std::vector<MountTarget::Tag> tags1;
						std::string mountTargetDomain;
						std::string networkType;
						std::string accessGroupName;
						std::vector<MountTarget::ClientMasterNode> clientMasterNodes;
					};
					struct Package
					{
						long size;
						std::string packageType;
						std::string expiredTime;
						std::string startTime;
						std::string packageId;
					};
					struct Tag2
					{
						std::string value;
						std::string key;
					};
					std::string description;
					long mountTargetCountLimit;
					std::string kMSKeyId;
					long meteredSize;
					long capacity;
					std::string version;
					std::vector<FileSystem::Package> packages;
					std::string expiredTime;
					long bandwidth;
					std::string fileSystemId;
					std::vector<FileSystem::Tag2> tags;
					std::string status;
					Ldap ldap;
					std::string storageType;
					std::string zoneId;
					std::string nasNamespaceId;
					std::string createTime;
					long meteredIASize;
					std::vector<std::string> supportedFeatures;
					std::vector<FileSystem::MountTarget> mountTargets;
					std::string autoSnapshotPolicyId;
					int encryptType;
					std::string protocolType;
					std::string chargeType;
					std::string fileSystemType;
					std::string regionId;
				};


				DescribeFileSystemsResult();
				explicit DescribeFileSystemsResult(const std::string &payload);
				~DescribeFileSystemsResult();
				std::vector<FileSystem> getFileSystems()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FileSystem> fileSystems_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSRESULT_H_