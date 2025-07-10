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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEPHYSICALCONNECTIONLOARESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEPHYSICALCONNECTIONLOARESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribePhysicalConnectionLOAResult : public ServiceResult
			{
			public:
				struct PhysicalConnectionLOAType
				{
					struct PMInfoItem
					{
						std::string pMCertificateNo;
						std::string pMCertificateType;
						std::string pMContactInfo;
						std::string pMGender;
						std::string pMName;
					};
					std::string status;
					std::string lineSPContactInfo;
					std::string instanceId;
					std::string companyLocalizedName;
					std::vector<PMInfoItem> pMInfo;
					std::string loaUrl;
					std::string lineCode;
					std::string lineLabel;
					std::string companyName;
					std::string constructionTime;
					std::string lineServiceProvider;
					std::string sI;
					std::string lineType;
				};


				DescribePhysicalConnectionLOAResult();
				explicit DescribePhysicalConnectionLOAResult(const std::string &payload);
				~DescribePhysicalConnectionLOAResult();
				PhysicalConnectionLOAType getPhysicalConnectionLOAType()const;

			protected:
				void parse(const std::string &payload);
			private:
				PhysicalConnectionLOAType physicalConnectionLOAType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEPHYSICALCONNECTIONLOARESULT_H_