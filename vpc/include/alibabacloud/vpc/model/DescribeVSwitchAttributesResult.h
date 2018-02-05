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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVSwitchAttributesResult : public ServiceResult
			{
			public:
				struct CloudResourceSetType
				{
					int resourceCount;
					std::string resourceType;
				};


				DescribeVSwitchAttributesResult();
				explicit DescribeVSwitchAttributesResult(const std::string &payload);
				~DescribeVSwitchAttributesResult();
				std::string getStatus()const;
				bool getIsDefault()const;
				std::string getDescription()const;
				std::string getVpcId()const;
				std::string getZoneId()const;
				std::string getVSwitchId()const;
				long getAvailableIpAddressCount()const;
				std::string getCreationTime()const;
				std::string getCidrBlock()const;
				std::string getVSwitchName()const;
				std::vector<CloudResourceSetType> getCloudResources()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				bool isDefault_;
				std::string description_;
				std::string vpcId_;
				std::string zoneId_;
				std::string vSwitchId_;
				long availableIpAddressCount_;
				std::string creationTime_;
				std::string cidrBlock_;
				std::string vSwitchName_;
				std::vector<CloudResourceSetType> cloudResources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_