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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSmartAccessGatewaysResult : public ServiceResult
			{
			public:
				struct SmartAccessGateway
				{
					struct Link
					{
						std::string status;
						std::string type;
						long endTime;
						std::string instanceId;
						std::string relateInstanceId;
						std::string bandwidth;
						std::string relateInstanceRegionId;
						std::string commodityType;
					};
					std::string description;
					int upBandwidth4G;
					long endTime;
					int userCount;
					std::string maxBandwidth;
					std::string associatedCcnName;
					std::string cidrBlock;
					int upBandwidthWan;
					std::string qosIds;
					std::string name;
					std::string routingStrategy;
					std::string associatedCcnId;
					std::string backupSoftwareVersion;
					std::string smartAGId;
					int securityLockThreshold;
					std::string status;
					long createTime;
					long dataPlan;
					std::string city;
					std::string hardwareVersion;
					long smartAGUid;
					std::string softwareVersion;
					std::string serialNumber;
					std::vector<SmartAccessGateway::Link> links;
					std::string aclIds;
				};


				DescribeSmartAccessGatewaysResult();
				explicit DescribeSmartAccessGatewaysResult(const std::string &payload);
				~DescribeSmartAccessGatewaysResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<SmartAccessGateway> getSmartAccessGateways()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<SmartAccessGateway> smartAccessGateways_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYSRESULT_H_