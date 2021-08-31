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

#ifndef ALIBABACLOUD_EDAS_MODEL_INSERTAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_INSERTAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT InsertApplicationRequest : public RoaServiceRequest
			{

			public:
				InsertApplicationRequest();
				~InsertApplicationRequest();

				std::string getWebContainer()const;
				void setWebContainer(const std::string& webContainer);
				std::string getEcuInfo()const;
				void setEcuInfo(const std::string& ecuInfo);
				int getMinHeapSize()const;
				void setMinHeapSize(int minHeapSize);
				int getBuildPackId()const;
				void setBuildPackId(int buildPackId);
				std::string getComponentIds()const;
				void setComponentIds(const std::string& componentIds);
				std::string getHealthCheckUrl()const;
				void setHealthCheckUrl(const std::string& healthCheckUrl);
				std::string getReservedPortStr()const;
				void setReservedPortStr(const std::string& reservedPortStr);
				std::string getJvmOptions()const;
				void setJvmOptions(const std::string& jvmOptions);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getCpu()const;
				void setCpu(int cpu);
				int getMaxPermSize()const;
				void setMaxPermSize(int maxPermSize);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getMaxHeapSize()const;
				void setMaxHeapSize(int maxHeapSize);
				bool getEnablePortCheck()const;
				void setEnablePortCheck(bool enablePortCheck);
				std::string getApplicationName()const;
				void setApplicationName(const std::string& applicationName);
				std::string getJdk()const;
				void setJdk(const std::string& jdk);
				int getMem()const;
				void setMem(int mem);
				std::string getLogicalRegionId()const;
				void setLogicalRegionId(const std::string& logicalRegionId);
				bool getEnableUrlCheck()const;
				void setEnableUrlCheck(bool enableUrlCheck);
				std::string getPackageType()const;
				void setPackageType(const std::string& packageType);
				std::string getHooks()const;
				void setHooks(const std::string& hooks);

            private:
				std::string webContainer_;
				std::string ecuInfo_;
				int minHeapSize_;
				int buildPackId_;
				std::string componentIds_;
				std::string healthCheckUrl_;
				std::string reservedPortStr_;
				std::string jvmOptions_;
				std::string description_;
				int cpu_;
				int maxPermSize_;
				std::string clusterId_;
				int maxHeapSize_;
				bool enablePortCheck_;
				std::string applicationName_;
				std::string jdk_;
				int mem_;
				std::string logicalRegionId_;
				bool enableUrlCheck_;
				std::string packageType_;
				std::string hooks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_INSERTAPPLICATIONREQUEST_H_