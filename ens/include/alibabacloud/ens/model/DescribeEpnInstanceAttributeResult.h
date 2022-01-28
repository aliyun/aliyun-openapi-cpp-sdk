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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeEpnInstanceAttributeResult : public ServiceResult
			{
			public:
				struct ConfVersionsItem
				{
					std::string confVersion;
					std::string ensRegionId;
				};
				struct EPNInstance
				{
					std::string instanceName;
					std::string publicIpAddress;
					std::string status;
					std::string privateIpAddress;
					std::string instanceId;
					std::string isp;
					std::string ensRegionId;
				};
				struct EPNInstance1
				{
					std::string vSwitchId;
					std::string cidrBlock;
					std::string vSwitchName;
					std::string ensRegionId;
				};


				DescribeEpnInstanceAttributeResult();
				explicit DescribeEpnInstanceAttributeResult(const std::string &payload);
				~DescribeEpnInstanceAttributeResult();
				std::vector<EPNInstance> getInstances()const;
				std::string getNetworkingModel()const;
				std::vector<EPNInstance1> getVSwitches()const;
				std::string getEPNInstanceId()const;
				std::vector<ConfVersionsItem> getConfVersions()const;
				std::string getEPNInstanceName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<EPNInstance> instances_;
				std::string networkingModel_;
				std::vector<EPNInstance1> vSwitches_;
				std::string ePNInstanceId_;
				std::vector<ConfVersionsItem> confVersions_;
				std::string ePNInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNINSTANCEATTRIBUTERESULT_H_