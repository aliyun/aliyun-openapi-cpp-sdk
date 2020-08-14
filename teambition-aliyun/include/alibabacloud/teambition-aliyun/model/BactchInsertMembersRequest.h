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

#ifndef ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_BACTCHINSERTMEMBERSREQUEST_H_
#define ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_BACTCHINSERTMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/teambition-aliyun/Teambition_aliyunExport.h>

namespace AlibabaCloud
{
	namespace Teambition_aliyun
	{
		namespace Model
		{
			class ALIBABACLOUD_TEAMBITION_ALIYUN_EXPORT BactchInsertMembersRequest : public RpcServiceRequest
			{

			public:
				BactchInsertMembersRequest();
				~BactchInsertMembersRequest();

				std::string getMembers()const;
				void setMembers(const std::string& members);
				std::string getRealPk()const;
				void setRealPk(const std::string& realPk);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);

            private:
				std::string members_;
				std::string realPk_;
				std::string orgId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_BACTCHINSERTMEMBERSREQUEST_H_