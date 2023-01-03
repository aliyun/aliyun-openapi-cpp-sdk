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

#ifndef ALIBABACLOUD_EFLO_MODEL_GETVCCRESULT_H_
#define ALIBABACLOUD_EFLO_MODEL_GETVCCRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eflo/EfloExport.h>

namespace AlibabaCloud
{
	namespace Eflo
	{
		namespace Model
		{
			class ALIBABACLOUD_EFLO_EXPORT GetVccResult : public ServiceResult
			{
			public:
				struct Content
				{
					struct VpdBaseInfo
					{
						std::string gmtCreate;
						std::string cidr;
						std::string vpdId;
						std::string name;
					};
					struct AliyunRouterInfoItem
					{
						std::string localGatewayIp;
						std::string peerGatewayIp;
						std::string mask;
						std::string pcId;
						std::string vbrId;
						std::string vlanId;
					};
					struct CisRouterInfoItem
					{
						struct CcInfo
						{
							std::string status;
							std::string localGatewayIp;
							std::string remoteGatewayIp;
							std::string ccId;
							std::string vlanId;
							std::string subnetMask;
						};
						std::string ccrId;
						std::vector<CisRouterInfoItem::CcInfo> ccInfos;
					};
					std::string message;
					std::string lineOperator;
					std::string pricingCycle;
					std::string currentNode;
					std::string gmtModified;
					std::string bgpCidr;
					std::string commodityCode;
					std::string vccId;
					std::string status;
					VpdBaseInfo vpdBaseInfo;
					std::string vSwitchId;
					std::string createTime;
					std::string duration;
					std::string payType;
					std::vector<AliyunRouterInfoItem> aliyunRouterInfo;
					std::string internetChargeType;
					std::string bandwidthStr;
					std::vector<CisRouterInfoItem> cisRouterInfo;
					std::string tenantId;
					std::string vpcId;
					std::string vpdId;
					std::string cenId;
					std::string accessPointId;
					std::string regionId;
					std::string spec;
					std::string vccName;
					std::string portType;
				};


				GetVccResult();
				explicit GetVccResult(const std::string &payload);
				~GetVccResult();
				std::string getMessage()const;
				Content getContent()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Content content_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_MODEL_GETVCCRESULT_H_