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

#ifndef ALIBABACLOUD_EIPANYCAST_MODEL_DESCRIBEANYCASTEIPADDRESSRESULT_H_
#define ALIBABACLOUD_EIPANYCAST_MODEL_DESCRIBEANYCASTEIPADDRESSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eipanycast/EipanycastExport.h>

namespace AlibabaCloud
{
	namespace Eipanycast
	{
		namespace Model
		{
			class ALIBABACLOUD_EIPANYCAST_EXPORT DescribeAnycastEipAddressResult : public ServiceResult
			{
			public:
				struct AnycastEipBindInfo
				{
					struct PopLocation
					{
						std::string popLocation;
					};
					std::string status;
					std::string bindInstanceId;
					std::string bindTime;
					std::string privateIpAddress;
					std::string bindInstanceType;
					std::string bindInstanceRegionId;
					std::vector<AnycastEipBindInfo::PopLocation> popLocations;
					std::string associationMode;
				};


				DescribeAnycastEipAddressResult();
				explicit DescribeAnycastEipAddressResult(const std::string &payload);
				~DescribeAnycastEipAddressResult();
				std::string getStatus()const;
				std::string getDescription()const;
				std::string getInstanceChargeType()const;
				std::string getCreateTime()const;
				std::vector<AnycastEipBindInfo> getAnycastEipBindInfoList()const;
				std::string getBusinessStatus()const;
				std::string getInternetChargeType()const;
				std::string getName()const;
				std::string getAnycastId()const;
				std::string getServiceLocation()const;
				int getBandwidth()const;
				std::string getIpAddress()const;
				std::string getBid()const;
				long getAliUid()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string description_;
				std::string instanceChargeType_;
				std::string createTime_;
				std::vector<AnycastEipBindInfo> anycastEipBindInfoList_;
				std::string businessStatus_;
				std::string internetChargeType_;
				std::string name_;
				std::string anycastId_;
				std::string serviceLocation_;
				int bandwidth_;
				std::string ipAddress_;
				std::string bid_;
				long aliUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIPANYCAST_MODEL_DESCRIBEANYCASTEIPADDRESSRESULT_H_