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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeCloudCenterInstancesRequest : public RpcServiceRequest
			{

			public:
				DescribeCloudCenterInstancesRequest();
				~DescribeCloudCenterInstancesRequest();

				std::string getCriteria()const;
				void setCriteria(const std::string& criteria);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				bool getNoPage()const;
				void setNoPage(bool noPage);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLogicalExp()const;
				void setLogicalExp(const std::string& logicalExp);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getMachineTypes()const;
				void setMachineTypes(const std::string& machineTypes);

            private:
				std::string criteria_;
				std::string sourceIp_;
				bool noPage_;
				int pageSize_;
				std::string logicalExp_;
				int currentPage_;
				std::string machineTypes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESREQUEST_H_