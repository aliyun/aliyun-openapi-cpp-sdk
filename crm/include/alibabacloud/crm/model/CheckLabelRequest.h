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

#ifndef ALIBABACLOUD_CRM_MODEL_CHECKLABELREQUEST_H_
#define ALIBABACLOUD_CRM_MODEL_CHECKLABELREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/crm/CrmExport.h>

namespace AlibabaCloud
{
	namespace Crm
	{
		namespace Model
		{
			class ALIBABACLOUD_CRM_EXPORT CheckLabelRequest : public RpcServiceRequest
			{

			public:
				CheckLabelRequest();
				~CheckLabelRequest();

				std::string getLabelSeries()const;
				void setLabelSeries(const std::string& labelSeries);
				std::string getPK()const;
				void setPK(const std::string& pK);
				std::string getLabelName()const;
				void setLabelName(const std::string& labelName);

            private:
				std::string labelSeries_;
				std::string pK_;
				std::string labelName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CRM_MODEL_CHECKLABELREQUEST_H_