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

#ifndef ALIBABACLOUD_CR_MODEL_DELETENAMESPACEAUTHORIZATIONREQUEST_H_
#define ALIBABACLOUD_CR_MODEL_DELETENAMESPACEAUTHORIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cr/CrExport.h>

namespace AlibabaCloud
{
	namespace Cr
	{
		namespace Model
		{
			class ALIBABACLOUD_CR_EXPORT DeleteNamespaceAuthorizationRequest : public RoaServiceRequest
			{

			public:
				DeleteNamespaceAuthorizationRequest();
				~DeleteNamespaceAuthorizationRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				long getAuthorizeId()const;
				void setAuthorizeId(long authorizeId);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);

            private:
				std::string regionId_;
				long authorizeId_;
				std::string _namespace_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CR_MODEL_DELETENAMESPACEAUTHORIZATIONREQUEST_H_