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

#ifndef ALIBABACLOUD_WORKORDER_MODEL_CREATETICKETREQUEST_H_
#define ALIBABACLOUD_WORKORDER_MODEL_CREATETICKETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/workorder/WorkorderExport.h>

namespace AlibabaCloud
{
	namespace Workorder
	{
		namespace Model
		{
			class ALIBABACLOUD_WORKORDER_EXPORT CreateTicketRequest : public RpcServiceRequest
			{

			public:
				CreateTicketRequest();
				~CreateTicketRequest();

				int getSeverity()const;
				void setSeverity(int severity);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getCategoryId()const;
				void setCategoryId(const std::string& categoryId);

            private:
				int severity_;
				std::string description_;
				std::string categoryId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_WORKORDER_MODEL_CREATETICKETREQUEST_H_