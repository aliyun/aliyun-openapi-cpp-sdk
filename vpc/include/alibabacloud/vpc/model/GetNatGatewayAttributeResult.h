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

#ifndef ALIBABACLOUD_VPC_MODEL_GETNATGATEWAYATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_GETNATGATEWAYATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT GetNatGatewayAttributeResult : public ServiceResult
			{
			public:
				struct ForwardTable
				{
					int forwardEntryCount;
					std::string forwardTableId;
				};
				struct SnatTable
				{
					int snatEntryCount;
					std::string snatTableId;
				};
				struct FullNatTable
				{
					long fullNatEntryCount;
					std::string fullNatTableId;
				};
				struct BillingConfig
				{
					std::string instanceChargeType;
					std::string autoPay;
					std::string spec;
					std::string internetChargeType;
				};
				struct PrivateInfo
				{
					std::string izNo;
					std::string privateIpAddress;
					int maxBandwidth;
					std::string eniInstanceId;
					std::string vswitchId;
				};
				struct DeletionProtectionInfo
				{
					bool enabled;
				};
				struct IpListItem
				{
					std::string usingStatus;
					std::string allocationId;
					std::string ipAddress;
				};


				GetNatGatewayAttributeResult();
				explicit GetNatGatewayAttributeResult(const std::string &payload);
				~GetNatGatewayAttributeResult();
				std::string getStatus()const;
				ForwardTable getForwardTable()const;
				std::string getDescription()const;
				std::string getResourceGroupId()const;
				std::vector<IpListItem> getIpList()const;
				bool getPrivateLinkEnabled()const;
				std::string getPrivateLinkMode()const;
				BillingConfig getBillingConfig()const;
				DeletionProtectionInfo getDeletionProtectionInfo()const;
				SnatTable getSnatTable()const;
				std::string getNatType()const;
				std::string getBusinessStatus()const;
				std::string getName()const;
				bool getEcsMetricEnabled()const;
				std::string getVpcId()const;
				std::string getNetworkType()const;
				FullNatTable getFullNatTable()const;
				std::string getExpiredTime()const;
				PrivateInfo getPrivateInfo()const;
				std::string getCreationTime()const;
				std::string getRegionId()const;
				std::string getNatGatewayId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				ForwardTable forwardTable_;
				std::string description_;
				std::string resourceGroupId_;
				std::vector<IpListItem> ipList_;
				bool privateLinkEnabled_;
				std::string privateLinkMode_;
				BillingConfig billingConfig_;
				DeletionProtectionInfo deletionProtectionInfo_;
				SnatTable snatTable_;
				std::string natType_;
				std::string businessStatus_;
				std::string name_;
				bool ecsMetricEnabled_;
				std::string vpcId_;
				std::string networkType_;
				FullNatTable fullNatTable_;
				std::string expiredTime_;
				PrivateInfo privateInfo_;
				std::string creationTime_;
				std::string regionId_;
				std::string natGatewayId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_GETNATGATEWAYATTRIBUTERESULT_H_