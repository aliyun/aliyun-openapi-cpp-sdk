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

#ifndef ALIBABACLOUD_EDAS_MODEL_DEPLOYAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_DEPLOYAPPLICATIONREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT DeployApplicationRequest : public RoaServiceRequest
			{

			public:
				DeployApplicationRequest();
				~DeployApplicationRequest();

				long getBuildPackId()const;
				void setBuildPackId(long buildPackId);
				std::string getComponentIds()const;
				void setComponentIds(const std::string& componentIds);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				int getBatchWaitTime()const;
				void setBatchWaitTime(int batchWaitTime);
				long getReleaseType()const;
				void setReleaseType(long releaseType);
				int getBatch()const;
				void setBatch(int batch);
				std::string getAppEnv()const;
				void setAppEnv(const std::string& appEnv);
				std::string getPackageVersion()const;
				void setPackageVersion(const std::string& packageVersion);
				bool getGray()const;
				void setGray(bool gray);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getImageUrl()const;
				void setImageUrl(const std::string& imageUrl);
				std::string getWarUrl()const;
				void setWarUrl(const std::string& warUrl);
				std::string getTrafficControlStrategy()const;
				void setTrafficControlStrategy(const std::string& trafficControlStrategy);
				std::string getDesc()const;
				void setDesc(const std::string& desc);
				std::string getDeployType()const;
				void setDeployType(const std::string& deployType);

            private:
				long buildPackId_;
				std::string componentIds_;
				std::string groupId_;
				int batchWaitTime_;
				long releaseType_;
				int batch_;
				std::string appEnv_;
				std::string packageVersion_;
				bool gray_;
				std::string appId_;
				std::string imageUrl_;
				std::string warUrl_;
				std::string trafficControlStrategy_;
				std::string desc_;
				std::string deployType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_DEPLOYAPPLICATIONREQUEST_H_