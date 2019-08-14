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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSINSTANCECREATEREQUEST_H_
#define ALIBABACLOUD_ONS_MODEL_ONSINSTANCECREATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ons/OnsExport.h>

namespace AlibabaCloud
{
	namespace Ons
	{
		namespace Model
		{
			class ALIBABACLOUD_ONS_EXPORT OnsInstanceCreateRequest : public RpcServiceRequest
			{

			public:
				OnsInstanceCreateRequest();
				~OnsInstanceCreateRequest();

				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getRemark()const;
				void setRemark(const std::string& remark);

            private:
				std::string instanceName_;
				std::string remark_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSINSTANCECREATEREQUEST_H_