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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSmartAccessGatewayAttributeResult : public ServiceResult
			{
			public:
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
				struct Device
				{
					std::string monitorVersion;
					long softwareVersion;
					std::string serialNumber;
					std::string haState;
					std::string hcState;
				};


				DescribeSmartAccessGatewayAttributeResult();
				explicit DescribeSmartAccessGatewayAttributeResult(const std::string &payload);
				~DescribeSmartAccessGatewayAttributeResult();
				std::string getStatus()const;
				std::string getDescription()const;
				long getEndTime()const;
				int getUserCount()const;
				std::string getMaxBandwidth()const;
				std::string getAssociatedCcnName()const;
				long getCreateTime()const;
				long getDataPlan()const;
				std::string getCidrBlock()const;
				std::string getCity()const;
				std::vector<Device> getDevices()const;
				std::string getName()const;
				std::string getSerialNumber()const;
				std::string getRoutingStrategy()const;
				std::vector<Link> getLinks()const;
				std::string getAssociatedCcnId()const;
				std::string getSmartAGId()const;
				std::string getInstanceType()const;
				int getSecurityLockThreshold()const;
				std::string getAclIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string description_;
				long endTime_;
				int userCount_;
				std::string maxBandwidth_;
				std::string associatedCcnName_;
				long createTime_;
				long dataPlan_;
				std::string cidrBlock_;
				std::string city_;
				std::vector<Device> devices_;
				std::string name_;
				std::string serialNumber_;
				std::string routingStrategy_;
				std::vector<Link> links_;
				std::string associatedCcnId_;
				std::string smartAGId_;
				std::string instanceType_;
				int securityLockThreshold_;
				std::string aclIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESULT_H_