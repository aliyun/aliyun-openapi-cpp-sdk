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

#ifndef ALIBABACLOUD_EMR_MODEL_RESIZECLUSTERV2REQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_RESIZECLUSTERV2REQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ResizeClusterV2Request : public RpcServiceRequest
			{
			public:
				struct HostComponentInfo
				{
					std::string hostName;
					std::vector<std::string> componentNameList;
					std::string serviceName;
				};
				struct HostGroup
				{
					int period;
					int sysDiskCapacity;
					std::string hostKeyPairName;
					std::string privatePoolOptionsId;
					int diskCapacity;
					std::string sysDiskType;
					std::string clusterId;
					std::string diskType;
					std::string hostGroupName;
					int vswitchId;
					int diskCount;
					bool autoRenew;
					std::string hostGroupId;
					int nodeCount;
					std::string instanceType;
					std::string comment;
					std::string chargeType;
					std::string createType;
					std::string hostPassword;
					std::string hostGroupType;
					std::string privatePoolOptionsMatchCriteria;
				};
				struct PromotionInfo
				{
					std::string promotionOptionCode;
					std::string productCode;
					std::string promotionOptionNo;
				};

			public:
				ResizeClusterV2Request();
				~ResizeClusterV2Request();

				bool getIsOpenPublicIp()const;
				void setIsOpenPublicIp(bool isOpenPublicIp);
				bool getAutoPayOrder()const;
				void setAutoPayOrder(bool autoPayOrder);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVswitchId()const;
				void setVswitchId(const std::string& vswitchId);
				std::vector<HostComponentInfo> getHostComponentInfo()const;
				void setHostComponentInfo(const std::vector<HostComponentInfo>& hostComponentInfo);
				std::string getClickhouseConf()const;
				void setClickhouseConf(const std::string& clickhouseConf);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<HostGroup> getHostGroup()const;
				void setHostGroup(const std::vector<HostGroup>& hostGroup);
				std::vector<PromotionInfo> getPromotionInfo()const;
				void setPromotionInfo(const std::vector<PromotionInfo>& promotionInfo);

            private:
				bool isOpenPublicIp_;
				bool autoPayOrder_;
				std::string clusterId_;
				std::string accessKeyId_;
				std::string vswitchId_;
				std::vector<HostComponentInfo> hostComponentInfo_;
				std::string clickhouseConf_;
				std::string regionId_;
				std::vector<HostGroup> hostGroup_;
				std::vector<PromotionInfo> promotionInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_RESIZECLUSTERV2REQUEST_H_