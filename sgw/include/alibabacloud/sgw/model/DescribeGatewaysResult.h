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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYSRESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DescribeGatewaysResult : public ServiceResult
			{
			public:
				struct Gateway
				{
					std::string description;
					std::string category;
					long createdTime;
					std::string taskId;
					int publicNetworkBandwidth;
					std::string dataLoadType;
					std::string ip;
					int expireStatus;
					std::string storageBundleId;
					std::string gatewayType;
					std::string gatewayClass;
					std::string name;
					bool isPostPaid;
					int capacity;
					long expiredTime;
					std::string gatewayVersion;
					bool isReleaseAfterExpiration;
					std::string status;
					std::string buyURL;
					int maxThroughput;
					int dataLoadInterval;
					std::string innerIp;
					std::string vSwitchId;
					std::vector<std::string> elasticNodes;
					std::string gatewayId;
					std::string ecsInstanceId;
					std::string type;
					std::string renewURL;
					std::string serialNumber;
					std::string vpcId;
					long activatedTime;
					bool elasticGateway;
					std::string commonBuyInstanceId;
					std::string model;
					std::string innerIpv6Ip;
					std::string lastErrorKey;
					std::string location;
				};


				DescribeGatewaysResult();
				explicit DescribeGatewaysResult(const std::string &payload);
				~DescribeGatewaysResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Gateway> getGateways()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<Gateway> gateways_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYSRESULT_H_