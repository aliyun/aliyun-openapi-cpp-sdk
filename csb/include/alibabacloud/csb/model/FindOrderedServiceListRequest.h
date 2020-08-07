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

#ifndef ALIBABACLOUD_CSB_MODEL_FINDORDEREDSERVICELISTREQUEST_H_
#define ALIBABACLOUD_CSB_MODEL_FINDORDEREDSERVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/csb/CSBExport.h>

namespace AlibabaCloud
{
	namespace CSB
	{
		namespace Model
		{
			class ALIBABACLOUD_CSB_EXPORT FindOrderedServiceListRequest : public RpcServiceRequest
			{

			public:
				FindOrderedServiceListRequest();
				~FindOrderedServiceListRequest();

				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				bool getShowDelOrder()const;
				void setShowDelOrder(bool showDelOrder);
				long getCsbId()const;
				void setCsbId(long csbId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getCredentialGroupName()const;
				void setCredentialGroupName(const std::string& credentialGroupName);
				std::string getAccessKey()const;
				void setAccessKey(const std::string& accessKey);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				long getServiceId()const;
				void setServiceId(long serviceId);
				long getProjectId()const;
				void setProjectId(long projectId);

            private:
				std::string projectName_;
				bool showDelOrder_;
				long csbId_;
				int pageNum_;
				std::string credentialGroupName_;
				std::string accessKey_;
				int pageSize_;
				std::string serviceName_;
				long serviceId_;
				long projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSB_MODEL_FINDORDEREDSERVICELISTREQUEST_H_