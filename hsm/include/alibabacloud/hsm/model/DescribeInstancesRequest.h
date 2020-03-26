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

#ifndef ALIBABACLOUD_HSM_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_HSM_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hsm/HsmExport.h>

namespace AlibabaCloud
{
	namespace Hsm
	{
		namespace Model
		{
			class ALIBABACLOUD_HSM_EXPORT DescribeInstancesRequest : public RpcServiceRequest
			{

			public:
				DescribeInstancesRequest();
				~DescribeInstancesRequest();

				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getHsmStatus()const;
				void setHsmStatus(int hsmStatus);

            private:
				std::string resourceGroupId_;
				std::string sourceIp_;
				std::string regionId_;
				int pageSize_;
				std::string lang_;
				int currentPage_;
				std::string instanceId_;
				int hsmStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HSM_MODEL_DESCRIBEINSTANCESREQUEST_H_