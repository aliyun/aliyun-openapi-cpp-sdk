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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYRESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYRESULT_H_

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
			class ALIBABACLOUD_SGW_EXPORT DescribeGatewayResult : public ServiceResult
			{
			public:


				DescribeGatewayResult();
				explicit DescribeGatewayResult(const std::string &payload);
				~DescribeGatewayResult();
				std::string getDescription()const;
				std::string getCategory()const;
				long getCreatedTime()const;
				std::string getTaskId()const;
				int getPublicNetworkBandwidth()const;
				std::string getDataLoadType()const;
				std::string getMessage()const;
				std::string getIp()const;
				int getExpireStatus()const;
				std::string getStorageBundleId()const;
				std::string getGatewayType()const;
				std::string getGatewayClass()const;
				bool getSuccess()const;
				std::string getName()const;
				bool getIsPostPaid()const;
				int getCapacity()const;
				long getExpiredTime()const;
				std::string getGatewayVersion()const;
				bool getIsReleaseAfterExpiration()const;
				std::string getStatus()const;
				std::string getBuyURL()const;
				int getMaxThroughput()const;
				int getDataLoadInterval()const;
				std::string getInnerIp()const;
				std::string getVSwitchId()const;
				std::vector<std::string> getElasticNodes()const;
				std::string getGatewayId()const;
				std::string getCode()const;
				std::string getEcsInstanceId()const;
				std::string getType()const;
				std::string getRenewURL()const;
				std::string getSerialNumber()const;
				std::string getVpcId()const;
				long getActivatedTime()const;
				bool getElasticGateway()const;
				std::string getCommonBuyInstanceId()const;
				std::string getModel()const;
				std::string getInnerIpv6Ip()const;
				std::string getLastErrorKey()const;
				std::string getLocation()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string category_;
				long createdTime_;
				std::string taskId_;
				int publicNetworkBandwidth_;
				std::string dataLoadType_;
				std::string message_;
				std::string ip_;
				int expireStatus_;
				std::string storageBundleId_;
				std::string gatewayType_;
				std::string gatewayClass_;
				bool success_;
				std::string name_;
				bool isPostPaid_;
				int capacity_;
				long expiredTime_;
				std::string gatewayVersion_;
				bool isReleaseAfterExpiration_;
				std::string status_;
				std::string buyURL_;
				int maxThroughput_;
				int dataLoadInterval_;
				std::string innerIp_;
				std::string vSwitchId_;
				std::vector<std::string> elasticNodes_;
				std::string gatewayId_;
				std::string code_;
				std::string ecsInstanceId_;
				std::string type_;
				std::string renewURL_;
				std::string serialNumber_;
				std::string vpcId_;
				long activatedTime_;
				bool elasticGateway_;
				std::string commonBuyInstanceId_;
				std::string model_;
				std::string innerIpv6Ip_;
				std::string lastErrorKey_;
				std::string location_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYRESULT_H_