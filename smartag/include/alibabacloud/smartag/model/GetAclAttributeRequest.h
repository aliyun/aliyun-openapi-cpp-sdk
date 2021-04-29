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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_GETACLATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_GETACLATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT GetAclAttributeRequest : public RpcServiceRequest
			{

			public:
				GetAclAttributeRequest();
				~GetAclAttributeRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAclId()const;
				void setAclId(const std::string& aclId);

            private:
				std::string regionId_;
				std::string aclId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_GETACLATTRIBUTEREQUEST_H_