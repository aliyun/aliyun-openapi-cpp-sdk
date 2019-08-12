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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTHPHOSTRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTHPHOSTRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListHpHostResult : public ServiceResult
			{
			public:
				struct HpHost
				{
					struct Disk
					{
						std::string mountPath;
						std::string diskDevice;
						int diskSize;
					};
					std::string status;
					std::string description;
					std::string innerIp;
					std::string securityGroupId;
					std::vector<std::string> installedComponents;
					std::string vswitchId;
					std::string role;
					std::string externalIp;
					std::string vpcId;
					int cpuCore;
					int memSize;
					std::vector<HpHost::Disk> diskList;
					std::string externalKey;
					std::string bizId;
					std::string hostName;
				};


				ListHpHostResult();
				explicit ListHpHostResult(const std::string &payload);
				~ListHpHostResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<HpHost> getHpHostList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<HpHost> hpHostList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTHPHOSTRESULT_H_