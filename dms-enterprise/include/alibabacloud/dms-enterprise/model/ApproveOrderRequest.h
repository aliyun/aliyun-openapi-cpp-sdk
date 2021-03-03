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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_APPROVEORDERREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_APPROVEORDERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ApproveOrderRequest : public RpcServiceRequest
			{

			public:
				ApproveOrderRequest();
				~ApproveOrderRequest();

				long getTid()const;
				void setTid(long tid);
				long getWorkflowInstanceId()const;
				void setWorkflowInstanceId(long workflowInstanceId);
				std::string getApprovalType()const;
				void setApprovalType(const std::string& approvalType);
				std::string getComment()const;
				void setComment(const std::string& comment);

            private:
				long tid_;
				long workflowInstanceId_;
				std::string approvalType_;
				std::string comment_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_APPROVEORDERREQUEST_H_