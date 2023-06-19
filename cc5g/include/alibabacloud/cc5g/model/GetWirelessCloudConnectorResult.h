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

#ifndef ALIBABACLOUD_CC5G_MODEL_GETWIRELESSCLOUDCONNECTORRESULT_H_
#define ALIBABACLOUD_CC5G_MODEL_GETWIRELESSCLOUDCONNECTORRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cc5g/CC5GExport.h>

namespace AlibabaCloud
{
	namespace CC5G
	{
		namespace Model
		{
			class ALIBABACLOUD_CC5G_EXPORT GetWirelessCloudConnectorResult : public ServiceResult
			{
			public:
				struct NetLink
				{
					std::string status;
					std::vector<std::string> vSwitchs;
					std::string type;
					std::string description;
					std::string vpcId;
					std::string iSP;
					std::string createTime;
					std::string regionId;
					std::string netLinkId;
					std::string grantAliUid;
					std::string name;
					std::string aPN;
				};


				GetWirelessCloudConnectorResult();
				explicit GetWirelessCloudConnectorResult(const std::string &payload);
				~GetWirelessCloudConnectorResult();
				std::string getStatus()const;
				std::string getDataPackageType()const;
				std::string getDescription()const;
				std::string getCreateTime()const;
				std::string getBusinessType()const;
				std::string getUseCase()const;
				std::string getWirelessCloudConnectorGroupId()const;
				std::string getName()const;
				std::string getWirelessCloudConnectorId()const;
				std::string getCardCount()const;
				std::string getServiceType()const;
				std::vector<std::string> getFeatures()const;
				std::string getDataPackageId()const;
				std::string getRegionId()const;
				std::vector<NetLink> getNetLinks()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string dataPackageType_;
				std::string description_;
				std::string createTime_;
				std::string businessType_;
				std::string useCase_;
				std::string wirelessCloudConnectorGroupId_;
				std::string name_;
				std::string wirelessCloudConnectorId_;
				std::string cardCount_;
				std::string serviceType_;
				std::vector<std::string> features_;
				std::string dataPackageId_;
				std::string regionId_;
				std::vector<NetLink> netLinks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CC5G_MODEL_GETWIRELESSCLOUDCONNECTORRESULT_H_