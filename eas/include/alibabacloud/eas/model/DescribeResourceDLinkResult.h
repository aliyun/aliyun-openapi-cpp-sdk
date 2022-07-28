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

#ifndef ALIBABACLOUD_EAS_MODEL_DESCRIBERESOURCEDLINKRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_DESCRIBERESOURCEDLINKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT DescribeResourceDLinkResult : public ServiceResult
			{
			public:


				DescribeResourceDLinkResult();
				explicit DescribeResourceDLinkResult(const std::string &payload);
				~DescribeResourceDLinkResult();
				std::vector<std::string> getAuxVSwitchList()const;
				std::string getVpcId()const;
				std::string getVSwitchId()const;
				std::string getSecurityGroupId()const;
				std::string getDestinationCIDRs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> auxVSwitchList_;
				std::string vpcId_;
				std::string vSwitchId_;
				std::string securityGroupId_;
				std::string destinationCIDRs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBERESOURCEDLINKRESULT_H_