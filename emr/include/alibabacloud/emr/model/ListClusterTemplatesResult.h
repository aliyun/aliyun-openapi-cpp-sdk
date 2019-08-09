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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERTEMPLATESRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERTEMPLATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListClusterTemplatesResult : public ServiceResult
			{
			public:
				struct TemplateInfo
				{
					struct BootstrapAction
					{
						std::string path;
						std::string arg;
						std::string name;
					};
					struct HostGroup
					{
						std::string hostGroupType;
						int diskCount;
						int nodeCount;
						std::string sysDiskType;
						std::string period;
						std::string hostGroupName;
						std::string diskType;
						int diskCapacity;
						std::string hostGroupId;
						std::string chargeType;
						std::string multiInstanceTypes;
						std::string instanceType;
						int sysDiskCapacity;
					};
					struct Config
					{
						std::string replace;
						std::string configValue;
						std::string configKey;
						std::string serviceName;
						std::string fileName;
						std::string encrypt;
					};
					std::string securityGroupName;
					std::vector<TemplateInfo::BootstrapAction> bootstrapActionList;
					std::string createSource;
					bool logEnable;
					long gmtModified;
					bool highAvailabilityEnable;
					bool sshEnable;
					bool isOpenPublicIp;
					std::string templateName;
					std::string configurations;
					bool allowNotebook;
					std::string userDefinedEmrEcsRole;
					std::string netType;
					bool initCustomHiveMetaDb;
					std::vector<std::string> softwareInfoList;
					bool useLocalMetaDb;
					std::string keyPairName;
					bool ioOptimized;
					std::string zoneId;
					std::string vSwitchId;
					std::string securityGroupId;
					std::string depositType;
					std::string machineType;
					std::string metaStoreType;
					int masterNodeTotal;
					std::string clusterType;
					bool easEnable;
					long gmtCreate;
					std::string vpcId;
					bool useCustomHiveMetaDb;
					std::string userId;
					std::string metaStoreConf;
					std::vector<TemplateInfo::HostGroup> hostGroupList;
					std::string instanceGeneration;
					std::string id;
					std::string logPath;
					std::vector<TemplateInfo::Config> configList;
				};


				ListClusterTemplatesResult();
				explicit ListClusterTemplatesResult(const std::string &payload);
				~ListClusterTemplatesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<TemplateInfo> getTemplateInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<TemplateInfo> templateInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERTEMPLATESRESULT_H_