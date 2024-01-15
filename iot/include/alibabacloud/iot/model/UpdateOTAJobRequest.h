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

#ifndef ALIBABACLOUD_IOT_MODEL_UPDATEOTAJOBREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_UPDATEOTAJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT UpdateOTAJobRequest : public RpcServiceRequest
			{
			public:
				struct Tags
				{
					std::string value;
					std::string key;
				};

			public:
				UpdateOTAJobRequest();
				~UpdateOTAJobRequest();

				std::string getRealTenantId()const;
				void setRealTenantId(const std::string& realTenantId);
				std::string getIncrementFactor()const;
				void setIncrementFactor(const std::string& incrementFactor);
				int getBaseRatePerMinute()const;
				void setBaseRatePerMinute(int baseRatePerMinute);
				std::string getUpgradeType()const;
				void setUpgradeType(const std::string& upgradeType);
				int getTimeoutInMinutes()const;
				void setTimeoutInMinutes(int timeoutInMinutes);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRealTripartiteKey()const;
				void setRealTripartiteKey(const std::string& realTripartiteKey);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				int getNumberOfSucceedDevices()const;
				void setNumberOfSucceedDevices(int numberOfSucceedDevices);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::vector<std::string> getSrcVersionList()const;
				void setSrcVersionList(const std::vector<std::string>& srcVersionList);
				std::string getTargetSelection()const;
				void setTargetSelection(const std::string& targetSelection);
				std::vector<Tags> getTags()const;
				void setTags(const std::vector<Tags>& tags);
				int getNumberOfNotifiedDevices()const;
				void setNumberOfNotifiedDevices(int numberOfNotifiedDevices);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				int getMaximumPerMinute()const;
				void setMaximumPerMinute(int maximumPerMinute);

            private:
				std::string realTenantId_;
				std::string incrementFactor_;
				int baseRatePerMinute_;
				std::string upgradeType_;
				int timeoutInMinutes_;
				std::string accessKeyId_;
				std::string realTripartiteKey_;
				std::string jobId_;
				int numberOfSucceedDevices_;
				std::string iotInstanceId_;
				std::vector<std::string> srcVersionList_;
				std::string targetSelection_;
				std::vector<Tags> tags_;
				int numberOfNotifiedDevices_;
				std::string apiProduct_;
				std::string apiRevision_;
				int maximumPerMinute_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_UPDATEOTAJOBREQUEST_H_